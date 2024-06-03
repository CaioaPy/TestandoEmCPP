// Crie um jogo da forca onde o jogador tenta adivinhar uma palavra escolhida aleatoriamente de uma lista.
// Inclua funcionalidades como número limitado de tentativas, exibição das letras já adivinhadas e letras faltantes.

#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>

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
    const int max_errors = 5;
    string words [4] = {"water", "sugar", "fire", "monster"};
    string word = words[x];
    int t = word.length();
    char* word_array = new char[t + 1];
    strcpy(word_array, word.c_str());
    vector<char> guessed_letters;
    string word_holder(t, '_');
    //testing only
    cout << x << endl;
    cout << word << endl;
    //testing only
    bool incomplete = true;
    int l = 0;
    do{
        for (int i = 0; i < t; i++) {
            cout << word_holder[i] << ' ';
        }
        cout << endl;
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
                letter[0] = tolower(letter[0]);
                if (find(guessed_letters.begin(), guessed_letters.end(), letter[0]) != guessed_letters.end()) {
                    cout << "You already tried this letter! Try again: ";
                }
                else {
                        accepted = true;
                        guessed_letters.push_back(letter[0]);
                }
            }
        } while (!accepted);
        l++;
        bool inWord = false;
        for (int i = 0; i < t; i++) {
            if (letter[0] == word[i]) {
                word_holder[i] = letter[0];
                inWord = true;
            }
        }
        if (inWord) {
            cout << "Nice!" << endl;
        }
        else {
            cout << "Not in the word!" << endl;
            cout << "errors: " << errors << endl;
            cout << endl;
            errors++;
        }
        
        bool lose = false;
        if (word_holder == word){
            incomplete = false;
        }
        else {
            incomplete = true;
        }
        else if (errors == 5) {
            incomplete = false;
            lose = true;
        }
    } while (incomplete);
    if (lose) {
        int holder;
        cout << "you lose!" << endl;
        cout << "press enter to exit." << endl;
        cin >> holder;
    }
    else {
    }
}