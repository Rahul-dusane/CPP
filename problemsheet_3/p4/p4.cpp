/*
 * p4.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */


#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Cstring{
    public :
    string str;

    void input(){

        cout<<"\n\nEnter The String: ";
        cin>>str;

    }

    void display(){

        cout<<"The String Is: "<<str;

    }

    friend Cstring operator +(const Cstring a , const Cstring b){

        Cstring tmp;
        tmp.str = a.str + b.str;
        return tmp;

    }

    bool operator ==(const Cstring a){

        if(str == a.str){
            return true;
        }
        return false;

    }

    bool operator !=(const Cstring a){

        if(str != a.str){
            return true;
        }
        return false;

    }

    bool operator <(const Cstring a){

        if(str.length() < a.str.length()){
            return true;
        }
        return false;

    }

    bool operator >(const Cstring a){

      if(str.length() > a.str.length()){
            return true;
        }
        return false;

    }

    bool operator <=(const Cstring a){
    	if(str.length() <= a.str.length()){
    		return true;
    	}
    	return false;
    }

    bool operator >=(const Cstring a){
    	if(str.length() >= a.str.length()){
    		return true;
    	}
    	return false;
    }
};

int main(){

    Cstring S1,S2;
    S1.input();
    S1.display();

    S2.input();
    S2.display();

    cout<<"\n\nOutput After ' + ' Overloading:\n";
    Cstring S3 = S1 + S2;
    S3.display();

    cout<<"\n\nOutput After ' == ' Overloading:\n";
    if(S1 == S2){
        cout<<"Both Strings Are Same...\n";
    }else{
        cout<<"Both Strings Are Not Same...\n";
    }

    cout<<"\nOutput After ' != ' Overloading:\n";
    if(S1 != S2){
        cout<<"Both Strings Are Not Same...\n";
    }else{
        cout<<"Both Strings Are Same...\n";
    }

    cout<<"\nOutput After ' < ' Overloading:\n";
    if (S1 < S2) {
        cout << "S1 Object String Is Smaller Than S2 Object String...\n";
    } else {
        cout << "S1 Object String Is Larger Than S2 Object String...\n";
    }

    cout<<"\nOutput After ' > ' Overloading:\n";
    if (S1 > S2) {
        cout << "S1 Object String Is Larger Than S2 Object String...\n";
    } else {
        cout << "S1 Object String Is Smaller Than S2 Object String...\n";
    }

    cout<<"\nOutput After ' <= ' Overloading:\n";
    if(S1 <= S2){
    	cout<<"S1 Object String Is Smaller Or Equal To S2 Object String...\n";
    }else{
    	cout<<"S1 Object String Is Larger Than S2 Object String...\n";
    }

    cout<<"\nOutput After ' >= ' Overloading:\n";
    if(S1 >= S2){
    	cout<<"S1 Object String Is Larger Or Equal To S2 Object String...\n";
    }else{
    	cout<<"S1 Object String Is Smaller Than S2 Object String...\n";
    }

    return 0;
}


