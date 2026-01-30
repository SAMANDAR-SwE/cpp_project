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

    cout << "\nNatija tekshiruvi:" << endl;
    cout << "-------------------" << endl;

    while (ss >> soz) {
        // So'z kamida 2 harfdan iborat bo'lishi kerak
        if (soz.length() >= 2) {
            // Oxirgi ikkita belgini ajratish
            string oxiri = soz.substr(soz.length() - 2);

            // "na", "NA", "Na", "nA" variantlarini tekshirish
            if (oxiri == "na" || oxiri == "NA" || oxiri == "Na" || oxiri == "nA") {
                cout << "[ OK ] " << soz << " -> 'NA' bilan tugaydi." << endl;
            } else {
                cout << "[ NO ] " << soz << " -> boshqa harf bilan tugaydi." << endl;
            }
        }
    }

    return 0;
}