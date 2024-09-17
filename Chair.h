#ifndef CHAIR_H
#define CHAIR_H

#include "Furniture.h"

class Chair : public Furniture {
private:
    // Attributes specific to Chair class
    bool hasArmrest; // Does the bed have armrests?
    bool doesRecline; // Does the chair recline?
    std::string chairMaterial; // Material the chair is made out of
    int chairNumOfLegs; // Number of legs the chair has

public:
    // Constructor
    Chair(std::string n, double p, int q, std::string cat, double h, double w, bool armrest, bool recline, std::string material, int numLegs)
        : Furniture(n, p, q, cat, h, w), hasArmrest(armrest), doesRecline(recline), chairMaterial(material), chairNumOfLegs(numLegs) {}

    //Getter and setter methods
    bool getHasArmrest() const { return hasArmrest; }
    void setHasArmrest(bool armrest) { hasArmrest = armrest; }

    bool getDoesRecline() const { return doesRecline; }
    void setDoesRecline(bool recline) { doesRecline = recline; }

    std::string getChairMaterial() const { return chairMaterial; }
    void setChairMaterial(const std::string material) { chairMaterial = material; }

    int getChairNumOfLegs() const { return chairNumOfLegs; }
    void setChairNumOfLegs(int numLegs) { chairNumOfLegs = numLegs; }

    // Display method
    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Does the chair have an armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
        std::cout << "Does the chair recline: " << (doesRecline ? "Yes" : "No") << std::endl;
        std::cout << "Chair material: " << chairMaterial << std::endl;
        std::cout << "Number of chair legs: " << chairNumOfLegs << std::endl;
    }
};

#endif
