#include "Menu.h"

void Return()
{
    printf("\n\t\t\tPress Any Key To Back To Main Menu");
    _getch();
}
/***************************************************************************************************/
void Back_Ground()
{
    system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;

}
/***************************************************************************************************/
void Back_Ground_1()
{
      system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\t-->Add patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;


}
/***************************************************************************************************/
void Back_Ground_2()
{
      system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\t-->Delete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;


}
/***************************************************************************************************/
void Back_Ground_3()
{
        system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\t-->Search"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;


}
/***************************************************************************************************/
void Back_Ground_4()
{
        system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\t-->Print"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;


}
/***************************************************************************************************/
void Back_Ground_5()
{
      system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\t-->Save data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;

}
/***************************************************************************************************/
void Back_Ground_6()
{
       system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\t-->Load file"<<endl;
    cout<<"\t\t\t\tExit"<<endl;


}
/***************************************************************************************************/
void Back_Ground_7()
{
        system("cls");
    cout<<"\n\n\t\t\t\tPress Up Or Down To Choose"<<endl;
    cout<<"\n\n\t\t\t\tAdd patient"<<endl;
    cout<<"\t\t\t\tDelete patient"<<endl;
    cout<<"\t\t\t\tSearch"<<endl;
    cout<<"\t\t\t\tPrint"<<endl;
    cout<<"\t\t\t\tSave data"<<endl;
    cout<<"\t\t\t\tLoad file"<<endl;
    cout<<"\t\t\t\t-->Exit"<<endl;


}
/***************************************************************************************************/
/***************************************************************************************************/
int Home()          //function for getting directions up or down
{
    int x;
    int flag=0;
    while(1)
    {
        fflush(stdin);
        x=_getch();
        if(x == 0xE0) x = getch();
                if(x == 'P') // x = Down
        {
             flag++;
            if(flag > 7)
                flag=1;
            if (flag == 1) Back_Ground_1();
            else if(flag == 2) Back_Ground_2();
            else if(flag == 3) Back_Ground_3();
            else if(flag == 4) Back_Ground_4();
            else if(flag == 5) Back_Ground_5();
            else if(flag == 6) Back_Ground_6();
            else if(flag == 7) Back_Ground_7();

        }
        else if(x == 72) // x = Up
        {
             flag--;
            if(flag < 1)
                flag = 7;
            if (flag == 1) Back_Ground_1();
            else if(flag == 2) Back_Ground_2();
            else if(flag == 3) Back_Ground_3();
            else if(flag == 4) Back_Ground_4();
            else if(flag == 5) Back_Ground_5();
            else if(flag == 6) Back_Ground_6();
            else if(flag == 7) Back_Ground_7();
        }
        else if(x == 13) // x = enter
        {
            return flag;
            break;
        }
    }
    return flag;
}
