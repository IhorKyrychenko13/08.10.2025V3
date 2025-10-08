#include "Overcoat.h"
using namespace std;
int Overcoat::counter = 1;
Overcoat::Overcoat(string name, string type, int size, double price)
    : name(name), type(type), size(size), price(price), itemNumber(counter++) {
}
string Overcoat::getType() const { return type; }
double Overcoat::getPrice() const { return price; }
int Overcoat::getSize() const { return size; }
void Overcoat::setSize(int newSize) { size = newSize; }
bool Overcoat::operator==(const Overcoat& other) const {
    return type == other.type;
}
bool Overcoat::operator!=(const Overcoat& other) const {
    return !(*this == other);
}
bool Overcoat::operator>(const Overcoat& other) const {
    return price > other.price;
}
bool Overcoat::operator<(const Overcoat& other) const {
    return price < other.price;
}
Overcoat& Overcoat::operator++() {
    ++size;
    return *this;
}
Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++size;
    return temp;
}
Overcoat& Overcoat::operator--() {
    --size;
    return *this;
}
Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --size;
    return temp;
}
ostream& operator<<(ostream& os, const Overcoat& o) {
    os << "����� �" << o.itemNumber << ": " << o.name
        << " (" << o.type << "), �����: " << o.size
        << ", ֳ��: " << o.price << " ���";
    return os;
}
istream& operator>>(istream& is, Overcoat& o) {
    cout << "�����: "; is >> o.name;
    cout << "��� (��������/������/�������): "; is >> o.type;
    cout << "�����: "; is >> o.size;
    cout << "ֳ��: "; is >> o.price;
    return is;
}