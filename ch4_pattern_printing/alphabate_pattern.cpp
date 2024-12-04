#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter n : ";
    int n;
    cin>> n;
    
    for(int i =65;i<65+n;i++){
       for(int j =65;j<65+n;j++){
           char temp = j;
           cout<<temp<< " ";
       }
       cout<<endl;
    }
 
}


// enter n : 4
// A B C D 
// A B C D 
// A B C D 
// A B C D 