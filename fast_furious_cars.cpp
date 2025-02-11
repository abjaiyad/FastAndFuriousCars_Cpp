// Fast & Furious Cars List Program
// Created by: Amad Bin Jaiyad

#include <iostream>
#include <vector>

using namespace std;

// Structure to store car details
struct Car {
    string name;
    string driver;
    string movie;
};

// Function to display the car list
void displayCars(const vector<Car> &cars) {
    cout << " Fast & Furious Cars List \n";
    cout << "----------------------------------\n";
    for (const auto &car : cars) {
        cout << "Car: " << car.name << "\n";
        cout << "Driver: " << car.driver << "\n";
        cout << "Movie: " << car.movie << "\n";
        cout << "----------------------------------\n";
    }
}

int main() {
    // List of iconic Fast & Furious cars
    vector<Car> cars = {
        {"1970 Dodge Charger R/T", "Dominic Toretto", "The Fast and the Furious (2001)"},
        {"1995 Toyota Supra Mark IV", "Brian O'Conner", "The Fast and the Furious (2001)"},
        {"1999 Nissan Skyline GT-R R34", "Brian O'Conner", "2 Fast 2 Furious (2003)"},
        {"2002 Nissan 350Z", "Takashi (Drift King)", "Tokyo Drift (2006)"},
        {"2010 Dodge Charger SRT-8", "Dom & Brian", "Fast Five (2011)"},
        {"Lykan HyperSport", "Dom & Brian", "Furious 7 (2015)"},
        {"2018 Dodge Challenger SRT Demon", "Letty Ortiz", "The Fate of the Furious (2017)"}
    };

    // Display the car list
    displayCars(cars);

    return 0;
}
