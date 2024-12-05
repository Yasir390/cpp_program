#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    int temp =0;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
             temp ++;
            cout<<temp<<" ";
        }
        
        cout<< endl;
    }
}


// Enter n: 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

