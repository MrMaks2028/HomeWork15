#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m = 1;
	int a[10][10];

	cout << "�������.\n����������� ������:\n";
	for (int i = 0; i < 10; i++) {
		cout << "[";
		for (int j = 0; j < 10; j++) {
			a[i][j] = -1 + rand() % 100 + 1;
			cout << a[i][j] << ", ";

		}
		cout << "\b\b]\n";
	}

	cout << "������ 1.\n����� ���� ��������� ������� ���� �������: \n";
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sum += a[i][j];
		}
		cout << m << " - ���: " << sum << endl;
		sum = 0, m++;
	}

	cout << "������ 2.\n������� ����� ���� �������:";
	cin >> n;

	for (int i = 10 - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (a[n][j] > a[n][j + 1])
				swap(a[n][j], a[n][j + 1]);


	cout << "��������������� " << n << " ��� �������:\n";
	cout << "[";
	for(int i = 0; i < 10; i++)
		cout << a[n][i] << ", ";
	cout << "\b\b]\n";
	
	return 0;
}