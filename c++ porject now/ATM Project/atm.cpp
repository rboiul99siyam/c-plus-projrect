#include <iostream>
using namespace std;
void display()
{
    cout << "******Manu Bar *********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Cash Out" << endl;
    cout << "4. Exit" << endl;
}
int main()
{

    cout << "Enter Your Amount: " << endl;
    int balance;
    cin >> balance;
    int option, deposit, cash_out;

    while (true)
    {
        display();
        cout << "Choose Your option" << endl;
        cin >> option;
        system("cls");
        if (option == 1)
        {
            cout << "Your Balance Now " << balance << endl;
        }
        else if (option == 2)
        {
            cout << "Enter Deposit Amount: " << endl;
            cin >> deposit;
            balance += deposit;
            cout << "Your Carrent Balance Now: " << balance << endl;
        }
        else if (option == 3)
        {
            cout << "Cash Out Now" << endl;
            cin >> cash_out;
            balance -= cash_out;
            cout << "Your Carrent Balance Now: " << balance << endl;
        }
        else if (option == 4)
        {
            cout << "Thank You" << endl;
            break;
        }
        else
        {
            cout << "Invaild Now" << endl;
        }
    }

    getchar();
}