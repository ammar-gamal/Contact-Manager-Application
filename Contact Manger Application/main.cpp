#include <iostream>
#include<Contact.h>
#include<ctime>
using namespace std;
Contact Con;
int main()
{
    system("Color 0A");
    cout<<"Welcome To This Application......"<<endl;
    Sleep(2000);
    cout<<endl;
    int N=1;
    while(N!=0)
    {
        system("cls");
        system("Color 04");
        cout<<"MAIN MENU ...."<<endl;
        cout<<endl;
        cout<<"\tPress 1 To Add User"<<endl;
        cout<<"\tPress 2 To Edit User"<<endl;
        cout<<"\tPress 3 To Print User"<<endl;
        cout<<"\tPress 4 TO Print All Users"<<endl;
        cout<<"\tPress 5 To Search For User"<<endl;
        cout<<"\tPress 6 To Delete User"<<endl;
        cout<<"\tPress 0 Exit"<<endl;
        cout<<"ENTER YOUR CHOICE\t\t";
        cin>>N;
        switch(N)
        {
        case 1:
            Con.addUser();

            break;
        case 2:
            Con.editUser();
            break;
        case 3:
            Con.printUser();
            break;
        case 4:
            Con.printAllUsers();
            break;
        case 5:
            Con.searchUser();
            break;
        case 6:
            Con.deleteUser();
            break;

        case 0:
            cout<<"Good Bye"<<endl;
            return 0;
        default:
            cout<<"Enter Valid Choice!!!!"<<endl;
        }
    }
    return 0;
}
