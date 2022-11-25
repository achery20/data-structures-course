//HW 4 Part 2 Answer
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
cout << "File: " << __FILE__ << "\nDate: " << __DATE__ <<  " CSC 21200 LM24126" << endl;

string word1, word2;
cout << "\nHW 4 Part 2: Anagram Test " << endl;
cout << "--------------" << endl;
cout << "enter 2 words" <<  endl;
cin >> word1 >> word2;
//sorts inputs in alphabetical order
sort(word1.begin(), word1.end());
sort(word2.begin(), word2.end());

//checks if both words when sorted are equal
if (word1 == word2) {
cout << "They are Anagrams" << endl;
}
else {
    cout << "They are NOT anagrams" << endl;
    }
}