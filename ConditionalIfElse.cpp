#include <iostream>

using namespace std;

int main(){
    int rating = 85;
    char letter;
    /*
    if (rating >= 70) {
        letter = 'A';
    }
    else {
        letter = 'F';
    }
    */
    /*
    if (rating >= 70) letter = 'A';
    else letter = 'F';
    */
    letter = (rating >= 70) ? 'A' : 'F';
    cout << "Rating: " << letter << endl;
}