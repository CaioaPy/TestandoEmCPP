#include <iostream>
#include <vector>

using namespace std;

int factorial(int n, int factorial){
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int water = 0;
    vector<int> houses = {32, 123, 47, 76};
    /*
    for (int i = 0; i < 11; i++) {
        cout << "water coming! ";
        water++;
        cout << "water = " << water << endl;
    }

    for (int i = 3; i > 0; i--){
        cout << i << "! ";
    }
    cout << endl; 
    cout << water << " waters!" << endl;
    */

    /*
    int x = factorial(3, 1);
    cout << "3! = " << x << endl;
    */
    cout << "before:" << endl;
    for (size_t i = 0; i < houses.size(); i++){
        cout << houses[i] << " ";
    }
    cout << endl;
    cout << "using (V : Vs) method" << endl;
    for (int house : houses){
        house += 6;
    }
    cout << "after:" << endl;
    for (size_t i = 0; i < houses.size(); i++){
        cout << houses[i] << " ";
    }
    cout << endl;
    cout << "when using for loops you modify the temp var not the vector" << endl;

    cout << "before:" << endl;
    for (size_t i = 0; i < houses.size(); i++){
        cout << houses[i] << " ";
    }
    cout << endl;
    cout << "now using index method" << endl;
    for (size_t i = 0; i < houses.size(); i++){
        houses[i] += 6;
    }
    cout << "after:" << endl;
    for (size_t i = 0; i < houses.size(); i++){
        cout << houses[i] << " ";
    }
    /*
    for (int house : houses){
        cout << house << " ";
    }
    cout << endl;
    */
    /*
    for (int i = houses.size()-1; i >= 0; i--){
        cout << houses[i] << " ";
    }
    cout << endl;
    */

}