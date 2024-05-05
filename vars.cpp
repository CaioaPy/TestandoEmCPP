#include <iostream>
using namespace std;

int main(){
    //int 
    1,2,4,6;
    //float 
    5.32f,62.34f,12.2f,2.5f,1.0f; //(até 7 digitos);
    //double 
    5.32,62.34,12.2,2.5,1.0; //(até 15 digitos);

    //boolean - bool
    true; false;

    //character - char
    'a', 'b', '6', 'L';
    // (')

    // testing outputs (ids and var print)
    int h = 23;
    float aw;
    aw = 2215.23f;
    bool woo;
    woo = true;
    char ww = 'w';

    cout << h << endl;
    cout << typeid(h).name() << endl;

    cout << aw << endl;
    cout << typeid(aw).name() << endl;

    cout << woo << endl;
    cout << typeid(woo).name() << endl;

    cout << (ww) << endl;
    cout << typeid(ww).name() << endl;
}