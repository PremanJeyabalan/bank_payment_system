#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream> 
#include "currency.h"
#include "account.h"

class Person{
    public:
    Person();
    Person(std::string name, Account acc);
    Person(const Person &other);//copy constructor
    Person &operator=(const Person &other){
        Person(other.name, other.acc);
    }; //operator = 
    ~Person();
    friend std::ostream& operator<< (std::ostream& os, const Person& Person);


    std::string& get_name(); 
    virtual Account& get_account();


    private:
    std::string name;
    Account acc; //pointer to array of accounts
};


#endif
