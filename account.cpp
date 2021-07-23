#include "account.h"
#include <string> 

Account::Account(){
    std::vector<Currency*> currencies;
};

template<typename T> 
T add_currency(int value, T type){
    std::vector<Currency*> iterator;   
    for (iterator = currencies.begin(); iterator != currencies.end(); ++iterator){
        if (!strcmp(typeid(iterator), typeid(USD)) && !strcmp(typeid(iterator), typeid(type))  ){
            *iterator += value; 
        }
        else if (!strcmp(typeid(iterator), typeid(HKD)) && !strcmp(typeid(iterator), typeid(type))  ){
            *iterator += value; 
        }
        else{
            currencies.pushback(T(value));
        }
    }
     
}

