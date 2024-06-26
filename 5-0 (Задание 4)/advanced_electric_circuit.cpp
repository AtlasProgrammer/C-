#include "advanced_electric_circuit.h"

AdvancedElectricCircuit::AdvancedElectricCircuit() : current(0.0), resistance(0.0),
                                                  frequency(0.0), mode("AC") {}

AdvancedElectricCircuit::AdvancedElectricCircuit(double current, double resistance,
                                                 double frequency, const std::string& mode)
    : current(current), resistance(resistance), frequency(frequency), mode(mode) {}

AdvancedElectricCircuit::AdvancedElectricCircuit(const AdvancedElectricCircuit& other)
    : current(other.current), resistance(other.resistance),
      frequency(other.frequency), mode(other.mode) {}

double AdvancedElectricCircuit::calculatePower() const {
    return current * current * resistance * frequency;
}

std::istream& AdvancedElectricCircuit::read(std::istream& in) {
    std::cout << "Введите ток в амперах: ";
    in >> current;
    std::cout << "Введите сопротивление резистора R1 в омах: ";
    in >> resistance;
    std::cout << "Введите частоту колебаний сети Гц: ";
    in >> frequency;
    std::cout << "Введите режим работы электрической цепи (AC или DC): ";
    in >> mode;
    return in;
}

std::ostream& AdvancedElectricCircuit::print(std::ostream& out) const {
    out << "Ток в амперах: " << current << std::endl;
    out << "Сопротивление резистора R1 в омах: " << resistance << std::endl;
    out << "Частота колебаний сети в Гц: " << frequency << std::endl;
    out << "Режим работы электрической цепи: " << mode << std::endl;
    out << "Мощность на участке электрической цепи в ваттах: "
        << calculatePower() << std::endl;
    return out;
}

AdvancedElectricCircuit& AdvancedElectricCircuit::operator=(const AdvancedElectricCircuit& other) {
    if (this != &other) {
        current = other.current;
        resistance = other.resistance;
        frequency = other.frequency;
        mode = other.mode;
    }
    return *this;
}

bool AdvancedElectricCircuit::operator==(const AdvancedElectricCircuit& other) const {
    return current == other.current && resistance == other.resistance &&
           frequency == other.frequency && mode == other.mode;
}