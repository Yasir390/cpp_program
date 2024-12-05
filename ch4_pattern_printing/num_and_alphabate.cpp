#include<iostream>
using namespace std;
 
int main(){
    
    cout<<"enter how many lines : ";
    int lines;
    cin>> lines;

    for(int i =1;i<=lines;i++){
       for(int j = 1; j<=i;j++){
           char temp = j+64;
           if(i%2 ==0)
           cout << temp<<" ";
           else
           cout<< j<<" ";
       }
       cout<<endl;
    }
 
}


// enter how many lines : 5
// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 