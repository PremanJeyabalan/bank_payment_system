#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
#include <vector>
#include "currency.h"
#include "util.h"

class Account{
    public:
        Account();
        template<typename T> T add_currency(int value, T type);
        template<typename T> T print_currency(int value, T type);

        std::vector<Currency*> currencies; //pointer to array of currency objects


    private:
        //base class pointer can point to derived class (hkd and usd)
        
};

#endif