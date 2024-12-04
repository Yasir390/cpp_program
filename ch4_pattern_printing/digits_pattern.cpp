#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many num of rows : ";
    int row;
    cin>> row;

    for(int i =1;i<=row;i++){
       for(int j = 1; j<=row;j++){
           cout << i<<" ";
       }
       cout<<endl;
    }
 
}

// enter how many num of rows : 5
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 
