#include <iostream>
#include <Windows.h>
#include "Store.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Store store;
    Overcoat o1("Пальто", "жіночий", 42, 1200);
    Overcoat o2("Куртка", "чоловічий", 48, 1500);
    Overcoat o3("Плащ", "дитячий", 36, 800);
    store.addItem(o1);
    store.addItem(o2);
    store.addItem(o3);
    cout << "=== Усі товари ===\n";
    store.showAll();
    cout << "\n=== Пошук жіночого одягу ===\n";
    store.searchByType("жіночий");
    cout << "\n=== Збільшення розміру другого товару ===\n";
    store.increaseSize(1);
    store.showAll();
    cout << "\n=== Сортування за ціною ===\n";
    store.sortByPrice();
    store.showAll();
}