#ifndef GEOMETRIC_INPUTHANDLER_HPP
#define GEOMETRIC_INPUTHANDLER_HPP

#include <string>
#include <iostream>

class InputHandler {
private:
    std::string GeometricImageType;
public:
    InputHandler();
    ~InputHandler();
    void getInput();
    void display() const;
    std::string GetGeometricImageType() const;
};


#endif //GEOMETRIC_INPUTHANDLER_HPP
