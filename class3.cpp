#include <iostream>
#include <string>
using namespace std;

class Student{
    public :
    string name;
    int age;
    double gpa;

    Student(){
        name = "Nitish";
        age = 20;
    }

    Student(string n , int a ){
        name = n;
        age = a;
    }
    void show(){
        cout<<"Age of "<< name << " " <<"is " << age <<endl;
    }

    void operator*(Student s ){
        age =age *s.age;
        cout<<"Mutplied age of "<< name << s.name<<" " << " is "<< " " <<age<<endl;
    
    }


};

int main(){
    Student s1;
    Student s2("John", 21 );
    s1.show();
    s2.show();

   s1*s2;


    return 0;
}