#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int menu()
{

   int choice;

  mainmenu:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Where do you want to go" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> ADD EMPLOYEE'S INFORMATION" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> DISPLAY EXSISTING RECORDS" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> SEARCH FOR A PARTICULAR RECORD" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\tEnter your choice:       ";
  cin >> choice;
  cout << endl << endl;
 if(choice ==1 || choice ==2 || choice==3 || choice ==4 )
 {

  return choice;
 }
   else
   {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainmenu;
   }

}
