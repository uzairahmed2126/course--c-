// multiple inheritance
#include <iostream>
using namespace std;
class person
{
public:
    char name[10];
    int age;
    person()
    {
        age = 0;
    }
};
class student : public person
{
    char subject[20];
    int rollno;

public:
    student()
    {
        rollno = 0;
    }
    void getdata()
    {
        cout << "enter name : \n";
        cin >> name;
        cout << "enter age : \n";
        cin >> age;
        cout << "enter subject : \n";
        cin >> subject;
        cout << "enter rollno : \n";
        cin >> rollno;
    }
    void print()
    {
        cout << "Your Name is :" << name;
        cout << "Your age is :" << age;
        cout << "Your subject is :" << subject;
        cout << "Your rollNo. is :" << rollno;
    }
};

class marks : public student {
    
};
class employee : public person
{
    int salary;
    char work[20];

public:
    employee()
    {
        salary = 0;
    }
    void getdata()
    {
        cout << "enter name : \n";
        cin >> name;
        cout << "enter age : \n";
        cin >> age;
        cout << "enter work : \n";
        cin >> work;
        cout << "enter salary : \n";
        cin >> salary;
    }
    void print()
    {
        cout << "Your Name is :" << name << endl;
        cout << "Your age is :" << age << endl;
        cout << "Your work is :" << work << endl;
        cout << "Your salary is :" << salary << endl;
    }
};
int main()
{
    employee obj;
    student obj1;
    obj.getdata();
    obj.print();
    obj1.getdata();
    obj1.print();
    return 0;
};