#include <iostream>
#include <string>

using namespace std;

struct student {
    string Name;
    char Gender;
    int Group;
    int NumInGroup;
    int ExamGrade[8];
};

void liststudents(student students[], int& num_students)
{

    student student;
    cout << "Еnter number of students:";
    cin >> num_students;

    cout << "Enter Name:";
    getline(cin, student.Name);

    cout << "Enter Gender:";
    cin >> student.Gender;

    cout << "Enter Group:";
    cin >> student.Group;

    cout << "Enter NumInGroup:";
    cin >> student.NumInGroup;


    cout << "Enter ExamGrade:";

    for (int i(0); i < 8; i++) {
        cin >> student.ExamGrade[i];

    }
}

void change_list(student students[], int num_students, int index) {

    if (index < 0 || index >= num_students) {
        cout << "Ошибка,такого не существует." << endl;
        return;
    }
    student& student = students[index];

    cout << "Enter Name:";
    cin.ignore();
    getline(cin, student.Name);

    cout << "Enter Gender:";
    cin.ignore();
    cin >> student.Gender;

    cout << "Enter Group:";
    cin >> student.Group;

    cout << "Enter NumInGroup:";
    cin >> student.NumInGroup;

    cout << "Enter ExamGrade:";

    for (int i(0); i < 8; i++) {
        cin >> student.ExamGrade[i];

    }
}

void InfStudent(student students[], int n) {

    for (int i = 0; i < n; i++) {
        cout << "student_number:" << i + 1;
        cout << "Name:" << students[i].Name;
        cout << "Gender:" << students[i].Gender;
        cout << "Group:" << students[i].Group;
        cout << "NumInGroup:" << students[i].NumInGroup;
        cout << "ExamGrade:";
        for (int s(0); s < 8; s++) {
            cout << students[i].ExamGrade[s];
        }
    }
}
void Grouppystudents(student students[], int n, int NumInGroup) {
    for (int i = 0; i < n; i++) {
        if (NumInGroup == students[i].NumInGroup) {
            cout << "Student_number" << i + 1;
            cout << "Name:" << students[i].Name;
            cout << "Gender:" << students[i].Gender;
            cout << "Group:" << students[i].Group;
            cout << "NumInGroup:" << students[i].NumInGroup;
            cout << "ExamGrade:";
            for (int j = 0; j < 8; j++) {
                cout << students[j].ExamGrade;
            }

        }
    }

}
float middle_examgrades(student students) {
    float summ = 0;
    for (int i = 0; i < 8; i++) {
        summ += students.ExamGrade[i];
    }
    return summ / 8;
}
void thebest(student students[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n; s++)
        {
            float srexamrage1 = middle_examgrades(students[i]);
            float srexamrage2 = middle_examgrades(students[s]);
            if (srexamrage1 > srexamrage2) {
                swap(students[i], students[s]);
            }
        }
    }

}
void genders(student students[], int n)
{
    int M = 0;
    int W = 0;
    for (int i = 0; i < n; i++)
    {

        if (students[i].Gender == 'M')
        {
            M += 1;
        }
        else if (students[i].Gender == 'W')
        {
            W += 1;
        }
    }
    cout << "Men:" << M;
    cout << "Women:" << W;
}
void no_scolarship(student students[], int n)
{
    cout << "No scolarship:";
    for (int i = 0; i < n; i++)
    {
        int mingrade = 5;
        for (int j = 0; j < 8; j++)
        {
            mingrade = min((short)mingrade, students[i].ExamGrade[j]);
        }
        if (mingrade <= 3) {
            cout << "Student_number" << i + 1;
            cout << "Name:" << students[i].Name;
            cout << "Gender:" << students[i].Gender;
            cout << "Group:" << students[i].Group;
            cout << "NumInGroup:" << students[i].NumInGroup;
            cout << "ExamGrade:";
            for (int j = 0; j < 8; j++) {
                cout << students[j].ExamGrade;
            }
        }
    }
}
void xoroshist_otlichnik(student students[], int n)
{
    cout << "Good and Excellent students:";
    for (int i = 0; i < n; i++)
    {
        int mingrade = 5;
        for (int j = 0; j < 8; j++)
        {
            mingrade = min((short)mingrade, students[i].ExamGrade[j]);
        }
        if (mingrade >= 4) {
            cout << "Student_number" << i + 1;
            cout << "Name:" << students[i].Name;
            cout << "Gender:" << students[i].Gender;
            cout << "Group:" << students[i].Group;
            cout << "NumInGroup:" << students[i].NumInGroup;
            cout << "ExamGrade:";
            for (int j = 0; j < 8; j++) {
                cout << students[j].ExamGrade;
            }
        }
    }
}
void otlichnik(student students[], int n)
{
    cout << "Excellent students:";
    for (int i = 0; i < n; i++)
    {
        int mingrade = 5;
        for (int j = 0; j < 8; j++)
        {
            mingrade = min((short)mingrade, students[i].ExamGrade[j]);
        }
        if (mingrade == 5) {
            cout << "Student_number" << i + 1;
            cout << "Name:" << students[i].Name;
            cout << "Gender:" << students[i].Gender;
            cout << "Group:" << students[i].Group;
            cout << "NumInGroup:" << students[i].NumInGroup;
            cout << "ExamGrade:";
            for (int j = 0; j < 8; j++) {
                cout << students[j].ExamGrade;
            }
        }
    }
}
void numofspisok(student students[], int n)
{
    cout << "Введите номер студента";
    int number;
    cin >> number;
    for (int i = 0; i < n; i++)
    {
        if (students[i].NumInGroup == number) {
            cout << "Student_number" << i + 1;
            cout << "Name:" << students[i].Name;
            cout << "Gender:" << students[i].Gender;
            cout << "Group:" << students[i].Group;
            cout << "NumInGroup:" << students[i].NumInGroup;
            cout << "ExamGrade:";
            for (int j = 0; j < 8; j++) {
                cout << students[j].ExamGrade;
            }
        }
    }
}
int main()

{
    setlocale(LC_ALL, "rus");
    student students[50];
    int num_students = 0;
    while (true) {
        cout << "\tВыберите опцию: \n";
        cout << "1. Создание новой записи о студенте:\n";
        cout << "2. Внесение изменений в уже имеющуюся запись:\n";
        cout << "3. Вывод всех данных о студентах:\n";
        cout << "4. Вывод информации обо всех студентах группы N:\n";
        cout << "5. Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию:\n";
        cout << "6.  Вывод количества студентов мужского и женского пола:\n";
        cout << "7. Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»:\n";
        cout << "8. Вывод данных о студентах, имеющих номер в списке – k:\n";
        int number;
        cin >> number;

        switch (number) {
        case 1:
            liststudents(students, num_students);
            break;
        case 2:
            int index;
            cin >> index;
            change_list(students, num_students, index);
            break;
        case 3:
            InfStudent(students, num_students);
            break;
        case 4:
            int NumInGroup;
            cin >> NumInGroup;
            Grouppystudents(students, num_students, NumInGroup);
            break;
        case 5:
            thebest(students, num_students);
            break;
        case 6:
            genders(students, num_students);
            break;
        case 7:
            no_scolarship(students, num_students);
            xoroshist_otlichnik(students, num_students);
            otlichnik(students, num_students);
        case 8:
            numofspisok(students, num_students);
            break;
        }
    }
    return 0;
}









