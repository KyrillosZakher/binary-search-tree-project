#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <fstream>
#include "Node.h"
#include "input.h"
#include "Menu.h"
class List
{
private:
    Node* root;
    int flag;
public:
    List()
    {
        root = NULL;
    }
    Node* BSTroot();
    bool IsEmpty();
    bool IsExist(Node* temp,int num);
    void Insertion(Node* iroot, Node* inewnode);
    Node*Deletion(int num, Node* iroot);
    void DeleteRootNode();
    void Search(int num,Node* iroot);
    void InOrderPrint(Node* iroot);
    void Save_file(Node* iroot);
    void open_file(); 
};


#endif // LIST_H_INCLUDED
