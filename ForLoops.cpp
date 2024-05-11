#include <iostream>

using namespace std;

int main() {
    int water = 0;
    
    for (int i = 0; i < 11; i++){
        cout << "water coming! ";
        water++;
        cout << "water = " << water << endl;
    }

    for (int i = 3; i > 0; i--){
        cout << i << "! ";
    }
    cout << endl; 
    cout << water << " waters!" << endl;
}