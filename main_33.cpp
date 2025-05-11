#include <iostream>
#include <vector>
#include <string>
#include "head_33.h"
using namespace std;

int main()
{
    vector<employee> list_employee; // Порожній вектор для співробітників
    string search_depart;
    int choice;

    while (true) {
        interface();
        cin >> choice; // Зчитування вибору користувача

        switch (choice) {
        case 1: {
            add_employee(list_employee);
            break;
        }
        case 2: {
            if (list_employee.empty()) {
                cout << "No employees to display." << endl;
            } else {
                for (const auto& emp : list_employee) {
                    emp.print_info();
                }
            }
            break;
        }
        case 3: {
            if (list_employee.empty()) {
                cout << "No employees to calculate average experience." << endl;
            } else {
                cout << "Average Experience: " << average_experience(list_employee) << endl;
            }
            break;
        }
        case 4: {
            if (list_employee.empty()) {
                cout << "No employees to sort." << endl;
            } else {
                sort_employee(list_employee);
                cout << "Sorted by year of employment: " << endl;
                for (const auto& emp : list_employee) {
                    emp.print_info();
                }
            }
            break;
        }
        case 5: {
            if (list_employee.empty()) {
                cout << "No employees to search." << endl;
            } else {
                cout << "Enter department to search: ";
                cin >> search_depart;
                float salary_dep = salary_by_department(list_employee, search_depart);
                cout << "Total Salary in Department: " << salary_dep << endl;
            }
            break;
        }
        case 6: {
            cout << "Exiting program..." << endl;
            system("pause");
            return 0;
        }
        default: {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    }
}