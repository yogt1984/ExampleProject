#include <iostream>
#include "temperature_control.h"

int main() {
    TemperatureControl control(20, 25);
    control.updateTemperature(18);
    if (control.isHeating()) {
        std::cout << "Heating...\n";
    } else if (control.isCooling()) {
        std::cout << "Cooling...\n";
    } else {
        std::cout << "Temperature is within range.\n";
    }
    return 0;
}
