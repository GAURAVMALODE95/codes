#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ele, size;
    vector<int> v1;
    cout << "enter size of vector : " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element : ";
        cin >> ele;
        v1.push_back(ele);
    }
    cout<<"capicity of your vector is : "<<v1.capacity();
    cout << "your vector : " << endl;
    for (int i : v1)
    {
        cout << i << endl;
    }
    v1.pop_back();
    cout << "your vector after popping : " << endl;
    for (int i : v1)
    {
        cout << i << endl;
    }
    vector<int>::iterator iter=v1.begin();
    v1.insert(iter,566);
    cout << "your vector after inserting 566 at begin : " << endl;
    for (int i : v1)
    {
        cout << i << endl;
    }
    char ch;
    cout<<"do you want to insert 555 at second position y/n ?"<<endl;
    cin>>ch;
    if(ch=='y'){
        v1.insert(iter+1,555);
        cout<< "your vector after inserting 555 at second position : " << endl;
        for (int i : v1)
    {
        cout << i << endl;
    }
    }
    else{
        cout<<"ok no problem : ";
    }

    return 0;
}