/*
 * p3.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */


#include<iostream>
#include<string>
using namespace std;

class employee{
    protected :

    int emp_id;
    string emp_name;
    double salary;

    public:

    employee(){}
    employee(int id,string name,double sal){

        emp_id = id;
        emp_name = name;
        salary = sal;
    }

    void display(){
    	cout<<"\n";
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class department : public employee{
    private:

    string dep_name;
    int total_employee;

    public :

    department(){}
    department(string name,int employee){

        dep_name = name;
        total_employee = employee;
    }

    void display(){
        cout << "Department Name: " << dep_name << endl;
        cout << "Total Employees in Department: " << total_employee << endl;
    }
};

class date{
    private :

    int dd,mm,yy;

    public:
    date(){}
    date(int d,int m,int y){
        dd = d;
        mm = m;
        yy = y;
    }
    void display(){
        cout << "Joining Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main(){
    const int size_input = 3;
    employee E[size_input];
    department D[size_input];
    date Da[size_input];


    for(int i=0;i<size_input;i++){
        int id;
        string name;
        double sal;
        cout<<"Enter the employee id :";
        cin>>id;

        cout<<"Enter the employee name :";
        cin>>name;

        cout<<"Enter the employee salary :";
        cin>>sal;

        E[i] = employee(id,name,sal);

        string d_name;
        int employee;
        cout<<"Enter the department name :";
        cin>>d_name;

        cout<<"How many employee work in that department :";
        cin>>employee;

        D[i] = department(d_name,employee);

        int  d,m,y;
        cout << "Enter Joining Date (dd mm yyyy): ";
        cin >> d >> m >> y;

        Da[i] = date(d,m,y);

    }

    printf("\n");
    for(int i=0;i<size_input;i++){
        cout << "\nDetails of Employee " << (i + 1) << ":\n";
       E[i].display();
       D[i].display();
       Da[i].display();
    }
    return 0;
}




