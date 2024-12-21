#include<iostream>
using namespace std;

int main(){
    
    int arr[2][3]; //row num 2, column num 3
    arr[0][0] = 2;
    arr[0][1] = 4;
    arr[0][2] = 6;
    arr[1][0] = 8;
    arr[1][1] = 9;
    arr[1][2] = 12;
   
   
    for(int i =0;i<2;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

}