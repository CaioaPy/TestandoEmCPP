/*Crie um sistema para cadastro de estudantes, incluindo informações como nome, idade, matrícula e notas.
Implemente funcionalidades para calcular a média das notas e determinar a aprovação dos estudantes.
Armazene os dados em um arquivo para persistência de dados.
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

float MediaNota(){
    float nota1, nota2;
    cout << "insert the first grade: " << endl;
    cin >> nota1;
    cout << "insert the second grade: " << endl;
    cin >> nota2;
    float x = (nota1 + nota2) / 2;
    return x;
}

void VerCadastros(){
    string save = "save.txt";
    ifstream Read(save);
    string linha;
    while(getline(Read, linha)){
        cout << linha << endl;
    }
    Read.close();
}

void NovoCadastro(){
    string save = "save.txt";
    ofstream Save(save);
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
    Save << "------------------------" << endl;
    Save << "Name: " << nome << endl;
    Save << "Age: " << idade << endl;
    Save << "Registration number: " << matricula << endl;
    Save << "Grade: " << media << endl;
    Save.close();
}

void Editar() {
    string save = "save.txt";
    ifstream Read(save);
    string linha;
    int i = 0;
    vector<string> arr;
    cout << "Current file:" << endl;
    while(getline(Read, linha)) {
        cout << "[" << i << "] " << linha << endl;
        arr.push_back(linha);
        i++;
    }
    Read.close();
    bool loop = false;
    do {
        int x;
        string newText;
        cout << "Which line do you want to edit? (write the entire line)";
        cin >> x;
        cout << arr[x] << endl;
        getline(cin, newText);
        arr[x] = newText;
        cout << "do you wanna edit another line? (Y/N)" << endl;
        char dec;
        cin >> dec;
        switch(dec) {
            case('Y'):
                loop = true;
                break;
            case('N'):
                cout << "Ok! All done!" << endl;
                loop = false;
                break;
            default:
                cout << "error, try again." << endl;
        }
    } while (loop);
}

int main() {
    bool loop = false;
    int x;
    char dec;
    do{
        cout << "(1) See the registers" << endl;
        cout << "(2) New register" << endl;
        cout << "(3) Update register" << endl;
            cin >> x;
            switch(x) {
                case(1):
                    cout << endl;
                    VerCadastros();
                    break;
                case(2):
                    cout << endl;
                    NovoCadastro();
                    break;
                case(3):
                    cout << endl;
                    Editar();
                    break;
                default:
                    cout << "error, try again." << endl;
            }
        cout << "do you wanna do another thing? (Y/N)" << endl;
        cin >> dec;
        switch(dec) {
            case('Y'):
                loop = true;
                break;
            case('N'):
                cout << "Ok! All done!" << endl;
                loop = false;
                break;
            default:
                cout << "error, try again." << endl;
        }
    } while (loop);
}