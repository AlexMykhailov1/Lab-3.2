//Project3.2.cpp
//�������� ���������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
//������ 19

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x, a, b, c, F;

	cout << "a = "; cin >> a; 
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < 5 && b != 0)
		F = a * (x + 7) * (x + 7) - b;
	if (x > 5 && b == 0)
		F = (x - c * b) / a * x;
	if (!(x < 5 && b != 0) && !(x > 5 && b == 0))
		F = x / c;

	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ����� ����
	if (x < 5 && b != 0)
		F = a * (x + 7) * (x + 7) - b;
	else
		if (x > 5 && b == 0)
			F = (x - c * b) / a * x;
		else
			F = x / c;

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}