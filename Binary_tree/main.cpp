#include "Node.h"
#include "List.h"
#include "Menu.h"
int main()
{
    system("COLOR 0A");
    List obj;
    Node newNode;
    int index;
    int num;
    cout<<endl<<endl<<"\t\t\t\t\tWELCOM"<<endl;
    cout<<"\t\t\t\tPress any key to continue"<<endl;
    _getch();
    system("cls");
loop_background:
    Back_Ground();
    while(1)
    {
        index = Home();
        if(index == 7)
        {
            system("cls");
            return 0;
        }
        else if(index == 1)
        {
            system("cls");
            obj.Insertion(obj.BSTroot(),newNode.NewNode());
            system("cls");
            goto loop_background;
        }
        else if (index == 2)
        {
            system("cls");
            if(obj.BSTroot() != NULL)
            {
                cout<<"Please Enter the number of patient you want to delete: ";
                cin>>num;
                fflush(stdin);
                while(cin.fail()) /**To check that the number is integer or is not character**/
                {
                    cout<<endl<<"failed, try again ..."<<endl;
                    cin.clear(); // reset the failed state
                    fflush(stdin);
                    cout<<"please enter a correct number"<<endl;
                    cin>>num;
                }
                obj.Deletion(num,obj.BSTroot());
            }
            else
            {
                cout<<"There is no data"<<endl<<"Press any key to continue"<<endl;
            }
            _getch();
            system("cls");
            goto loop_background;
        }
        else if(index == 3)
        {
            if(obj.IsEmpty())
            {
                system("cls");
                cout<<"the list is empty"<<endl;
                Return();
                system("cls");
                goto loop_background;
            }
            else
            {
                system("cls");
                cout<<"Please Enter the number of patient you want to find: ";
                cin>>num;
                fflush(stdin);
                while(!cin) /**To check that the number is integer or is not character**/
                {
                    cin.clear();
                    cout<<"****** please enter a correct number ******";
                    cin>>num;
                }
                obj.Search(num,obj.BSTroot());
                Return();
                system("cls");
                goto loop_background;
            }
        }
        else if(index == 4)
        {
            system("cls");
            obj.InOrderPrint(obj.BSTroot());
            _getch();
            system("cls");
            goto loop_background;
        }
        else if(index == 5)
        {
            system("cls");
            obj.Save_file(obj.BSTroot());
            _getch();
            system("cls");
            goto loop_background;
        }
        else if(index == 6)
        {
            system("cls");
            obj.open_file();
            _getch();
            system("cls");
            goto loop_background;
        }
    }
    return 0;
}
