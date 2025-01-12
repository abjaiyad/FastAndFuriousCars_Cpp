/*
 * Program Name: FahrenheitToCelsiusConverter
 * Description: This program converts a temperature value from Fahrenheit to Celsius.
 * Author: Amad Bin Jaiyad
 * Date: 2025-01-12
 *
 * FahrenheitToCelsiusConverter - A simple program to convert temperatures!
 */

#include<iostream>
using namespace std;

int main() {
    // FahrenheitToCelsiusConverter: Prompt the user to enter temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    int fahrenheit; // Variable to store Fahrenheit value
    cin >> fahrenheit; // Taking input from the user

    // FahrenheitToCelsiusConverter: Formula to convert Fahrenheit to Celsius
    double celsius = (fahrenheit - 32) / 1.8;

    // FahrenheitToCelsiusConverter: Display the result in Celsius
    cout << "Equivalent temperature in Celsius: " << celsius << endl;

    return 0; // Indicate successful execution
}