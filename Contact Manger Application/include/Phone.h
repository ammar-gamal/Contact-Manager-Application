#ifndef PHONE_H
#define PHONE_H

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Phone
{
    friend istream &operator>>(istream&,Phone&);
    friend ostream &operator<<(ostream&,Phone&);
public:
    virtual ~Phone();
    Phone(string,string,string);
    Phone();
    void SavePhoneToFile(ofstream &out);
    void LoadPhoneFromFile(ifstream &in);
    string getPh();
protected:

private:
    string Pho,Pho_Type,Pho_Description,flag_For_Phones;

};

#endif // PHONE_H
