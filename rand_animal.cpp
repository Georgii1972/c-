#include <iostream>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
#include <time.h> // нужен для вызова функции time()
using namespace std;

// Функция генерирования случайного целочисленного числа в указанных пределах.
// Диапазон чисел: [min, max]
int GetRandomNumber(int min, int max)
{
  // Установить генератор случайных чисел
  srand(time(NULL));

  // Получить случайное число - формула
  int num = min + rand() % (max - min + 1);

  return num;
}

int main()
{
  // Использование функции GetRandomNumber()
  int a;
  a = GetRandomNumber(1, 10); // Диапазон чисел: [1, 10]
  if (a == 1)
    if (a == 1)
    {
        cout << ("Заяц\n");
    }
    if (a == 2)
    {
        cout << ("Олень\n");
    }
    if (a == 3)
    {
        cout << ("Волк\n");
    }
    if (a == 4)
    {
        cout << ("Лягушка\n");
    }
    if (a == 5)
    {
        cout << ("Петух\n");
    }
    if (a == 6)
    {
        cout << ("Бегемот\n");
    }
    if (a == 7)
    {
        cout << ("Мартышка\n");
    }
    if (a == 8)
    {
        cout << ("Слон\n");
    }
    if (a == 9)
    {
        cout << ("Лошадь\n");
    }
    if (a == 10)
    {
        cout << ("Собака\n");
    }
    return main();
}