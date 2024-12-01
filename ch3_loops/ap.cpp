#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter last range : ";
    cin>> n;
    int a = 4;
    for(int i=1 ; i <= n ;i++){
        cout << a << " ";
        a=a+3;
        
    }

}
//1,3,5,7,9,...