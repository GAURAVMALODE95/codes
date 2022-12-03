#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    list<int> m(5, 100); // new list

    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    cout << "before erase operation" << endl;
    for (int i : l)
    {
        cout << i << " -> ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase operation" << endl;
    for (int i : l)
    {
        cout << i << " -> ";
    }
    cout << endl;
    cout << "size of list is : " << l.size() << endl;

    cout << "list m is : " << endl;
    for (int i : m)
    {
        cout << i << " -> ";
    }
    cout << endl;

    cout << "after revarsal of list : " << endl;
    l.reverse();
    for (int i : l)
    {
        cout << i << " -> ";
    }
    cout << endl;

    cout<<"after sorting : "<<endl;
    l.sort();
    for (int i : l)
    {
        cout << i << " -> ";
    }
    cout << endl;

    return 0;
}