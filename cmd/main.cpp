#include "../incs/InputHandler.hpp"

int main() {
    InputHandler handler;
    handler.getInput();
    handler.GetGeometricImageType();

    std::cout << handler.GetGeometricImageType() << "\n";

}