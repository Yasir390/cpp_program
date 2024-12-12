#include<iostream>
using namespace std;


 int factorial(int n){
     int temp =1;
     for(int i=1;i<=n;i++){
         temp = temp*i;
     }
     return temp;
 }
 
 int combination(int n,int r){
     
     int comb=1;
     
     comb = factorial(n)/(factorial(r)*factorial(n-r));
     
     return comb;
     
 }

int main(){
    
    int r;
    cout<<"enter n: ";
    cin>>r;
    
    
    for(int i =0;i<=r;i++){
        
        for(int j =0;j<=i;j++){
            int result = combination(i,j);
            cout<< result<< " ";
        }
        cout<<endl;
    }
    
    
}