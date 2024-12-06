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
            if(i==j || i+j ==n+1)
            cout<<"*"<<" ";
            else
            cout<< "  ";
            
        }
        
        cout<< endl;
    }
}


// Enter n: 5
// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 
