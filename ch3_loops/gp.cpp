#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter last range : ";
    cin>> n;
    int a = 3;
    for(int i=1 ; i <= n ;i++){
        cout << a << " ";
        a=a*4;
        
    }

}
//1,3,5,7,9,...