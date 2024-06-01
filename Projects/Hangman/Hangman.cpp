// Crie um jogo da forca onde o jogador tenta adivinhar uma palavra escolhida aleatoriamente de uma lista.
// Inclua funcionalidades como número limitado de tentativas, exibição das letras já adivinhadas e letras faltantes.

#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <cctype>

using namespace std;



int RNG() {
    int x;
    srand(time(0));
    x = (rand() % 4);
    return x;
}

int main() {
    int x = RNG();
    int errors = 0;
    string words [4] = {"water", "sugar", "fire", "monster"};
    string word = words[x];
    int t = word.length();
    char* word_array = new char[t + 1];
    strcpy(word_array, word.c_str());
    string word_holder(t, '_');
    char letters[] = {};
    //testing only
    cout << x << endl;
    cout << word << endl;
    //testing only
    bool incomplete = true;
    do{
        for (int i = 0; i < t; i++){
            cout << word_holder[i];
        } cout << endl;
        cout << endl;
        string letter;
        bool accepted = false;
        cout << "enter one letter: " << endl; 
        do {
            getline(cin, letter);
            string lettersStr = letters;
            if (letter.size() != 1){
                cout << "enter just one letter, try again" << endl;
                accepted = false;
            }
            else if (letter == "1" || letter == "2" || letter == "3" || letter == "4" || letter == "5" || letter == "6" || letter == "7" || letter == "8" || letter == "9" || letter == "0") {
                cout << "enter only a letter, try again" << endl;
                accepted = false;
            }
            else if (lettersStr.find(letter)){
                cout << "you already tried this word! try again!" << endl;
            }
            else{
                accepted = true;
                letter = tolower(letter[0]);
                char* r = letter[0];
                strcpy(letters, r);
            }
        } while (!accepted);
        bool inWord = false;
        for (int i = 0; i < t; i++){
            char c = word_array[i];
            if (letter[0] == c){
                word_holder[i] = letter[0];
                inWord = true;
            }
        }
        if (inWord) {
            cout << "Nice!" << endl;
        }
        else {
            cout << "Not in the word!" << endl;
        }

        if (word_holder == word_array){
            incomplete = false;
        }
        else {
            incomplete = true;
        }
    } while (incomplete);
}