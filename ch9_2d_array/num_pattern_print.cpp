#include<iostream>
using namespace std;

int main(){
    
    int arr[5][5]; //row num 2, column num 3

    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            arr[i][j] = 10;
        }
    }
   
    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

}