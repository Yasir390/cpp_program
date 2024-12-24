#include <iostream>
#include <string>
#include <algorithm> // Include algorithm for reverse

using namespace std;

int main() {
    string str = "this is a pen";

    // Correcting push_back (use a single character)
    str.push_back('m'); // Adding a single character
    cout << str << endl;

    str.pop_back(); // Removes the last character
    cout << str << endl;

    str.append(" hello"); // Appends a string
    cout << str << endl;

    str = str + " rahim"; // Concatenates using +
    cout << str << endl;

    reverse(str.begin(), str.end()); // Reverse the string
    cout << "Reversed: " << str << endl;

    str.clear(); // Clears the string
    cout << "Cleared: " << str << endl;

    return 0;
}
