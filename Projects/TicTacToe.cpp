#include <iostream>
#include <string>

using namespace std;

int main() {
    string Board [5][5] = { {" 1 ", "|", " 2 ", "|", " 3 "},
                            {"---", "-", "---", "-", "---"},
                            {" 4 ", "|", " 5 ", "|", " 6 "},
                            {"---", "-", "---", "-", "---"},
                            {" 7 ", "|", " 8 ", "|", " 9 "}
                        };
    int dec;
    bool playing = false;
    cout << "each slot has a number that is assigned to himself" << endl;
    cout << "you're gonna use them to play, they are assigned like that:" << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << Board[i][j] << " ";
        } cout << endl;
    }
    cout << "you're going to play as X" << endl;
    cout << "\n\n\n\n\n";
    playing = true;
    do {
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                cout << Board[i][j] << " ";
            } cout << endl;
        }
        cout << "your turn!" << endl;
        cin >> dec;
        switch(dec){
            case(1):
                if (Board[0][0] == " 1 ") {
                    Board[0][0] = " X ";
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    break;
            case(2):
                cout << " a " << endl;
                break;
            case(3):
                cout << " a " << endl;
                break;
            case(4):
                cout << " a " << endl;
                break;
            case(5):
                cout << " a " << endl;
                break;
            case(6):
                cout << " a " << endl;
                break;
            case(7):
                cout << " a " << endl;
                break;
            case(8):
                cout << " a " << endl;
                break;
            case(9):
                cout << " a " << endl;
                break;
            default:
                cout << "error, try again" << endl;
                break;
        }
    } while (playing);
}
