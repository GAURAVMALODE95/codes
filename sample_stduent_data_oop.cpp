#include <iostream>
using namespace std;
//parameterized constructor takes value from input.
class student{
    int roll_call;
    string name;
    public:
    student(int,string);   
    void print(){
        cout<<"name of student is : "<<name<<endl;
        cout<<"roll call of stduent is"<<" "<<roll_call<<endl;

    }
};
student :: student(int x,string y){//this is parametrized constructor.

    name=y;
    roll_call=x;
}
int main(){
    string a;
    int b;
    cout<<"please enter your name : ";
    cin>>a;
    cout<<"enter your roll call : ";
    cin>>b;
    student s1(b,a);
    s1.print();

}
