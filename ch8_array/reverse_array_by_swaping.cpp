#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,5,7,9,2,7,8,11,11};
   
    int n = sizeof(arr)/4;
    // Print original array

    for(int i=0;i<n;i++){
       cout<< arr[i]<< " ";
    }
    int i = 0;
    int j = n-1;
  // Reverse the array using for loop
 while(i<j){
     int temp = arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     
     i++;
     j--;
 }
    
    cout<<endl;
   // Print reversed array
    for(int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }

}