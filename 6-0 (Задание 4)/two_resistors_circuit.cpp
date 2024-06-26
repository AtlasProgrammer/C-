#include "two_resistors_circuit.h"

TwoResistorsCircuit::TwoResistorsCircuit()
   : ElectricCircuit(), r2Resistance(0.0) {}

TwoResistorsCircuit::TwoResistorsCircuit(double current, double resistance, double r2Resistance)
    : ElectricCircuit(current, resistance), r2Resistance(r2Resistance) {}

TwoResistorsCircuit::TwoResistorsCircuit(const TwoResistorsCircuit& other)
    : ElectricCircuit(other), r2Resistance(other.r2Resistance) {}

double TwoResistorsCircuit::calculateTotalPower() const {
    return ElectricCircuit::calculatePower() + (ElectricCircuit::getCurrent() * ElectricCircuit::getCurrent() * r2Resistance);
}

void TwoResistorsCircuit::setR2Resistance(double r2Resistance) {
    this->r2Resistance = r2Resistance;
}

double TwoResistorsCircuit::getR2Resistance() const {
    return r2Resistance;
}