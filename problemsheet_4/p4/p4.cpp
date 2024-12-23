/*
 * p4.cpp
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */

#include<iostream>
#include<string>
using namespace std;

class product{
    protected :

    int p_id;
    string p_name;
    float price;
    int quantity;

    public :
    product(){}

    product(int id,string name,float pri,int qua){
        p_id = id;
        p_name = name;
        price = pri;
        quantity = qua;
    }

    float get_price() {
        return price * quantity;
    }

    void display_p(){
        cout<<"\nProduct id = "<<p_id;
        cout<<"\nproduct name = "<<p_name;
        cout<<"\nproduct price = "<<get_price();
        cout<<"\nproduct quantity = "<<quantity;
    }

};

class customer{
    protected:

    int c_id;
    string c_name;

    public:

    customer(){}

    customer(int id,string name){
        c_id = id;
        c_name = name;
    }

    void display_c(){
        cout<<"\nCustomer id = "<<c_id;
        cout<<"\nCustomer name = "<<c_name;
    }


};

class bill : public customer{
    private:

    product products[3];
    int cnt;

    public:

    bill(){}
    bill(int id,string name){
        c_id = id;
        c_name = name;
        cnt = 0;
    }

    void get_product(product &p){
        products[cnt++] = p;
    }

    void get_bill(){
        cout<<"\n---Supermarket Bill---"<<endl;
        display_c();

        float total_amount = 0.0;

        for(int i=0;i<cnt;i++){
            products[i].display_p();
            total_amount += products[i].get_price();
        }

        cout<<"\n---------------------------\nTotal Bill Amount : "<<total_amount;
    }

};

int main(){
    product p[3];

    bill b1;
    int c_id;
    string c_name;

    cout<<"\nEnter the customer id :";
    cin>>c_id;

    cout<<"\nEnter the customer name :";
    cin>>c_name;

    b1 = bill(c_id,c_name);

    for(int i=0;i<3;i++){
        int id;
        string name;
        float price;
        int qua;

        cout<<"Enter the product id :";
        cin>>id;

        cout<<"Enter the product name :";
        cin>>name;

        cout<<"Enter the product price :";
        cin>>price;

        cout<<"Enter the product quantity :";
        cin>>qua;

        printf("\n");

        p[i] = product(id,name,price,qua);

        b1.get_product(p[i]);
    }

    b1.get_bill();

    return 0;
}



