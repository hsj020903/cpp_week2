#include <iostream>
using namespace std;
int game(int number[]);
void util(int number[]);

int main(){
    int number[3];
    
    util(number);
    int a = game(number);

    if(a == 1)
        cout << "You win!";
    if(a == 0)
        cout << "You Lose!";
        
}