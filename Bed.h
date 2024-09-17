#ifndef BED_H
#define BED_H

#include "Furniture.h"

class Bed : public Furniture {
private:
    // Attributes specific to Bed class
    std::string bedSize;            // Size of the bed
    std::string bedFrameMaterial;   // Material that the frame is made out of
    std::string bedStyle;           // Style of the bed
    bool bedStorage;                // Whether it has storage or not
    std::string bedColor;           // Color of the bed frame

public:
    // Constructor
    Bed(std::string n, double p, int q, std::string cat, double h, double w, std::string size, std::string frameMaterial, std::string style, bool storage, std::string color)
        : Furniture(n, p, q, cat, h, w), bedSize(size), bedFrameMaterial(frameMaterial), bedStyle(style), bedStorage(storage), bedColor(color) {}
    
    // Getter and setter methods
    std::string getBedSize() const { return bedSize; }
    void setBedSize(const std::string size) { bedSize = size; }

    std::string getBedFrameMaterial() const { return bedFrameMaterial; }
    void setBedFrameMaterial(const std::string frameMaterial) { bedFrameMaterial = frameMaterial; }

    std::string getBedStyle() const { return bedStyle; }
    void setBedStyle(const std::string style) { bedStyle = style; }

    bool getBedStorage() const { return bedStorage; }
    void setBedStorage(bool storage) { bedStorage = storage; }

    std::string getBedColor() const { return bedColor; }
    void setBedColor(const std::string color) { bedColor = color; }

    // Display method
    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << bedSize << std::endl;
        std::cout << "Number of Seats: " << bedFrameMaterial << std::endl;
        std::cout << "Number of Seats: " << bedStyle << std::endl;
        std::cout << "Number of Seats: " << bedStorage << std::endl;
        std::cout << "Number of Seats: " << bedColor << std::endl;
    }
};

#endif
