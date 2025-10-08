#pragma once
#include <string>
#include <iostream>
class Overcoat {
private:
    std::string name;
    std::string type;
    int size;
    double price;
    int itemNumber;
    static int counter;
public:
    Overcoat(std::string name, std::string type, int size, double price);
    std::string getType() const;
    double getPrice() const;
    int getSize() const;
    void setSize(int newSize);
    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    Overcoat& operator++();    
    Overcoat operator++(int);   
    Overcoat& operator--();     
    Overcoat operator--(int);   
    friend std::ostream& operator<<(std::ostream& os, const Overcoat& o);
    friend std::istream& operator>>(std::istream& is, Overcoat& o);
};