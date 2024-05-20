#include <iostream>
#include <string>

using namespace std;

int main() {
    string Board [5][5] = { {"   ", "|", "   ", "|", "   "},
                            {"---", "-", "---", "-", "---"},
                            {"   ", "|", "   ", "|", "   "},
                            {"---", "-", "---", "-", "---"},
                            {"   ", "|", "   ", "|", "   "}
                        };
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << Board[i][j] << " ";
        } cout << endl;
    } 
}
