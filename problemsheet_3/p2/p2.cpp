/*
 * p2.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Time{
    public:
    int hh,mm,ss;

    void input(){
        cout<<"Enter The Time In (hh:mm:ss) This Format :";
        cin>>hh>>mm>>ss;
    }

    void display(){
        cout<<"The Time Is : "<<hh<<":"<<mm<<":"<<ss<<endl;
    }

    //Function for overload ' == ' operator , (== means comparetion )
    bool operator ==(Time a){

        if(hh == a.hh && mm == a.mm && ss == a.ss){
            return true;
        }
        return false;

    }

    //Function for overload ' >> ' operator , (>> means insertion )
    friend istream& operator >>(istream& in , Time &a){

        cout<<"Enter The Time In (hh:mm:ss) This Format :";
        in>>a.hh>>a.mm>>a.ss;
        return in;

    }

    //Function for overload ' << ' operator , (<< means Extrection )
    friend ostream& operator <<(ostream &out , const Time &a){

        out<<a.hh<<":"<<a.mm<<":"<<a.ss<<endl;
        return out;

    }

    //friend Time compareTime(Time a) {
    //     Time result;
    //     if (hh == a.hh && mm == a.mm && ss == a.ss) {
    //         result.hh = hh;
    //         result.mm = mm;
    //         result.ss = ss;
    //     } else {
    //         // Return an invalid time or special value to indicate they are not equal
    //         result.hh = -1;
    //         result.mm = -1;
    //         result.ss = -1;
    //     }
    //     return result;
    // }

};

int main(){
    Time T1,T2;
    T1.input();
    T1.display();
    T2.input();
    T2.display();

    if(T1 == T2){
        cout<<"Both Time Are Same..."<<endl;
    }else{
        cout<<"Both Time Are Not Same..."<<endl;
    }


    // T3 = T1.compareTime(T2);


    // if (T3.hh != -1){
    //     cout<<"Both times are the same."<<endl;
    // } else {
    //     cout<<"Both times are not the same."<<endl;
    // }

    Time T4;
    cin>>T4;

    cout<<T4;

    return 0;
}



