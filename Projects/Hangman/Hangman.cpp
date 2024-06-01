// Crie um jogo da forca onde o jogador tenta adivinhar uma palavra escolhida aleatoriamente de uma lista.
// Inclua funcionalidades como número limitado de tentativas, exibição das letras já adivinhadas e letras faltantes.

#include <iostream>
#include <string>
#include <ctime>
#include <cstring>

using namespace std;



int RNG() {
    int x;
    srand(time(0));
    x = (rand() % 3);
    return x;
}

void errorShow(string boneco[][1]) {
    for (int i = 0; i < 3; i++){
        int j = 0;
        cout << boneco[i][j] << endl;
    }
}

int main() {
    string boneco[][1] =   {{""},
                            {""},
                            {""}
                           };
    int x = RNG();
    int errors = 0;
    string words [4] = {"water", "sugar", "fire", "monster"};
    string word = words[x];
    int t = word.length();
    char* word_array = new char[t + 1];
    strcpy(word_array, word.c_str());
    string word_holder[] = {"_","_"};
    cout << x << endl;
    cout << word << endl;
    for (int i = 0; i < t; i++){
        word_holder[i] = "_";
    }
    for (int i = 0; i < t; i++){
        cout << word_holder[i];
    } cout << endl;
    char letter;
    bool accepted = false;
    cout << "enter one letter: " << endl; 
    do {
        cin >> letter;
        switch (letter){
            case(1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 0):
                    cout << "error" << endl;
                    cout << "a" << endl;
                    accepted = false;
                    break;
            default:
                accepted = true;
                break;
        }
    } while (!accepted);
    cout << accepted << endl;
    
}