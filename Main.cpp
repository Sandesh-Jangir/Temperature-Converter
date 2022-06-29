#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Celcius to Fahrenite/Kelvin Converter" <<endl;
    cout << "Please select any one conversion method via their sno." <<endl;
    cout << "1. Celcius to Kelvin" <<endl  << "2. Celcius to Fahrenite" <<endl;
    cin >> input;

    // Conditionals
    if (input == 1)
    {
        cout << "You have choosed to convert Celcius to Kelvin" << endl;
    }
    if (input == 2)
    {
        cout << "You have choosed to convert Celcius to Fahrenite" << endl;
    }
    else
    {
        cout << "Please Enter a Valid sno." << endl;
    }
    
    return 0;
}