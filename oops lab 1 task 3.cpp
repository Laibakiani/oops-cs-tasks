// write comment
#include<iostream>
#include<string>
using namespace std;
struct employee{
 string name;
 float salary;
 int Id;
};
// Function to input employee data
void InputemployeeData(employee employees[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "\nEnter details for employee " << i + 1 << ":\n";
 cout << "Name: ";
 cin >> employees[i].name;
 cout << "Id Number: ";
 cin >> employees[i].Id;
 cout << "Salary: ";
 cin >> employees[i].salary;
 }
}
void DisplayemployeeData(employee employees[], int count) {
 cout << "\n--- Employee Records ---\n";
 for (int i = 0; i < count; i++) {
 cout << "Id Number: " << employees[i].Id << "\n";
 cout << "Name: " <<employees[i].name << "\n";
 cout << "salary: " << employees[i].salary << "\n\n";
 }
}
// Function to find the employee with the highest marks
void Findhighestsalary(employee employees[], int count) {
 int topIndex = 0;
 for (int i = 1; i < count; i++) {
 if (employees[i].salary > employees[topIndex].salary) {
 	topIndex = i;
 }
 }
 cout << "\n--- Highest Salary ---\n";
 cout << "Name: " << employees[topIndex].name << "\n";
 cout << "Salary: " << employees[topIndex].salary<< "\n";
 cout << "Id: " << employees[topIndex].Id << "\n";
}
int main() {
 int numemployees;
 cout << "Enter the number of employees: ";
 cin >>numemployees;
 employee employees[numemployees]; // Structured array
 InputemployeeData(employees, numemployees);
 DisplayemployeeData(employees, numemployees);
 Findhighestsalary(employees, numemployees);
 return 0;
}









































































