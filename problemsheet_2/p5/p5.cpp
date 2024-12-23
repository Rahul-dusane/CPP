/*
 * p5.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    string name;
    public:
    student();
    void display();
};

student :: student(){
    cout<<"Enter The Roll_no :";
    cin>>roll_no;

    cout<<"Enter The Name :";
    cin>>name;

}

void student :: display(){
    cout<<roll_no<<"\t"<<name<<"\n";
}

class marks : public student{
    protected:
    int sub[3];
    float total=0.0;

    public:
    marks();
    void display();
};

marks :: marks() : student(){
    for(int i=0;i<3;i++){
        cout<<"Enter The subject "<<i+1<<" marks :\n";
        cin>>sub[i];
        total += sub[i];
    }
}

void marks::display() {
    cout << roll_no << "\t" << name << "\t";
    for (int i = 0; i < 3; i++) {
        cout<<"\t"<<sub[i]<<"\t";
    }
    cout<<"\t"<<total;
}

class result : public marks{
    protected:
    float per;
    char grade;

    public:
    result();
    void display_result();

    float get_percentage() const{
        return per;
    }
};

result::result(){
    per = total / 3;
    if(per<0 || per>100){
        cout<<"There is the issue in marks input :\n";
    }
    else if(per>=50 && per<60){
        grade = 'E';
    }
    else if(per>=60 && per<70){
        grade = 'D';
    }
    else if(per>=70 && per<80){
        grade = 'C';
    }
    else if(per>=80 && per<90){
        grade = 'B';
    }
    else if(per>=90 && per<=100){
        grade = 'A';
    }
    else{
        grade = 'F';
    }
}

void result :: display_result(){
    display();
   cout <<"\t"<<per << "\t\t" << grade<<endl;
}


int main(){

    result R[3];
    cout<<"\nRoll_no\tName\t\tSubject1\tSubject2\tSubject3\tTotal\tPercentage\tGrade\n";
    for(int i=0;i<3;i++){

        R[i].display_result();
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(R[i].get_percentage() < R[j].get_percentage()){
               result temp = R[i];
                R[i] = R[j];
                R[j] = temp;
            }
        }
    }
    cout<<"\nRoll_no\tName\t\tSubject1\tSubject2\tSubject3\tTotal\tPercentage\tGrade\n";
    for(int i=0;i<3;i++){
        R[i].display_result();
    }

    return 0;
}

