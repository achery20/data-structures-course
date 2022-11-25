#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "File: " << __FILE__ << "\nDate: " << __DATE__ <<  " CSC 21200 LM24126" << endl;

    char phrase[200]; //stores phrase input
    int cnt[32]; //stores numeric sum of each phrase input
    int phrase_number = 1; //used to keep track of which phrase is being inputted

    //finds the numeric sum of each phrase inputted
    for(int i=0; i<4; i++) {
         cout << "input a phrase\n" << endl;
         cout << "phrase number: " << phrase_number << endl;
         cout << "\n";
         cin.getline(phrase,200);
        int numeric_value[200];
        int value_of_char = 0;
        //converts each character in array to it's ASCII value 
        //and stores them in another array
        for (int i=0; i<200; i++) {
            value_of_char = int(phrase[i]);
            numeric_value[i] = value_of_char;
        }
    //computes the sum of numeric values in the array    
    int sum_of_numeric_values = 0;
    for (int i=0; i<200; i++) {
        sum_of_numeric_values = sum_of_numeric_values + numeric_value[i];
    }
    //stores the numeric sum of each phrase in the cnt array
    cnt[phrase_number] = sum_of_numeric_values;
    phrase_number = phrase_number+ 1;
    
   cout << "----------------" << endl;
}
//outputs the numeric sum of each phrase that is stored in the cnt array
cout << "numeric sum of each line" << endl;
for (int i=1; i<5; i++) {
    cout << "phrase " << i << ": " <<  cnt[i] << endl;
}
}