#include "Objects.h"

template<class T>
Objects<T>::Objects(FCIvector<T> Obj) {
    obj = Obj;
}

template<class T>
void Objects<T>::Menu() {

    string choice2, choice3;
    while (true) {

        cout << "What kind of operation would you like to perform?\n"
                "1. Add element.\n"
                "2. Remove last element.\n"
                "3. Insert element at certain position.\n"
                "4. Erase element from a certain position.\n"
                "5. Clear.\n"
                "6. Display first element.\n"
                "7. Display last element.\n"
                "8. Display element at certain position.\n"
                "9. Display vector size.\n"
                "10. Display vector capacity.\n"
                "11. Is empty?\n"
                "12. Display vector\n";

        cin >> choice2;

        //error handling
        while ((choice2[0] != '1' && choice2[0] != '2' && choice2[0] != '3' && choice2[0] != '4' &&
                choice2[0] != '5' &&
                choice2[0] != '6' && choice2[0] != '7' && choice2[0] != '8' && choice2[0] != '9' &&
                choice2 != "10" &&
                choice2 != "11" && choice2 != "12") || choice2.length() > 2) {
            cout << "Unavailable choice1, enter again\n";
            cin >> choice2;
        }

        int n;
        if (choice2[0] == '1' && choice2.length() == 1) {

            cout << "How many elements would you like to add: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                T element;
                cout << "Enter element: ";
                cin >> element;
                obj.push_back(element);
            }
        }
        else if (choice2[0] == '2') {
            obj.pop_back();
        }
        else if (choice2[0] == '3') {
            cout << "What position do you want to insert: ";
            cin >> n;
            cout << "enter value: ";
            T val;
            cin >> val;
            T *ptr = &obj[n];
            obj.insert(ptr, val);
        }
        else if (choice2[0] == '4') {
            cout << "What position you want to erase: ";
            cin >> n;
            T *ptr = &obj[n];
            obj.erase(ptr);
        }
        else if (choice2[0] == '5') {
            obj.clear();
        }
        else if (choice2[0] == '6') {
            cout << "First element: " << obj[0] << endl;
        }
        else if (choice2[0] == '7') {
            cout << "Last element: " << obj[obj.size() - 1] << endl;
        }
        else if (choice2[0] == '8') {
            cout << "enter display position: ";
            cin >> n;
            cout << obj[n] << endl;
        }
        else if (choice2[0] == '9') {
            cout << "Vector size: " << obj.size() << endl;
        }
        else if (choice2 == "10") {
            cout << "Vector capacity: " << obj.capacity() << endl;
        }
        else if (choice2 == "11") {
            cout << obj.empty() << endl;
        }
        else {
            for (int i = 0; i < obj.size(); i++) {
                cout<<"-----------------------Element Number# "<<i<<"---------------------\n";
                cout << obj[i] << " ";
            }
            cout << endl;
        }

        cout << "Would you like to perform other operations? (Y/N)\n";

        cin >> choice3;

        while ((choice3[0] != 'N' && choice3[0] != 'n' && choice3[0] != 'y' && choice3[0] != 'Y') ||
               choice3.length() > 1) {
            cout << "enter a valid choice\n";
            cin >> choice3;
        }

        if (choice3[0] == 'n' || choice3[0] == 'N') break;
    }
}

