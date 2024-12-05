#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many lines : ";
    int lines;
    cin>> lines;

    for(int i =1;i<=lines;i++){
       for(int j = 1; j<=i;j++){
           cout << j<<" ";
       }
       cout<<endl;
    }
 
}

// enter how many num of rows : 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

