#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    
    int count = 0;
    while (n!= 0)
    {
      n=n/10;
      count++;
    }
    cout << "Total Digits : "<<count;
}


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int count = 0;
//     for (; n != 0; n /= 10) {
//         count++;
//     }

//     cout << "Total Digits: " << count << endl;
//     return 0;
// }
