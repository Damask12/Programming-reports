#include <iostream>
#include <vector>
#include <algorithm>

class Firm {
private:
    std::string country;
    std::string equipmentType;

public:
    Firm(std::string cntr, std::string eType) {
        country = cntr;
        equipmentType = eType;
    }

    std::string getcountry() const {
        return country;
    }

    std::string getequipmentType() const {
        return equipmentType;
    }

    void displayInfo() const {
        std::cout << "Country: " << country << std::endl;
        std::cout << "Equipment Type: " << equipmentType << std::endl;
    }
};

int main() {
    std::vector<Firm> firms;
    firms.emplace_back("Germany", "Cars");
    firms.emplace_back("USA", "Technique");
    firms.emplace_back("Germany", "Medicines");

    std::vector<Firm> newFirms;

    for (const Firm& lib : firms) {
        if (lib.getcountry() == "Germany") {
            newFirms.push_back(lib);
        }
    }

    if (!newFirms.empty()) {
        std::sort(newFirms.begin(), newFirms.end(), 
            [](const Firm& a, const Firm& b) {
                return a.getequipmentType() < b.getequipmentType();
            });

        for (const Firm& lib : newFirms) {
            lib.displayInfo();
            std::cout << "--------------------------" << std::endl;
        }
    } else {
        std::cout << "New vector is empty." << std::endl;
    }

    return 0;
}