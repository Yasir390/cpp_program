#include<iostream>
using namespace std;

int main(){
    int n,r;
    cout<< "Enter n: ";
    cin>> n;
    cout<< "Enter r: ";
    cin>> r;
    int nFac =1;
    int rFac =1;
    int nMinuseR = n-r;
    int nMinuseRFac = 1;
    // n factorial
    for(int i=1;i<=n;i++){
        nFac = nFac*i;
    }

    // r factorial
    for(int j=1;j<=r;j++){
        rFac = rFac*j;
    }
    // nMinuseR factorial
    for(int k=1;k<=nMinuseR;k++){
        nMinuseRFac = nMinuseRFac*k;
    }

   int result = nFac/(rFac*nMinuseRFac);
     
     cout<<"n fac is : "<<nFac<<endl;
     cout<<"r fac is : "<<rFac<<endl;
     cout<<"nMinuseRFac fac is : "<<nMinuseRFac<<endl;
     cout<<"Result is : "<<result;
}



// C(n,r)= n!/ r!⋅(n−r)!
