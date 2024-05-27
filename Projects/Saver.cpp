/*Crie um sistema para cadastro de estudantes, incluindo informações como nome, idade, matrícula e notas.
Implemente funcionalidades para calcular a média das notas e determinar a aprovação dos estudantes.
Armazene os dados em um arquivo para persistência de dados.
*/
#include <iostream>

using namespace std;

float MediaNota(float nota1, float nota2){
    float x = (nota1 + nota2) / 2;
    return x;
}

int main() {
    float nota1, nota2;
    cout << "insert the first grade: " << endl;
    cin >> nota1;
    cout << "insert the second grade: " << endl;
    cin >> nota2;
    float media = MediaNota(nota1, nota2);
    cout << media << endl;
}