#include "Furniture.h"

class Bed : public Furniture {
private:
    // Attributes specific to Bed class
    int numOfSeats;//delete this
    std::string bedSize;            // Size of the bed
    std::string bedFrameMaterial;   // Material that the frame is made out of
    std::string bedStyle;           // Style of the bed
    bool bedStorage;                // Whether it has storage or not
    std::string bedColor;           // Color of the bed frame

public:
    Bed(std::string n, double p, int q, int seats)
        : Furniture(n, p, q), numOfSeats(seats) {}
    int getNumOfSeats() const { return numOfSeats; }
    void setNumOfSeats(int seats) { numOfSeats = seats; }
    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << numOfSeats << std::endl;
    }
};
