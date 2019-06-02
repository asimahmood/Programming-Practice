#include "classUser.h"
using namespace std;

class Librarian {
private:
  string user_id;
  string user_password;
public:
  bool user_login();
  void search_book();
  void display_books();
  void add_student();
  void delete_student();
  void search_student();
  void display_students();
  void view_requests();
  void issue_book();
  void return_book();
};
