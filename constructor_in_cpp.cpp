#include<iostream>
using namespace std;
class  complex{
    int a,b;
    public:
    complex(void);//constructor declaration

    void printnumber(){
        cout<<"your number is : "<< a << " + " << b << "i" <<endl;
    }
};
complex :: complex(void){
   a=10;
   b=12;
}
int main(){
    complex c;
    c.printnumber();


return 0;
}
