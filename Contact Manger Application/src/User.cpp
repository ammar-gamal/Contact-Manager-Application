#include "User.h"
int User::counter=0;

User::User()
{
    AddedData=__DATE__;;
    flag_for_User="UserFlag";

}

User::~User()
{

}
void User::EditAddresses()
{

    Sleep(700);
    while(true)
    {
        system("cls");
        cout<<"\n\n\tPress 1 to Add New Address"<<endl
            <<"\tPress 2 to edit Address"<<endl
            <<"\tPress 3 to Delete Address"<<endl
            <<"\tPress 0 to exit"<<endl;
        int N;
        cout<<"-> ";
        cin>>N;
        switch(N)
        {
        case 1:
        {
            Sleep(300);
            system("cls");
            if(AddressList.size()<4)
            {
                cout<<"\n\tEnter New Address Details"<<endl<<endl;
                cin.ignore();
                Address Ad;
                cin>>Ad;
                bool flag=true;
                for(unsigned int i=0; i<AddressList.size(); i++)
                {
                    if(Ad.getAd()==AddressList[i].getAd())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    AddressList.push_back(Ad);
                    cout<<"\n\tAddress Is Added Successfully"<<endl;
                    Sleep(1300);
                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Address is Added Before You can't add it again"<<endl;
                    Sleep(2500);
                }


            }
            else
            {
                cout<<"\nSorry....\nYou Can't Add Extra Address You Reached The Maximum Number of Addresses"<<endl;
                Sleep(2500);
            }
        }
        break;
        case 2:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Address Name That you want to edit"<<endl<<endl;
            for(unsigned int i=0; i<AddressList.size(); i++)
            {
                cout<<"\tAddress "<<i+1<<" Name :"<<AddressList[i].getAd()<<endl<<endl;
            }

            cout<<"\n-> ";

            string Ad;
            cin.ignore();
            getline(cin,Ad);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<AddressList.size(); i++)
            {
                if(AddressList[i].getAd()==Ad)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                cout<<"\n\tEnter Exist Address Details Again "<<endl<<endl;
                cin>>AddressList[index];
                cout<<"\n\n\tExist Address is edited Successfully"<<endl;
                Sleep(1200);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Address Name"<<endl;
                Sleep(1300);
            }
        }
        break;
        case 3:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Address Name That you want to delete"<<endl<<endl;
            for(unsigned int i=0; i<AddressList.size(); i++)
            {
                cout<<"\tAddress "<<i+1<<" Name :"<<AddressList[i].getAd()<<endl<<endl;
            }

            cout<<"\n-> ";
            string Ad;
            cin.ignore();
            getline(cin,Ad);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<AddressList.size(); i++)
            {
                if(AddressList[i].getAd()==Ad)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                AddressList.erase(AddressList.begin()+index);
                cout<<"\n\tAddress is deleted Successfully"<<endl;
                Sleep(1200);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Address Name"<<endl;
                Sleep(1300);
            }
        }
        break;
        case 0:
            return ;
        default:
            cout<<"\n\tEnter Valid Choice"<<endl;
            Sleep(700);
        }

    }
}
void User::EditEmails()
{
    Sleep(700);
    while(true)
    {
        system("cls");
        cout<<"\n\n\tPress 1 to Add New Email"<<endl
            <<"\tPress 2 to edit Email"<<endl
            <<"\tPress 3 to Delete Email"<<endl
            <<"\tPress 0 to exit"<<endl;
        int N;
        cout<<"-> ";
        cin>>N;
        switch(N)
        {
        case 1:
        {
            Sleep(300);
            system("cls");
            if(EmailsList.size()<4)
            {
                cout<<"\n\tEnter New Email Details"<<endl<<endl;
                cin.ignore();
                Email EM;
                cin>>EM;
                bool flag=true;
                for(unsigned int i=0; i<EmailsList.size(); i++)
                {
                    if(EM.getEm()==EmailsList[i].getEm())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    EmailsList.push_back(EM);
                    cout<<"\n\tEmail Is Added Successfully"<<endl;
                    Sleep(1000);
                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Email is Added Before You can't add it again"<<endl;
                    Sleep(2500);
                }


            }
            else
            {
                cout<<"\nSorry....\nYou Can't Add Extra Email You Reached The Maximum Number of Email"<<endl;
                Sleep(2500);
            }
        }
        break;
        case 2:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Email Name That you want to edit"<<endl<<endl;
            for(unsigned int i=0; i<EmailsList.size(); i++)
            {
                cout<<"\tEmail "<<i+1<<" Name :"<<EmailsList[i].getEm()<<endl<<endl;
            }

            cout<<"\n-> ";

            string EM;
            cin.ignore();
            getline(cin,EM);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<EmailsList.size(); i++)
            {
                if(EmailsList[i].getEm()==EM)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                cout<<"\n\tEnter Exist Email Details Again "<<endl<<endl;
                cin>>EmailsList[index];
                cout<<"\n\n\tExist Email is edited Successfully"<<endl;
                Sleep(1200);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Email Name"<<endl;
                Sleep(1000);
            }
        }
        break;
        case 3:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Email Name That you want to delete"<<endl<<endl;
            for(unsigned int i=0; i<EmailsList.size(); i++)
            {
                cout<<"\tEmail "<<i+1<<" Name :"<<EmailsList[i].getEm()<<endl<<endl;
            }

            cout<<"\n-> ";
            string Em;
            cin.ignore();
            getline(cin,Em);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<EmailsList.size(); i++)
            {
                if(EmailsList[i].getEm()==Em)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                EmailsList.erase(EmailsList.begin()+index);
                cout<<"\n\tEmail is deleted Successfully"<<endl;
                Sleep(1400);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Email Name"<<endl;
                Sleep(1000);
            }
        }
        break;
        case 0:
            return ;
        default:
            cout<<"\n\tEnter Valid Choice"<<endl;
            Sleep(700);
        }

    }
}
void User::EditPhones()
{
    Sleep(700);
    while(true)
    {
        system("cls");
        cout<<"\n\n\tPress 1 to Add New Phone"<<endl
            <<"\tPress 2 to edit Phone"<<endl
            <<"\tPress 3 to Delete Phone"<<endl
            <<"\tPress 0 to exit"<<endl;
        int N;
        cout<<"-> ";
        cin>>N;
        switch(N)
        {
        case 1:
        {
            Sleep(300);
            system("cls");
            if(PhonesList.size()<4)
            {
                cout<<"\n\tEnter New Phone Details"<<endl<<endl;
                cin.ignore();
                Phone  PH;
                cin>>PH;
                bool flag=true;
                for(unsigned int i=0; i<PhonesList.size(); i++)
                {
                    if(PH.getPh()==PhonesList[i].getPh())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    PhonesList.push_back(PH);
                    cout<<"\n\tPhone Is Added Successfully"<<endl;
                    Sleep(1000);
                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Phone is Added Before You can't add it again"<<endl;
                    Sleep(2500);
                }


            }
            else
            {
                cout<<"\nSorry....\nYou Can't Add Extra Phone You Reached The Maximum Number of Phone"<<endl;
                Sleep(2500);
            }
        }
        break;
        case 2:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Phone Name That you want to edit"<<endl<<endl;
            for(unsigned int i=0; i<PhonesList.size(); i++)
            {
                cout<<"\tPhone "<<i+1<<" Name :"<<PhonesList[i].getPh()<<endl<<endl;
            }

            cout<<"\n-> ";

            string PH;
            cin.ignore();
            getline(cin,PH);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<PhonesList.size(); i++)
            {
                if(PhonesList[i].getPh()==PH)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                cout<<"\n\tEnter Exist Phone Details Again "<<endl<<endl;
                cin>>PhonesList[index];
                cout<<"\n\n\tExist Phone is edited Successfully"<<endl;
                Sleep(1200);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Phone Name"<<endl;
                Sleep(1000);
            }
        }
        break;
        case 3:
        {
            Sleep(300);
            system("cls");
            cout<<"\n\tChoose Phone Name That you want to delete"<<endl<<endl;
            for(unsigned int i=0; i<PhonesList.size(); i++)
            {
                cout<<"\tPhone "<<i+1<<" Name :"<<PhonesList[i].getPh()<<endl<<endl;
            }

            cout<<"\n-> ";
            string PH;
            cin.ignore();
            getline(cin,PH);
            int index;
            bool flag=false;
            for(unsigned int i=0; i<PhonesList.size(); i++)
            {
                if(PhonesList[i].getPh()==PH)
                {
                    flag=true;
                    index=i;
                    break;
                }
            }
            if(flag)
            {
                PhonesList.erase(PhonesList.begin()+index);
                cout<<"\n\tPhone is deleted Successfully"<<endl;
                Sleep(1400);
            }
            else
            {
                cout<<"\n\tNext Time Enter Correct Phone Name"<<endl;
                Sleep(1000);
            }
        }
        break;
        case 0:
            return ;
        default:
            cout<<"\n\tEnter Valid Choice"<<endl;
            Sleep(700);
        }

    }
}
void User::EditUser()
{
    Sleep(700);

    while(true)
    {
        system("cls");
        cout<<"\n\tPress 1 to edit id"<<endl
            <<"\tPress 2 to edit Name"<<endl
            <<"\tPress 3 to edit gender"<<endl
            <<"\tPress 4 to edit Emails"<<endl
            <<"\tPress 5 to edit Phones"<<endl
            <<"\tPress 6 to edit Addresses"<<endl
            <<"\tPress 0 to exit"<<endl;
        cout<<"-> ";
        int N;
        cin>>N;
        switch(N)
        {
        case 1:
            cout<<"\n\n\tEnter New ID :";
            cin.ignore();
            getline(cin,id);
            cout<<"\n\tID Edited Successfully"<<endl;
            Sleep(1000);
            break;
        case 2:
            cout<<"\n\n\tEnter New Name :";
            cin.ignore();
            getline(cin,FullName);
            cout<<"\n\tName Edited Successfully"<<endl;
            Sleep(1000);
            break;
        case 3:
            cout<<"\n\n\tEnter New Gender :";
            cin.ignore();
            getline(cin,gender);
            cout<<"\n\tGender Edited Successfully"<<endl;
            Sleep(1000);
            break;
        case 4:
            EditEmails();
            break;
        case 5:
            EditPhones();
            break;
        case 6:
            EditAddresses();
            break;
        case 0:
            return;
        default:
            cout<<"\n\tEnter Valid Choice"<<endl;
            Sleep(700);

        }
    }

}
void User::AddPhone() // Max 4
{
    while(true)
    {
        int N;
        cout<<"\nHow Many Phones You want to add (1~4) ? ";
        cin>>N;
        if(N>=1&&N<=4)
        {
            cin.ignore();
            for( int i=0; i<N; i++)
            {
                cout<<"----------------------------------------";
                cout<<"\nEnter Phone Number "<<i+1<<" Details"<<endl<<endl;

                Phone P;
                cin>>P;
                bool flag=true;
                for(unsigned int i=0; i<PhonesList.size(); i++)
                {
                    if(P.getPh()==PhonesList[i].getPh())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    PhonesList.push_back(P);
                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Phone is Added Before You can't add it again"<<endl<<endl;
                    i--;
                }
            }
            cout<<"\n\t\tPhones Added Successfully"<<endl;
            cout<<"----------------------------------------"<<endl;
            break;
        }
        else if(N>4) cout<<"\nSorry.....  Maximum Number of Phones you can Add is 4"<<endl;
        else cout<<"\tEnter Valid Number OF Phones"<<endl;
    }
}
void User::AddEmail() // Max 4
{
    while(true)
    {
        int N;
        cout<<"\nHow Many Emails You want to add (1~4) ? ";
        cin>>N;
        if(N>=1&&N<=4)
        {
            cin.ignore();
            for( int i=0; i<N; i++)
            {
                cout<<"----------------------------------------";
                cout<<"\nEnter Email Number "<<i+1<<" Details"<<endl<<endl;

                Email Em;
                cin>>Em;
                bool flag=true;
                for(unsigned int i=0; i<EmailsList.size(); i++)
                {
                    if(Em.getEm()==EmailsList[i].getEm())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    EmailsList.push_back(Em);
                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Email is Added Before You can't add it again"<<endl<<endl;
                    i--;
                }
            }
            cout<<"\n\tEmails Added Successfully"<<endl;
            cout<<"----------------------------------------";
            break;
        }
        else if(N>4) cout<<"\nSorry.....  Maximum Number of Emails you can Add is 4"<<endl;
        else  cout<<"\tEnter Valid Number OF Emails"<<endl;
    }

}
void User::AddAddress() // Max 4
{
    while(true)
    {
        int N;
        cout<<"\nHow Many Addresses You want to add (1~4) ? ";
        cin>>N;
        if(N>=1&&N<=4)
        {
            cin.ignore();
            for( int i=0; i<N; i++)
            {
                cout<<"----------------------------------------";
                cout<<"\nEnter Address Number "<<i+1<<" Details"<<endl<<endl;

                Address Ad;
                cin>>Ad;
                bool flag=true;
                for(unsigned int i=0; i<AddressList.size(); i++)
                {
                    if(Ad.getAd()==AddressList[i].getAd())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    AddressList.push_back(Ad);

                }
                else
                {
                    cout<<"\n\tSorry..\n\tThis Address is Added Before You can't add it again"<<endl<<endl;
                     i--;
                }

            }
            cout<<"\n\t\tAddresses Added Successfully"<<endl;
            cout<<"----------------------------------------";
            break;
        }
        else if(N>4) cout<<"\nSorry.....  Maximum Number of Addresses you can Add is 4"<<endl;

        else cout<<"\tEnter Valid Number OF Addresses"<<endl;

    }
}
void User::PrintPhonesList()
{
    for(unsigned int i=0; i<PhonesList.size(); i++)
    {
        cout<<"\n\tPhone Number "<<i+1<<" Details"<<endl<<endl;
        cout<<PhonesList[i];
    }
}
void User::PrintEmailsList()
{

    for(unsigned int i=0; i<EmailsList.size(); i++)
    {
        cout<<"\n\n\tEmail Number "<<i+1<<" Details"<<endl<<endl;
        cout<<EmailsList[i];
    }
}
void User::PrintAddressList()
{
    for(unsigned int i=0; i<AddressList.size(); i++)
    {
        cout<<"\n\tAddress Number "<<i+1<<" Details"<<endl<<endl;
        cout<<AddressList[i];
    }
}
void User::setID(string UserID)
{
    id=UserID;
}
string User::getID()
{
    return id;
}
string User::getName()
{
    return FullName;
}
void User::SaveAddressPhoneEmailToFile(ofstream&out)
{
    //  ofstream out(FileName);
    for(unsigned int i=0; i<PhonesList.size(); i++)
    {
        PhonesList[i].SavePhoneToFile(out);
    }
    for(unsigned int i=0; i<EmailsList.size(); i++)
    {
        EmailsList[i].SaveEmailToFile(out);
    }
    for(unsigned int i=0; i<AddressList.size(); i++)
    {
        AddressList[i].SaveAddressToFile(out);
    }
    out.close();
}
void User::LoadAddressPhoneEmailToFile(ifstream&in)
{
    if(in)
    {

        while(!in.eof())
        {
            string flag; // 0 >> Phones | 1 >> Emails | 2 >> Address
            getline(in,flag,',');

            if(flag=="PhoneFlag")
            {
                Phone P;
                P.LoadPhoneFromFile(in);
                PhonesList.push_back(P);
            }
            else if(flag=="EmailFlag")
            {
                Email Em;
                Em.LoadEmailFromFile(in);
                EmailsList.push_back(Em);
            }
            else if(flag=="AddressFlag")
            {
                Address Add;
                Add.LoadAddressFromFile(in);
                AddressList.push_back(Add);
            }
        }
        in.close();
    }
}
void User::LoadUserFromFile(ifstream&in)
{
    getline(in,AddedData,',');
    getline(in,id,',');
    getline(in,FullName,',');
    getline(in,gender);

}
void User::SaveUserToFile(ofstream&out)
{
    out<<flag_for_User<<','<<AddedData<<','<<id<<','<<FullName<<','<<gender<<endl;
}
istream &operator>>(istream&input,User&U)
{
    cout<<"\nEnter User Information :-"<<endl;
    cout<<"Enter ID: ";
    input.ignore();
    getline(input,U.id);
    cout<<"Enter Full Name: ";
    getline(input,U.FullName);
    cout<<"Enter Gender: ";
    getline(input,U.gender);
    U.AddEmail();
    U.AddAddress();
    U.AddPhone();
    return input;
}
ostream &operator<<(ostream&output,User&U)
{
    cout<<"\nAdded Data :";
    output<<U.AddedData<<endl;
    cout<<"ID :";
    output<<U.id<<endl;
    cout<<"Name :";
    output<<U.FullName<<endl;
    cout<<"Gender :";
    output<<U.gender;
    U.PrintEmailsList();
    U.PrintAddressList();
    U.PrintPhonesList();
    return output;
}
