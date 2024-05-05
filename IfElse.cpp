#include <iostream>
#include <math.h>
using namespace std;

// not can also be as '!'(negation), and as '&&'(all true = true, one false = false), or as '||'(if one true = true, if all false = false)

int main(){
/*
    bool alive = true;
    bool tired = false;
    if (alive){
        cout << "youre alive :)" << endl;
        if (!tired){
            cout << "and full of energy !!" << endl;
        }
        else{
            cout << "but not with so much energy.." << endl;
        }
    }
    else{
        cout << "youre dead :(" << endl;
        if (!tired){
            cout << "and resting.." << endl;
        }
    }
}
*/
    int money = 674;
    if (money >= 1000){
        cout << "you saved lots of money!" << endl << "money: " << money << endl;
    } else if (800 <= money < 1000){
        cout << "you can live pretty well" << endl << "money: " << money << endl;
    } else if (500 <= money < 800){
        cout << "you should sell your house" << endl << "money: " << money << endl;
    } else if (250 <= money < 500){
        cout << "thats really bad.." << endl << "money: " << money << endl;
    } else if (0 <= money < 250){
        cout << "you just cant live with no money" << endl << "money: " << money << endl;
    }
}