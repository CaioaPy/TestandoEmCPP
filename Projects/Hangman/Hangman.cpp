// Crie um jogo da forca onde o jogador tenta adivinhar uma palavra escolhida aleatoriamente de uma lista.
// Inclua funcionalidades como número limitado de tentativas, exibição das letras já adivinhadas e letras faltantes.

#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int RNG() {
    int x;
    srand(time(0));
    x = (rand() % 10) + 1;
    return x;
}

int main() {
    string boneco[][1] =   {{""},
                            {""},
                            {""}
                        };
    int x = RNG();
    cout << x << endl;
    for (int i = 0; i < 3; i++){
        int j = 0;
        cout << boneco[i][j] << endl;
    }
}