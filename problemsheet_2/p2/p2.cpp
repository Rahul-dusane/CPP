/*
 * p2.cpp
 *
 *  Created on: 22-Aug-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class operation{
private:
	int a[5];
public:
	operation();
	operation(int arr[]);
	void set_data();
	void display();
	void search();
	void Bubbled_sort();
	void sum();
	void Avg();
	void max();
	void min();
	void swep();
};

operation :: operation(){

	for(int i=0;i<5;i++){
		a[i] = 0;
	}
}

void operation ::set_data(){
	int b[5];
	cout<<"\nEnter the Array Elements : ";
	for(int i=0;i<5;i++){
	cin>>b[i];
	}
	*this = operation(b);
}

operation :: operation(int arr[]){
	for(int i=0;i<5;i++){
		a[i] = arr[i];
	}

}

void operation :: display(){
	cout<<"Array Elements :";
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void operation ::search(){
	int element;
	cout<<"Enter the element For Search :";
	cin>>element;
	for(int i=0;i<5;i++){
		if(a[i] == element){
			cout<<"Element Found at a["<<i<<"] :"<<endl;
		}
		else{
			cout<<"Element not found"<<endl;
		}
	}
	return ;
}

void operation :: Bubbled_sort(){

   for(int i=0;i<5;i++){
	   for(int j=i+i;j<5;j++){
		   if(a[i] > a[j]){
			   int temp = a[i];
			   a[i] = a[j];
			   a[j] =temp;
		   }
	   }
   }
   cout<<"\nArray elements after bubble sorting :\n"<<endl;
   for(int i=0;i<5;i++){
	   cout<<" "<<a[i];
   }
}

void operation :: sum(){
	int sum = 0;
	for(int i=0;i<5;i++){
		sum += a[i];
	}
	cout<<"\nSum : \n"<<sum;
	return ;
}

void operation :: Avg(){
	int sum = 0;
	int avg = 0;
	for(int i=0;i<5;i++){
		sum += a[i];
	}
	avg = sum / 5;
	cout<<"\nAvg : \n"<<avg<<endl;
	return ;
}

void operation ::max(){
	int max;
		for(int i=0;i<5;i++){
			if(max < a[i]){
				max = a[i];
			}
		}
		cout<<"Maximum Element : \n"<<max;
		return ;
}

void operation ::min(){
	int min=a[0];
		for(int i=0;i<5;i++){
			if(min > a[i]){
				min = a[i];
			}
		}
		cout<<"Minimum Element : \n"<<min;
}

void operation ::swep(){
	int temp;

	temp=a[0];
	a[0]=a[5-1];
	a[5-1]=temp;

	cout<<"Array Elements After Swep :"<<endl;
	for(int i=0;i<5;i++)
   {
		cout<<" "<<a[i];

}
}

int main(){

	operation O;

	do{

		int choice;
		cout<<"Enter the choice :";
		cin>>choice;

	cout<<"1. Insert"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Search."<<endl;
	cout<<"4. Bubble Sort."<<endl;
	cout<<"5. Sum of array elements."<<endl;
	cout<<"6. Average of array elements."<<endl;
	cout<<"7. Find Maximum value from array elements."<<endl;
	cout<<"8. Find Minimum value from array elements."<<endl;
	cout<<"9. Swap first and last element of an array.";<<endl;

		switch(choice){
		case 1:
			O.set_data();
			break;
		case 2:
			O.display();
			break;
		case 3:
			O.search();
			break;
		case 4:
			O.Bubbled_sort();
			break;
		case 5:
			O.sum();
			break;
		case 6:
			O.Avg();
			break;
		case 7:
			O.max();
			break;
		case 8:
			O.min();
			break;
		case 9:
			O.swep();
			break;

		default:
			cout<<"\nEnter Valid Choice :";
		}
	}
	while(1);





return 0;
}
