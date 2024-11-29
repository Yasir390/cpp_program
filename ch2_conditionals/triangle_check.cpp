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

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<< "yeah, its valid triangle";
    }
    else{
        cout<< "Alas, its not valid triangle";
    }
}