#ifndef GEOMETRIC_GEOMETRIC_HPP
#define GEOMETRIC_GEOMETRIC_HPP


class Geometric {
public:
    virtual ~Geometric(); // Virtual destructor to ensure proper cleanup
    virtual void Draw() const = 0; // Pure virtual function
};

class Square : public GeometricImage {
private:

public:
    void Draw() const override {
        std::cout << "Drawing a Square!" << std::endl;
    }
};


#endif
