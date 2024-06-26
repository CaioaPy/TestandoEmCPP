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

    name.pop_back();
    cout << name << endl; //delete the last element of the string
    
    name.pop_back();
    name.pop_back();
    cout << name << endl;

    name.erase(0, 3); // delete the interval of elements (index, how many elements from startin at this index point)
    cout << name << endl;

    name = {'N','A','M','E'};
    cout << name << endl;

    name.erase(2, 2);
    cout << name << endl;
}