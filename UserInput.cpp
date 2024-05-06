#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "weeza";
    int age = 23;
    char sex = 'N';
    //cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;
    /*cout << "insert your name: ";
    cin >> name;
    cout << "insert your age: ";
    cin >> age;
    cout << "insert your sex: ";
    cin >> sex;
    */
    //cin >> name >> age >> sex;
    cout << "insert your name: ";
    getline(cin, name);
    cout << "insert age and sex sepparated by spaces: ";
    cin >> age >> sex;
    cout << "name: " << name << ", age: " << age << ", sex: " << sex << endl;
}