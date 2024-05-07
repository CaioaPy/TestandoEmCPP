#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, c, d;
    float starting_val, final_val;
    cout << "enter the value you want (use . for decimal): ";
    cin >> starting_val;
    cout << "now, knowing that you have 4 types of coins, begin:" << endl;
    cout << "'a' = $0.50" << endl << "'b' = $0.25" << endl << "'c' = 0.10" << endl << "'d' = 0.01$" << endl;
    cout << "represent your number, how many 'a' do you need?" endl;
    cin >> a;
    cout << "how many 'b' do you need?" << endl;
    cin >> b;
    cout << "how many 'c' do you need?" << endl;
    cin >> c;
    cout << "how many 'd' do you need?" << endl;
    cin >> d;
    a = a * 0.5;
    b = b * 0.25;
    c = c * 0.1;
    d = d * 0.01;
    final_val = a + b + c + d;
    if (starting_val == final_val){
        cout << final_val << "$, thats right!" << endl;
    }
    else{
        cout << final_val << "$, thats not right!" << endl;
    }
}