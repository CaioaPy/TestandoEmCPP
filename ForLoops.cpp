#include <iostream>

using namespace std;

int factorial(int n, int factorial){
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

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
    int x = factorial(3, 1);
    cout << x << endl;
}
