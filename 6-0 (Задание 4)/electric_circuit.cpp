#include "electric_circuit.h"

ElectricCircuit::ElectricCircuit() : current(0.0), resistance(0.0) {}

ElectricCircuit::ElectricCircuit(double current, double resistance)
    : current(current), resistance(resistance) {}

ElectricCircuit::ElectricCircuit(const ElectricCircuit& other)
    : current(other.current), resistance(other.resistance) {}

ElectricCircuit::~ElectricCircuit() {
    std::cout << "Уничтожение объекта ElectricCircuit" << std::endl;
}

double ElectricCircuit::calculatePower() const {
    return current * current * resistance;
}

void ElectricCircuit::setCurrent(double current) {
    this->current = current;
}

void ElectricCircuit::setResistance(double resistance) {
    this->resistance = resistance;
}

double ElectricCircuit::getCurrent() const {
    return current;
}

double ElectricCircuit::getResistance() const {
    return resistance;
}

std::istream& operator>>(std::istream& in, ElectricCircuit& circuit) {
    std::cout << "Введите ток в амперах: ";
    in >> circuit.current;
    std::cout << "Введите сопротивление резистора R1 в омах: ";
    in >> circuit.resistance;
    return in;
}

std::ostream& operator<<(std::ostream& out, const ElectricCircuit& circuit) {
    out << "Ток в амперах: " << circuit.current << std::endl;
    out << "Сопротивление резистора R1 в омах: " << circuit.resistance << std::endl;
    out << "Мощность на участке электрической цепи в ваттах: "
        << circuit.calculatePower() << std::endl;
    return out;
}