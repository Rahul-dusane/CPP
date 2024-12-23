/*
 * p3.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class date{
public:
	int dd;
	int mm;
	int yyyy;
	void get_data(int d,int m,int y);
	void display();
	void Leap_year();
	int day();
	int month();
	int year();
};
void date ::get_data(int d,int m,int y){
	dd = d;
	mm = m;
	yyyy = y;
}
void date::display(){
	cout<<"The Date (dd/mm/yyyy) : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
}
void date :: Leap_year(){
	if(yyyy % 4 == 0){
		cout<<yyyy<<" Is Leap Year :"<<endl;
	}
	else{
		cout<<yyyy<<" Is Not Leap Year :"<<endl;
	}
	return ;
}
int date ::  day(){
	return dd;
}
int date :: month(){
	return mm;
}
int date :: year(){
	return yyyy;
}
class time{
public:
	int ss;
	int mm;
	int hh;
	void get_data(int s,int mi,int h);
	void display();
	int second();
	int minutes();
	int hours();
}T;
void time::get_data(int s,int mi,int h){
	ss = s;
	mm = mi;
	hh = h;
}
void time::display(){
	cout<<"The Date (hh/mm/hh) : "<<hh<<":"<<mm<<":"<<ss<<endl;
}
int time :: hours(){
	return hh;
}
int time :: minutes(){
	return mm;
}
int time :: second(){
	return ss;
}
int main(){
date D;

int d,m,y;


int s,mi,h;




int choice;
do{
	cout<<"Enter the Choice :";
	cin>>choice;

	cout<<"1. Date."<<endl;
			cout<<"2. Time."<<endl;
			cout<<"3. Format Date."<<endl;
			cout<<"4. Difference between 2 dates."<<endl;
			cout<<"4. Check Leap year."<<endl;
			cout<<"5. Retrieve Day."<<endl;
			cout<<"6. Retrieve Month."<<endl;
			cout<<"7. Retrieve Year."<<endl;
			cout<<"8. Retrieve Hour."<<endl;
			cout<<"9. Retrieve Minute."<<endl;
			cout<<"10. Retrieve Second."<<endl;


	switch(choice){
	case 1:
		cout<<"Enter the date :"<<endl;
		cin>>d;
		cout<<"Enter the month :"<<endl;
		cin>>m;
		cout<<"Enter the Year :"<<endl;
		cin>>y;
		D.get_data(d, m, y);
		D.display();
		break;

	case 2:
		cout<<"Enter the Hours :"<<endl;
		cin>>h;
		cout<<"Enter the Minutes :"<<endl;
		cin>>mi;
		cout<<"Enter the Second :"<<endl;
		cin>>s;
		T.get_data(s, mi, h);
		T.display();
		break;

	case 3:
		D.display();
		break;

	case 4:
		D.Leap_year();
		break;

	case 5:
		cout<<"The Date Is "<<D.day()<<endl;
		break;

	case 6:
		cout<<"The Month Is "<<D.month()<<endl;
		break;
	case 7:
		cout<<"The Year Is "<<D.year()<<endl;
		break;
	case 8:
		cout<<"The Hours Is "<<T.hours()<<endl;
		break;
	case 9:
		cout<<"The Minutes Is "<<T.minutes()<<endl;
		break;
	case 10:
		cout<<"The Second Is "<<T.second()<<endl;
		break;
	case 11:
		cout<<"You Are Out Of The Program"<<endl;
		return 0;
	default :
		cout<<"Enter Valid Choice :";


	}

}
while(1);

return 0;
}



