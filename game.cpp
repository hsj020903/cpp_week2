#include <iostream>
using namespace std;
int game(int number[3]){
    bool play = true;
    int a, b, c;
    int strik = 0; 
    int ball = 0;
    int count = 5;
    while (play){
        cout << count << " chances left." << endl;
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
        count--;
        if(strik == 3)
            return 1;
        
        else if(count == 0){
            cout << "Strikes: " << strik << ", " << "Balls: " << ball << endl;
            return 0;
        }
        else{
            cout << "Strikes: " << strik << ", " << "Balls: " << ball << endl;
            strik = 0;
            ball = 0;
        }

    }

}