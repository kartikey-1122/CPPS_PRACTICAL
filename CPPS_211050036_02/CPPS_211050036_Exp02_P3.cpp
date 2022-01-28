/* Basically in this program we are taking input as a fahrenheit 
from user and according to that fahrenheit we will give output in celsius */
#include<iostream>
using namespace std;
int main(){
    float Fahrenheit;
    cout << "Enter the tempartre in farenheit\n";
    cin >> Fahrenheit;
    // Taking input as a fahrenheit 
    float celsius = (Fahrenheit-32)/1.8;
    // expression for conversion
    cout << "The temoparatre in celsius is " << celsius;
    // temparatre in celsius
    
    return 0;
}