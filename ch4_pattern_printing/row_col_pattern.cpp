#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many num of rows : ";
    int row;
    cin>> row;
    
    cout<<"enter how many num of columns : ";
    int columns;
    cin>> columns;
    
    for(int i =1;i<=row;i++){
       for(int j = 1; j<=columns;j++){
           cout << "* ";
       }
       cout<<endl;
    }
 
}


// enter how many num of rows : 2
// enter how many num of columns : 6 
// * * * * * * 
// * * * * * *