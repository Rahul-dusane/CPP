/*
 * p1.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class vehicle{
protected:
	int model_id;
	string model_name,passing;
	int ly;
public:
	void get_data(int id,int l_year,string name,string pass);
	void display();
};

void vehicle ::get_data(int id,int l_year,string name,string pass){

	model_id = id;
	ly = l_year;
	model_name = name;
	passing = pass;
}

void vehicle::display(){
	cout<<"\n"<<"Model_no = "<<model_id<<endl;
	cout<<"\n"<<"Model_name = "<<model_name<<endl;
	cout<<"\n"<<"Vehicle_Passing = "<<passing<<endl;
	cout<<"\n"<<"launched_year = "<<ly<<endl;
}

class two_wheeler : public vehicle{
protected:
	float distance;
	int mileage;
public:
	void get_data(float dis,int mil);
	void display();
};

void two_wheeler::get_data(float dis,int mil){

	distance = dis;
	mileage = mil;
}

void two_wheeler::display(){
	cout<<"\n"<<"Distance = "<<distance<<endl;
	cout<<"\n"<<"Mileage = "<<mileage<<endl;
}

class electric : public two_wheeler{
protected:
	string company;
	int bettry_backup;
public:
	void get_data(string comp,int backup);
	void display();
};

void electric::get_data(string comp,int backup){

	company = comp;
	bettry_backup = backup;
}

void electric::display(){
	cout<<"\n"<<"Brand = "<<company<<endl;
	cout<<"\n"<<"Bettry_backup = "<<bettry_backup<<endl;
}

int main(){
	vehicle V[3];
	two_wheeler T[3];
	electric E[3];
	for(int i=0;i<3;i++){

		int id;int l_year;string name;string pass;

		cout<<"\nEnter the model id : ";
		cin>>id;

		cout<<"Enter the launced_year :";
		cin>>l_year;

		cout<<"Enter the model name :";
		cin>>name;

		cout<<"Enter the Passing :";
		cin>>pass;

		V[i].get_data(id, l_year, name, pass);

		float dis;int mil;

		cout<<"\nEnter the Distance : ";
		cin>>dis;

		cout<<"Enter the mileage :";
		cin>>mil;

		T[i].get_data(dis, mil);


		string comp;int backup;

		cout<<"\nEnter the company :";
		cin>>comp;

		cout<<"Enter the bettry_backup :";
		cin>>backup;

		E[i].get_data(comp, backup);

	}

	for(int i=0;i<3;i++){
		V[i].display();
		T[i].display();
		E[i].display();
	}
	return 0;
}




