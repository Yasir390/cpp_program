// #include <iostream>  // For input and output

// using namespace std;

// int main() {
//     int number;

//     // Input from the user
//     cout << "Enter a number: ";
//     cin >> number; // take user input

//     // Check if the number is even or odd
//     if (number % 2 == 0) {
//         cout << number << " is an even number." << endl;
//     } else {
//         cout << number << " is an odd number." << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;  // Input the number of test cases

    for (int i = 0; i < T; i++) {
        unsigned int N;  // Number to check (0 <= N <= 2,147,483,647)
        cin >> N;  // Input the number

        // Check if the number is even or odd
        if (N % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
