#include "Student.h"
#include "FCIvector.cpp"
#include "FCIvector.h"
#include "Objects.cpp"

int main() {



    string choice1;

    while(true) {
        //display main menu
        cout << "Insert type of vector you would like to create:\n"
                "1. list of integer\n"
                "2. list of character\n"
                "3. list of string\n"
                "4. list of float\n"
                "5. list of students\n"
                "6. Exit\n";

        cin >> choice1;

        //error handling (user input)
        while ((choice1[0] != '1' && choice1[0] != '2' && choice1[0] != '3' && choice1[0] != '4' && choice1[0] != '5' &&
                choice1[0] != '6') || choice1.length() > 1) {
            cout << "Unavailable choice1, enter again\n";
            cin >> choice1;
        }

        if (choice1[0] == '1') {
            cout << "A vector of integers was created successfully.\n";
            FCIvector<int> tempobj;
            Objects obj(tempobj);
            obj.Menu();
        } else if (choice1[0] == '2') {
            cout << "A vector of characters was created successfully.\n";
            FCIvector<char> tempobj;
            Objects obj(tempobj);
            obj.Menu();
        } else if (choice1[0] == '3') {
            cout << "A vector of strings was created successfully.\n";
            FCIvector<string> tempobj;
            Objects obj(tempobj);
            obj.Menu();
        } else if (choice1[0] == '4') {
            cout << "A vector of floats was created successfully.\n";
            FCIvector<float> tempobj;
            Objects obj(tempobj);
           obj.Menu();
        } else if (choice1[0] == '5') {
            cout << "A vector of students was created successfully.\n";
            FCIvector<Student> tempobj;
            Objects obj(tempobj);
            obj.Menu();
        } else {
            exit(0);
        }





    }
    return 0;
}
