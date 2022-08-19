#ifndef EMAIL_H
#define EMAIL_H

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Email
{
    friend istream &operator>>(istream&,Email&);
    friend ostream &operator<<(ostream&,Email&);
public:
    Email(string,string,string);
    Email();
    void SaveEmailToFile(ofstream &out);
    void LoadEmailFromFile(ifstream &in);
    string getEm();
    virtual ~Email();

protected:

private:
    string Ema,Ema_Type,Ema_Description,flag_For_Email;
};

#endif // EMAIL_H
