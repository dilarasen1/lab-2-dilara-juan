#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
#include <string>

class Furniture {
protected:
    std::string name;       // Name of furniture
    double price;           // Price of furniture
    int quantity;           // Quantity of furniture
    std::string category;   // Category of furniture
    double height;          // Height of furniture
    double weight;          // Weight of furniture
    int inventoryID;        // New attribute for unique inventory ID

private:
    static int nextID;  // Static class variable to generate unique IDs

public:
    // Constructor to assign inventory ID and increment nextID
    Furniture(std::string n, double p, int q, std::string cat, double h, double w)
        : name(n), price(p), quantity(q), category(cat), height(h), weight(w), inventoryID(nextID++) {}

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Furniture() {}

    // Getters
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    std::string getCategory() const { return category; }
    double getHeight() const { return height; }
    double getWeight() const { return weight; }
    int getInventoryID() const { return inventoryID; }  // Getter for inventoryID

    // Setters
    void setName(const std::string& n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }
    void setCategory(const std::string& cat) { category = cat; }
    void setHeight(double h) { height = h; }
    void setWeight(double w) { weight = w; }

    // Virtual display method
    virtual void display() const {
        std::cout << "Inventory ID: " << inventoryID << std::endl;
        std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << ", Catgeory: " 
                  << category << ", Height: " << height << ", Weight: "
                  << weight << std::endl;
    }
};

// Initialize static variable
int Furniture::nextID = 1;

#endif
