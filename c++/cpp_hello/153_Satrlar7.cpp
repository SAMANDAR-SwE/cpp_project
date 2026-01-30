#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string matn;

    cout << "Matnni kiriting: ";
    // Butun boshli qatorni o'qib olish
    getline(cin, matn);

    stringstream ss(matn);
    string soz;

    while (ss >>soz){
        cout << soz << " " << soz.length() << endl;
    }

}