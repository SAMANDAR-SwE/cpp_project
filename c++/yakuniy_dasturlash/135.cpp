#include <iostream>
#include <string>
using namespace std;

int main() {
    string matn;
    
    // Birinchi (va yagona) satrni o'qish
    getline(cin, matn);
    
    string soz = "";
    
    // Matn oxiriga probel qo'shamiz, oxirgi so'zni ham tekshirish uchun
    matn += " ";
    
    for (char c : matn) {
        if (c == ' ') {
            // So'z tugadi - tekshiramiz
            if (!soz.empty()) {
                // Birinchi harf A yoki a bo'lsa
                if (soz[0] == 'A' || soz[0] == 'a') {
                    cout << soz << endl;
                }
                soz = "";  // yangi so'z uchun tozalaymiz
            }
        }
        else {
            soz += c;
        }
    }
    
    return 0;
}