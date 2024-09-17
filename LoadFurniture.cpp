// 
#include "Furniture.h"
#include "Bed.h"
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"
#include "Shelf.h"

// Standard headers
#include <cassert>
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Picks the data file and assigns it to testFile
    std::string testFile = "furnituredata.txt";
    
    // Creats ifstream object for the file
    std::ifstream file(testFile);

    // Opens the text file
    if (!file.is_open()) {
        // Returns error if file doesn't open and exits the program
        std::cout << "Error opening the file." << std::endl;
        return 1;
    }

    // Assigns furnitureItem to store each line from the file
    std::string furnitureItem;

    // Read the file line by line
    while (std::getline(file, furnitureItem)) {
        // Create and construct appropriate class
        // Calls display
    }

    // Closes the file
    file.close();

    return 0;
}
