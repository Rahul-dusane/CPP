/*
 * p2.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class patient{
protected:
	int p_id;
	string p_name;
public:
	void get_data(){
		int id;string name;

		cout<<"\nEnter The Id : ";
		cin>>id;

		cout<<"Enter The Name :";
		cin>>name;

		p_id = id;
		p_name = name;

		return ;
	}

	void P_display(){
		cout<<"Patient_name = "<<p_id<<"\n"<<"Patient_id = "<<p_name<<"\n";
	}
};

class IPD{
protected:
	int w_n,b_n;
	float charges_per_day;
public:
	void input(){
		int ward;int bed;int charges;

		cout<<"Enter The Ward_NO :";
		cin>>ward;

		cout<<"Enter The Bed_NO : ";
		cin>>bed;

		cout<<"Enter The charges_As_Per_Day :";
		cin>>charges;

		w_n = ward;
		b_n = bed;
		b_n = charges;

		return ;
	}
	void I_display(){
		cout<<"Ward_no = "<<w_n<<"\n"<<"Bed_no = "<<b_n<<"\n"<<"Charges_per_day = "<<charges_per_day<<endl;
	}
};

class days:public IPD,public patient{
protected:
	int no_of_day;
public:
	void data(){

		get_data();
		input();

		int day;

		cout<<"Enter The Days : ";
		cin>>day;

		no_of_day = day;
	}
	void display(){
		P_display();
		I_display();

		cout<<"no_of_day = "<<no_of_day<<endl;
	}
};


int main(){

	days D[3];
	for(int i=0;i<3;i++){
		D[i].data();
	}

	for(int i=0;i<3;i++){
		D[i].display();
	}

	return 0;
}


