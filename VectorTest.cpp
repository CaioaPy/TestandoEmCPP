#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    char decision;
    bool continuer = true;
    vector<int> Values;
    do {
        cout << "What do you want to do? add value (A), see the list (S), exit and see(E)" << endl;
        cin >> decision;
        switch(decision) {
            case('A'):
                cout << "Value to add to the list: " << endl;
                cin >> x;
                Values.insert(Values.end(), x);
                break;

            case('S'):
                for (int Value : Values) {
                    cout << Value << " ";
                }
                cout << endl;
                break;

            case('E'):
                continuer = false;
                for (int Value : Values) {
                    cout << Value << " ";
                }
                cout << endl;
                break;

            default:
                cout << "invalid" << endl;
        }
    } while (continuer == true);
}