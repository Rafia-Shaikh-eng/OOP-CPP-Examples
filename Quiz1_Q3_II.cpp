#include <iostream>
#include <vector>
using namespace std;



// Global function declaration
double calculateGPA(const vector<int>& grades);

class Student {
    //data members
    private:
        int St_id;
        vector<int> St_Grades;
        int courses_enroll;
    public:
        //constructor
        Student(int id) : St_id(id) {}

        // Method to update student's grades
        void updateGrades(const vector<int>& grades) {
            St_Grades = grades;
            courses_enroll = grades.size();
        }

        // Method to calculate GPA
        double calculateGPA() const {
            return ::calculateGPA(St_Grades); 
        }

        // Method to display student information
        void displayInfo() const {
            cout << "Student ID: " << St_id << endl;
            cout << "Grades:";
            for (int grade : St_Grades) {
                cout << " " << grade;
            }
            cout<<"\n# of enrolled courses: "<<courses_enroll<<endl;
            // cout<<"GPA:"<<calculateGPA()<<endl;
            cout << endl;
        }
};

// AcademicReportGenerator class
class AcademicReportGenerator {
    private:
        vector<Student> mStudents;
    public:
        // Method to add a student
        void addStudent(const Student& student) {
            mStudents.push_back(student);
        }

        // Method to generate academic report
        void generateReport() {
            cout << "Academic Report" << endl;
            double totalGPA = 0.0;
            for (const auto& student : mStudents) {
                student.displayInfo();
                double studentGPA = student.calculateGPA();
                cout << "Student GPA: " << studentGPA << endl;
                totalGPA += studentGPA;
            }
            //well, if you skip this that's alright because it wasn't required 
            double averageGPA = totalGPA / mStudents.size();
            cout << "Average GPA: " << averageGPA << endl;
        }

};

// Global function definition
double calculateGPA(const vector<int>& grades) {
    double sum = 0.0;
    for (int grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

int main() {
    // Creating students and updating their grades
    Student student1(101);
    student1.updateGrades({85, 90, 95});

    Student student2(102);
    student2.updateGrades({75, 80, 85});


    AcademicReportGenerator reportGenerator;


    reportGenerator.addStudent(student1);
    reportGenerator.addStudent(student2);

    // Generating the academic report
    reportGenerator.generateReport();

    return 0;
}
