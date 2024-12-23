/*
 * p5.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Binary{
public :
	float num;

	void input(){

		cout<<"Enter the Value : ";
		cin>>num;
	}

	void display(){
		cout<<"The Value Of Num = "<<num<<endl;
	}

	friend Binary operator +(Binary a,Binary b){
		Binary tmp;
		tmp.num = a.num + b.num;
		return tmp;
	}

	friend Binary operator -(Binary a,Binary b){
			Binary tmp;
			tmp.num = a.num - b.num;
			return tmp;
	}

	friend Binary operator *(Binary a,Binary b){
				Binary tmp;
				tmp.num = a.num * b.num;
				return tmp;
	}

	friend Binary operator /(Binary a,Binary b){
				Binary tmp;
				tmp.num = a.num / b.num;
				return tmp;
	}

	friend istream & operator >>(istream &in , Binary &a){
		cout<<"Enter The Num : ";
		in>>a.num;
		return in;
	}

	friend ostream & operator <<(ostream &out , Binary &a){
			out<<a.num<<endl;
			return out;
	}

};

int main(){
	Binary B1,B2;

	B1.input();
	B1.display();

	B2.input();
	B2.display();

	Binary B3 = B1 + B2;
	B3.display();

	Binary B4 = B1 - B2;
	B4.display();

	Binary B5 = B1 * B2;
	B5.display();

	Binary B6 = B1 / B2;
	B6.display();

	Binary B7;
	cin>>B7;
	cout<<B7;



	return 0;
}


