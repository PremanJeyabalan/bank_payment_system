#include "account.h"
#include "currency.h"
#include <vector>
#include <string> 

Account::Account(){
    std::vector<Currency*> currencies;
};



void Account::print_currency(){
       
    for (std::vector<Currency*>::iterator itr = currencies.begin(); itr != currencies.end(); ++itr){
        std::cout<< "currency: " << (*itr)->name() << 
                    "\tamount : "<< (*itr)->get_value() <<std::endl; //directly call name
    }
        
}
