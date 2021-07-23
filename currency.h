#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>

class Currency {
    public: 
        virtual int& get_value() =0 ; 
};

class USD : Currency {
    private:
        int value;
    public:
        int& get_value() final override;
};


class HKD: public Currency { 
    private: 
        int value;
    public: 
        int& get_value() override final;
};

#endif