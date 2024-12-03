// The result of 378582354 mod 10 is 4
// This is because taking a number modulo 10 is gives the last digits
// 



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    int temp=0;
    int sum=0;
    int count = 0;
    while (n%10 != 0)
    {
      temp = n%10;
      sum = sum +temp;
      n=n/10;
      count++;
    }
    cout << "Total Digits : "<<count<<endl;
    cout << "Total sum : "<<sum;
}
