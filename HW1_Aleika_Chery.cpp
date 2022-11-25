/*Aleika Chery CSC 212
HW1
Write a C++ program that calculates sum of  the  first two values above using the twos-complement algorithm int sum(int X, int Y) */

#include <iostream>
using namespace std;

int  sum(int X, int Y); 

int main () {
    int X, Y; //will be used to store the two inputs
    cout << "Enter 2 positive integers less than or equal to 256. \n";
    cin >> X >> Y;             
    sum(X,Y); //calculates the sum of the two decimal numbers using twos complement notation

return 0;
}

//function that converts the decimal numbers to binary notation, finds the sum of the two numbers using twos complement, and outputs the sum    
int sum(int X, int Y) {
    int A(X), B(Y); //makes a copy of the two numbers inputted X and Y and stores them in A and B respectively
    int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //a[10] represents the first decimal number inputted in binary notation
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //b[10] represents the second decimal number inputted in binary notation
    //converts the first number inputted into binary
    if (A == 256) { 
        a[1] = 1;
        A = A - 256;}
    if (128<=A && A<256) {
        a[2] = 1;
        A = A - 128;}
    if (64<=A && A<128) {
        a[3] = 1; 
        A = A-64;}
    if (32<=A && A<64) {
        a[4] = 1;
        A = A - 32;}
    if (16<=A && A<32) {
        a[5] = 1;
        A = A - 16;}
    if (8<=A && A<16) {
        a[6] = 1;
        A = A - 8;}
    if (4<=A && A<8) {
        a[7] = 1;
        A = A - 4;}
    if (2<=A && A<4) {
        a[8] = 1;
        A = A - 2;}
    if (A == 1) {
        a[9] = 1;
        A = A - 1;}
    
    //converts the second number inputted into binary
    if (B == 256) { 
        b[1] = 1;
        B = B - 256;}
    if (128<=B && B<256) {
        b[2] = 1;
        B = B - 128;}
    if (64<=B && B<128) {
        b[3] = 1; 
        B = B-64;}
    if (32<=B && B<64) {
        b[4] = 1;
        B = B - 32;}
    if (16<=B && B<32) {
        b[5] = 1;
        B = B - 16;}
    if (8<=B && B<16) {
        b[6] = 1;
        B = B - 8;}
    if (4<=B && B<8) {
        b[7] = 1;
        B = B - 4;}
    if (2<=B && B<4) {
        b[8] = 1;
        B = B - 2;}
    if (B == 1) {
        b[9] = 1;
        B = B - 1;}

    int carry_over[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //represents the numbers that are carried over when adding 
    int sum_answer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //the initial value of the array for the sum of the two numbers 
    //computes the sum of the two numbers 
    for (int i = 9; i > -1; i--) {
        if (a[i]+b[i]+carry_over[i] == 0) {
            sum_answer[i] = 0;
        }
        if (a[i]+b[i]+carry_over[i] == 1) {
            sum_answer[i] = 1;
        }
        if (a[i]+b[i]+carry_over[i] == 2) {
            carry_over[i-1] = 1;
            sum_answer[i] = 0;
        }
        if (a[i]+b[i]+carry_over[i] == 3) {
            carry_over[i-1] = 1;
            sum_answer[i] = 1;
        }    
    }

    
    //outputs the sum of the two decimal numbers in binary
    cout << X << " + " << Y << " in binary is: \n"; 
    for(int i = 0; i < 10; i++) {
    cout << sum_answer[i];
    }    
    cout << "\n";

return 0;
}
    
    
    
    
    
    
    
    
    
    






















