#include "Node.h"
#include "input.h"
Node* Node::NewNode()
{
    Node* newnode = new Node();
    patient ipatient;
    ipatient.Name = inName();
    ipatient.age = inAge();
    ipatient.drugsNum = inNumDrugs();
    if(ipatient.drugsNum != 0){
        cout<<"Enter patient drugs: "<<endl;
    }
    for(int i=0;i<10;i++){
        if(i < ipatient.drugsNum){
            cout<<i+1<<"-";
            ipatient.Drugs[i] = inDrugs();
            cout<<endl;
        }
        else{
            ipatient.Drugs[i] = "non";
        }
    }
    ipatient.num = inNum();
    newnode->Data = ipatient;
    newnode->setLeft(NULL);
    newnode->setRight(NULL);
    return newnode;
}
/*****************************************************************************************/
void Node::setData(patient iData) /**Is empty untill now we well make it**/
{
    Data = iData;
}
/*****************************************************************************************/
patient Node::getData()
{
  return Data;
}
/*****************************************************************************************/
void Node::setLeft(Node* lptr)
{
  left = lptr;
}
/*****************************************************************************************/
Node* Node::getLeft()
{
  return left;
}
/*****************************************************************************************/
void Node::setRight(Node* rptr)
{
  right = rptr;
}
/*****************************************************************************************/
Node* Node::getRight()
{
   return right;
}
