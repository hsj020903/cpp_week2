#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void util(int number[3]) {
    srand(time(NULL));
    int a, b;

	number[0] = rand() % 10;
    number[1] = rand() % 10;
    number[2] = rand() % 10;
    
    while (number[0] == number[1]){
        number[1] = rand() % 10;
    }
    while (number[0] == number[2] || number[1] == number[2]){
        number[2] = rand() % 10;
    }
}
