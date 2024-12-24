#include<iostream>
using namespace std;

int main(){

    string str = "this is a pen";

    int n = str.length();
    int count = 0;
    for(int i = 0;i<=n;i++){

        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            count++;
        }
    }

    cout<<"total vowel : "<< count;
}