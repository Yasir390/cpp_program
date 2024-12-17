#include<iostream>
using namespace std;

 void  printFun(int x,int n){
    if(x> n) return;
        cout<<x<<endl;
       printFun(x+1,n);
    }

int main(){
    int n;
    cout<<"Enter n: ";
    cin>> n; 

    printFun(1,n);
} 