#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>


using namespace std;
int match(string str);
int search()
{
 int choice;

  beg:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t***Search by" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t-----------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> ID" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> Name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> Go Back" << endl << endl;

  cout << "\t\t\t\t\t\t\t\t------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\tEnter your choice:       ";
  cin >> choice;
  cout << endl << endl;


  if(choice == 1)
 {
        ID:
        int check=1;
        string id;
        system("cls");
        cout << "\n\tEnter the id of the Employee to be searched:   ";
        cin >> id;
        string sam,pop;
        fstream fp;
    	fp.open("store_file.txt",ios::in);
    	fp.seekg(5,ios::beg);

    	while(getline(fp, pop))
    	{

          string go="ghj";
          size_t found = pop.find(id);
          if (found != string::npos)
          {
             check=0;
              cout << "\n\n\t ***** The information about the Employee you searched for is: ***** \n"<<endl;
              cout<<left<<setw(5)<<"N0"<<left<<setw(27)<<"Personal Information"<<left<<setw(15)<<"value"<<left<<setw(27)<<"|Educational Information"<<left<<setw(15)<<" value"<<left<<setw(27)<<"|Job Information"<<left<<setw(15)<<"value"<<left<<setw(10)<<"|Emergency "<<left<<setw(15)<<"value";
              cout<<"\n--------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
              cout<<pop<<endl;
              while(getline(fp,sam)&& go!="Nationality:")
              {
                string lie=sam.substr(5,12);
                  go=lie;
                cout<<sam<<endl;
              }

          }
      }
      if(check)
      {    system("cls");
           cout << "\n\n\n\n\t\t\tNo Employee found with that ID" << endl;
           cout << "\t\t\tPress any key to choose another option ...";
           getch();
           goto ID;
      }

 getch();
  goto beg;


}

else if(choice == 2)
 {

    Name:
        int check=1;
        string id;
        system("cls");
        cout << "\n\tEnter the first name of the Employee to be searched:   ";
        cin >> id;
        string sam,pop;
        fstream fp;
    	fp.open("store_file.txt",ios::in);
    	fp.seekg(5,ios::beg);

    	while(getline(fp, pop))
    	{

          string go="ghj";
          size_t found = pop.find(id);
          if (found != string::npos)
          {
             check=0;
              cout << "\n\n\t ***** The information about the Employee you searched for is: ***** \n"<<endl;
              cout<<left<<setw(5)<<"N0"<<left<<setw(27)<<"Personal Information"<<left<<setw(15)<<"value"<<left<<setw(27)<<"|Educational Information"<<left<<setw(15)<<" value"<<left<<setw(27)<<"|Job Information"<<left<<setw(15)<<"value"<<left<<setw(10)<<"|Emergency "<<left<<setw(15)<<"value";
              cout<<"\n--------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
              cout<<pop<<endl;
              while(getline(fp,sam)&& go!="Nationality:")
              {
                string lie=sam.substr(5,12);
                  go=lie;
                cout<<sam<<endl;
              }

          }
      }
      if(check)
      {
          system("cls");
           cout << "\n\n\n\n\t\t\tNo Employee found with that ID" << endl;
           cout << "\t\t\tPress any key to choose another option ...";
           getch();
           goto Name;
      }

 getch();
  goto beg;

 }



 else if(choice == 3)
 {
    return 0;


}

}
