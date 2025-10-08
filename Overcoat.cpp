#include "Overcoat.h"
using namespace std;
int Overcoat::counter = 1;
Overcoat::Overcoat(string name, string type, int size, double price)
    : name(name), type(type), price(price), itemNumber(counter++) {
    setSize(size);
}
string Overcoat::getType() const { return type; }
double Overcoat::getPrice() const { return price; }
int Overcoat::getSize() const { return size; }
void Overcoat::setSize(int newSize) {
    if (newSize >= MIN_SIZE && newSize <= MAX_SIZE && newSize % 2 == 0) {
        size = newSize;
    }
    else {
        size = DEFAULT_SIZE;
    }
}
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
    if (size + 2 <= MAX_SIZE) size += 2;
    return *this;
}
Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    if (size + 2 <= MAX_SIZE) size += 2;
    return temp;
}
Overcoat& Overcoat::operator--() {
    if (size - 2 >= MIN_SIZE) size -= 2;
    return *this;
}
Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    if (size - 2 >= MIN_SIZE) size -= 2;
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
    cout << "����� (����� �����): "; is >> o.size;
    cout << "ֳ��: "; is >> o.price;
    o.setSize(o.size);
    return is;
}