#include "basic_electric_circuit.h"

BasicElectricCircuit::BasicElectricCircuit() : current(0.0), resistance(0.0) {}

BasicElectricCircuit::BasicElectricCircuit(double current, double resistance)
    : current(current), resistance(resistance) {}

BasicElectricCircuit::BasicElectricCircuit(const BasicElectricCircuit& other)
    : current(other.current), resistance(other.resistance) {}

double BasicElectricCircuit::calculatePower() const {
    return current * current * resistance;
}

std::istream& BasicElectricCircuit::read(std::istream& in) {
    std::cout << "Введите ток в амперах: ";
    in >> current;
    std::cout << "Введите сопротивление резистора R1 в омах: ";
    in >> resistance;
    return in;
}

std::ostream& BasicElectricCircuit::print(std::ostream& out) const {
    out << "Ток в амперах: " << current << std::endl;
    out << "Сопротивление резистора R1 в омах: " << resistance << std::endl;
    out << "Мощность на участке электрической цепи в ваттах: "
        << calculatePower() << std::endl;
    return out;
}

BasicElectricCircuit& BasicElectricCircuit::operator=(const BasicElectricCircuit& other) {
    if (this != &other) {
        current = other.current;
        resistance = other.resistance;
    }
    return *this;
}

bool BasicElectricCircuit::operator==(const BasicElectricCircuit& other) const {
    return current == other.current && resistance == other.resistance;
}