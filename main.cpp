#include "account.h"
#include "person.h"
#include "vector"
#include "currency.h"

using namespace std;

int main(){
    Account gay = Account();

    // USD* usd_10 = new USD(10);
    // gay.currencies.push_back(usd_10);

    USD* usd_20 = new USD(20);
    gay.add_currency(usd_20);
    USD* usd_30 = new USD(30);
    gay.add_currency(usd_30);

    HKD* hkd_10 = new HKD(10);
    gay.add_currency(hkd_10);
    
    gay.print_currency();

    return 0;
};
