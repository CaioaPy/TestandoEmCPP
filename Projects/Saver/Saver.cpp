/*Crie um sistema para cadastro de estudantes, incluindo informações como nome, idade, matrícula e notas.
Implemente funcionalidades para calcular a média das notas e determinar a aprovação dos estudantes.
Armazene os dados em um arquivo para persistência de dados.
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

ofstream Save("save.txt");
string linha;

float MediaNota(){
    float nota1, nota2;
    cout << "insert the first grade: " << endl;
    cin >> nota1;
    cout << "insert the second grade: " << endl;
    cin >> nota2;
    float x = (nota1 + nota2) / 2;
    return x;
}

void NovoCadastro(){
    string nome;
    int idade, matricula;
    cout << "insert the name: " << endl;
    cin >> nome;
    cout << "insert the age: " << endl;
    cin >> idade;
    cout << "insert the registration number: " << endl;
    cin >> matricula;
    float media = MediaNota();
    cout << "--NOVO CADASTRO CRIADO--" << endl;
    cout << "Name: " << nome << endl;
    cout << "Age: " << idade << endl;
    cout << "Registration number: " << matricula << endl;
    cout << "Grade: " << media << endl;
    cout << "------------------------" << endl;
    Save << "------------------------";
    Save << "Name: " << nome;
    Save << "Age: " << idade;
    Save << "Registration number: " << matricula;
    Save << "Grade: " << media;
    Save << "------------------------";
    Save.close();
}

int main() {
    char x;
    bool loop = false;
    cout << "(1) See the registers"
    cout << "(2) New register"
    cout << "(3) Update register"
    cout << "(4) Delete register"
    do{
        switch(x) {
            case(1):
        
            case(2):
                NovoCadastro();
                break;
            case(3):

            case(4):

            default:
                cout >> "error, try again!"
                break;
        }
    } while (loop);
}