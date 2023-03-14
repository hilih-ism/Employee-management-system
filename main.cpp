#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<windows.h>
#include<cstring>
#include<conio.h>
#include "entrance.cpp"
#include "mainmenu.h"
#include "reader.h"
#include "Display.h"
#include "get_info.h"
#include "search.h"



using namespace std;


struct contact{

 int phone;
 string email,address,name;

};

struct employee{
    string fname,mname,lname,marriage_stat,citizen,gender,birth_day,s_date,s_name,w_location,w_title,education,institute,e_stat;
    int age,id,salary,year;
    contact cont,emer;

};





int main()
{
  display();

    int checker =0;
    mainentrance:
    int navigation;

    navigation = menu();

if(navigation == 1)
   {
          system("cls");
           int amount;

          cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the number of employee's you wish to enter:  ";
            cin>>amount;
            employee new_employee[amount];

          get_info(new_employee,amount);
          checker++;

          goto mainentrance;

   }

else if(navigation ==2)
   {
        if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There was no information to display fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }

        else
        {
             system("cls");
             read();
             goto mainentrance;

        }




        }

else if(navigation ==3)
{    int goo;
   if(goo == search())
   {
            goto mainentrance;

   }


}







else if(navigation ==4)
{  

  exit(0);

}

































 return 0;





}
