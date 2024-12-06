#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    //upper part
     for(int i =1;i<=n;i++){
         if(i==n){
             continue;
         }
        
        for(int j = 1;j<=n-i;j++){
           
             cout<< "  ";
        }
        
        for(int j = 1;j<=i;j++){
            
            cout<<"* ";
        }
        for(int k = 1;k<=i-1;k++){
            
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //bottom part
    for(int i =1;i<=n;i++){
        
        for(int j = 1;j<=i-1;j++){
           
             cout<< "  ";
        }
        
        for(int k = 1;k<=n-i+1;k++){
            
            cout<<"* ";
        }
        
        for(int l = 1;l<=n-i;l++){
            
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Enter n: 5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

