#include <iostream>

using namespace std;

int main(){
    int rating = 60;
    char letter;
    bool active = true;
    /*
    if (rating >= 70) {
        letter = 'A';
    }
    else {
        if (active)
            letter = 'B';
        else
            letter = 'F';
    }
    */
    /*
    if (rating >= 70) letter = 'A';
    else if (rating < 70, active) letter = 'B';
    else letter = 'F';
    */
    letter = (rating >= 70) ? 'A' : (active) ? 'B' : 'F';
    cout << "Rating: " << letter << endl;
}