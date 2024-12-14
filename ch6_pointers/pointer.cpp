#include<iostream>
using namespace std;

int main(){

    int x = 6;

    int* ptr = &x;

    cout<<&x<<endl; // & diye address ante hoi 
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // 8 diye value ante hoi
}