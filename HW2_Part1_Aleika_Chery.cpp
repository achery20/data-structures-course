/*Write a function that takes as argument an array of integers and the size of the 
array and returns the average of the input values. */

#include <iostream>
using namespace std; 
double avrg(int* array, int size);

int main() {
    int size;
    double average;
    cout << "input the number of elements in the array\n";
    cin >> size;
    int array[size];
    cout << "list the integer elements in the array\n";
    //stores numbers inputted in an array
    for(int i=0; i<size; i++) {
        cin >> array[i];
    }
    average = avrg(array, size);
     
    cout << "\n" << average;
return 0;    
} 

double avrg(int* array, int size) {
    double sum = 0;
    double average = 0;
    //finds the sum of all the numbers inputted
    for(int i=0; i<size; i++) {
        sum+= array[i];
    }
    average = sum/size; //calculates the average of the numbers
    cout << "\nThe average is: ";
    return average;
}