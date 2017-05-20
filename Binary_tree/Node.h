#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
struct patient
{
    int num;
    int age;
    int drugsNum;
    string Name;
    string Drugs[10];
};

class Node
{
private:
    patient Data;
    Node *left;
    Node *right;
public:
    Node* NewNode();
    void setData(patient iData);
    patient getData();
    void setLeft(Node* lptr);
    Node* getLeft();
    void setRight(Node* rptr);
    Node* getRight();
};
#endif // NODE_H_INCLUDED
