//searching in a array


#include <iostream>
using namespace std;
int liniersearcrh(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1 ;
}


int main(){
//1.linier search.
int n;
cout<<"kindely enter size of array";
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
   }
int key;
cout<<"kindely enter number you wanna search";
cin>>key;

cout<<"the element you entered is presemt at index value="<<liniersearcrh(arr,n,key);
 



return 0;

}
