#include<iostream>
using namespace std;

int factorialFunction(int x){
     int temp = 1;
      for(int i=1;i<=x;i++){
        temp = temp*i;
    }
    return temp;
}

int main(){
    int n,r;
    cout<< "Enter n: ";
    cin>> n;
    cout<< "Enter r: ";
    cin>> r;



    int result = factorialFunction(n)/factorialFunction(n-r);
     cout<<"Result is : "<<result;


}
// P(n,r)= n!/(n−r)!
