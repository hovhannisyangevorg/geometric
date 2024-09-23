#include "../incs/InputHandler.hpp"

InputHandler::InputHandler() {}
InputHandler::~InputHandler() {}

void InputHandler::getInput() {
    std::cout << "Enter your geometric image type: ";
    std::getline(std::cin, this->GeometricImageType); // Read input into geometricImageType
}

std::string InputHandler::GetGeometricImageType() const {
    return (this->GeometricImageType);
}

void InputHandler::display() const {
    std::cout << "Geometric Image Type: " << this->GeometricImageType << std::endl;
}