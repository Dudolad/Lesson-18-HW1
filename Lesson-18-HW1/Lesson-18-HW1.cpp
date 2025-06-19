#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

int main()
{
    Employee stuff[5] = {
        {"Ivanenko", 1960, "Engineer", 12000.0, "Higher"},
        {"Petrenko", 1985, "Manager", 15000.0, "Higher"},
        {"Shevchenko", 1958, "Technician", 10000.0, "Secondary"},
        {"Koval", 1975, "Accountant", 13000.0, "Higher"},
        {"Melnyk", 1962, "Driver", 9000.0, "Secondary"}
    };

    for (int i = 0; i < 5; i++) {
        cout << "Surname: " << stuff[i].lastName << endl;
        cout << "Year: " << stuff[i].birthYear << endl;
        cout << "Position: " << stuff[i].position << endl;
        cout << "Salary: " << stuff[i].salary << endl;
        cout << "Education: " << stuff[i].education << endl;
        cout << "---------------------------" << endl;
    }

    int currentYear = 2025;
    int count = 0;

    cout << "Employye over 60 years old:\n";

    for (int i = 0; i < 5; i++) {
        int age = currentYear - stuff[i].birthYear;
        if (age > 60) {
            count++;
            cout << "Surname: " << stuff[i].lastName << endl;
            cout << "Year: " << stuff[i].birthYear << " (Age: " << age << ")" << endl;
            cout << "Position: " << stuff[i].position << endl;
            cout << "Salary: " << stuff[i].salary << endl;
            cout << "Education: " << stuff[i].education << endl;
            cout << "---------------------------" << endl;
        }
    }

    cout << "Total amount of employee, over 60 years old: " << count << endl;

    return 0;
}

