#include <iostream>
#include "two_resistors_circuit.h"

int main() {
    TwoResistorsCircuit circuit(1.0, 10.0, 20.0);
    std::cout << circuit << std::endl;
    std::cout << "Общая мощность на двух резисторах: " << circuit.calculateTotalPower() << " ватт" << std::endl;
    return 0;
}