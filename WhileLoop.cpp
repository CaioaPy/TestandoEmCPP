#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> students = {"Jeff", "Roger", "Romeo", "Stark", "Claire", "Amy", "Rose", "Paul"};
    string target;
    string x;
    int i = 0;
    bool found = false;

    cout << "insert the target name: " << endl;
    cin >> target;
    while (found == false && i < students.size()) {
        x = students[i];
        if (x == target) {
            cout << x << " found!" << endl;
            cout << x << " is a student." << endl;
            found = true;
        }
        else if (x != target) {
            cout << x << endl;
        }
        i++;
    }
    if (found == false) {
        cout << target << " wasn't found!";
    }
}