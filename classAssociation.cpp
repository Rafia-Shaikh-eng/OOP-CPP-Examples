#include<iostream>
#include<vector>
using namespace std;

//************************************************************************************
//1- association  example
//************************************************************************************
class University;
class Student {
    private:
    string name;
    University* university;
    public:
        Student(const string& name) : name(name) {}
        void enroll(University& university);
        string getName() const { return name; }

};
class University {
    private:
    vector<Student*> students;
    public:
        void addStudent(Student& student) {
            students.push_back(&student);
        }
        void displayStudents() {
            cout << "Students in the university:" << endl;
            for (const auto& student : students) {
                cout << "- " << student->getName() << endl;
            }
        }
};
void Student::enroll(University& university) {
    this->university = &university;
    university.addStudent(*this);
}
//************************************************************************************
//2- composition example
//************************************************************************************
class Engine {
    public:
        void start() {
            cout << "Engine started" << endl;
        }
};

class Wheel {
    public:
        void rotate() {
            cout << "Wheel rotating" << endl;
        }
};

class Car {
    private:
    Engine engine;
    Wheel wheels[4];
    public:
        Car() {}
        void start() {
            engine.start();
            for (auto& wheel : wheels) {
                wheel.rotate();
            }
        }

};


//************************************************************************************
//3- Aggregation example 
//************************************************************************************
class Employee {
    private:
    string name;
    public:
        Employee(const string& name) : name(name) {}
        string getName() const { return name; }
};

class Department {
    private:
    vector<Employee> employees;
    public:
        void addEmployee(const Employee& employee) {
            employees.push_back(employee);
        }
        void displayEmployees() {
            cout << "Employees in the department:" << endl;
            for (const auto& employee : employees) {
                cout << "- " << employee.getName() << endl;
            }
        }

};

//Driver Code
int main() {
    //1- Association
    cout<<"\n\nAssociation"<<endl;
    University myUniversity;
    Student student1("Aisha");
    Student student2("Zoya");

    student1.enroll(myUniversity);
    student2.enroll(myUniversity);

    myUniversity.displayStudents();

    //2-Composition
    cout<<"\n\nComposition"<<endl;
    Car myCar;
    myCar.start();
    
    cout<<"\n\nAggregation"<<endl;
    //3-Aggregation
    Department myDepartment;
    Employee employee1("Ali");
    Employee employee2("Emman");

    myDepartment.addEmployee(employee1);
    myDepartment.addEmployee(employee2);

    myDepartment.displayEmployees();
    
    
    return 0;
}

