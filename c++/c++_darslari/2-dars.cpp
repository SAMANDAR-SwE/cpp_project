#include <iostream>
#include <string>
using namespace std;

int main() {
    string matn;
    cout << "Matn kiriting: ";
    cin >> matn;
    
    
    for (int i = 0; i < matn.length(); i++) {
        cout << matn[i] << ": "<< int(matn[i]) << " " << endl;
         
    }

    return 0;
}
