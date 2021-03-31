#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief ������� �������� a
* \param x �������� x
* \param y �������� z
* \param z �������� y
* \return �������� a
*/
double getA(const double x, const double y, const double z);

/*
* \brief ������� �������� b
* \param x �������� y
* \param y �������� x
* \param z �������� z
* \return �������� b
*/
double getB(const double x, const double y, const double z);

/*
* \brief ���� � ���������
* \return � ������ ������, ���������� 0
*/

int main()
{
	const auto x = 0.5;
	const auto y = 0.05;
	const auto z = 0.7;

	const auto a = getA(x, y, z);
	const auto b = getB(x, y, z);

	cout << " x = " << x << ", y = " << y << ", z = " << z << "\n";
	cout << " a = " << a << ", b = " << b;

	return 0;
}

double getA(const double x, const double y, const double z)
{
	return x * x * (x + 1) / (y - pow(sin(x + z),2));
}

double getB(const double x, const double y, const double z)
{
	return sqrt(x * y / z) + pow(cos((x+y)*(x+y)),2);
}