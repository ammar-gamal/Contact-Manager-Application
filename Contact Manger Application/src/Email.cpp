#include "Email.h"
Email::~Email()
{
    //dtor
}
Email::Email():Ema("Unknown"),Ema_Type("Unknown"),Ema_Description("Unknown"),flag_For_Email("EmailFlag") {}

Email::Email(string Ema,string Ema_Type,string Ema_Description)
{
    flag_For_Email="EmailFlag";
    this->Ema=Ema;
    this->Ema_Type=Ema_Type;
    this->Ema_Description=Ema_Description;
}
void Email::SaveEmailToFile(ofstream &out)
{
    out<<flag_For_Email<<','<<Ema<<','<<Ema_Type<<','<<Ema_Description<<endl;
}
void Email::LoadEmailFromFile(ifstream &in)
{
    getline(in,Ema,',');
    getline(in,Ema_Type,',');
    getline(in,Ema_Description);
}
string Email::getEm()
{
    return Ema;
}
istream &operator>>(istream& input,Email& Em)
{

    cout<<"Enter Email :";
    getline(input,Em.Ema);
    cout<<"Enter Email Type :";
    getline(input,Em.Ema_Type);
    cout<<"Enter Email Description :";
    getline(input,Em.Ema_Description);
    return input;
}
ostream &operator<<(ostream& output,Email& Em)
{
    cout<<"Email :";
    output<<Em.Ema<<endl;
    cout<<"Email Type :";
    output<<Em.Ema_Type<<endl;
    cout<<"Email Description :";
    output<<Em.Ema_Description<<endl;
    return output;
}
