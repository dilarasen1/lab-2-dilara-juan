#include "Furniture.h"

class Table : public Furniture {
private:
    int numOfLegs;          // Number of legs that it has
    bool foldable;          // Whether it can be folded or not
    std::string material;   // Material it is made out of
    int numOfChairs;        // Number of chairs that can fit

public:
    Table(std::string n, double p, int q, int legs)
        : Furniture(n, p, q), numOfLegs(legs) {}
    int getNumOfLegs() const { return numOfLegs; }
    void setNumOfLegs(int legs) { numOfLegs = legs; }
    void display() const override {
        Furniture::display();
        std::cout << "Number of Legs: " << numOfLegs << std::endl;
    }
};
