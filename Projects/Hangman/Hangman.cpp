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
        word_array[i];
    }
    for (int i = 0; i < t; i++){
        word_holder[i] = "_";
    }
    for (int i = 0; i < t; i++){
        cout << word_holder[i];
    } cout << endl;
    string letter;
    bool accepted = false;
    cout << "enter one letter: " << endl; 
    do {
        getline(cin, letter);
        if (letter.size() != 1){
            cout << "enter just one letter, try again" << endl;
            accepted = false;
        }
        else if (letter == "1" || letter == "2" || letter == "3" || letter == "4" || letter == "5" || letter == "6" || letter == "7" || letter == "8" || letter == "9" || letter == "0") {
            cout << "enter only a letter, try again" << endl;
            accepted = false;
        }
        else{
            accepted = true;
            letter = tolower(letter[0]);
        }
    } while (!accepted);
    for (int i = 0; i < t; i++){
        string c = word_array[i];
        if (letter == c){
            word_holder[i] = letter;
        }
    }
    for (int i = 0; i < t; i++){
        cout << word_holder[i];
    } cout << endl;
}