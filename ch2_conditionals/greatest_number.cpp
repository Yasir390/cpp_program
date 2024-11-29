#include<iostream>
using namespace std;

int main(){
     int a,b,c;
     
    cout<< "enter 1st value : ";
    cin>> a;
     
    cout<< "enter 2nd value : ";
    cin>> b;
     
    cout<< "enter 3rd value : ";
    cin>> c;

    if(a>b && a>c){
        cout<< "a is greatest";
    }
    else if(b>a && b>c){
        cout<< "b is greatest";
    }
    else{
        cout << "c is greatest";
    }
}