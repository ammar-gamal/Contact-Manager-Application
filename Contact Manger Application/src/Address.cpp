#include "Address.h"
Address::~Address()
{
    //dtor
}
Address::Address(string Place,string Ad_Type,string Ad_Description)
{
    flag_For_Address="AddressFlag";
    this->Place=Place;
    this->Ad_Type=Ad_Type;
    this->Ad_Description=Ad_Description;
}
Address::Address():Place("Unknown"),Ad_Type("Unknown"),Ad_Description("Unknown"),flag_For_Address("AddressFlag") {}
void Address::SaveAddressToFile(ofstream &out)
{
    out<<flag_For_Address<<','<<Place<<','<<Ad_Type<<','<<Ad_Description<<endl;
}
void Address::LoadAddressFromFile(ifstream &in)
{
    getline(in,Place,',');
    getline(in,Ad_Type,',');
    getline(in,Ad_Description);
}
string Address::getAd()
{
    return Place;
}
istream &operator>>(istream& input,Address& Ad)
{

    cout<<"Enter Address: ";
     //input.ignore();
    getline(input,Ad.Place);
    cout<<"Enter Address Type: ";
    getline(input,Ad.Ad_Type);
    cout<<"Enter Address Description: ";
     getline(input,Ad.Ad_Description);
    return input;
}
ostream &operator<<(ostream& output,Address& Ad)
{
    cout<<"Address :";
    output<<Ad.Place<<endl;
    cout<<"Address Type :";
    output<<Ad.Ad_Type<<endl;
    cout<<"Address Description :";
    output<<Ad.Ad_Description<<endl;
    return output;
}

