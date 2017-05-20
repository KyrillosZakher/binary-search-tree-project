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
    void Save_file(Node* iroot); /**this is the big bonus in statement ,we will make it after finishing all of project**/
    void open_file(); /**this is the big bonus in statement ,we will make it after finishing all of project**/
};


#endif // LIST_H_INCLUDED
