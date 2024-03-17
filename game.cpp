#include <iostream>
using namespace std;

void game(int number[3]){
    bool play = true;
    int a, b, c;
    int strik = 0; 
    int ball = 0;
    while (play){
        cout << "Enter a guess: ";  
        scanf("%1d%1d%1d", &a, &b, &c);
        for(int i = 0; i<3; i++){
            if(number[i] == a){
                 if(i == 0)
                    strik++;
                 else
                    ball++;
            }
            if(number[i] == b){
                 if(i == 1)
                    strik++;
                 else
                    ball++;
            }
            if(number[i] == c){
                 if(i == 2)
                    strik++;
                 else
                    ball++;
            }
        }
        if(strik == 3)
            play = false;
        else{
            cout << "Strikes: " << strik << ", " << "Balls: " << ball << endl;
            strik = 0;
            ball = 0;
        }

    }

}