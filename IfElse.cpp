#include <iostream>
#include <math.h>
using namespace std;

int main(){
    bool alive = true;
    bool tired = false;
    if (alive){
        cout << "youre alive :)" << endl;
        if (not tired){
            cout << "and full of energy !!" << endl;
        }
        else{
            cout << "but not with so much energy.." << endl;
        }
    }
    else{
        cout << "youre dead :(" << endl;
        if (not tired){
            cout << "and resting.." << endl;
        }
    }
}