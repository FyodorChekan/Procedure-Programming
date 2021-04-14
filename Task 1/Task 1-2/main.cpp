#define _USE_MATH_DEFINES
#define M_PI

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief Находит третью сторону треугольника
* \param firstSide Длина первой стороны треугольника
* \param secondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Длина третьей стороны треугольника
*/
double getThirdSideTriangle(double firstSide, double secondSide, double z);

/*
* \brief Находит площадь треугольника
* \param firstSide Длина первой стороны треугольника
* \param secondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Площадь треугольника
*/
double getAreaTriangle(double firstSide, double secondSide, double z);

/*
* \brief Находит радиус описанной окружности
* \param firstSide Длина первой стороны треугольника
* \param secondSide Длина второй стороны треугольника
* \param thirdSide Длина третьей стороны треугольника
* \param area Площадь треугольника
* \return Площадь треугольника
*/
double getRadiusCircumscribedCircle(double thirdside, double z);

/*
* \brief Переводит градусы в радианы
* \param z Градусная мера угла
* \return Угол в радианах
*/double getToRadians(double z);

/*
* \brief Вход в программу
* \return в случае успеха, возвращает 0
*/

int main()
{
	double firstSide, secondSide, z;
	cout << "Length first side: "; cin >> firstSide;
	cout << "Length second side: "; cin >> secondSide;
	cout << "Angle between the sides: "; cin >> z;

	const double rad = getToRadians(z);
	const double thirdSide = getThirdSideTriangle(firstSide, secondSide, rad);
	const double area = getAreaTriangle(firstSide, secondSide, rad);
	const double radius = getRadiusCircumscribedCircle(thirdSide, rad);

	cout << "Length of the third side: " << thirdSide << ", Area of the triangle: " << area << ", Radius of the circumscribed circle: " << radius;

	return 0;
}

double getThirdSideTriangle(double firstSide, double secondSide, double rad)
{
	return sqrt(pow(firstSide, 2) + pow(secondSide, 2) - 2 * firstSide * secondSide * cos(rad)); //Третью сторону треугольника находим по теореме косинусов
}

double getAreaTriangle(double firstSide, double secondSide, double rad)
{
	return firstSide * secondSide * sin(rad) / 2; //Площадь находим с помощью формулы полупроизведения двух сторон на синус угла между ними
}

double getRadiusCircumscribedCircle(double thirdSide, double rad)
{
	return thirdSide / (2 * sin(rad)); //Радиус описанной окружности находится из теоремы синусов
}

double getToRadians(double z)
{
	return z * M_PI / 180; //Переводит градусы в радианы для расчета тригонометрических функций
}