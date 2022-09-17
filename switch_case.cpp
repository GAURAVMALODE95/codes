//switch statements are subsitutes for long if else dtatements
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"please input";
    cin>>a;

if(a=='a'){
    cout<<"hello sir";
}
else if(a=='b'){
    cout<<"namaste sirji";
}
else if(a=='c'){
    cout<<"in chinese";
}
else if(a=='d'){
    cout<<"hello sir in italian";
}
else if(a=='e'){
    cout<<"hello sir in combodian";
}

//*********************************
//heyyyy.....same code we can do by switch case as above
char a;
cin>>a;
switch (a)
{
case 'a':
cout<<"hello sir"<<endl;
break;//break terminate a switch***if no brak is appilied then all the statements will be excuted  and then we will get the result


case 'b':
cout<<"hello sir in hindi"<<endl;
break;

case 'c':
cout<<"in chinese"<<endl;
break;

case 'd':
cout<<"hello sir in italian"<<endl;
break;

case 'e':
cout<<"hello sir in combodian"<<endl;
break;

default:
cout<<"sorry sir i am still learning!!!!!";
break;
}

//simpel calculator

int a;
cout<<"enter a value please"<<endl;
cin>>a;
int b;
cout<<"enter a value please"<<endl;
cin>>b;

char op;
cout<<"enter a operation sign 1.+ 2.- 3.* 4./";
cin>>op;
switch (op)
{
case '+':
    cout<<"addition for your entered varibles is"<<" "<<a+b<<endl;
    break;
case '-':
    cout<<"substraction for your entered varibles is"<<" "<<a-b<<endl;
    break;  

case '*':
    cout<<"multiplication for your entered varibles is"<<" "<<a*b<<endl;
    break;  

case '/':
    cout<<"division for your entered varibles is"<<" "<<a/b<<endl;
    break;

default:
cout<<"enter a correct sign";
    break;
}
return 0;
}
