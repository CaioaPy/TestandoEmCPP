#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> items = {"water", "plushie", "book", "food", "cellphone"};
    vector<int> ItemWeight = {4, 3, 3, 6, 3};
    int carry_load = 10;
    for (int i = 0; i < items.size(); i++) {
        string item = items[i];
        int item_weight = ItemWeight[i];
        cout << item << " was added to the backpack! \n" << carry_load << " spaces remaning" << "\n\n";
    }
}