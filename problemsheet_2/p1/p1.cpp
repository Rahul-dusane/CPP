/*
 * p1.cpp
 *
 *  Created on: 23-Aug-2024
 *      Author: root
 */

#include<iostream>
using namespace std;
class operation
{
string str1;
int flag=0;
public:
void setdata()
{
cout<<"Enter any string: ";
cin>>str1;
}


void length()
{
int strlen=0,i=0;
while(str1[i]!= '\0')
{
strlen++;
i++;
}
cout<<"Length of the string no.1: "<<strlen;
}
void comparison()
{
string str2;
int i;

cout<<"\nEnter string2 for comparison: ";
cin>>str2;

for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
{
if(str1[i] == str2[i])
{
flag = 0;
}
else
{
flag = 1;
break;
}
}

if(flag==0)
{
cout<<"\n strings are same.\n";
}
else
{
cout<<"String are not same";
}
}


void cpy()
{
int i;
string str2;
for(i=0; str1[i]!='\0'; i++)
{
str2 = str1;
}
cout<<"\nCopied in string no.2: "<<str2<<endl;
}

//concat
void concat()
{
string str2;
cout<<"Enter any string for concat: ";
cin>>str2;
cout<<"Both strings concatenation: "<<str1+str2;
}


void rev()
{
int length=0;
for(int i=0; str1[i]!='\0'; i++)
{
length++;
}
cout<<"\nReversed string no.1: ";
for(int i=length-1; i>=0; i--)
{
cout<<str1[i];
}
}

void pallindrome()
{
string str2;
int l=0,flag=0;

for(int i=0; str1[i]!='\0' ; i++)
{
l++;
}

for(int i=l-1, j=0; i>=0; i--,j++)
{
str2[j] = str1[i];
}

cout<<endl;

for(int i=0; i<l; i++)
{
if(str1[i] == str2[i])
{
flag = 0;
}

else
{
flag = 1;
break;
}

}
if(flag == 0)
{
cout<<"\nstring is pallindrome";
}
else
{
cout<<"String is not pallindrome";
}
}

void Ucase()
{

int i;

for(i=0; str1[i]!='\0'; i++)
{
if(str1[i] >= 'a' && str1[i] <= 'z')
{
str1[i] = str1[i] - 32;
}
}
cout<<"\nString no.1 in Upper case: "<<str1;
}


void Lcase()
{
int i;
for(i=0; str1[i]!='\0'; i++)
{
if(str1[i] >= 'A' && str1[i] <= 'Z')
{
str1[i] = str1[i] + 32 ;
}
}
cout<<"\nString no.1 in Lower case: "<<str1;
}
};

int main()
{
operation obj1;
obj1.setdata();
obj1.length();
obj1.Ucase();
obj1.Lcase();
obj1.comparison();
obj1.cpy();
obj1.concat();
obj1.rev();
obj1.pallindrome();
return 0;
}



