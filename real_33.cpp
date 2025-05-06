#include "head_33.h"
#include <algorithm> // Для std::sort

void interface() {
    cout << "Employee Management System" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. View Employee" << endl;
    cout << "3. Average Experience" << endl;
    cout << "4. Sort Employee by Year of Employment" << endl;
    cout << "5. Total Salary by Department" << endl;
    cout << "6. Exit" << endl;
}

void add_employee(vector<employee>& list_employee) {
    string name, department;
    int year_employment, salary;
    cout << "Name: ";
    cin >> name;
    cout << "Department: ";
    cin >> department;
    cout << "Year of Employment: ";
    cin >> year_employment;
    cout << "Salary: ";
    cin >> salary;
    list_employee.emplace_back(name, department, year_employment, salary);
}

float average_experience(const vector<employee>& list_employee) {
    int total_experience = 0;
    for (const auto& emp : list_employee) {
        total_experience += 2025 - emp.c_year_employment;
    }
    return static_cast<float>(total_experience) / list_employee.size();
}

void sort_employee(vector<employee>& list_employee) {
    sort(list_employee.begin(), list_employee.end(), [](const employee& a, const employee& b) {
        return a.c_year_employment < b.c_year_employment;
    });
}

float salary_by_department(const vector<employee>& list_employee, const string& search_depart) {
    float total_salary = 0;
    for (const auto& emp : list_employee) {
        if (emp.c_department == search_depart) {
            total_salary += emp.c_salary;
        }
    }
    return total_salary;
}

void employee::print_info() const {
    cout << "Name: " << c_name << endl;
    cout << "Department: " << c_department << endl;
    cout << "Year of Employment: " << c_year_employment << endl;
    cout << "Salary: " << c_salary << endl;
    cout << "Premium: " << c_premium << endl;
}