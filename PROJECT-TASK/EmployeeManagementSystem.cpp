#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Employee
{
public:
    int empID;
    string name;
    int age;
    string department;
    float salary;
    int attendance;
    float bonus;



    // Default Constructor
    //   Employee() {
    //     empID = 0;
    //     age = 0;
    //     salary = 0.0;
    //     attendance = 0;
    //     bonus = 0.0;
    // }
    // aa banne thi kari sakay but aa ak line ma pati jase
    
    Employee() : empID(0), age(0), salary(0.0), attendance(0), bonus(0.0) {}

    void addEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Employee added successfully!\n";
    }

    void markAttendance(int days)
    {
        attendance += days;
        cout << "Attendance marked for " << days << " days.\n";
    }

    void calculateSalary()
    {
        float finalSalary = salary + bonus;
        cout << "Final Salary: " << finalSalary << "\n";
    }

    void applyIncrement(float percent)
    {
        salary += salary * (percent / 100);
        cout << "Salary incremented by " << percent << "%.\n";
    }

    void grantBonus(float amount)
    {
        bonus += amount;
        cout << "Bonus granted: " << amount << "\n";
    }

    void displayEmployee()
    {
        cout << "\nEmployee Details:";
        cout << "\nID: " << empID;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
        cout << "\nAttendance: " << attendance << " days";
        cout << "\nBonus: " << bonus << "\n";
    }
};

int main()
{
    int choice;
    Employee emp;
    do
    {
        cout << "\nEmployee Management System";
        cout << "\n1. Add Employee";
        cout << "\n2. Mark Attendance";
        cout << "\n3. Calculate Salary";
        cout << "\n4. Apply Increment";
        cout << "\n5. Grant Bonus";
        cout << "\n6. Display Employees";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.addEmployee();
            break;
        case 2:
            emp.markAttendance(5);
            break;
        case 3:
            emp.calculateSalary();
            break;
        case 4:
            emp.applyIncrement(10);
            break;
        case 5:
            emp.grantBonus(2000);
            break;
        case 6:
            emp.displayEmployee();
            break;
        case 7:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice! Try again.";
        }
    } while (choice != 7);

    return 0;
}