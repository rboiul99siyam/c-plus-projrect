#include <bits/stdc++.h>
using namespace std;
int main()
{
    int quent = 0;
    int choice;

    int Qroom = 0, Qpasta = 0, Qbruger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    int Sroom = 0, Spasta = 0, Sbruger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    int Total_room = 0, Total_pasta = 0, Total_bruger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\tQuantity of items we have";
    cout << "\nRoom available: ";
    cin >> Qroom;
    cout << "\nQuantity of pasta: ";
    cin >> Qpasta;
    cout << "\nQuantity of burger: ";
    cin >> Qbruger;
    cout << "\nQuantity of noodles: ";
    cin >> Qnoodles;
    cout << "\nQuantity of shake: ";
    cin >> Qshake;
    cout << "\nQuantity of chicken: ";
    cin >> Qchicken;
    cout << endl;

    while (true)
    {
        cout << "\n\t\tPlease select from the menu options:" << endl;
        cout << "1. Rooms" << endl;
        cout << "2. Burger" << endl;
        cout << "3. Pasta" << endl;
        cout << "4. Noodles" << endl;
        cout << "5. Shake" << endl;
        cout << "6. Chicken-Roll" << endl;
        cout << "7. Information regarding sales and collections" << endl;
        cout << "8. Exit" << endl;

        cout << "\nPlease enter your choice: ";
        cin >> choice;

        // Validate the input (check if it's an integer)
        if (!cin)
        {
            cout << "Invalid choice. Please enter a number." << endl;
            cin.clear();           // Clear the error state
            cin.ignore(100, '\n'); // Ignore the rest of the input
            continue;              // Restart the loop
        }

        // Handle the user's choice
        switch (choice)
        {
        case 1:
            cout << "\n\nEnter the number of rooms you want: ";
            cin >> quent;
            if (Qroom - Sroom >= quent)
            {
                Sroom += quent;
                Total_room = Total_room + quent * 1200;
                cout << "\n\n\t\t" << quent << " room/rooms have been allotted to you";
            }
            else
            {
                cout << "\n\tOnly " << Qroom - Sroom << " room(s) remaining in the hotel";
            }
            break;

        case 2:
            cout << "\n\nEnter Pasta Quantity: ";
            cin >> quent;
            if (Qpasta - Spasta >= quent)
            {
                Spasta += quent;
                Total_pasta = Total_pasta + quent * 120;
                cout << "\n\n\t\t" << quent << " pasta is ordered!";
            }
            else
            {
                cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in the hotel";
            }
            break;

        case 3:
            cout << "\n\nEnter Burger Quantity: ";
            cin >> quent;
            if (Qbruger - Sbruger >= quent)
            {
                Sbruger += quent;
                Total_bruger = Total_bruger + quent * 200;
                cout << "\n\n\t\t" << quent << " Burger is ordered!";
            }
            else
            {
                cout << "\n\tOnly " << Qbruger - Sbruger << " Burger remaining in the hotel";
            }
            break;

        case 4:
            cout << "\n\nEnter Noodles Quantity: ";
            cin >> quent;
            if (Qnoodles - Snoodles >= quent)
            {
                Snoodles += quent;
                Total_noodles = Total_noodles + quent * 250;
                cout << "\n\n\t\t" << quent << " Noodles is ordered!";
            }
            else
            {
                cout << "\n\tOnly " << Qnoodles - Snoodles << " Noodles remaining in the hotel";
            }
            break;

        case 5:
            cout << "\n\nEnter Shake Quantity: ";
            cin >> quent;
            if (Qshake - Sshake >= quent)
            {
                Sshake += quent;
                Total_shake = Total_shake + quent * 1200;
                cout << "\n\n\t\t" << quent << " Shake is ordered!";
            }
            else
            {
                cout << "\n\tOnly " << Qshake - Sshake << " Shake remaining in the hotel";
            }
            break;

        case 6:
            cout << "\n\nEnter Chicken Quantity: ";
            cin >> quent;
            if (Qchicken - Schicken >= quent)
            {
                Schicken += quent;
                Total_chicken = Total_chicken + quent * 250;
                cout << "\n\n\t\t" << quent << " Chicken-Roll is ordered!";
            }
            else
            {
                cout << "\n\tOnly " << Qchicken - Schicken << " Chicken-Roll remaining in the hotel";
            }
            break;

        case 7:
            cout << "\n\t\tDetails of sales and collection ";
            cout << "\n\nNumber of rooms we had: " << Qroom;
            cout << "\nNumber of rooms we have rented: " << Sroom;
            cout << "\nRemaining rooms: " << Qroom - Sroom;
            cout << "\nTotal room collection for the day: " << Total_room;

            cout << "\n\nNumber of pasta we had: " << Qpasta;
            cout << "\nNumber of pasta we have rented: " << Spasta;
            cout << "\nRemaining pasta: " << Qpasta - Spasta;
            cout << "\nTotal pasta collection for the day: " << Total_pasta;

            cout << "\n\nNumber of burger we had: " << Qbruger;
            cout << "\nNumber of burger we have rented: " << Sbruger;
            cout << "\nRemaining burger: " << Qbruger - Sbruger;
            cout << "\nTotal burger collection for the day: " << Total_bruger;

            cout << "\n\nNumber of noodles we had: " << Qnoodles;
            cout << "\nNumber of noodles we have rented: " << Snoodles;
            cout << "\nRemaining noodles: " << Qnoodles - Snoodles;
            cout << "\nTotal noodles collection for the day: " << Total_noodles;

            cout << "\n\nNumber of shake we had: " << Qshake;
            cout << "\nNumber of shake we have rented: " << Sshake;
            cout << "\nRemaining shake: " << Qshake - Sshake;
            cout << "\nTotal shake collection for the day: " << Total_shake;

            cout << "\n\nNumber of Chicken-roll we had: " << Qchicken;
            cout << "\nNumber of Chicken-roll we sold: " << Schicken;
            cout << "\nRemaining Chicken-roll: " << Qchicken - Schicken;
            cout << "\nTotal Chicken-roll collection for the day: " << Total_chicken;
            break;

        case 8:
            exit(0);
            break;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
        }
    }
    return 0;
}