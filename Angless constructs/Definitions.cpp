#include "Anglessconstr.h"
#include <iostream>

int main() {
    Angle angle1, angle2;

    std::cout << "Enter the first angle:" << std::endl;
    angle1.Input();
    std::cout << "Enter the second angle:" << std::endl;
    angle2.Input();

    std::cout << "First angle: ";
    angle1.Display();
    std::cout << std::endl;

    std::cout << "Second angle: ";
    angle2.Display();
    std::cout << std::endl;

    std::cout << "Sine of the first angle: " << angle1.sine() << std::endl;
    std::cout << "Sine of the second angle: " << angle2.sine() << std::endl;

    if (angle1.isEqual(angle2)) {
        std::cout << "The angles are equal" << std::endl;
    }
    else {
        std::cout << "The angles are not equal" << std::endl;
    }

    return 0;
}
