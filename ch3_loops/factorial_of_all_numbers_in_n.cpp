#include<iostream>
using namespace std;

int main (){
    
    cout<< "Enter a number : ";
    int n;
    cin>> n;
    int temp =1;
    for(int i=1;i<= n;i++){
        
        temp = temp*i;
        cout<<"Factorial of : "<<i<<" is :"<<temp <<endl;
    }
    
}