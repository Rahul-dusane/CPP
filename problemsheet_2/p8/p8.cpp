/*
 * p8.cpp
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class Book{
    protected:
    int no;
    string book_name;
    float book_price;
    public:

    void get_date(){

        cout<<"Enter the book no :";
        cin>>no;

        cout<<"Enter the book name :";
        cin>>book_name;

        cout<<"Enter the book price :";
        cin>>book_price;

    }

    void display(){
        cout<<"\n";
        cout<<"Book No : "<<no<<"\n";
        cout<<"Book Name : "<<book_name<<"\n";
        cout<<"Book Price : "<<book_price<<"\n";
    }

};

class Author_detail{
    protected :
    string author_name;
    int d = 0,m = 0,y = 0;
    public:
    void get_detail(){
        cout<<"Enter the Author Name : ";
        cin>>author_name;

        cout<<"Enter the Publish Date (DD MM YYYY) : ";
        cin>>d>>m>>y;
    }

    void display(){
        cout<<"Author Nmae : "<<author_name<<"\n";
        cout<<"Publish Date : "<<d<<"/"<<m<<"/"<<y<<"\n";
    }

};

class Operations_book : public Author_detail , public Book{
    public:
    string a_name;
    string b_name;

    void search_a_name(){
        cout<<"Enter the Author Name that you want to search : \n";
        cin>>a_name;
        for(int i=0;i<3;i++){
            if(a_name == author_name){
                Book::display();
                Author_detail::display();
            }
        }
    }
    void search_b_name(){
        cout<<"Enter the Book Name that you want to search :\n";
        cin>>b_name;
        for(int i=0;i<3;i++){
            if(b_name == book_name){
                Book::display();
                Author_detail::display();
            }
        }
    }
};

int main(){
    Operations_book book[3],search;
    int choice;
    do{
        cout<<"\nPress 1:Input_Details\npress 2:Display_Details\npress 3:Search_By_Author\npress 4:Search_By_Book\npress 5:Exit\n";
        cout<<"Enter Your Choice :";
        cin>>choice;

        switch(choice){
            case 1:
            for(int i=0;i<3;i++){
                book[i].get_date();
                book[i].get_detail();
            }
            break;

            case 2:
            for(int i=0;i<3;i++){
                book[i].Book::display();
                book[i].Author_detail::display();
            }
            break;

            case 3:
            search.search_a_name();
            break;

            case 4:
            search.search_b_name();
            break;

            case 5:
            cout<<"You are out of the program....";
            return 0;

            default :
            cout<<"Enter valid choice :\n";
        }

    }while(1);

    return 0;
}





