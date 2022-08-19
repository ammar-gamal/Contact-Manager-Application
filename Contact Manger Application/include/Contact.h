#ifndef CONTACT_H
#define CONTACT_H
#include<User.h>

class Contact
{
    public:
        Contact();
         ~Contact();
  void addUser();
  void printUser();
  void printAllUsers();
  void editUser();
  void searchUser();
  void deleteUser();
    protected:

    private:
        vector<User>UsersList;
      //  string UsersFilesNames;
     int CounterOFUsers;
     int DeleteCounter;

};

#endif // CONTACT_H
