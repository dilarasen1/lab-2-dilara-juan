#include "Furniture.h"

class Sofa : public Furniture {
private:
    // Attributes specific to Sofa class
    int numOfSofaSeats;             // Number of seats that the sofa has
    std::string styleOfSofa;    // The sofa's style
    bool sofaConvertible;           // Whether it can convert into a bed or not
    std::string sofaFrameMaterial;  // Type of material used for the frame

public:
    // Constructor
    Sofa(std::string n, double p, int q, int seats, std::string style, bool isConvertible, std::string frameMaterial)
        : Furniture(n, p, q), numOfSofaSeats(seats), styleOfSofa(style), sofaConvertible(isConvertible), sofaFrameMaterial(frameMaterial) {}
    
    // Getter and setter methods
    int getNumOfSofaSeats() const { return numOfSofaSeats; }
    void setNumOfSofaSeats(int seats) { numOfSofaSeats = seats; }

    std::string getStyleOfSofa() const { return styleOfSofa; }
    void setStyleOfSoda(const std::string& style) { styleOfSofa = style; }

    bool getSofaConvertible() const { return sofaConvertible; }
    void setSofaConvertible(bool isConvertible) { sofaConvertible = isConvertible; }

    std::string getSofaFrameMaterial() const { return sofaFrameMaterial; }
    void setSofaFrameMaterial(const std::string& frameMaterial) { sofaFrameMaterial = frameMaterial; }

    // Display method
    void display() const override {
        Furniture::display();
        std::cout << "Number of Sofa Seats: " << numOfSofaSeats << std::endl;
        std::cout << "Style of Sofa: " << styleOfSofa << std::endl;
        std::cout << "Sofa Convertible: " << sofaConvertible << std::endl;
        std::cout << "Sofa Frame Material: " << sofaFrameMaterial << std::endl;
    }
};
