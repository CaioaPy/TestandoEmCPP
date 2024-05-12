#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    vector<int> Values;
    cout << "Value to add to the list: " << endl;
    cin >> x;
    Values.insert(Values.end(), x);
    cout << "Value to add to the list: " << endl;
    cin >> x;
    Values.insert(Values.end(), x);
    cout << "Value to add to the list: " << endl;
    cin >> x;
    Values.insert(Values.end(), x);
    for (int Value : Values) {
        cout << Value << " ";
    }
    cout << endl;
}