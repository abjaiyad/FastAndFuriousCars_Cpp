/*
 * Program: Currency Converter (INR to USD, EUR, GBP)
 * Description: This program converts an amount in INR (Indian Rupees) to 
 *              its equivalent values in USD (United States Dollar), 
 *              EUR (Euro), and GBP (British Pound) based on predefined exchange rates.
 * Author: Amad Bin Jaiyad
 */

#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    // Declare variable for INR amount
    double inrAmount;
    cout << "Enter Amount in INR: ";
    cin >> inrAmount;

    // Define the exchange rates for INR to other currencies
    const double usdRate = 0.012; // United States Dollar
    const double eurRate = 0.011; // Euro
    const double gbpRate = 0.0091; // British Pound

    // Convert INR to USD, EUR, and GBP
    double usdAmount = inrAmount * usdRate;
    double eurAmount = inrAmount * eurRate;
    double gbpAmount = inrAmount * gbpRate;

    // Display the results with two decimal places
    cout << fixed << setprecision(2);
    cout << "Amount in INR: " << inrAmount << endl;
    cout << "Equivalent USD: " << usdAmount << endl;
    cout << "Equivalent EUR: " << eurAmount << endl;
    cout << "Equivalent GBP: " << gbpAmount << endl;

    return 0;
}
