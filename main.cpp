// Group 3: Abia Khan and Mario Salinas
// NetID: ac6212 and ry7931 
// Work Cited: Dale, Nell. C++ Plus Data Structures, 6th Edition.
// CS 301-03 
// 10/19/23


#include <iostream>
#include <string>
#include <cctype> // For isalpha and tolower functions

using namespace std;

bool isPalindromeHelper(string str, int start, int end) {
    // Base case: if the start index crosses the end index, it's a palindrome
    if (start >= end) {
        cout << "The string '" << str << "' is a palindrome.";
        return true;
    }

    // Ignore non-alphabetic characters and spaces, convert to lowercase for comparison
    while (!isalpha(str[start]) && !isspace(str[start])) {
        start++;
    }

    while (!isalpha(str[end]) && !isspace(str[end])) {
        end--;
    }

    // Compare the characters at start and end indices
    if (tolower(str[start]) != tolower(str[end])) {
        cout << "The string '" << str << "' is not a palindrome.";
        return false;
    }

    // Recur with updated indices
    return isPalindromeHelper(str, start + 1, end - 1);
}

void isPalindrome(string str) {
    isPalindromeHelper(str, 0, str.length() - 1);
}

int main() {
    string input;
    cout << "Enter a string to test: ";
    getline(cin, input);

    isPalindrome(input);

    return 0;
}

