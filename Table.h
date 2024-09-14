#include "Furniture.h"

class Table : public Furniture {
private:
    // Attributes specific to Table class
    int numOfTableLegs;          // Number of legs that it has
    bool tableFoldable;          // Whether it can be folded or not
    std::string tableMaterial;   // Material it is made out of
    int tableNumOfChairs;        // Number of chairs that can fit

public:
    // Constructor
    Table(std::string n, double p, int q, int legs, bool isFoldable, std::string material, int numOfChairs)
        : Furniture(n, p, q), numOfTableLegs(legs), tableFoldable(isFoldable), tableMaterial(material), tableNumOfChairs(numOfChairs) {}

    // Getter and setter methods
    int getNumOfTableLegs() const { return numOfTableLegs; }
    void setNumOfTableLegs(int legs) { numOfTableLegs = legs; }

    bool getTableFoldable() const { return tableFoldable; }
    void setTableFoldable(bool isFoldable) { tableFoldable = isFoldable; }

    std::string getTableMaterial() const { return tableMaterial; }
    void setTableMaterial(const std::string material) { tableMaterial = material; }

    int gettableNumOfChairs() const { return tableNumOfChairs; }
    void settableNumOfChairs(int numOfChairs) { tableNumOfChairs = numOfChairs; }

    // Display method
    void display() const override {
        Furniture::display();
        std::cout << "Number of Table Legs: " << numOfTableLegs << std::endl;
        std::cout << "Table Foldable: " << tableFoldable << std::endl;
        std::cout << "Table Material: " << tableMaterial << std::endl;
        std::cout << "Number of Chairs That Fit at Table: " << tableNumOfChairs << std::endl;
    }
};
