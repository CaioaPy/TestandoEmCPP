#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> tokens;
    vector<int> tokens = {100, 232, 1236}; //you can start a vector with values like arrays
    
    tokens.push_back(10); //push_back function adds the element at the end of the vector
    tokens.push_back(1512);

    //tokens[4] = 162; // you can also change a specifc index value

    /*
    cout << tokens.size() << endl;
    // cout << (tokens.size() == 0) << endl;
    cout << tokens.empty() << endl; // checks if the vector is empty returning 1 if its true, else returns 0
    cout << tokens[0] << endl;
    cout << tokens[1] << endl;
    cout << tokens[2] << endl;
    cout << tokens[3] << endl;
    cout << tokens[4] << endl;
    */

    cout << tokens[tokens.size() - 1] << endl; // print the last element
    cout << tokens.back() << endl; // print the last element
    cout << tokens[0] << endl; // print the first element
    cout << tokens.front() << endl; // print the first element
}