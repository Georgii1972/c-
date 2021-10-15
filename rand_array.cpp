#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include <string.h>
using namespace std;


  

int main(){
     
 int a;
srand(time(0));
a = 0 + rand()% 10;
string names[] = { "Собака", "Кот", "Слон", "Корова", "Журавль", "Бегемот", "Жираф", "Петух", "Курица", "Носорог" }; 

cout<<names[a];

}