#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int dinheiros = 250;
    // int dinheiros2 = dinheiros; // this creates a copy
    int* dinheiros2 = &dinheiros; // this creates a pointer

    dinheiros2 += 100;

    cout << dinheiros << endl;
    cout << dinheiros2 << endl;
}