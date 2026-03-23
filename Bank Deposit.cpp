#include <iostream>
using namespace std;

struct account
{
    int num;
    int bal;
};

void deposit(account& account_ref, int amount)
{
    account_ref.bal = account_ref.bal + amount;
    cout << "Balance inside function (reference): " << account_ref.bal << endl;
}

int main()
{
    account main;
    int amount;

    cin >> main.num;
    cin >> main.bal;
    cin >> amount;

    cout << "Balance before the call (main): " << main.bal << endl;
    deposit(main, amount);

    cout << "Balance after the call (main: << maiin.bal << endl";
}

