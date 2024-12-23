/*
 * p6.cpp
 *
 *  Created on: 06-Sep-2024
 *      Author: root
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float pi = 3.141592653589793;

	cout<<"Default Format : "<<pi<<endl;

	cout<<"Fixed- point format with 3 decimal :  "<<fixed<<setprecision(3)<<pi<<endl;

	cout<<"Scinetific Format withe 5  decimal :"<<scientific<<setprecision(5)<<pi<<endl;

	cout.unsetf(ios::fixed | ios::scientific);
	cout<<"Default float format :"<<pi<<endl;

	cout<<"Default float format :"<<pi<<endl;

	cout<<"Right - alligned with width 15 :"<<setw(15)<<pi<<endl;

	cout<<"Left - allign with width 15 :"<<left<<setw(15)<<pi<<endl;

	return 0;

}




