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
    int SS1, SS2, SS3, SS4, SS5, SS6, SS7, SS8, SS9;

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
                        SS1 = 1;
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
                        SS2 = 1;
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
                        SS3 = 1;
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
                        SS4 = 1;
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
                        SS5 = 1;
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
                        SS6 = 1;
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
                        SS7 = 1;
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
                        SS8 = 1;
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
                        SS9 = 1;
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

                if (S1 && S2 && S3) {
            if (SS1 == 1 && SS2 == 1 && SS3 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS2 == 2 && SS3 == 2) {
                CWin = true;
            }
        }
        else if (S4 && S5 && S6) {
            if (SS4 == 1 && SS5 == 1 && SS6 == 1) {
                PWin = true;
            }
            else if (SS4 == 2 && SS5 == 2 && SS6 == 2) {
                CWin = true;
            }
        }
        else if (S7 && S8 && S9) {
            if (SS7 == 1 && SS8 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS7 == 2 && SS8 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S4 && S7) {
            if (SS1 == 1 && SS4 == 1 && SS7 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS4 == 2 && SS7 == 2) {
                CWin = true;
            }
        }
        else if (S2 && S5 && S8) {
            if (SS2 == 1 && SS5 == 1 && SS8 == 1) {
                PWin = true;
            }
            else if (SS2 == 2 && SS5 == 2 && SS8 == 2) {
                CWin = true;
            }
        }
        else if (S3 && S6 && S9) {
            if (SS3 == 1 && SS6 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS3 == 2 && SS6 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S5 && S9) {
            if (SS1 == 1 && SS5 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS5 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S3 && S5 && S7) {
            if (SS3 == 1 && SS5 == 1 && SS7 == 1) {
                PWin = true;
            }
            else if (SS3 == 2 && SS5 == 2 && SS7 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S2 && S3 && S4 && S5 && S6 && S7 && S8 && S9){
            tie = true;
            break;
        }

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
                        SS1 = 2;
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
                        SS2 = 2;
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
                        SS3 = 2;
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
                        SS4 = 2;
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
                        SS5 = 2;
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
                        SS6 = 2;
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
                        SS7 = 2;
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
                        SS8 = 2;
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
                        SS9 = 2;
                        computer_turn = false;
                        break;
                    }
                    else
                        break;
            }
        } while (computer_turn);

        if (S1 && S2 && S3) {
            if (SS1 == 1 && SS2 == 1 && SS3 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS2 == 2 && SS3 == 2) {
                CWin = true;
            }
        }
        else if (S4 && S5 && S6) {
            if (SS4 == 1 && SS5 == 1 && SS6 == 1) {
                PWin = true;
            }
            else if (SS4 == 2 && SS5 == 2 && SS6 == 2) {
                CWin = true;
            }
        }
        else if (S7 && S8 && S9) {
            if (SS7 == 1 && SS8 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS7 == 2 && SS8 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S4 && S7) {
            if (SS1 == 1 && SS4 == 1 && SS7 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS4 == 2 && SS7 == 2) {
                CWin = true;
            }
        }
        else if (S2 && S5 && S8) {
            if (SS2 == 1 && SS5 == 1 && SS8 == 1) {
                PWin = true;
            }
            else if (SS2 == 2 && SS5 == 2 && SS8 == 2) {
                CWin = true;
            }
        }
        else if (S3 && S6 && S9) {
            if (SS3 == 1 && SS6 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS3 == 2 && SS6 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S5 && S9) {
            if (SS1 == 1 && SS5 == 1 && SS9 == 1) {
                PWin = true;
            }
            else if (SS1 == 2 && SS5 == 2 && SS9 == 2) {
                CWin = true;
            }
        }
        else if (S3 && S5 && S7) {
            if (SS3 == 1 && SS5 == 1 && SS7 == 1) {
                PWin = true;
            }
            else if (SS3 == 2 && SS5 == 2 && SS7 == 2) {
                CWin = true;
            }
        }
        else if (S1 && S2 && S3 && S4 && S5 && S6 && S7 && S8 && S9){
            tie = true;
            break;
        }
    } while (no_win);

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
