#include <iostream>
#include "abstract_electric_circuit.h"
#include "basic_electric_circuit.h"
#include "advanced_electric_circuit.h"

void processElectricCircuit(AbstractElectricCircuit& circuit) {
    circuit.read(std::cin);
    circuit.print(std::cout);
}

int main() {
    BasicElectricCircuit basicCircuit;
    processElectricCircuit(basicCircuit);

    AdvancedElectricCircuit advancedCircuit;
    processElectricCircuit(advancedCircuit);

    return 0;
}