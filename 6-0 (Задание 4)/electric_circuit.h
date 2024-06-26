#ifndef ELECTRIC_CIRCUIT_H
#define ELECTRIC_CIRCUIT_H

#include <iostream>

class ElectricCircuit {
private:
    double current;
    double resistance;

protected:
    double calculatePower() const;

public:
    ElectricCircuit();
    ElectricCircuit(double current, double resistance);
    ElectricCircuit(const ElectricCircuit& other);
    ~ElectricCircuit();

    void setCurrent(double current);
    void setResistance(double resistance);

    double getCurrent() const;
    double getResistance() const;

    friend std::istream& operator>>(std::istream& in, ElectricCircuit& circuit);
    friend std::ostream& operator<<(std::ostream& out, const ElectricCircuit& circuit);
};

#endif