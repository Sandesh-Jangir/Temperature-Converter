#include <iostream>
using namespace std;

int main(){
    float c_to_k(float);

    int input;
    cout << "Celcius to Fahrenite/Kelvin Converter" <<endl;
    cout << "Please select any one conversion method via their sno." <<endl;
    cout << "1. Celcius to Kelvin" <<endl  << "2. Celcius to Fahrenite" <<endl;
    cin >> input;

    // Conditionals
    if (input == 1)
    {
        float c;
        cout << "Enter Temperature in Celcius : ";
        cin >> c;
        cout << "Temperature in Kelvin is : " << c_to_k(c);
    }
    else if (input == 2)
    {
        cout << "You have choosed to convert Celcius to Fahrenite" << endl;
    }
    else
    {
        cout << "Please Enter a Valid sno." << endl;
    }
    
    return 0;
}

float c_to_k(float temp){
    float result = temp + 273.15;
    return result;
}