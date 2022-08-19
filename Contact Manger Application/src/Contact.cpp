#include "Contact.h"
Contact::Contact()
{
    DeleteCounter=0;
    CounterOFUsers=0;
    ifstream LoadCounter("DataBase/CountersOFUser.txt");
    if(LoadCounter)
    {
        LoadCounter>>CounterOFUsers;
        LoadCounter.close();
        for(int i=0; i<CounterOFUsers; i++)
        {
            string Coun=to_string(i+1);
            string FName="DataBase/User"+Coun+".txt";
            ifstream LoadUsers(FName);
            if(LoadUsers)
            {
                while(!LoadUsers.eof())
                {
                    string UserFlag;
                    User U;
                    getline(LoadUsers,UserFlag,',');
                    if(UserFlag=="UserFlag")
                    {
                        U.LoadUserFromFile(LoadUsers);
                    }
                    U.LoadAddressPhoneEmailToFile(LoadUsers);
                    UsersList.push_back(U);
                }
            }
        }
    }
}
Contact::~Contact()
{
    ofstream SaveCounter("DataBase/CountersOFUser.txt");
    CounterOFUsers=UsersList.size();
    SaveCounter<<CounterOFUsers<<endl;
    SaveCounter.close();
    if(DeleteCounter!=0)
    {
        for(unsigned int i=0; i<UsersList.size()+DeleteCounter; i++)
        {
            string Coun=to_string(i+1);
            string FileName="DataBase/User"+Coun+".txt";
            remove(FileName.c_str());
        }
    }
    for(unsigned int i=0; i<UsersList.size(); i++)
    {
        string Coun=to_string(i+1);
        string UsersFilesNames="DataBase/User"+Coun+".txt";
        ofstream out(UsersFilesNames);
        UsersList[i].SaveUserToFile(out);
        UsersList[i].SaveAddressPhoneEmailToFile(out);
        out.close();
    }
}
void Contact::addUser()
{
    Sleep(700);
    system("cls");
    CounterOFUsers++;
    User U;
    cin>>U;
    bool flag=false;
    for(unsigned int i=0; i<UsersList.size(); i++)
    {
        if(U.getID()==UsersList[i].getID())
        {
            flag=true;
            cout<<"\n\n\tSorry...\n\tThis ID is token by another User :( "<<endl<<endl;
            break;
        }
    }
    if(flag==false)
    {

        UsersList.push_back(U);
        cout<<"\n\n\tUser Added Successfully"<<endl;
        Sleep(1500);
    }
    while(flag)
    {
        cout<<"\tPress 1 To Add Another ID"<<endl;
        cout<<"\tPress 0 To Skip Adding User"<<endl;
        int N;
        cout<<"-> ";
        cin>>N;
        switch(N)
        {
        case 1:
        {
            flag=false;
            string ID;
            cout<<"\n\tEnter ID: ";
            cin.ignore();
            getline(cin,ID);
            U.setID(ID);
            for(unsigned int i=0; i<UsersList.size(); i++)
            {
                if(U.getID()==UsersList[i].getID())
                {
                    flag=true;
                    cout<<"\n\n\tSorry...\n\tThis ID is token by another User :( :("<<endl<<endl;
                    break;
                }
            }
            if(flag==false)
            {
                UsersList.push_back(U);
                cout<<"\n\n\tUser Added Successfully"<<endl;
                 Sleep(1500);
            }
            else
            {
                flag=true;
            }
        }
        break;
        case 0:
            cout<<"\n\tNOTE... THIS USER NOT ADDED TO SYSTEM"<<endl;
            Sleep(1500);
            flag=false;
            break;
        default:
            cout<<"\n\tEnter Valid Choice"<<endl<<endl;
        }
    }

}
void Contact::printAllUsers()
{
    Sleep(500);
    system("cls");
    if(UsersList.size()>0)
    {
        cout<<endl;
        for(unsigned int i=0; i<UsersList.size(); i++)
        {
            cout<<"User "<<i+1<<" Details "<<endl<<endl;
            cout<<"ID :"<<UsersList[i].getID()<<setw(10)<<"Name :"<<UsersList[i].getName()<<endl<<endl;
            cout<<"----------------------------------------"<<endl;
        }
        int N;
        while(true)
        {
            cout<<"\n\tPress 0 To Exit Users List"<<endl;
            cout<<"\n\t-> ";
            cin>>N;
            switch(N)
            {
            case 0:
                Sleep(700);
                return ;
            default:
                cout<<"\n\tEnter Valid Choice"<<endl;
            }
        }

    }
    else
    {
        cout<<"\n\n\tSorry...\n\tThere is no any users in the system to print"<<endl<<endl;
        Sleep(2000);
    }

}
void Contact::printUser()
{
    if(UsersList.size()>0)
    {
        Sleep(800);
        system("cls");
        string ID;
        bool flag=false;
        int index;

        cout<<"\n\n\tEnter User ID that you want to print"<<endl<<endl;
        cin.ignore();
        cout<<"\t-> ";
        getline(cin,ID);
        for(unsigned int i=0; i<UsersList.size(); i++)
        {
            if(ID==UsersList[i].getID())
            {
                flag=true;
                index=i;
                break;
            }
        }
        if(flag)
        {
            cout<<"\n\t\t\tUser Details"<<endl<<endl;
            cout<<UsersList[index]<<endl;
            int N;
            while(true)
            {
                cout<<"\n\tPress 0 To Exit "<<endl;
                cout<<"\n\t-> ";
                cin>>N;
                switch(N)
                {
                case 0:
                    Sleep(700);
                    return ;
                default:
                    cout<<"\n\tEnter Valid Choice"<<endl;
                }
            }
        }
        else
        {
            cout<<"\n\tSorry...\n\tThere Is no any user have this ID"<<endl;
        }
    }
    else
    {
        cout<<"\n\n\tSorry...\n\tThere is no any users in the system to print"<<endl<<endl;

        Sleep(2000);
    }
}
void Contact::editUser()
{
    if(UsersList.size()>0)
    {
        system("cls");
        string ID;
        cout<<"\n\n\tEnter User ID That you Want to edit"<<endl;
        cout<<"\t-> ";
        cin.ignore();
        getline(cin,ID);
        bool flag=false;
        int index;
        for(unsigned int i=0; i<UsersList.size(); i++)
        {
            if(ID==UsersList[i].getID())
            {
                flag=true;
                index=i;
                break;
            }
        }
        if(flag)
        {
            cout<<"\n\tID Found.........";
            Sleep(500);
            UsersList[index].EditUser();
        }
        else
            cout<<"\n\tNext time enter valid id"<<endl;
    }
    else
    {
        cout<<"\n\n\tSorry...\n\tThere is no any users in the system to edit"<<endl<<endl;
        Sleep(2000);
    }
}
void Contact::deleteUser()
{
    if(UsersList.size()>0)
    {

        system("cls");
        string ID;
        cout<<"\n\n\tEnter User ID That you Want to Delete"<<endl;
        cout<<"\t-> ";
        cin.ignore();
        getline(cin,ID);
        bool flag=false;
        int index;
        for(unsigned int i=0; i<UsersList.size(); i++)
        {
            if(ID==UsersList[i].getID())
            {
                flag=true;
                index=i;
                DeleteCounter++;
                break;
            }
        }
        if(flag)
        {
            UsersList.erase(UsersList.begin()+index);
            cout<<"\n\tUSER DELETED SUCCESSFULLY"<<endl<<endl;
            Sleep(1200);
        }
        else
        {
            cout<<"\n\tSorry...\tThere is no any user with this id"<<endl;
            Sleep(1500);
        }
    }
}
void Contact::searchUser()
{
    if(UsersList.size()>0)
    {
        Sleep(700);
        system("cls");
        cout<<"\n\n\tEnter User ID that you want to search for"<<endl;
        cout<<"\t-> ";
        string ID;
        cin.ignore();
        getline(cin,ID);
        bool flag=false;
        int index;
        for(unsigned int i=0; i<UsersList.size(); i++)
        {
            if(ID==UsersList[i].getID())
            {
                flag=true;
                index=i;
                break;
            }
        }
        if(flag)
        {
            cout<<"\n\n\t\t\tUSER FOUND"<<endl<<endl;
            Sleep(1000);
            system("cls");
            cout<<"\n\t\t\tUser Details "<<endl;
            cout<<UsersList[index]<<endl;
            int N;
            while(true)
            {
                cout<<"\n\tPress 0 To Exit "<<endl;
                cout<<"\t-> ";
                cin>>N;
                switch(N)
                {
                case 0:
                    Sleep(700);
                    return ;
                default:
                    cout<<"\n\tEnter Valid Choice"<<endl;
                }
            }
        }
        else
        {
            cout<<"\n\tSorry...\n\tUser Not Found :("<<endl;
            Sleep(2000);
        }
    }
    else
    {
        cout<<"\n\n\tSorry...\n\tThere is no any users in the system to print"<<endl<<endl;
        Sleep(2000);
    }
}
