#define _USE_MATH_DEFINES
#define M_PI

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief Находит третью сторону треугольника
* \param firstside Длина первой стороны треугольника
* \param secondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Длина третьей стороны треугольника
*/
double getThirdSideTriangle(double firstside, double secondside, double z);

/*
* \brief Находит площадь треугольника
* \param firstSide Длина первой стороны треугольника
* \param secondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Площадь треугольника
*/
double getAreaTriangle(double firstside, double secondside, double z);

/*
* \brief Находит радиус описанной окружности
* \param firstside Длина первой стороны треугольника
* \param secondside Длина второй стороны треугольника
* \param thirdside Длина третьей стороны треугольника
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
	double firstside, secondside, z;
	cout << "Length first side: "; cin >> firstside;
	cout << "Length second side: "; cin >> secondside;
	cout << "Angle between the sides: "; cin >> z;

	const double Rad = getToRadians(z);
	const double ThirdSide = getThirdSideTriangle(firstside, secondside, Rad);
	const double Area = getAreaTriangle(firstside, secondside, Rad);
	const double Radius = getRadiusCircumscribedCircle(ThirdSide, Rad);

	cout << "Length of the third side: " << ThirdSide << ", Area of the triangle: " << Area << ", Radius of the circumscribed circle: " << Radius;

	return 0;
}

double getThirdSideTriangle(double firstside, double secondside, double Rad)
{
	return sqrt(pow(firstside, 2) + pow(secondside, 2) - 2 * firstside * secondside * cos(Rad)); //Третью сторону треугольника находим по теореме косинусов
}

double getAreaTriangle(double firstside, double secondside, double Rad)
{
	return firstside * secondside * sin(Rad) / 2; //Площадь находим с помощью формулы полупроизведения двух сторон на синус угла между ними
}

double getRadiusCircumscribedCircle(double ThirdSide, double Rad)
{
	return ThirdSide / (2 * sin(Rad)); //Радиус описанной окружности находится из теоремы синусов
}

double getToRadians(double z)
{
	return z * M_PI / 180; //Переводит градусы в радианы для расчета тригонометрических функций
}