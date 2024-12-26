
#include <iostream>
using namespace std;
void Salary(int Stipend)
{
    cout << "Stipend of intern: " << Stipend << endl;
}
void Salary(int baseSalary, int bonus)
{
    cout << "Salary of Employee: " << baseSalary + bonus << endl;
}

void Salary(int MSalary, int bonuses, int incentives)
{
    cout << "Salary of Manager: " << MSalary + bonuses + incentives << endl;
}

int main()
{
    int Stipend;
    cout << "Enter the Stipend of Intern: " << endl;
    cin >> Stipend;
    Salary(Stipend);

    int baseSalary;
    cout << "Enter base salary of employee: " << endl;
    cin >> baseSalary;

    int bonus;
    cout << "Enter bonus of employee: " << endl;
    cin >> bonus;

    Salary(baseSalary, bonus);

    int MSalary;
    cout << "Enter salary of manager: " << endl;
    cin >> MSalary;

    int bonuses;
    cout << "Enter bonus of manager: " << endl;
    cin >> bonuses;

    int incentives;
    cout << "Enter incentives of manager: " << endl;
    cin >> incentives;

    Salary(MSalary, bonuses, incentives);

    return 0;
}