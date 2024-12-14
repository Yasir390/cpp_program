#include<iostream>
using namespace std;

int main(){
    
    int x,y;
    
    cout<<" Enter x : ";
    cin>>x;
   
    cout<<" Enter y : ";
    cin>>y;

    
    x = x+y;
    y = x-y;
    x = x-y;
    
    cout<<"value of x : "<<x<<endl;
    cout<<"value of y : "<<y<<endl;
}