#ifndef ADVANCED_ELECTRIC_CIRCUIT_H
#define ADVANCED_ELECTRIC_CIRCUIT_H

#include "abstract_electric_circuit.h"

class AdvancedElectricCircuit : public AbstractElectricCircuit {
private:
    double current;
    double resistance;
    double frequency;
    std::string mode;

public:
    AdvancedElectricCircuit();
    AdvancedElectricCircuit(double current, double resistance, double frequency,
                             const std::string& mode);
    AdvancedElectricCircuit(const AdvancedElectricCircuit& other);

    double calculatePower() const override;

    std::istream& read(std::istream& in) override;
    std::ostream& print(std::ostream& out) const override;

    AdvancedElectricCircuit& operator=(const AdvancedElectricCircuit& other);
    bool operator==(const AdvancedElectricCircuit& other) const;
};

#endif // ADVANCED_ELECTRIC_CIRCUIT_H