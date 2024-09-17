#ifndef SHELF_H
#define SHELF_H

#include "Furniture.h"

class Shelf : public Furniture {
private:
    // Attributes specific to Chair class
    int numOfHeights; // How many heights does the shelf have?
    bool insideAcabinet; // Is the shelf inside a cabinet?
    std::string shelfMaterial; // Material the shelf is made out of
    double shelfLength; // Length of the shelf
    bool mountedToWall; // Is the shelve mounted to the wall?

public:
    // Constructor
    Shelf(std::string n, double p, int q, std::string cat, double h, double w, int heights, bool inside, std::string material, double length, bool mounted)
        : Furniture(n, p, q, cat, h, w), numOfHeights(heights), insideAcabinet(inside), shelfMaterial(material), mountedToWall(mounted) {}

    //Getter and setter methods
    int getNumOfHeights() const { return numOfHeights; }
    void setNumOfHeights(int heights) { numOfHeights = heights; }

    bool getInsideAcabinet() const { return insideAcabinet; }
    void setInsideAcabinet(bool inside) { insideAcabinet = inside; }

    std::string getShelfMaterial() const { return shelfMaterial; }
    void setShelfMaterial(const std::string material) { shelfMaterial = material; }

    double getShelfLength() const { return shelfLength; }
    void setShelfLength(double length) { shelfLength = length; }

    bool getMountedToWall() const { return mountedToWall; }
    void setMountedToWall(bool mounted) { mountedToWall = mounted; }

    // Display method
    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "How many heights does the shelf have: " << numOfHeights << std::endl;
        std::cout << "Is the shelf inside a cabinet: " << (insideAcabinet ? "Yes" : "No") << std::endl;
        std::cout << "Material of the shelf: " << shelfMaterial << std::endl;
        std::cout << "Length of the shelf: " << shelfLength << std::endl;
        std::cout << "Is the shelf mounted to the wall: " << (mountedToWall ? "Yes" : "No") << std::endl;
    }
};

#endif
