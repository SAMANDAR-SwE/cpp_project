#include <iostream>
#include <string>
using namespace std;

int main() {
    string ism, familyasi;
    int age, phone;

    cout << "Familyangizni kiriting: ";
    cin >> familyasi;   

    cout << "Ismingizni kiriting: ";
    cin >> ism;

    cout << "Yoshingizni kiriting: ";
    cin >> age;

    cout << "Telefon raqamni kiriting: ";
    cin >> phone;

    cout << "Sizning ma'lumotlaringiz:" << endl;
    cout << ism << endl;
    cout << familyasi << endl;
    cout << age << endl;
    cout << phone << endl;

    return 0;
}