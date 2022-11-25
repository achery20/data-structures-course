/*Write a program having a  String class that contains a function that can 
reverse the order of the characters in a string. 
Write a program that takes a string argument from the command line and returns TRUE 
if the string is a palindrome. */

#include <iostream>
#include <string> //using string class
using namespace std;

class palindromeTest{ 
    public:
        bool reverse_word(string& input) //function that reverses order of word and checks if it's a palindrome.
        { 
            int n = input.length();
            string backwards;
            //make a copy of the word inputted
            backwards = input; 
            // reverse the order of the word
            reverse(backwards.begin(), backwards.end()); 
            //checks if the word inputted is a palindrome
            if (input == backwards) return true;
            else return false;
            
        }
};

int main() {
    palindromeTest word; //creates an object of class palindromeTest called word
    string a; //creates a variable for the word that will be inputted by user
    cout << "input a word\n";
    cin >> a; 
    //checks to see if the user inputted a number.
    //If a number is inputted instead of a word the program stops.
    for (int i = 0; i < a.length(); i++) {
        if (isdigit(a[i]) == true) {
        cout << "That's not a word.";
        exit(3);
        break; }
    }
                
    word.reverse_word(a); //calls the reverse_word function of class palindromeTest
    //outputs if the word is a palindrome or not 
    if (word.reverse_word(a) == true) cout << "\n The word " << a << " is a palindrome!"; 
    else cout << "\nThe word " << a << " is NOT a palindrome!";
    
return 0;
}

