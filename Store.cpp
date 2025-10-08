#include "Store.h"
#include <iostream>
#include <algorithm>
using namespace std;
void Store::addItem(const Overcoat& o) {
    items.push_back(o);
}
void Store::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    }
}
void Store::increaseSize(int index) {
    if (index >= 0 && index < items.size()) {
        items[index]++;
    }
}
void Store::decreaseSize(int index) {
    if (index >= 0 && index < items.size()) {
        items[index]--;
    }
}
void Store::searchByType(const string& type) const {
    for (const auto& item : items) {
        if (item.getType() == type) {
            cout << item << "\n";
        }
    }
}
void Store::sortByPrice() {
    sort(items.begin(), items.end(), [](const Overcoat& a, const Overcoat& b) {
        return a.getPrice() < b.getPrice();
        });
}
void Store::showAll() const {
    for (const auto& item : items) {
        cout << item << "\n";
    }
}