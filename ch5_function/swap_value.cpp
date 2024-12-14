#include<iostream>
using namespace std;

int main(){
    
    int x,y,temp;
    
    cout<<" Enter x : ";
    cin>>x;
    cout<< endl;
    cout<<" Enter y : ";
    cin>>y;
    cout<< endl;
    
    temp = x;
    x = y;
    y = temp;
    
    cout<<"value of x : "<<x<<endl;
    cout<<"value of y : "<<y<<endl;
}