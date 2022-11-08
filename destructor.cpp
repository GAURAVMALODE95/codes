// free up memory space.
// never takes argument nor writes value

#include <iostream>
using namespace std;
class num
{
    int count = 0;//global value with 0

public:
    num()
    {
        count++;//count=1
        cout << "constructor called ;" << count << endl;
    }
    ~num(){
        cout<<"destructor called : "<<count<<endl;
        count--;
    }
};
int main()
{
cout<<"main func : ";
cout<<"creating obj 1: "<<endl;
num n1;{
cout<<"more obj : ";

num n2,n3;
cout<<"exiting"<<endl;}



    
}
