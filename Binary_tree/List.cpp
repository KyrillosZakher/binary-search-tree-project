#include "List.h"
bool List::IsEmpty()
{
    if (root == NULL)
        return true;
    else
        return false;
}
/*****************************************************************************************/
bool List::IsExist(Node* temp,int num)
{
    if(IsEmpty())
    {
        return false;
    }
    else if(temp->getData().num == num)
    {
        return true;
    }
    else if(num <= temp->getData().num )
    {
        return IsExist(temp->getLeft(),num);
    }
    else
    {
        return IsExist(temp->getRight(),num);
    }
}
/*****************************************************************************************/
void List::Insertion(Node *iroot, Node* inewnode)
{
    if(root == NULL)
    {
        root = inewnode;
    }
    else if(inewnode->getData().num < iroot->getData().num)
    {
        if(iroot->getLeft() != NULL)
        {
            Insertion(iroot->getLeft(), inewnode);
        }
        else
        {
            iroot->setLeft(inewnode);
        }
    }
    else if(inewnode->getData().num > iroot->getData().num)
    {
        if(iroot->getRight() != NULL)
        {
            Insertion(iroot->getRight(), inewnode);
        }
        else
        {
            iroot->setRight(inewnode);
        }
    }
    else
    {
        cout<<"This number of patient has already been added before"<<endl;
    }
}
/*****************************************************************************************/
Node* List::Deletion(int num, Node *iroot)
{
    if(!IsExist(iroot,num))
    {
        cout<<"The number is not exist"<<endl;
        return 0;
    }
    else if(num == root->getData().num)
    {
        DeleteRootNode();
        return iroot;
    }
    else if(num < iroot->getData().num)
    {
        iroot->setLeft(Deletion(num,iroot->getLeft()));
    }
    else if(num > iroot->getData().num)
    {
        iroot->setRight(Deletion(num,iroot->getRight()));
    }
    else
    {
        if(iroot->getLeft()==NULL && iroot->getRight()==NULL)
        {
            delete iroot;
            iroot=NULL;
            return iroot;
        }
        else if(iroot->getLeft()==NULL)
        {
            struct Node* temp =iroot;
            iroot=iroot->getRight();
            delete temp;
        }
        else if(iroot->getRight()==NULL)
        {
            struct Node* temp =iroot;
            iroot=iroot->getLeft();
            delete temp;
        }
        else
        {
            struct Node* temp=root->getRight();
            iroot->setData(temp->getData());
            iroot->setRight(Deletion(temp->getData().num, iroot->getRight()));
        }
    }
    return iroot;
}
/*****************************************************************************************/
void List::DeleteRootNode()
{
    Node* delPtr = root;
    Node* temp = root;
    Node* pervioustemp = root;

    /// Case 0 - 0 children
    if(root->getLeft() == NULL && root->getRight() == NULL)
    {
        root = NULL;
        delete delPtr;
    }
    /// Case 1 - 1 Right child
    else if(root->getLeft() == NULL && root->getRight() != NULL)
    {
        temp = root->getRight();
        if(temp->getLeft() == NULL && temp->getRight() == NULL)
        {
            root = temp;
            delete delPtr;
            return;
        }
        while(temp->getLeft() != NULL)
        {
            pervioustemp = temp;
            temp = temp->getLeft();
        }
        root = temp;
        /// Smallest right subtree has no children
        if(temp->getRight() == NULL)
        {
            pervioustemp->setLeft(NULL);
            root->setRight(delPtr->getRight());
            delete delPtr;
        }
        /// Smallest right subtree has right child
        else if(temp->getRight() != NULL)
        {
            pervioustemp->setLeft(temp->getRight());
            root->setRight(delPtr->getRight());
            delete delPtr;
        }
    }
    /// Case 2 - 1 left child
    else if(root->getLeft() != NULL && root->getRight() == NULL)
    {
        temp = root->getLeft();
        if(temp->getLeft() == NULL && temp->getRight() == NULL)
        {
            root = temp;
            delete delPtr;
            return;
        }
        while(temp->getRight() != NULL)
        {
            pervioustemp = temp;
            temp = temp->getRight();
        }
        root = temp;
        /// Largest left subtree has no children
        if(temp->getLeft() == NULL)
        {
            pervioustemp->setRight(NULL);
            root->setLeft(delPtr->getLeft());
            delete delPtr;
        }
        /// Largest left subtree has left child
        else if(temp->getRight() != NULL)
        {
            pervioustemp->setRight(temp->getLeft());
            root->setLeft(delPtr->getLeft());
            delete delPtr;
        }
    }
    /// Case 3 - 2 children
    else if(root->getLeft() != NULL && root->getRight() != NULL)
    {
        temp = root->getRight();
        if(temp->getLeft() == NULL && temp->getRight() == NULL)
        {
            root = temp;
            root->setLeft(delPtr->getLeft());
            delete delPtr;
            return;
        }
        while(temp->getLeft() != NULL)
        {
            pervioustemp = temp;
            temp = temp->getLeft();
        }
        root = temp;
        /// Smallest right subtree has no children
        if(temp->getRight() == NULL)
        {
            pervioustemp->setLeft(NULL);
            root->setRight(delPtr->getRight());
            root->setLeft(delPtr->getLeft());
            delete delPtr;
        }
        /// Smallest right subtree has right child
        else if(temp->getRight() != NULL)
        {
            pervioustemp->setLeft(temp->getRight());
            root->setRight(delPtr->getRight());
            root->setLeft(delPtr->getLeft());
            delete delPtr;
        }
    }
}
/*****************************************************************************************/
void List::Search(int num,Node* iroot)
{
    if(iroot == NULL)
    {
        cout<<"It is not Exist"<<endl;
        Return();
        return;
    }
    else if(iroot->getData().num == num)
    {
        cout<<"\nNumber: "<<iroot->getData().num<<endl;
        cout<<"\nName: "<<iroot->getData().Name<<endl;
        cout<<"\nAge: "<<iroot->getData().age<<endl;
        cout<<"\nPatient drugs: "<<endl;
        for(int i=0; i<10; i++)
        {
            cout<<i+1<<"-"<<iroot->getData().Drugs[i]<<endl;
        }
    }
    else if(num < iroot->getData().num )
    {
        Search(num,iroot->getLeft());
    }
    else  if(num > iroot->getData().num )
    {
        Search(num,iroot->getRight());
    }
}
/*****************************************************************************************/
void List::InOrderPrint(Node* iroot)
{
    if(root != NULL)
    {
        if(iroot->getLeft() != NULL)
        {
            InOrderPrint(iroot->getLeft());
        }
        else {}
        cout<<"Patient number: "<<iroot->getData().num<<endl;
        cout<<"Patient name: "<<iroot->getData().Name<<endl;
        cout<<"Patient age: "<<iroot->getData().age<<endl;
        cout<<"Patient drugs: "<<endl;
        for(int i=0; i<10; i++)
        {
            cout<<i+1<<"-"<<iroot->getData().Drugs[i]<<endl;
        }
        if(iroot->getRight() != NULL)
        {
            InOrderPrint(iroot->getRight());
        }
    }
    else
    {
        cout<<"The list is empty"<<endl;
    }
}
/*****************************************************************************************/
void List::Save_file(Node* iroot)
{
    if(IsEmpty())
    {
        cout<<"There is no data."<<endl;
        return;
    }
    fstream BSTsave;
    BSTsave.open("BST_Patients.txt",ios_base::app);
    if (!BSTsave.is_open())
    {
        cout<<" Cannot open file!"<<endl;
    }
    if(root != NULL)
    {
        if(iroot->getLeft() != NULL)
        {
            Save_file(iroot->getLeft());
        }
        else {}
        BSTsave<<"Patient number: "<<(iroot->getData().num)<<endl;
        BSTsave<<"Patient name: "<<(iroot->getData().Name)<<endl;
        BSTsave<<"Patient age: "<<(iroot->getData().age)<<endl;
        BSTsave<<"Patient drugs: "<<endl;
        for(int i=0; i<10; i++)
        {
            BSTsave<<i+1<<"-"<<iroot->getData().Drugs[i]<<endl;
        }
        if(iroot->getRight() != NULL)
        {
            Save_file(iroot->getRight());
        }
    }
    else
    {
        cout<<"The list is empty"<<endl;
    }
    BSTsave.seekg(ios::beg);//reset position of the input
    BSTsave.close();
    cout<<"\t\t\tPress any key to back to the menu."<<endl;
}
/*****************************************************************************************/
void List::open_file()
{
    ifstream in("BST_Patients.txt");

    if(!in)
    {
        cout << "Cannot open input file.\n";
        return;
    }

    char str[500];

    while(in)
    {
        in.getline(str, 500);  // delim defaults to '\n'
        if(in) cout << str << endl;
    }

    in.close();
}
/*****************************************************************************************/
Node* List::BSTroot()
{
    return root;
}
/*****************************************************************************************/
