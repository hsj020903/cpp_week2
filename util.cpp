#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void util(int number[3]) {
    srand(time(NULL));
	number[0] = rand() % 10;
   
    number[1] = rand() % 10;

    number[2] = rand() % 10;
}
