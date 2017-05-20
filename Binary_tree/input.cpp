#include <stdio.h>
#include "input.h"
#include "List.h"
string inName(){
    string name;
    cout<<"Name: ";
    cin>>name;
    while(cin.fail())
        {
            cout<<endl<<"failed, try again ..."<<endl;
            cin.clear(); // reset the failed state
            fflush(stdin);
            cout<<"Enter name: ";
            cin>>name;
        }
        return name;
}
//-----------------------------------------------
int inNumDrugs(){
    int num;
    cout<<"Number of patient drugs: ";
    cin>>num;
    while(cin.fail() || num > 10)
        {
            cout<<endl<<"failed, try again ..."<<endl;
            cin.clear(); // reset the failed state
            fflush(stdin);
            cout<<"Number of patient drugs: ";
            cin>>num;
        }
    return num;
}
//-----------------------------------------------
int inNum(){
    int num;
    cout<<"Enter number of patient: ";
    cin>>num;
    while(cin.fail())
        {
            cout<<endl<<"failed, try again ..."<<endl;
            cin.clear(); // reset the failed state
            fflush(stdin);
            cout<<"Enter number of patient: ";
            cin>>num;
        }
    return num;
}
//-----------------------------------------------
int inAge(){
    int age;
    cout<<"Enter patient age: ";
    cin>>age;
    while(cin.fail())
        {
            cout<<endl<<"failed, try again ..."<<endl;
            cin.clear(); // reset the failed state
            fflush(stdin);
            cout<<"Enter patient age: ";
            cin>>age;
        }
    return age;
}
//-----------------------------------------------
string inDrugs(){
    string drugs;
    cin>>drugs;
    while(cin.fail())
        {
            cout<<endl<<"failed, try again ..."<<endl;
            cin.clear(); // reset the failed state
            fflush(stdin);
            cout<<"Enter right name: ";
            cin>>drugs;
        }
    return drugs;
}
