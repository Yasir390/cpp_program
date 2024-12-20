#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,5,7,9,2,7,8,11,11};
   
    int n = sizeof(arr)/4;
    int max = arr[0];
    int secondMax = arr[0];
    for(int i=0;i<n;i++){
       
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"Largest : "<< max<<endl;
    for(int i=0;i<n;i++){
       
        if(secondMax<arr[i] && arr[i] != max ){
          
            secondMax = arr[i];
        }
    }
    cout<<"Second Largest : "<< secondMax;
}