#include <iostream>
#include <string>

using namespace std;

int main(){
    //string = array of characters

    string name = "Flake";
    //string name = {'F', 'l', 'a', 'k', 'e'};
    cout << name << endl;
    
    /*
    cout << name.length() << endl; // check and print the number of elements(Chars) in a string
    cout << (name.length() == 0) << endl; //checking if the var is blank
    cout << (name == "") << endl; // another method for check
    cout << name.empty() << endl; // another method for check
    */
    name += '!';
    name += " woo";
    cout << name << endl;

    name[2] = 'Y';
    cout << name << endl;

    name = "C++" + name; // this is the same as name += "C++"
    cout << name << endl;

    name.append(3, '.'); // (number of times the char is gonna be added, char)
    cout << name << endl;

    name.insert(0, "sup "); // (index position, string);
    cout << name << endl;
}