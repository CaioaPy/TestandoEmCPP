#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "weeza";
    int age = 23;
    char sex = 'N';
    //cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;
    cout << "insert your name: ";
    cin >> name;
    cout << "insert your age: ";
    cin >> age;
    cout << "insert your sex: ";
    cin >> sex;
    cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;

}