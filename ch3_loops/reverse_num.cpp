 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cout<< "enter a number : ";
    cin>> n;
    int r = 0;
    while (n !=0)
    {
        int lastDigit = n%10;
        r= r*10;
        r=r+lastDigit;
        n = n/10;
    }
    cout<<r;
    
 }