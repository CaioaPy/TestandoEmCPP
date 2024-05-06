#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "weeza";
    int age = 23;
    char sex = 'N';
    cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;
    cin >> name;
    cin >> age;
    cin >> sex;
    cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;

}