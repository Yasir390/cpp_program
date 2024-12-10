#include<iostream>
using namespace std;



void greet(string name){
    cout<<"Hello "<<name<< endl;
}

void intData(int num1,int num2){
    cout<<"Num are: "<<num1<<" "<<num2<< endl;
}

void floatData(float num1,float num2){
    cout<<"Float Num are: "<<num1<<" "<<num2<< endl;
}
void name(){
    cout<< "My name is Yasir";
}
int main(){

    cout<<"This is from main method"<< endl;
    //String type data pass 
    greet("abc");

     // int type data pass
    intData(12,65);

     // float type data pass
    floatData(452.677,65.8);

    // without data pass
    name();

}

