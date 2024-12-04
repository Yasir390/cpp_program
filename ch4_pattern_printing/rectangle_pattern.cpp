#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many num of rows : ";
    int row;
    cin>> row;

    for(int i =1;i<=row;i++){
       for(int j = 1; j<=i;j++){
           cout << "* ";
       }
       cout<<endl;
    }
 
}

// * 
// * *
// * * *
// * * * *
// * * * * *
