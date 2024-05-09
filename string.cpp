#include <iostream>
#include <string>

using namespace std;

int main(){
    //string = array of characters

    string name = "Flake";
    //string name = {'F', 'l', 'a', 'k', 'e'};
    cout << name << endl;
    cout << name.length() << endl;
    cout << (name.length() == 0) << endl; //checking if the var is blank
    cout << (name == "") << endl; // another method for check
}