#ifndef TWO_RESISTORS_CIRCUIT_H
#define TWO_RESISTORS_CIRCUIT_H

#include "electric_circuit.h"

class TwoResistorsCircuit : public ElectricCircuit {
private:
    double r2Resistance;

public:
    TwoResistorsCircuit();
    TwoResistorsCircuit(double current, double resistance, double r2Resistance);
    TwoResistorsCircuit(const TwoResistorsCircuit& other);

    double calculateTotalPower() const;

    void setR2Resistance(double r2Resistance);
    double getR2Resistance() const;
};

#endif