#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int temp=0;
    for(int i =1;i<=n;i++){
        
        for(int j = 1;j<=n;j++){
            if(j<=n-i )
            cout<< "  ";
            else
            cout<<"* ";
        }
        cout<<endl;
    }
}



// Enter n: 5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
