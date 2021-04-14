#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

/*
* \brief Находит третью сторону треугольника
* \param power Значение силы тяги
* \param work Значение совершённой работы
* \return Путь, пройденный автомобилем
*/
double getDistance(double power, double work);

/*
* \brief Вход в программу
* \return в случае успеха, возвращает 0
*/

int main()
{
	double power, work;
	cout << "The value of power: "; cin >> power;
	cout << "The value of work: "; cin >> work;

	const double distance = getDistance(power, work);

	cout << "Distance: " << distance;

	return 0;
}

double getDistance(double power, double work)
{
	return work * 10 * 10 * 10 / power;
}