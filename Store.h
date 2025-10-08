#pragma once
#include "Overcoat.h"
#include <vector>
class Store {
private:
    std::vector<Overcoat> items;
public:
    void addItem(const Overcoat& o);
    void removeItem(int index);
    void increaseSize(int index);
    void decreaseSize(int index);
    void searchByType(const std::string& type) const;
    void sortByPrice();
    void showAll() const;
};