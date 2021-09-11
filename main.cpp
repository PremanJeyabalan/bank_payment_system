#include "account.h"
#include "person.h"
#include "vector"
#include "currency.h"

using namespace std;

int main(){
    Account account_1 = Account();
    account_1.add_currency(USD(20));
    account_1.add_currency(USD(30));

    account_1.print_currency();

    Account account_2 = Account();
    account_2.add_currency(USD(20));

    account_2.print_currency();

    account_1.transfer_currency(account_2, USD(40));
    account_1.print_currency();
    account_2.print_currency();

    return 0;
};
