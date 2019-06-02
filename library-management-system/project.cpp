#include <iostream>
#include <fstream>
#include <string>
#include "interface.h"
//#include "classUser.h"
#include "classBook.h"
#include "classStudent.h"
#include "classLibrarian.h"
using namespace std;

int user_select = 1;

void pause() {
  getchar();
}

Book B;
Librarian L;
Student S;

int main() {
  system("clear");
  intro();
  pause();
  system("clear");
  while (user_select != 0) {
      user_select = main_window();
      system("clear");
        if (user_select == 1) {
          if (S.user_login()) {
            system("clear");
            while (user_select != 0) {
                user_select = student_window();
                system("clear");
                if (user_select == 1) {
                  S.search_book();
                }
                else if (user_select == 2) {
                  S.display_books();
                }
                else if (user_select == 3) {
                  S.issue_book_request();
                }
                else if (user_select == 4) {
                  S.change_password();
                }
                pause();
                system("clear");
            }
            user_select = 1;
          }
          pause();
          system("clear");
      }
      else if (user_select == 2) {
          if (L.user_login()) {
            system("clear");
            while (user_select != 0) {
                user_select = librarian_window();
                system("clear");
                if (user_select == 1) {
                  B.add_book();
                }
                else if (user_select == 2) {
                  B.modify_book();
                }
                else if (user_select == 3) {
                  B.delete_book();
                }
                else if (user_select == 4) {
                  L.search_book();
                  pause();
                }
                else if (user_select == 5) {
                  L.display_books();
                }
                else if (user_select == 6) {
                  L.add_student();
                }
                else if (user_select == 7) {
                  L.delete_student();
                }
                else if (user_select == 8) {
                  L.search_student();
                }
                else if (user_select == 9) {
                  L.display_students();
                }
                else if (user_select == 10) {
                  L.view_requests();
                }
                else if (user_select == 11) {
                  L.issue_book();
                }
                else if (user_select == 12) {
                  L.return_book();
                }
                pause();
                system("clear");
            }
            user_select = 1;
          }
          pause();
          system("clear");
      }
      else if (user_select == 0) {
          cout << "Program terminated." << endl;
          return 0;
      }
  }

  return 0;
}
