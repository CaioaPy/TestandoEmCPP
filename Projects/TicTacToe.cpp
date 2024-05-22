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
    bool computer_turn = false;
    bool no_win;
    bool S1 = false;
    bool S2 = false;
    bool S3 = false;
    bool S4 = false;
    bool S5 = false;
    bool S6 = false;
    bool S7 = false;
    bool S8 = false;
    bool S9 = false;
    bool CWin = false;
    bool PWin = false;
    bool tie = false;

    cout << "each slot has a number that is assigned to himself" << endl;
    cout << "you're gonna use them to play, they are assigned like that:" << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << Board[i][j] << " ";
        } cout << endl;
    }
    cout << "you're going to play as X" << endl;
    cout << "\n\n\n\n\n";
    no_win = true;
    do{
        do {
            playing = true;
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    cout << Board[i][j] << " ";
                } cout << endl;
            }
            cout << "your turn!" << endl;
            cin >> dec;
            switch(dec){
                case(1):
                    if (not S1) {
                        Board[0][0] = " X ";
                        cout << endl;
                        S1 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(2):
                    if (not S2) {
                        Board[0][2] = " X ";
                        cout << endl;
                        S2 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(3):
                    if (not S3) {
                        Board[0][4] = " X ";
                        cout << endl;
                        S3 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(4):
                    if (not S4 ) {
                        Board[2][0] = " X ";
                        cout << endl;
                        S4 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(5):
                    if (not S5) {
                        Board[2][2] = " X ";
                        cout << endl;
                        S5 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(6):
                    if (not S6) {
                        Board[2][4] = " X ";
                        cout << endl;
                        S6 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(7):
                    if (not S7) {
                        Board[4][0] = " X ";
                        cout << endl;
                        S7 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(8):
                    if (not S8) {
                        Board[4][2] = " X ";
                        cout << endl;
                        S8 = true;
                        playing = false;
                        break;
                    }
                    else
                        cout << "invalid move" << endl;
                        cout << endl;
                        break;
                case(9):
                    if (not S9) {
                        Board[4][4] = " X ";
                        cout << endl;
                        S9 = true;
                        playing = false;
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

        do {
            computer_turn = true;
            int x;
            x = rand() % 10;
            switch(x) {
                case(1):
                    if (not S1) {
                        Board[0][0] = " O ";
                        cout << "computer chooses 1!" << endl;
                        S1 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(2):
                    if (not S2) {
                        Board[0][2] = " O ";
                        cout << "computer chooses 2!" << endl;
                        S2 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(3):
                    if (not S3) {
                        Board[0][4] = " O ";
                        cout << "computer chooses 3!" << endl;
                        S3 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(4):
                    if (not S4) {
                        Board[2][0] = " O ";
                        cout << "computer chooses 4!" << endl;
                        S4 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(5):
                    if (not S5) {
                        Board[2][2] = " O ";
                        cout << "computer chooses 5!" << endl;
                        S5 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(6):
                    if (not S6) {
                        Board[2][4] = " O ";
                        cout << "computer chooses 6!" << endl;
                        S6 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(7):
                    if (not S7) {
                        Board[4][0] = " O ";
                        cout << "computer chooses 7!" << endl;
                        S7 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(8):
                    if (not S8) {
                        Board[4][2] = " O ";
                        cout << "computer chooses 8!" << endl;
                        S8 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
                case(9):
                    if (not S9) {
                        Board[4][4] = " O ";
                        cout << "computer chooses 9!" << endl;
                        S9 = true;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
            }
        } while (computer_turn);


        
    } while  (no_win);

    if (PWin) {
        cout << "Player wins!" << endl;
    }
    else if (CWin) {
        cout << "Computer wins!" << endl;
    }
    else if (tie) {
        cout << "The game ends in tie" << endl;
    }
}   
