#include <iostream>
#include <deque>
using namespace std;
int display(deque<int> d)
{
    deque<int>::iterator it;
    cout << "the elements of deque is" << endl;
    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " , ";
    }
}
int main()
{
    deque<int> d;
    d.push_back(12);
    d.push_back(11);
    d.push_back(13);
    d.push_front(13);
    d.push_back(34);
    cout << "front : " << d.front() << endl;
    cout << "back : " << d.back() << endl;

    display(d);

    return 0;
}
