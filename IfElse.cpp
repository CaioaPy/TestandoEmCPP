#include <iostream>
#include <math.h>
using namespace std;

// not can also be as '!'(negation), and as '&&'(all true = true, one false = false), or as '||'(if one true = true, if all false = false)

int main(){
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