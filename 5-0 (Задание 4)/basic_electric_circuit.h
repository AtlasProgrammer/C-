#ifndef BASIC_ELECTRIC_CIRCUIT_H
#define BASIC_ELECTRIC_CIRCUIT_H

#include "abstract_electric_circuit.h"

class BasicElectricCircuit : public AbstractElectricCircuit {
private:
    double current;
    double resistance;

public:
    BasicElectricCircuit();
    BasicElectricCircuit(double current, double resistance);
    BasicElectricCircuit(const BasicElectricCircuit& other);

    double calculatePower() const override;

    std::istream& read(std::istream& in) override;
    std::ostream& print(std::ostream& out) const override;

    BasicElectricCircuit& operator=(const BasicElectricCircuit& other);
    bool operator==(const BasicElectricCircuit& other) const;
};