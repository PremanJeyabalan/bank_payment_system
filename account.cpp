#include "account.h"
#include "currency.h"
#include <vector>
#include <string> 

Account::Account(){
    std::vector<Currency*> currencies;
};

template<typename T> 
T Account::add_currency(int value, T type){
    std::vector<Currency*>::iterator itr;   
    for (itr = currencies.begin(); itr != currencies.end(); ++itr){
        std::cout << typeid(*itr).name() << std::endl;
    }
        
}


template<typename T> 
T Account::print_currency(int value, T type){
       
    for (std::vector<Currency*>::iterator itr = currencies.begin(); itr != currencies.end(); ++itr){
        std::cout<< *itr <<std::endl;
    }
        
}
