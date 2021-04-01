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

int main()
{
	setlocale(LC_ALL, "Russian");
	double FirstSide, SecondSide, z;
	cout << "Длина первой стороны треугольника равна: "; cin >> FirstSide;
	cout << "Длина второй стороны треугольника равна: "; cin >> SecondSide;
	cout << "Угол между этими сторонами равен: "; cin >> z;

	double ThirdSide = getThirdSideOfTheTriangle(FirstSide, SecondSide, z);
	double Area = getAreaOfTheTriangle(FirstSide, SecondSide, z);
	double Radius = getRadiusOfTheCircumscribedCircle(ThirdSide, z);

	cout << "Длина третьей стороны треугольника равна: " << ThirdSide << ", Площадь треугольника равна: " << Area << ", Радиус описанной окружности равен: " << Radius;

	return 0;
}

double getThirdSideOfTheTriangle(double FirstSide, double SecondSide, double z)
{
	return sqrt(pow(FirstSide, 2) + pow(SecondSide, 2) - 2 * FirstSide * SecondSide * cos(z*M_PI/180));
}

double getAreaOfTheTriangle(double FirstSide, double SecondSide, double z)
{
	return FirstSide * SecondSide * sin(z*M_PI/180) / 2;
}

double getRadiusOfTheCircumscribedCircle(double ThirdSide, double z)
{
	return ThirdSide / (2 * sin(z * M_PI / 180));
}