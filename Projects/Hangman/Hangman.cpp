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
    string words [4] = {"water", "sugar", "fire", "monster"};
    string word = words[x];
    int t = word.length();
    char* word_array = new char[t + 1];
    strcpy(word_array, word.c_str());
    char word_holder = new char[t + 1];
    for (int i = 0; i < t; i++){
        word_holder[i] = '_';
    }
    cout << x << endl;
    cout << word << endl;
    cout << word_array[2];

}