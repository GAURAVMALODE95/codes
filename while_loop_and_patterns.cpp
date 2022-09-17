//we have already seen a for loop


#include<iostream>
using namespace std;
int main(){
   //simple program for printing number till you want.
    int n;
    cout<<"welcome sir,please tell us till how much you want to print a number";
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    
//sum of n numbers
   //ask user for input
   cout<<"welcome sir please enter a number till you want a sum=";
   int n;
   cin>>n;
   int i=0;
   int sum=0;
   while(i<=n){
    sum=sum+i;
    i=i+1;


   cout<<"sir,the sum of first"<<" "<<n<<" "<<"numbers is = "<<" "<<sum;
    

//pattern printing....
/*  
    ***
    ***
    *** 
            */

     int n=3;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

//same code by takeing input from a user.
  
int n;
cout<<"welcome sir please enter a number till you want to print=";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"*";
        j=j+1;
        
    }
    cout<<endl;
    i=i+1;
}   

    return 0;
}
