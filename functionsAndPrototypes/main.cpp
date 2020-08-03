#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double temp);
double fahrenheit_to_kelvin(double temp);

void temperature_conversion(double fahrenheit_temperature) {
     
        double  celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
        double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

int main(){
    
     temperature_conversion(121) ;
    
    return 0;
}

double fahrenheit_to_celsius(double temp){
    return round((5.0/9.0)*(temp - 32));
}
double fahrenheit_to_kelvin(double temp){
    return round(fahrenheit_to_celsius(temp) + 273);
}
