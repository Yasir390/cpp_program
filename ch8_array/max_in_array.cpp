#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,5,7,9,2,7647,8};
    // cout<<"Reverse : ";
    int n = sizeof(arr)/4;
    int temp = arr[0];
    for(int i=0;i<n;i++){
       
        if(temp<arr[i]){
            temp = arr[i];
        }
    }
    cout<< temp;
}