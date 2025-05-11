#include <iostream>
#include <vector>
#include <string>
using namespace std;

class employee {
private:
    string c_name;
    float c_premium;
    int c_year_employment;
    string c_department;
    int c_salary;

public:
    employee(); // Конструктор за замовчуванням
    employee(string name, string department, int year_employment, int salary); // Конструктор з параметрами
    void print_info() const; // Виведення інформації про співробітника

    friend float average_experience(const vector<employee>& list_employee);
    friend void sort_employee(vector<employee>& list_employee);
    friend float salary_by_department(const vector<employee>& list_employee, const string& search_depart);
};

// Функції
void interface();
void add_employee(vector<employee>& list_employee);
