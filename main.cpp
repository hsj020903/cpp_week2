#include <iostream>
using namespace std;
void game(int number[]);
void util(int number[]);

int main(){
    int number[3];
    util(number);
    cout << "Answer is " << number[0] << number[1] << number[2] << '\n' ;
    game(number);

    cout << "You win!";
        
}