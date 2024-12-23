/*
 * p3.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class Toggle{
public :
	char str[50];

	void input(){
		cout<<"Enter The String :";
		cin>>str;
	}

	void display(){
		cout<<"The String = "<<str;
	}

	 void operator ~(){
		for(int i = 0; str[i] != '\0'; i++){
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i] = str[i] - 32;
			}else if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] = str[i] + 32;
			}
		}

	}

};

int main(){
	Toggle T1;
	T1.input();
	T1.display();

	~T1;
	T1.display();

	return 0;
}
