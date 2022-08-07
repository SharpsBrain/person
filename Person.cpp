#include <iostream>

using namespace std;
struct person{
char name[50];
int age;
float salary;
};
void display(person p){
cout<<"\n\nDisplay data :(with the function)\n\n";
cout<<"Name :\t"<<p.name;
cout<<"\nAge:\t"<<p.age;
cout<<"\nSalary:\t"<<p.salary;}
person getData()
{
    person p;
    cin.ignore();
    cout<<"\n\nGet data from the user (with function)";
    cout<<"Enter full name :\t";
    cin.get(p.name,50);
    cout<<"Enter your age:\t";
    cin>>p.age;
    cout<<"\nEnter salary :\t";
    cin>>p.salary;
    return p;
}
    int main()
{
 //declaring a variable of type person:
 person p,p2;
 //get data from the user:
 cout<<"\nEnter full name:\t";
 cin.get(p.name,50);
 cout<<"\nEnter age :\t";
 cin>>p.age;
    cout<<"\nEnter salary :\t";
    cin>>p.salary;
    //dissplay the data:
    cout<<"\nDisplay data (without function)\n\n";
    cout<<"Name:\t"<<p.name;
    cout<<"\nAge:\t"<<p.age;
cout<<"\nSalary:\t"<<p.salary;
    display(p);//function calling
    cout<<"\n\nDefine a function which returns the structure";
    p2=getData();
    display(p2);


    return 0;
}
