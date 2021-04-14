#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

/*
* \brief ������� ������ ������� ������������
* \param power �������� ���� ����
* \param work �������� ����������� ������
* \return ����, ���������� �����������
*/
double getDistance(double power, double work);

/*
* \brief ���� � ���������
* \return � ������ ������, ���������� 0
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