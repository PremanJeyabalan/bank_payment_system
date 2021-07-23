#include "person.h"
#include <iostream> 

Person::Person(): name(NULL){};

Person::Person(std::string name, Account acc): name(name), acc(acc) {};

std::string& Person::get_name(){
    return name;
};

Account& Person::get_account(){
    return acc;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os<< "Name is : " << person.name << std::endl;
    //put account when it is done
    
    return os;
}