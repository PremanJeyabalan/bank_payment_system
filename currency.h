#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>

class Currency {
    private:
        int value;
    public:
        Currency(int value) : value(value) {}; 
        const int get_value_const() {return value;} ;
        int& get_value() {return value; } ; 
        void change_value(int val) {value = val ; }
        virtual std::string name() const { return typeid(*this).name(); }
};

class USD : public Currency {
    private:
    public:
        USD(int val) : Currency(val) {
            // std::cout<<"conversion Ctor USD"<< std::endl;
        }
};


class HKD: public Currency { 
    private: 
    public:
        HKD(int val) : Currency(val) {
            // std::cout<<"conversion Ctor HKD"<< std::endl;
        }
};

#endif