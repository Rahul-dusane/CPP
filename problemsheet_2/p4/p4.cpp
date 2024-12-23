/*
 * p4.cpp
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */


#include<iostream>
using namespace std;


class Employee{
    protected :
    int emp_id;
    string name;
    string designation;

    public:
   string department;
    Employee(int id = 0,string str = "",string post = "",string dep = ""){
        emp_id = id;
        name = str;
        designation = post;
        department =dep;
    }

    void display(){
        cout<<emp_id<<"\t"<<name<<"\t"<<designation<<"\t\t"<<department<<"\n";
    }
};

class Date{
    protected:
    int d=0,m=0;
    public:
   int y=0;
    void get_date(){
        cout<<"Enter the date (DD/MM/YYYY): ";
        cin>>d>>m>>y;
    }
    void display(){
        cout<<d<<"/"<<m<<"/"<<y<<"\n";
    }

};

class Salary{
    protected :
    int BS,GS;
    float HRA,DA;

    public :

    void get_salary(){
        cout<<"Enter Your Basic Salary : ";
        cin>>BS;

        if(BS <= 30000){
            DA = BS * (60.0 / 100);
            HRA = BS * (20.0 / 100);
            GS = DA + HRA +BS;
        }
       else if(BS > 30000 && BS <= 45000){
            DA = BS * (70.0 / 100);
            HRA = BS * (30.0 / 100);
            GS = DA + HRA +BS;
        }
        else if(BS > 45000){
            DA = BS * (85.0 / 100);
            HRA = BS * (40.0 / 100);
            GS = DA + HRA +BS;
        }
        else{
            cout<<"Enter Valid salary :";
        }

    }

    void display(){
        cout<<GS<<"\n";
    }

};

int main(){

    Employee E[3];
    Date DOB[3],DOJ[3],CD[3];
    Salary S[3];

    for (int i = 0; i < 3; i++) {
        int id;
        string str,post,dep;

        cout << "\nEmployee " << (i + 1) << " Details:\n";

        cout<<"Enter the employee id :";
        cin>>id;

        cout<<"Enter the employee name :";
        cin>>str;

        cout<<"Enter the Designation :";
        cin>>post;

        cout<<"Enter the Department :";
        cin>>dep;

        E[i] = Employee(id, str, post, dep);

        cout << "Enter Date of Birth:\n";
        DOB[i].get_date();

        cout << "Enter Date of Joining:\n";
        DOJ[i].get_date();

        cout << "Enter Current Date:\n";
        CD[i].get_date();

        S[i].get_salary();

    }

    int EX[3];
    for(int i=0;i<3;i++){
        EX[i] = CD[i].y - DOJ[i].y;
    }

    cout << "\nDisplaying Employee Details:\n";
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";
    for (int i = 0; i < 3; i++) {
        cout << "\n";
        E[i].display();
        cout << "\n";
        cout<<"Date Of Birth :";DOB[i].display();
        cout<<"Date Of Joining :";DOJ[i].display();
        cout<<"Current Date :";CD[i].display();
        cout<<"Salary :";S[i].display();
        cout <<"Experience : "<<EX[i] << "\n";
    }

    cout<<"\nSearch The Employee Who Work In Salse Department :"<<endl;
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";
    for(int i = 0; i < 3; i++){
        if(E[i].department == "sales" || E[i].department == "Sales"){
            cout << "\n";
            E[i].display();
            cout << "\n";
            cout<<"Date Of Birth :";DOB[i].display();
            cout<<"Date Of Joining :";DOJ[i].display();
            cout<<"Current Date :";CD[i].display();
            cout<<"Salary :";S[i].display();
            cout <<"Experience : "<<EX[i] << "\n";
        }
    }

    cout<<"\nSearch The Employee Who`s Experiance Is More Then 5 Years :\n";
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";
    for(int i=0;i<3;i++){
        if(EX[i] > 5){
            cout << "\n";
            E[i].display();
            cout << "\n";
            cout<<"Date Of Birth :";DOB[i].display();
            cout<<"Date Of Joining :";DOJ[i].display();
            cout<<"Current Date :";CD[i].display();
            cout<<"Salary :";S[i].display();
            cout <<"Experience : "<<EX[i] << "\n";
        }
    }

    return 0;
}

