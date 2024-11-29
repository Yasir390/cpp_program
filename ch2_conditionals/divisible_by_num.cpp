#include<iostream>
using namespace std;

int main(){
     int a;
     
    cout<< "enter value : ";
    cin>> a;

    if((a%5 == 0 || a%3 == 0) && a%15 != 0){
        cout<< "Yeah this number is divisible by 5 or 3 and not by 15";
    }
   
    else{
        cout << "Alas! this number is not follow divisible by 5 or 3 and not by 15";
    }
}