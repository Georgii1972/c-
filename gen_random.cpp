#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()

{
    srand(time(NULL));
  // Получить случайное число
  int x;
  x = rand();
  cout << "x = " << x << endl;

  // Получить еще одно случайное число
  int y;
  y = rand();
  cout << "y = " << y << endl;
}

