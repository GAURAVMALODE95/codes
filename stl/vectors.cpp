// dynamic array
// if vector full and we insert new elem it will fouble its size and dumb old vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    // v.push_back(3);//when we will push this 3 it will double its size to 4!!!
    v.push_back(5);
    v.push_back(7);
    v.push_back(6); // vector already having 4 elements....when we will push this elem in vector it will double its size.

    cout << "size is : " << v.capacity();
    // front for first elem and back for last elem...
    //   cout<<v.front()<<endl;
    //   cout<<v.back()<<endl;

    cout << "orignal : " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    v.pop_back();
    cout << "after pop : " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    // clearing vector.
    v.clear();
    cout << "after clearing :" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    return 0;
} 
