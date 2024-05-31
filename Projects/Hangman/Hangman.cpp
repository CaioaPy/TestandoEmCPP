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
    int x = RNG();
    cout << x << endl;
}