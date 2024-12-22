#include<iostream>
using namespace std;

int main(){
    
    int arr[]={760,8,62,721,724,78,12};
     int n = sizeof(arr)/4; 
     int max = 0;
     int secondMax = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    for(int i =0;i<n;i++){
        if(arr[i]>secondMax && arr[i] != max){
            secondMax = arr[i];
        }
        
    }
 cout<<"max : "<<max<<endl;
 cout<<"secondMax : "<< secondMax;
  

}