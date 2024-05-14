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
        if (carry_load == 0){
            cout << "can't store more items.\ncancelling the remain items";
            break;
        }
        carry_load -= item_weight;
        cout << item << " was added to the backpack! \n" << carry_load << " spaces remaining" << "\n\n";
    }

}