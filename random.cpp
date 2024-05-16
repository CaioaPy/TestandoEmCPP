#include <iostream>

using namespace std;

int main() { 
    int x, y, z;
    x = rand() % 10; // 0 - 9
    y = rand() % 100; // 0 - 99
    z = rand() % 3 + 10; // 10 - 12(0 - 2 + 10) 
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}