/*
 * p7.cpp
 *
 *  Created on: 30-Aug-2024
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
	void Check_date();

};
void date ::get_data(int d,int m,int y){
	dd = d;
	mm = m;
	yyyy = y;
}

void date::display(){
	cout<<"The Date (dd/mm/yyyy) : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	date::Check_date();
}

void date ::Check_date(){
	if(yyyy >= 1900 && yyyy<= 9999){
		if(mm >= 1 && mm <= 12){
			if((dd >= 1 && dd<= 31) && (mm == 1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==10 || mm == 12)){
				cout<<"Date Is Valid :"<<endl;
			}
			else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)){
				cout<<"Date Is valid :"<<endl;
			}
			else if((dd>=1 && dd<=28) && (mm==2)){
				cout<<"Date Is Valid :"<<endl;
			}
			else if(dd==29 && mm==2 && (yyyy%400 == 0 || (yyyy%4==0 && yyyy%100 != 0))){
				cout<<"Date Is Valid :"<<endl;
			}
			else{
				cout<<"Date Is Invalid :"<<endl;
			}
		}
		else{
			cout<<"Date Is Invalid :"<<endl;
		}
	}
	else{
		cout<<"Date Is Invalid :"<<endl;
	}
	return ;
}



int main(){
date D;
int d,m,y;
        cout<<"Enter the date :"<<endl;
		cin>>d;
		cout<<"Enter the month :"<<endl;
		cin>>m;
		cout<<"Enter the Year :"<<endl;
		cin>>y;
D.get_data(d, m, y);
D.display();

return 0;
}
