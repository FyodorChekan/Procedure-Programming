#define _USE_MATH_DEFINES
#define M_PI

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief ������� ������ ������� ������������
* \param FirstSide ����� ������ ������� ������������
* \param SecondSide ����� ������ ������� ������������
* \param z ���� ����� ����� ���������
* \return ����� ������� ������� ������������
*/
double getThirdSideOfTheTriangle(double FirstSide, double SecondSide, double z);

/*
* \brief ������� ������� ������������
* \param FirstSide ����� ������ ������� ������������
* \param SecondSide ����� ������ ������� ������������
* \param z ���� ����� ����� ���������
* \return ������� ������������
*/
double getAreaOfTheTriangle(double FirstSide, double SecondSide, double z);

/*
* \brief ������� ������ ��������� ����������
* \param FirstSide ����� ������ ������� ������������
* \param SecondSide ����� ������ ������� ������������
* \param ThirdSide ����� ������� ������� ������������
* \param Area ������� ������������
* \return ������� ������������
*/
double getRadiusOfTheCircumscribedCircle(double ThirdSide, double z);

int main()
{
	setlocale(LC_ALL, "Russian");
	double FirstSide, SecondSide, z;
	cout << "����� ������ ������� ������������ �����: "; cin >> FirstSide;
	cout << "����� ������ ������� ������������ �����: "; cin >> SecondSide;
	cout << "���� ����� ����� ��������� �����: "; cin >> z;

	double ThirdSide = getThirdSideOfTheTriangle(FirstSide, SecondSide, z);
	double Area = getAreaOfTheTriangle(FirstSide, SecondSide, z);
	double Radius = getRadiusOfTheCircumscribedCircle(ThirdSide, z);

	cout << "����� ������� ������� ������������ �����: " << ThirdSide << ", ������� ������������ �����: " << Area << ", ������ ��������� ���������� �����: " << Radius;

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