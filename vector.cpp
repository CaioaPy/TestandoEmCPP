#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> tokens;
    
    tokens.push_back(10); //push_back function adds the element at the end of the vector
    tokens.push_back(132);
    tokens.push_back(1512);

    tokens[0] = 162; // you can also change a specifc index value

    cout << tokens.size() << endl;
    // cout << (tokens.size() == 0) << endl;
    cout << tokens.empty() << endl;
    cout << tokens[0] << endl;
    cout << tokens[1] << endl;
    cout << tokens[2] << endl;

}