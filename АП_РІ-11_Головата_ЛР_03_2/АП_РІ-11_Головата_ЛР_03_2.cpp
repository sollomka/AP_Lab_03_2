// Lab 3_2.cpp
// �������� ����쳿
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 5


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;  // ������� ��������
	double a;  // ������� ��������
	double b;  // ������� ��������
	double c;   // ������� ��������
	double F;   // ��������� ���������� ������

	cout << "x = "; cin >> x; cout << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;

	// ������������ � ��������� ����
	if (x < 0 && b != 0)
		F = a - (x / (10 + b));
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = (3 * x) + (2 / c);

	cout << endl;
	cout << "1) F = " << F << endl;

	// ������������ � ����� ����
	if (x < 0 && b != 0)
		F = a - (x / (10 + b));
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = (3 * x) + (2 / c);

	cout << "2) F = " << F << endl;

	system("pause");
	return 0;
}