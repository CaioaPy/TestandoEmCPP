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
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(2):
                if (Board[0][2] == " 2 ") {
                    Board[0][2] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(3):
                if (Board[0][4] == " 3 ") {
                    Board[0][4] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(4):
                if (Board[2][0] == " 4 ") {
                    Board[2][0] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(5):
                if (Board[2][2] == " 5 ") {
                    Board[2][2] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(6):
                if (Board[2][4] == " 6 ") {
                    Board[2][4] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(7):
                if (Board[4][0] == " 7 ") {
                    Board[4][0] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(8):
                if (Board[4][2] == " 8 ") {
                    Board[4][2] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            case(9):
                if (Board[4][4] == " 9 ") {
                    Board[4][4] = " X ";
                    cout << endl;
                    break;
                }
                else
                    cout << "invalid move" << endl;
                    cout << endl;
                    break;
            default:
                cout << "error, try again" << endl;
                cout << endl;
                break;
        }
    } while (playing);
}
