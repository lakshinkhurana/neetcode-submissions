#include <cctype>   // for std::isalnum and std::tolower
#include <algorithm> // for std::transform

class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        
        // Transform the input string to lowercase and filter out non-alphanumeric characters
        for (char c : s) {
            if (isalnum(c)) {
                newstr += tolower(c);
            }
        }

        // Compare the filtered string with its reverse
        string reversedStr = newstr; // Create a copy of newstr
        reverse(reversedStr.begin(), reversedStr.end()); // Reverse the copy

        return newstr == reversedStr; // Check if the filtered string is a palindrome
    }
};
