#ifndef USER_H
#define USER_H
#include<Address.h>
#include<Phone.h>
#include<Email.h>
#include<vector>
#include<windows.h>
#include <chrono>
#include <ctime>
#include<iomanip>
class User
{
    friend istream &operator>>(istream&,User&);
    friend ostream &operator<<(ostream&,User&);
public:
    User();

    virtual ~User();
    void setID(string);
    void PrintPhonesList();
    void PrintEmailsList();
    void PrintAddressList();
    void AddPhone();
    void AddEmail();
    void AddAddress();
    void EditAddresses();
    void EditEmails();
    void EditPhones();
    string getID();
    string getName();
    void EditUser();
    void SaveAddressPhoneEmailToFile(ofstream&);
    void LoadAddressPhoneEmailToFile(ifstream&);
    void LoadUserFromFile(ifstream&);
    void SaveUserToFile(ofstream&);
protected:

private:
    vector<Phone>PhonesList;
    vector<Email>EmailsList;
    vector<Address>AddressList;
    string FileName;
    static int counter;
    string AddedData,id,FullName,gender,flag_for_User;

};

#endif // USER_H
