#include <iostream>
#include <cstdlib>

float readSensor() {
    return 20.0f + (rand() % 100) / 10.0f;   // fake temperature, 20.0 to 29.9 C
}

int main() {
    for (int i = 0; i < 10; i++) {
        float temp = readSensor();
        if (temp > 27){
            std::cout << "Reading " << i << ": " << temp << " C (warning!)" << std::endl;}
    else{
            std::cout << "Reading " << i << ": " << temp << " C" << std::endl;
        }
    }
    return 0;
}

