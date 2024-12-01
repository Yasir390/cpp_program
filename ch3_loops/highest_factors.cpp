#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter last range : ";
    cin>> n;
    int a = 1;
    for(int i=1 ; i < n ;i++){
        if(n%i==0){
            a=i;
        }
        
        
    }
    cout<<" highest factor is : " <<a;

}
