#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int numberOfFlat;
    cout << "Введите номер квартиры: ";
    cin >> numberOfFlat;

    int floorNumber = (numberOfFlat - 1) / 3 + 1;
    int actualFloor = floorNumber * 2 - 1;
    cout << "Лифт должен доставить вас на " << actualFloor << " этаж." << endl;

    return 0;
}
