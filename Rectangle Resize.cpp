#include <iostream>
using namespace std;

struct rec
{
    int length;
    int width;
};

void resize(rec rec_copy, int factor);

int main()
{
    rec main;
    int factor;

    cout << "Enter length: ";
    cin >> main.length;

    cout << "Enter width: ";
    cin >> main.width;

    cout << "Enter factor: ";
    cin >> factor;

    int areabe = main.length * main.width;
    cout << "Area before call (main): " << areabe << endl;

    resize(main, factor);

    int areaf = main.length * main.width;
    cout << "Area after call (main): " << areaf << endl;
}

void resize(rec rec_copy, int factor)
{
    rec_copy.length = rec_copy.length * factor;
    rec_copy.width = rec_copy.width * factor;

    int area = rec_copy.length * rec_copy.width;
    cout << "Area inside function (copy): " << area << endl;
}
