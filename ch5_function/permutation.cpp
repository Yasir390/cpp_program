#include<iostream>
using namespace std;

int main(){
    int n,r;
    cout<< "Enter n: ";
    cin>> n;
    cout<< "Enter r: ";
    cin>> r;
    int nFac =1;
    int nMinuseR = n-r;
    int nMinuseRFac = 1;
    // n factorial
    for(int i=1;i<=n;i++){
        nFac = nFac*i;
    }

    // nMinuseR factorial
    for(int k=1;k<=nMinuseR;k++){
        nMinuseRFac = nMinuseRFac*k;
    }

   int result = nFac/nMinuseRFac;
     
  
     cout<<"Result is : "<<result;
}



// P(n,r)= n!/(n−r)!
