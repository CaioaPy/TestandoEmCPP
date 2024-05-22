#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int dinheiros = 250;
    // int dinheiros2 = dinheiros; // this creates a copy
    int* dinheiros2 = &dinheiros; // this creates a pointer
    // * creates a pointer instead of a var, the pointer references to the & memory address


    dinheiros += 12;
    *dinheiros2 += 100;
    
    cout << dinheiros << endl;
    cout << *dinheiros2 << endl;

    vector<string> Country = {"Brazil", "USA", "Angola", "Japao"};
    vector<string>* CountryPtr = &Country;
    // * creates a pointer instead of a var, the pointer references to the & memory address

    (*CountryPtr).push_back("Bolivia");

    for (size_t i = 0; i < Country.size(); i++) {
        cout << Country[i] << " ";
    } cout << endl;

    for (size_t i = 0; i < (*CountryPtr).size(); i++) {
        cout << (*CountryPtr)[i] << " ";
    } cout << endl;
}