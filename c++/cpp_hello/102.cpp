#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std;
struct User{
    string fullname;
    string phone;
    string address;
    int age;
    double lat;
    double lon;
    int ball;
};

int main(){
    unordered_map<string, User> User_data;
    User_data["Samandar"] = {
        "Samandarov Samandar Farhod o'g'li",
        "+998901234567",
        "Xorazm, Urganch tumani, Zargarlar",
        19,
        41.5567,
        60.6278,
        95

    };
    User_data["Mirod_qilich"] = {
        "Mirod Qilichbekov",
        "+998933334455",
        "Toshkent, Yunusobod",
        30,
        41.3267,
        69.2455,
        75

    };
    User_data["Otabek"] = {
        "Otabek Salimov",
        "+998930112233",
        "Namangan, Chortoq tumani",
        24,
        41.0001,
        71.5502,
        99
    };
    User_data["Jamshid"] = {
        "Jamshid Ergashev",
        "+998909998877",
        "Andijon, Baliqchi tumani",
        54,
        40.7234,
        72.3501,
        98
    };
    User_data["Orginal_Murod"] = {
        "Murodov Murod",
        "+998915554433",
        "Buxoro, G‘ijduvon tumani",
        47,
        40.3266,
        64.4500,
        100
    };
    User_data["Hamdam"] = {
        "Hamdam Berdiyev",
        "+998907700770",
        "Qashqadaryo, Qarshi shahri",
        16,
        38.8600,
        65.8000,
        101
    };

    string ism;
    cout << "Ismingizni kiriting: ";
    cin >> ism;
    if (User_data.count(ism)){
        User data_user = User_data[ism];
        if (data_user.ball>=80)
            cout << ism << " sizing bahoinggiz: " << data_user.ball << " ball" << endl<< "Ogohlantrish:" << endl<< "Siz allo baholarga bitirish ehtilolingiz bor:)." << endl;
    
    }
    else if (User_data.count(ism)){
        User data_user = User_data[ism];
        if (data_user.ball<=80)
            cout << ism << " sizing bahoinggiz: " << data_user.ball << " ball" <<endl <<  "Ogohlantrish:" << endl<< "Siz allo baholarga bitira olishingiz amrimahol;}." << endl;
    }
    else{
        cout << ism <<  " sizing ismingiz ro'yhatda topilmadi;)" << endl << "Ogohlantrish:" << endl<< "Endi siz registir oficeda ma'lumotlaringizni qo'shtrib kelasiz akis holda ishlaringiz qiyinlashib ketadi;]."<< endl;
    }
}
