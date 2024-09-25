#include <iostream>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutPutCP(1251);

    int number;
    int sum = 0;

    std::cout << "Введите числа (введите 0 для выхода):" << std::endl;

    while (true) {
        std::cin >> number; // Получаем число от пользователя
        if (number == 0) {  // Проверяем, не равно ли оно 0
            break;          // Выходим из цикла, если 0
        }
        sum += number;     // Добавляем число к сумме
    }

    std::cout << "Сумма всех введенных чисел: " << sum << std::endl; // Выводим сумму
    return 0;
}