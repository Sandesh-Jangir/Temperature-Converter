#include <iostream>
using namespace std;

int main(){
    float c_to_k(float);
    float c_to_f(float);

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
        float cel;
        cout << "Enter Temperature in Celcius : ";
        cin >> cel;
        cout << "Temperature in Fahrenite is : " << c_to_f(cel);
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
float c_to_f(float temp){
    float result = (temp * 9/5) + 32;
    return result;
}