#define _USE_MATH_DEFINES
#define M_PI

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief Находит третью сторону треугольника
* \param FirstSide Длина первой стороны треугольника
* \param SecondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Длина третьей стороны треугольника
*/
double getThirdSideOfTheTriangle(double FirstSide, double SecondSide, double z);

/*
* \brief Находит площадь треугольника
* \param FirstSide Длина первой стороны треугольника
* \param SecondSide Длина второй стороны треугольника
* \param z Угол между этими сторонами
* \return Площадь треугольника
*/
double getAreaOfTheTriangle(double FirstSide, double SecondSide, double z);

/*
* \brief Находит радиус описанной окружности
* \param FirstSide Длина первой стороны треугольника
* \param SecondSide Длина второй стороны треугольника
* \param ThirdSide Длина третьей стороны треугольника
* \param Area Площадь треугольника
* \return Площадь треугольника
*/
double getRadiusOfTheCircumscribedCircle(double ThirdSide, double z);

/*
* \brief Вход в программу
* \return в случае успеха, возвращает 0
*/

int main()
{
	double FirstSide, SecondSide, z;
	cout << "Length of the first side: "; cin >> FirstSide;
	cout << "Length of the second side: "; cin >> SecondSide;
	cout << "Angle between the sides: "; cin >> z;

	const double ThirdSide = getThirdSideOfTheTriangle(FirstSide, SecondSide, z);
	const double Area = getAreaOfTheTriangle(FirstSide, SecondSide, z);
	const double Radius = getRadiusOfTheCircumscribedCircle(ThirdSide, z);

	cout << "Length of the third side: " << ThirdSide << ", Area of the triangle: " << Area << ", Radius of the circumscribed circle: " << Radius;

	return 0;
}

double getThirdSideOfTheTriangle(double FirstSide, double SecondSide, double z)
{
	return sqrt(pow(FirstSide, 2) + pow(SecondSide, 2) - 2 * FirstSide * SecondSide * cos(z*M_PI/180)); //Третью сторону треугольника находим по теореме косинусов
}

double getAreaOfTheTriangle(double FirstSide, double SecondSide, double z)
{
	return FirstSide * SecondSide * sin(z*M_PI/180) / 2; //Площадь находим с помощью формулы полупроизведения двух сторон на синус угла между ними
}

double getRadiusOfTheCircumscribedCircle(double ThirdSide, double z)
{
	return ThirdSide / (2 * sin(z * M_PI / 180)); //Радиус описанной окружности находится из теоремы синусов
}