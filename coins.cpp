#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 0.5, b = 0.25, c = 0.10, d = 0.01;
    float starting_val, final_val;
    cout << "enter the value you want (use . for decimal): ";
    cin >> starting_val >> endl;
    cout << "now, knowing that you have 4 types of coins, begin:" << endl;
    cout << "'a' = $0.50" << endl << "'b' = $0.25" << endl << "'c' = 0.10" << endl << "'d' = 0.01$" << endl;
    cout << "represent your number, how many 'a' do you need?"
    cin >> a;
    cout << "how many 'b' do you need?"
    cin >> b;
    cout << "how many 'c' do you need?"
    cin >> c;
    cout << "how many 'd' do you need?"
    cin >> d;
    final_val = a + b + c + d;
    
    }