#include <iostream>

struct Student
{
    char name[100];
    char EGN[10];
    char facultyNum[10];
    int gradesCount;
    int gradesList[100];
};

void initialize(Student& student)
{
    std::cout << "Enter student name:\n";
    std::cin >> student.name;
    std::cout << "Enter student ID\n";
    std::cin >> student.EGN;
    std::cout << "Enter student faculty number:\n";
    std::cin >> student.facultyNum;
    std::cout << "Enter amount of grades student has:\n";
    std::cin >> student.gradesCount;
    for (size_t i = 0; i < student.gradesCount; i++)
    {
        std::cout << "Enter grade " << i + 1 << '\n';
        std::cin >> student.gradesList[i];
    }
}

void printAverageGrades(Student* students, const int& studentsAmount)
{
    double average = 0, sum = 0;
    for (size_t i = 0; i < studentsAmount; i++)
    {
        for (size_t j = 0; j < students[i].gradesCount; j++)
        {
            sum += students[i].gradesList[j];
        }
        average = sum / students[i].gradesCount;
        std::cout << students[i].name << " has an average of " << average << '\n';
        sum = 0;
    }
}

Student& getBestStudent(Student* students, const int& studentsAmount)
{
    double average = 0, sum = 0, biggestAverage = 0;
    Student& bestStudent = students[0];
    for (size_t i = 0; i < studentsAmount; i++)
    {
        for (size_t j = 0; j < students[i].gradesCount; j++)
        {
            sum += students[i].gradesList[j];
        }
        average = sum / students[i].gradesCount;
        if (average > biggestAverage)
        {
            biggestAverage = average;
            bestStudent = students[i];
        }
        sum = 0;
    }
    return bestStudent;
}

int main()
{
    int studentsAmount;
    std::cout << "Enter amount of all students\n";
    std::cin >> studentsAmount;
    Student* students = new Student[studentsAmount];

    for (int i = 0; i < studentsAmount; i++)
        initialize(students[i]);

    printAverageGrades(students, studentsAmount);
    Student& bestStudent = getBestStudent(students, studentsAmount);
    std::cout << bestStudent.name << " has the highest average.\n";

    delete[] students;
    return 0;
}
