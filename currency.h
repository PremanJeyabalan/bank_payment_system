#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include "util.h"

class Currency {
    public: 
        virtual int& get_value() = 0 ; 
};

class USD : public Currency {
    private:
        int value;
    public:
        USD(int i):value(i){std::cout<<"conversion Ctor USD"<< std::endl;}
        int& get_value() final override{
            return value;
        }
};


class HKD: public Currency { 
    private: 
        int value;
    public:
        HKD(int i) : value(i) {std::cout<<"conversion Ctor HKD"<< std::endl;} 
        int& get_value() override final {
            return value;
        };
};

#endif