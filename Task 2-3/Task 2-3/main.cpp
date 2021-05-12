#include <iostream>

using namespace std;

/*
* \brief Вывод формулы площади треугольника
*/
void triangle();

/*
* \brief Вывод формулы площади прямоугольника
*/
void rectangle();

/*
* \brief Вывод формулы площади квадрата
*/
void square();

/*
* \brief Точка входа в программу
* \return 0 в случае успеха
*/
int main()
{
    int input;

    cout << "1. Triangle area\n";
    cout << "2. Rectangle area\n";
    cout << "3. Square area\n";
    cout << "Selection: ";
    cin >> input;
    switch (input) {
    case 1:
        triangle();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        square();
        break;
    default:
        cout << "Error, bad input, quitting\n";
        break;
    }
    cin.get();
}

void triangle()
{
    cout << "Triangle area: first side * second side * sine of the angle between these sides or side * side elevation / 2.0";
}

void rectangle()
{
    cout << "Rectangle area: first side * second side";
}

void square()
{
    cout << "Square area: side * side";
}