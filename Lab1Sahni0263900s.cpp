#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string finalTerm;
    double finalCGPA;

public:

    Student(string term, double cgpa) {
        finalTerm = term;
        finalCGPA = cgpa;
        name = "";
    }
    
    
    Student() {
        finalTerm = "Fall_2025";
        finalCGPA = 3.10;
        name = "";
    }
    
  
    void takeInput(string studentName, string term, double cgpa) {
        name = studentName;
        finalTerm = term;
        finalCGPA = cgpa;
    }
    
    
    void takeInput(string studentName) {
        name = studentName;
    }
    
    
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Final Term: " << finalTerm << endl;
        cout << "Final CGPA: " << finalCGPA << endl;
        
    }
};

int main() {
   
    Student student1, student2, student3;
    
    string name, term;
    double cgpa;
    
   
    cout << "Enter information for Student 1:" << endl;
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter final term  ";
    getline(cin, term);
    cout << "Enter final CGPA: ";
    cin >> cgpa;
    cin.ignore(); 
    
    student1.takeInput(name, term, cgpa);
    
    
    cout << "\nEnter information for Student 2:" << endl;
    cout << "Enter student name: ";
    getline(cin, name);
    
    student2.takeInput(name);

    cout << "\nEnter information for Student 3:" << endl;
    cout << "Enter student name: ";
    getline(cin, name);
    
    student3.takeInput(name);
    
    
    cout << "\n=== Student Information ===" << endl;
    cout << "\nStudent 1 Information:" << endl;
    student1.displayInfo();
    
    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();
    
    cout << "\nStudent 3 Information:" << endl;
    student3.displayInfo();
    
    return 0;
}