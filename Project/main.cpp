#include <iostream>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutPutCP(1251);

    int number;
    int sum = 0;

    std::cout << "������� ����� (������� 0 ��� ������):" << std::endl;

    while (true) {
        std::cin >> number; // �������� ����� �� ������������
        if (number == 0) {  // ���������, �� ����� �� ��� 0
            break;          // ������� �� �����, ���� 0
        }
        sum += number;     // ��������� ����� � �����
    }

    std::cout << "����� ���� ��������� �����: " << sum << std::endl; // ������� �����
    return 0;
}