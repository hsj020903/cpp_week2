#include <iostream>
using namespace std;
void game(int number[]);

int main(){
    int number[3];
    
    cout << "Enter a answer: ";
    scanf("%1d%1d%1d", &number[0], &number[1], &number[2]);
    game(number);

    cout << "You win!";
        
}