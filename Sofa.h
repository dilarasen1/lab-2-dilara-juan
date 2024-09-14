#include "Furniture.h"

class Sofa : public Furniture {
private:
    // Attributes specific to Sofa class
    int numOfSeats;             // Number of seats that the sofa has
    std::string styleOfSofa;    // The sofa's style
    bool convertible;           // Whether it can convert into a bed or not
    std::string frameMaterial;  // Type of material used for the frame

public:
    Sofa(std::string n, double p, int q, int seats)
        : Furniture(n, p, q), numOfSeats(seats) {}
    int getNumOfSeats() const { return numOfSeats; }
    void setNumOfSeats(int seats) { numOfSeats = seats; }
    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << numOfSeats << std::endl;
    }
};
