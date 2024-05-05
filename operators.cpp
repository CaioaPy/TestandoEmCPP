#include <iostream>;
#include <math.h>;
using namespace std;

int main() {
    int x = 20, y = 5, z = 10, a = 2, b = 3;
    cout << x + y << endl;
    cout << x - z << endl;
    cout << x / y << endl;
    cout << z * y << endl;
    cout << pow(2,3) << endl;
    float w = y / a; // when y(5) / a(2) theyre both ints, so even if w is a float it's gonna recieve 2 as value because 5/2 > 2.5 > int > 2 stored
    cout << "float (without using (float)): " << w << endl;
    float r = (float) y / a; // when (float) is used, y(5) is gonna get treated as a float, so 5/2 > 2.5 > float > 2.5 stored
    cout << "float (when using (float)): " << r << endl;
    // ++ and --
    cout << "inicial value of x: " << x << endl;
    cout << "using x++: " << x++ << endl;
    cout << "x: " << x << endl;
    cout << "now using ++x: " << ++x << endl;
    cout << "the code is gonna read from left to right so if you print x++ its gonna to be printed as x and after that ++ gonna be readed and executed"

}