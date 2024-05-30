/*Crie um sistema para cadastro de estudantes, incluindo informações como nome, idade, matrícula e notas.
Implemente funcionalidades para calcular a média das notas e determinar a aprovação dos estudantes.
Armazene os dados em um arquivo para persistência de dados.
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>

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
    //get the entire file
    string save = "save.txt";
    ifstream Read(save);
    string linha;
    int i = 0;
    vector<string> arr;
    while(getline(Read, linha)) {
        arr.push_back(linha);
        i++;
    }
    Read.close();
    //
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
    arr.push_back("------------------------");
    cout << "Name: " << nome << endl;
    arr.push_back("Name: " + nome);
    cout << "Age: " << idade << endl;
    arr.push_back("Age: " + to_string(idade));
    cout << "Registration number: " << matricula << endl;
    arr.push_back("Registration number: " + to_string(matricula));
    cout << "Grade: " << media << endl;
    arr.push_back("Grade: " + to_string(media));
    cout << "------------------------" << endl;
    for (const string& line : arr) {
        Save << line << endl;
    }
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
        cout << "Which line do you want to edit?" << endl;
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << arr[x] << endl;
        cout << "this is the line righ now, write the new entire line for update" << endl;
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
    ofstream Save(save);
    for (const string& line : arr) {
        Save << line << endl;
    }
    Save.close();
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
        cout << endl;
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