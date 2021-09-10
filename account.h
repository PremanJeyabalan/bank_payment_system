#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
#include <vector>
#include "currency.h"


class Account{
    public:
        Account();
        template<typename T> void add_currency( T *name){
            
            for (std::vector<Currency*>::iterator itr = currencies.begin(); itr != currencies.end(); ++itr){
                // std::cout << "iterator currency type: " << (*itr)->name()<< std::endl;
                // std::cout << "add currency type: " << typeid(*name).name() << std::endl;
                if (!(*itr)->name().compare(typeid(*name).name())){
                    (*itr)->change_value((*itr)->get_value() + name->get_value());
                    return;
                } 
            } 
            std::cout<<"pushback"<< std::endl;
            currencies.push_back(name);
        }
        void print_currency();


    private:
        //base class pointer can point to derived class (hkd and usd)
        std::vector<Currency*> currencies; //pointer to array of currency objects
};

#endif