#include <iostream>
#include <cstdlib>

float readSensor() {
    return 20.0f + (rand() % 100) / 10.0f;   // fake temperature, 20.0 to 29.9 C
}

int main() {
    /*
    * Checks the temperature for out of range
    * Prints the temperature. If out of range, 
    * prints a warning beside reading
    */
    for (int i = 0; i < 10; i++) {
        float temp = readSensor();
        if (temp > 27){
            std::cout << "Reading " << i << ": " << temp << " C (Warning!)" << std::endl;
        }
        else{
            std::cout << "Reading " << i << ": " << temp << " C" << std::endl;
        }
    }
    return 0;
}
