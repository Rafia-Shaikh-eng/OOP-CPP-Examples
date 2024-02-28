#include <iostream>
using namespace std;


//course class 
class Course {
private:
    string name;

public:
//constructor -> initialize the value of course name 
    Course(const string& courseName){
        name=courseName;
    }
//getter 
    const string& getName() const {
        return name;
    }
};
//each student enrolled in a course 
//this is association between the student and course 
//both classes is having has-a relationship 
//there is no inheritance (is-a relationship)
class Student {
private:
    string name;
    int id;

public:
//constructor -> initialize the student's class data members
    Student(const string& studentName, int studentID) {
            name=studentName;
            id=studentID; 
    }

    const string& getName() const {
        return name;
    }

    int getID() const {
        return id;
    }
//association
    void enrollCourse(const Course& course) {
        cout << name << " is enrolled in course: " << course.getName() << endl;
    }
};

int main() {
    //two students (objects)
    Student student1("Ali", 1001);
    Student student2("Ahmed", 1002);
    
    ///courses offered
    Course course1("OOP");
    Course course2("PF");
    //student1 -> Ali is enrolled in course1 (OOP)
    student1.enrollCourse(course1);
    //student2 -> Ahmed is enrolled in course2 (PF)
    student2.enrollCourse(course2);

    //cool :)

    return 0;
}
