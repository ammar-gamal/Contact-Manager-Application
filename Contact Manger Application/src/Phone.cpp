#include "Phone.h"

Phone::~Phone()
{
    //dtor
}
Phone::Phone(string Pho,string Pho_Type,string Pho_Description)
{
    flag_For_Phones="PhoneFlag";
    this->Pho=Pho;
    this->Pho_Type=Pho_Type;
    this->Pho_Description=Pho_Description;
}
Phone::Phone():Pho("Unknown"),Pho_Type("Unknown"),Pho_Description("Unknown"),flag_For_Phones("PhoneFlag") {}
void Phone::SavePhoneToFile(ofstream &out)
{
    out<<flag_For_Phones<<','<<Pho<<','<<Pho_Type<<','<<Pho_Description<<endl;
}
string Phone::getPh()
{
    return Pho;
}
void Phone::LoadPhoneFromFile(ifstream &in)
{
    getline(in,Pho,',');
    getline(in,Pho_Type,',');
    getline(in,Pho_Description);

}
istream &operator>>(istream& input,Phone& Ph)
{
    cout<<"Enter Phone :";
    getline(input,Ph.Pho);
    cout<<"Enter Phone Type :";
    getline(input,Ph.Pho_Type);
    cout<<"Enter Phone Description :";
    getline(input,Ph.Pho_Description);
    cout<<endl;
    return input;
}
ostream &operator<<(ostream& output,Phone& Ph)
{
    cout<<"Phone :";
    output<<Ph.Pho<<endl;
    cout<<"Phone Type :";
    output<<Ph.Pho_Type<<endl;
    cout<<"Phone Description :";
    output<<Ph.Pho_Description<<endl;
    return output;
}

