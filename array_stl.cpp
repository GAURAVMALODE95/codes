//used for compititive enviourment.
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};//intialization
    int size=a.size();//prints size of array
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
   cout<<"it is not empty so zeroo : "<<a.empty()<<endl;//returns true or false 
   cout<<"first elem : "<<a.front()<<endl;
   cout<<"last elem : "<<a.back()<<endl;
    





return 0;
}