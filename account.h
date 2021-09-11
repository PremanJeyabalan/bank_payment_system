#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
#include <vector>
#include "currency.h"


class Account{
    public:
        Account();
        ~Account();
        void print_currency();
        template <typename T> void add_currency(const T& currency_object);
        template <typename T> void transfer_currency(Account &acc, const T& amount);

    private:
        //base class pointer can point to derived class (hkd and usd)
        std::vector<Currency*> currencies; //pointer to array of currency objects
};

template <typename T> 
void Account::add_currency(const T& currency_object){ 
    for (std::vector<Currency*>::iterator itr = currencies.begin(); itr != currencies.end(); ++itr){
        // std::cout << "iterator currency type: " << (*itr)->name()<< std::endl;
        // std::cout << "add currency type: " << typeid(*name).name() << std::endl;
        if (!(*itr)->name().compare(typeid(currency_object).name())){
            (*itr)->change_value((*itr)->get_value() + currency_object.get_value());
            return;
        } 
    } 
    Currency* cur_new = new T(currency_object);
    currencies.push_back(cur_new);
}

template <typename T>
void Account::transfer_currency(Account &acc, const T& amount){ //pass the account to transefer to, and unnamed currency object
    for (std::vector<Currency*>::iterator itr = currencies.begin(); itr != currencies.end(); ++itr){ 
        if (!(*itr)->name().compare(typeid(T).name())){ // loop through owners currencies and check if it exists
            Currency* curr = *itr;
            if (curr->get_value() >= amount.get_value_const()){ // if it does, check if it is enough and decrease value
                curr->get_value() -= amount.get_value_const();
            } else {
                std::cout << "Other currencies required" << std::endl; // TODO: logic to fit other currency types
            }
        }
    }
};

#endif