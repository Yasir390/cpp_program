#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    int modValue =0;
    int temp =0;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j==(n/2)+1 || i==(n/2)+1)
            cout<<"*"<<" ";
            else
            cout<< "# ";
            
        }
        
        cout<< endl;
    }
}


// Enter n: 5
// # # * # # 
// # # * # # 
// * * * * * 
// # # * # # 
// # # * # # 