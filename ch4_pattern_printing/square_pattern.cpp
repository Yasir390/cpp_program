#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many num of rows : ";
    int row;
    cin>> row;

    for(int i =1;i<=row;i++){
       for(int j = 1; j<=row;j++){
           cout << "* ";
       }
       cout<<endl;
    }
 
}


// enter how many num of rows : 5
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 