//#include "classUser.h"
using namespace std;

class Student {
private:
  string user_id;
  string user_password;
public:
  bool user_login();
  void search_book();
  void display_books();
  void change_password();
  void issue_book_request();
};
