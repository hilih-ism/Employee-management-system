#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>


using namespace std;


template  <class t>

int get_info(t a[],int amount){

    int sex, stat,nationality,employ,prefix,level;

    for(int i=0;i<amount;i++)
    {
        cout<< "\n\n\t\t\t\t\t\t*** Secion 1: Employee Information";
        cout << "\n\t\t\t\t\t\t--------------------------------------" << endl ;

        cout << "\n\t\t\t\t\t\tEnter ID Number(4 Digit):          ";
        cin>> a[i].id;

        cout << "\n\t\t\t\t\t\tEnter First name of employee:      ";
        cin >> a[i].fname ;
        cout << "\n\t\t\t\t\t\tEnter middle name of employee:     ";
        cin >> a[i].mname ;
        cout << "\n\t\t\t\t\t\tEnter Last name of employee:       ";
        cin >> a[i].lname ;

        cout << "\n\t\t\t\t\t\tEnter age of employee:             ";
        cin>> a[i].age;

        cout << "\n\t\t\t\t\t\tEnter the new employee's phone:    ";
        cin>> a[i].cont.phone;

        cout << "\n\t\t\t\t\t\tEnter the new employee's email:    ";
        cin>> a[i].cont.email;

        cout << "\n\t\t\t\t\t\tEnter the new employee's address:  ";
        cin>> a[i].cont.address;

        cout << "\n\t\t\t\t\t\tEnter Birth Day (DD/MM/YYYY)       ";
        cin>> a[i].birth_day;

        Marriage:

        cout << "\n\n\t\t\t\t\t\tMarital Status";
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Married   \t<2> Divorced" ;
        cout << "\n\t\t\t\t\t\t<3> Single    \t<4> Unknown" ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                  ";
        cin >> stat;

        switch(stat)
        {
            case 1:  a[i].marriage_stat = "Married";
                     break;
            case 2:  a[i].marriage_stat = "Divorced";
                     break;
            case 3:  a[i].marriage_stat = "Single";
                     break;
            case 4:  a[i].marriage_stat = "Unknown";
                     break;

            default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                     cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                     getch();
                     goto Marriage;
        }

        Sex:

        cout << "\n\n\t\t\t\t\t\tEnter Gender" ;
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Male  \t<2> Female" ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                  ";
        cin >> sex;

        switch(sex)
        {
            case 1:  a[i].gender = "Male";
                     break;
            case 2:  a[i].gender = "Female";
                     break;
            default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                     cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                     getch();
                     goto Sex;

        }

        Citizen:
        cout << "\n\n\t\t\t\t\t\t Is Employee Ethiopian Citizen" ;
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Yes  \t<2> No" ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                 ";
        cin >> nationality;

        switch(nationality)
        {
            case 1: a[i].citizen = "Ethiopian";
                    break;
            case 2: a[i].citizen = "Not Ethiopian";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    getch();
                    goto Citizen;

        }

         system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ...";
         Sleep(700);
         system("cls");


        cout<< "\n\n\t\t\t\t\t\t*** Secion 2: Educational Information";
        cout << "\n\t\t\t\t\t\t--------------------------------------" << endl ;

        Education:
        cout << "\n\t\t\t\t\t\tEnter Highest Level of education completed:          ";
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Highschool  \t<2> Bachelors" ;
        cout << "\n\t\t\t\t\t\t<3> Masters     \t<4> PHD" ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                 ";
        cin >> level;

        switch(level)
        {
            case 1: a[i].education = "Highschool.";
                    break;
            case 2: a[i].education = "Bachelors.";
                    break;
            case 3: a[i].education = "Masters";
                    break;
            case 4: a[i].education = "PHD.";
                    break;


           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    getch();
                    goto Education;

        }

        cout << "\n\t\t\t\t\t\tEnter Institution:          ";
        cin>> a[i].institute;

        cout << "\n\t\t\t\t\t\tEnter Year of graduation:          ";
        cin>> a[i].year;

        system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ...";
         Sleep(700);
         system("cls");


        cout<< "\n\n\t\t\t\t\t\t*** Secion 3: Job Information";
        cout << "\n\t\t\t\t\t\t--------------------------------------" << endl ;

        Title:
        cout << "\n\n\t\t\t\t\t\t Enter Employee Title" ;
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Mr.   \t<2> Mrs." ;
        cout << "\n\t\t\t\t\t\t<3> Miss  \t<4> Ms." ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                 ";
        cin >> prefix;

        switch(prefix)
        {
            case 1: a[i].w_title = "Mr.";
                    break;
            case 2: a[i].w_title = "Mrs.";
                    break;
            case 3: a[i].w_title = "Miss";
                    break;
            case 4: a[i].w_title = "Ms.";
                    break;


           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    getch();
                    goto Title;

        }

        cout << "\n\t\t\t\t\t\tEnter Supervisor's name:          ";
        cin>> a[i].s_name;

        cout << "\n\t\t\t\t\t\tEnter Work Location:          ";
        cin>> a[i].w_location;

        EmployType:
        cout << "\n\n\t\t\t\t\t\tEnter Employment Status" ;
        cout << "\n\t\t\t\t\t\t---------------------------------------" ;
        cout << "\n\t\t\t\t\t\t<1> Full Time  \t<2> Part Time" ;
        cout << "\n\t\t\t\t\t\tEnter your choice:                 ";
        cin >> employ;

        switch(employ)
        {
            case 1: a[i].e_stat = "Full Time";
                    break;
            case 2: a[i].e_stat = "Part Time";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    getch();
                    goto EmployType;

        }

        cout << "\n\t\t\t\t\t\tEnter Start Date(DD/MM/YYYY):          ";
        cin>> a[i].s_date;

        cout << "\n\t\t\t\t\t\tEnter Salary:          ";
        cin>> a[i].salary;

        system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ...";
         Sleep(700);
         system("cls");

        cout<< "\n\n\t\t\t\t\t\t*** Section 4: Emergency Contact Information";
        cout << "\n\t\t\t\t\t\t--------------------------------------" << endl ;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact Name:    ";
        cin>> a[i].emer.name;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact phone:    ";
        cin>> a[i].emer.phone;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact email:    ";
        cin>> a[i].emer.email;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact address:  ";
        cin>> a[i].emer.address;

        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ...";
        Sleep(700);
        system("cls");


       /* cout<< "\n\n\t\t\t\t\t\t*** Section 5: Property Information";
        cout << "\n\t\t\t\t\t\t--------------------------------------" << endl ;

        cout << "\n\t\t\t\t\t\tEnter Any assigned property to employee:    ";
        cin>> a[i].emer.name;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact phone:    ";
        cin>> a[i].emer.phone;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact email:    ";
        cin>> a[i].emer.email;

        cout << "\n\t\t\t\t\t\tEnter the Emergency Contact address:  ";
        cin>> a[i].emer.address;

        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ...";
        Sleep(700);
        system("cls");*/



    }




     ofstream myfile;
     myfile.open("store_file.txt",ios::out);

       myfile << "\n\n\t\t\t\t\t\t\t ********** Displaying Employee's Details ********** \n";
       myfile<<left<<setw(5)<<"N0"<<left<<setw(27)<<"Personal Information"<<left<<setw(15)<<"value"<<left<<setw(27)<<"|Educational Information"<<left<<setw(15)<<" value"<<left<<setw(27)<<"|Job Information"<<left<<setw(15)<<"value"<<left<<setw(10)<<"|Emergency "<<left<<setw(15)<<"value";


       for(int i = 0; i < amount; i++)
       {
             myfile << "\n--------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
             myfile<<setw(5)<<" "<<setw(27)<<"National ID Number:"<<left<<setw(15)<<a[i].id<<setw(27)<<"|Highest education Level:"<<left<<setw(15)<<a[i].education<<setw(27)<<"|Title"<<left<<setw(15)<<a[i].w_title<<setw(10)<<"|Name:"<<left<<setw(15)<<a[i].emer.name<<endl;

             myfile<<left<<setw(5)<<i+1<<left<<setw(27)<< "First name:"<<left<<setw(15)<<a[i].fname<<setw(27)<<"|Institution:"<<left<<setw(15)<<a[i].institute<<setw(27)<<"|supervisor"<<left<<setw(15)<<a[i].s_name<<setw(10)<<"|Phone:"<<left<<setw(15)<<a[i].emer.phone<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<a[i].mname<<setw(27)<<"|Graduation Year:"<<left<<setw(15)<<a[i].year<<setw(27)<<"|Work Location"<<left<<setw(15)<<a[i].w_location<<setw(10)<<"|Email:"<<left<<setw(15)<<a[i].emer.email<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Last name:"<<left<<setw(15)<<a[i].lname<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|Employment Type:"<<left<<setw(15)<<a[i].e_stat<<setw(10)<<"|address:"<<left<<setw(15)<<a[i].emer.address<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<a[i].age<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|Start Date:"<<left<<setw(15)<<a[i].s_date<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<a[i].gender<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|Salary:"<<left<<setw(15)<<a[i].salary<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<a[i].cont.phone<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<a[i].cont.email<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<a[i].cont.address<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Birthday:"<<left<<setw(15)<<a[i].birth_day<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Marriage Status:"<<left<<setw(15)<<a[i].marriage_stat<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;

             myfile<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<a[i].citizen<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(27)<<"|"<<left<<setw(15)<<" "<<setw(10)<<"|"<<left<<setw(15)<<" "<<endl;
}

return 0;
}
