/*
 * p1.cpp
 *
 *  Created on: 01-Oct-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class matrix{
public:
	int arr[3][3];
	void input1();
	void output1();


	friend matrix operator +(matrix a,matrix b){
		matrix tmp;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				tmp.arr[i][j] = a.arr[i][j] + b.arr[i][j];
			}
		}

		return tmp;
	}


};

void matrix::input1(){
	cout<<"Enter The Arr Elements :\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	return ;
}

void matrix::output1(){
	cout<<"\n Your Arr Elements Are :"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return ;
}

int main(){
	matrix M1,M2,M3;
	M1.input1();
	M1.output1();
	M2.input1();
	M2.output1();

	M3 = M1 + M2;
	M3.output1();
	return 0;
}



