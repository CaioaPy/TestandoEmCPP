#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string moedas[5][3] = { {"EUA", "DOL", "Dolar"}, 
                            {"Canada", "CAD", "Dolar"}, 
                            {"Brasil", "BRL", "Real"}, 
                            {"RU", "GBP", "Libra"}, 
                            {"Espanha", "EUR", "Euro"}
                        };
    for (int i = 0; i < 5; i++) {
        cout << moedas[i][0] << " ";
        cout << moedas[i][1] << " ";
        cout << moedas[i][2] << endl;
    }

}