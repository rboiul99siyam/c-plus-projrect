#include <bits/stdc++.h>
using namespace std;
void ManuBar()
{
    cout << "_________________________________________________________" << endl;
    cout << "                      Manu Bar                           " << endl;
    cout << "01- Create New Account" << endl;
    cout << "02- Deposit Amount" << endl;
    cout << "03- Balance Enquary" << endl;
    cout << "04- Withdraw Amount" << endl;
    cout << "05- All Account Holder List" << endl;
    cout << "06- Close An Account" << endl;
    cout << "07- Modify An Account" << endl;
    cout << "08- Exit" << endl;
    cout << endl
         << endl;
    cout << "Seclect Your option From <1 to 8 >" << endl;
}
class parson
{
public:
    string name;
    string father_name;
    string mother_name;
    string address;
    int contact;
    int id;
};
int main()
{
    ManuBar();

    cout << "Enter Your Manu Bar: " << endl;
    int val;
    int balance, deposit, cash_out;
    int create = 0;
    while (true)
    {

        cin >> val;
        if (val == 1)
        {
            create++;
            cout << "Create New Account Now " << create << endl;
            ;
            cout << "Enter Your coustomer inforamtion " << endl;
            parson ar[100];
            cin.ignore();
            cout << "-------------------------" << endl;
            for (int i = 0; i < 100; i++)
            {
                cout << "Your name : " << endl;
                cin >> ar[i].name;
                cout << "Your Father name : " << endl;
                cin >> ar[i].father_name;
                cout << "Your Mother name : " << endl;
                cin >> ar[i].mother_name;
                cout << "Your Parmanant address : " << endl;
                cin >> ar[i].address;
                cout << "Your Phone number  : " << endl;
                cin >> ar[i].contact;
                cout << "Your id number  : " << endl;
                cin >> ar[i].id;
            }
            for (int i = 0; i < 100; i++)
            {
                cout << "---------------- information------------" << endl;
                cout << ar[i].name << endl;
                cout << ar[i].father_name << endl;
                cout << ar[i].mother_name << endl;
                cout << ar[i].address << endl;
                cout << ar[i].contact << endl;
                cout << ar[i].id << endl;
            }
        }
        system("CLS");
    }

    getchar();
}