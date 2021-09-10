#include "account.h"
#include "person.h"
#include "vector"
#include "currency.h"

using namespace std;

int main(){
    cout << "Cocks" << endl;

    Account gay = Account();

    USD* usd_10 = new USD(10);
    gay.currencies.push_back(usd_10);
    gay.print_currency();
    return 0;
};