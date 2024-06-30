#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int attendance;
    float total_marks;

    // Constructor to initialize the member variables
    Student(string name, int attendance, float total_marks) {
        // Using this pointer to distinguish between member variables and parameters
        this->name = name;
        this->attendance = attendance;
        this->total_marks = total_marks;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Attendance: " << this->attendance << endl;
        cout << "Total Marks: " << this->total_marks << endl;
    }

    // Function to calculate and display percentage
    void calculate_percentage() {
        float percentage = (this->total_marks / 500) * 100; // Assuming total marks out of 500
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student student1("John", 85, 450);

    // Displaying the details of the student
    student1.display();

    // Calculating and displaying the percentage
    student1.calculate_percentage();

    return 0;
}
