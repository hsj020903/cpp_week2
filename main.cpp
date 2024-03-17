#include <iostream>
using namespace std;
void game(int number[]);
void util(int number[]);

int main(){
    int number[3];
    util(number);
    game(number);

    cout << "You win!";
        
}