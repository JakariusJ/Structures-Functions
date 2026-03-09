#include <iostream>
using namespace std;

struct employee_record
{
    int id;
    int sal;
};

void increase(employee_record employee_copy, int bonus);

int main()
{
    employee_record main;
    int bonus;

    cin >> main.id;
    cin >> main.sal;
    cin >> bonus;

    cout << "Before function call: " << main.sal << endl;;

    increase(main, bonus);

    cout << "After function call (main): " << main.sal << endl;
}

void increase(employee_record employee_copy, int bonus)
{
    employee_copy.sal = employee_copy.sal + bonus;
    cout << "Inside function (copy): " << employee_copy.sal << endl;
}
