#include<iostream>
#include<string>
using namespace std;

// Declare FOUR (4) arrays named studentID of type int, studentName of type string,
// scores of type double, and attendance of type int. Ensure that the arrays can store data
// for atleast FIFTY (50) students.
const int MAX_STUDENTS = 50; // a constant to store the maximum number of students
int studentID[MAX_STUDENTS]; // an array to store the student IDs
string studentName[MAX_STUDENTS]; // an array to store the student names
double scores[MAX_STUDENTS]; // an array to store the scores
int attendance[MAX_STUDENTS]; // an array to store the attendance percentages

// Write a function named inputStudentData() to collect user input for student ID, student name,
// scores, and attendance (% of the student’s attendance). Store this input into the corresponding arrays.
void inputStudentData(int n) // a function that takes the number of students as a parameter
{
    // a loop to iterate over the number of students
    for (int i = 0; i < n; i++)
    {
        // prompt the user to enter the student ID
        cout << "Enter the student ID for student " << i + 1 << ": ";
        // read the input and store it in the studentID array
        cin >> studentID[i];

        // prompt the user to enter the student name
        cout << "Enter the student name for student " << i + 1 << ": ";
        // read the input and store it in the studentName array
        cin >> studentName[i];

        // prompt the user to enter the score
        cout << "Enter the score for student " << i + 1 << ": ";
        // read the input and store it in the scores array
        cin >> scores[i];

        // prompt the user to enter the attendance percentage
        cout << "Enter the attendance percentage for student " << i + 1 << ": ";
        // read the input and store it in the attendance array
        cin >> attendance[i];
    }
}

// Develop a function called calculateAverageScores() to calculate the average scores for all
// students in the array scores.
double calculateAverageScores(int n) // a function that takes the number of students as a parameter
{
    // declare a variable to store the sum of scores
    double sum = 0;
    // a loop to iterate over the number of students
    for (int i = 0; i < n; i++)
    {
        // add the score of each student to the sum
        sum += scores[i];
    }
    // return the average score by dividing the sum by the number of students
    return sum / n;
}

// Create a function titled displayStudentRecords() to present all the student information,
// including student ID, student name, scores, attendance, and the calculated average scores.
void displayStudentRecords(int n) // a function that takes the number of students as a parameter
{
    // call the calculateAverageScores function and store the result in a variable
    double average = calculateAverageScores(n);
    // print a header for the student records
    cout << "Student Records:\n";
    cout << "ID\tName\tScore\tAttendance\tAverage\n";
    // a loop to iterate over the number of students
    for (int i = 0; i < n; i++)
    {
        // print the student information in a tabular format
        cout << studentID[i] << "\t" << studentName[i] << "\t" << scores[i] << "\t" << attendance[i] << "\t" << average << "\n";
    }
}

// a main function to test the program
int main()
{
    // declare a variable to store the number of students
    int n;
    // prompt the user to enter the number of students
    cout << "Enter the number of students: ";
    // read the input and store it in n
    cin >> n;
    // call the inputStudentData function with n as an argument
    inputStudentData(n);
    // call the displayStudentRecords function with n as an argument
    displayStudentRecords(n);
    // return 0 to indicate successful execution
    return 0;
}
