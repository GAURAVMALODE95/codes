#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // following is an copy constructor.

    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void print()
    {
        cout << "number : " << a << endl;
    }
};

int main()
{
    number x(12), y(90), z(34);
    z.print();
    y.print();
    x.print();
    // z1 should excatly look like z
    number z1(x);
    z1.print();
    return 0;
}
