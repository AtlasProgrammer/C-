#ifndef ABSTRACT_ELECTRIC_CIRCUIT_H
#define ABSTRACT_ELECTRIC_CIRCUIT_H

#include <iostream>
#include <string>

class AbstractElectricCircuit {
public:
    virtual ~AbstractElectricCircuit() {
        std::cout << "Уничтожение объекта абстрактного класса" << std::endl;
    }

    virtual double calculatePower() const = 0;

    virtual std::istream& read(std::istream& in) = 0;
    virtual std::ostream& print(std::ostream& out) const = 0;
};

#endif // ABSTRACT_ELECTRIC_CIRCUIT_H