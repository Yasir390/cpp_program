#include<iostream>
using namespace std;



// void summation(int a,int b){
//     cout<<"Summation is : "<<a+b<< endl;
// }

int summation(int a,int b){
    int sum = a+b;
    return sum;
}


int main(){
    int a,b;
    cout<<"Enter 1st number: "<< endl;
    cin>>a;
    cout<<"Enter 2nd number: "<< endl;
    cin>>b;
    int result ;
   result= summation(a,b);

   cout<<"Result is : "<<result<< endl;

}

