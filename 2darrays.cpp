#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    //using arrays
    /*
    string moedas[5][3] = { {"EUA", "DOL", "Dolar"}, 
                            {"Canada", "CAD", "Dolar"}, 
                            {"Brasil", "BRL", "Real"}, 
                            {"RU", "GBP", "Libra"}, 
                            {"Espanha", "EUR", "Euro"}
                        };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++){
            cout << moedas[i][j] << " ";
        } 
        cout << endl;
    }
    */

    //using vector
    vector<vector<string>> Estoque = {
                                        {"Agua", "Refri", "Cafe"},
                                        {"Miojo"},
                                        {"Boneco", "Carrinho"},
                                        {"Carne", "Peixe"}
                                    };
    Estoque[2].push_back("Aviaozinho");
    for (size_t i = 0; i < Estoque.size(); i++){
        for (size_t j = 0; j < Estoque[i].size(); j++){
            cout << Estoque[i][j] << " ";
        }
        cout << endl;
    }
}