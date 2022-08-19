#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Address
{
    friend istream &operator>>(istream&,Address&);
    friend ostream &operator<<(ostream&,Address&);
    public:
        Address(string,string,string);
        Address();
        virtual ~Address();
        void SaveAddressToFile(ofstream &out);
        void LoadAddressFromFile(ifstream &in);
        string getAd();

    protected:

    private:
        string Place,Ad_Type,Ad_Description,flag_For_Address;
};

#endif // ADDRESS_H
