#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter Roll: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Marks: ";
    cin >> s.marks;
    students.push_back(s);
    cout << "Student added!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No records found.\n";
        return;
    }
    cout << "\nRoll\tName\t\tMarks\n";
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].roll << "\t"
             << students[i].name << "\t\t"
             << students[i].marks << "\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll to search: ";
    cin >> roll;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].roll == roll) {
            cout << "Found: " << students[i].name
                 << " | Marks: " << students[i].marks << "\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Student Database ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) addStudent();
        else if (choice == 2) displayStudents();
        else if (choice == 3) searchStudent();
        else if (choice == 4) cout << "Exiting...\n";
        else cout << "Invalid choice.\n";

    } while (choice != 4);

    return 0;
}
