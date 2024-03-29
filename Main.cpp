#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float c_to_k(float);
    float c_to_f(float);
    float k_to_f(float);
    float k_to_c(float);

    int input;
    cout << "Celcius to Fahrenite/Kelvin Converter" <<endl;
    cout << "Please select any one conversion method via their sno." <<endl;
    cout << "1. Celcius to Kelvin" <<endl  << "2. Celcius to Fahrenite" <<endl << "3. Kelvin to Fahrenite" <<endl << "4. Kelvin to Celcius" <<endl << "5. Fahrenheit to Celsius" <<endl << "6. Fahrenheit to Kelvin" << endl;
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
    else if (input == 3)
    {
        float k;
        cout << "Enter Temperature in Kelvin : ";
        cin >> k;
        cout << "Temperature in Fahrenite is : " << k_to_f(k);
    }
    else if (input == 4)
    {
        float kel;
        cout << "Enter Temperature in Kelvin : ";
        cin >> kel;
        cout << "Temperature in Celcius is : " << k_to_c(kel);
    }
    else
    {
        cout << "Please Enter a Valid sno." << endl;
    }
    getch();
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
float k_to_f(float temp){
    float result = (temp-273.15) * 9/5 + 32;
    return result;
}
float k_to_c(float temp){
    float result = temp-273.15;
    return result;
}