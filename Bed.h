#include "Furniture.h"

class Bed : public Furniture {
private:
    int numOfSeats;

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
