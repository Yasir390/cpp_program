#include<iostream>
using namespace std;

int main (){
    
    cout<< "Enter a number : ";
    int n;
    cin>> n;
    int lastDig;
    int temp= 1; 
    
    while(n != 0){
        lastDig = n%10;
        temp = temp*lastDig;
        n= n/10;
    }
    
    cout<<"multiplication of all digits : "<<temp<<endl;
}