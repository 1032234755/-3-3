#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std; // ������������� ������������ ���� std

// ������� ��� ���������� �������� ����
double seriesTerm(int k) {
    return 6 * pow(-1, k - 1) / ((2 * k - 1) * (2 * k - 1) * (2 * k - 1));
}

int main() {
    setlocale(LC_ALL, "ru"); // ��������� ������ �� ������� ����

    double sum = 0.0;
    double tolerance = 1e-6; // �������� �� 10^-6
    int k = 1;
    double term;

    cout << setprecision(10);
    do {
        term = seriesTerm(k); // ���������� �������� �������� ����
        sum += term; // ���������� �������� � �����
        k++;
    } while (abs(term) > tolerance); // �������� �� ��������

    cout << "����� ��������� ����: " << sum << endl;

    return 0;
}
