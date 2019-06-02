#include <iostream>
using namespace std;


void intro() {
  cout << "WELCOME" << endl;
  cout << "Library Management System" << endl;
  cout << "Version 1.0" << endl << endl << endl;
  cout << "Made by : Asim Mahmood" << endl;
}


int main_window() {
  int option;
  cout << "User Login" << endl << endl;
  cout << "1. Student" << endl;
  cout << "2. Librarian" << endl << endl;
  cout << "0. Exit" << endl << endl ;
  cout << "Select user: ";
  cin >> option;
  return option;
}


int student_window() {
  int option;
  cout << "Welcome Student" << endl << endl;
  cout << "1. Search Book" << endl;
  cout << "2. Display All Books" << endl;
  cout << "3. Issue Book" << endl;
  cout << "4. Change Password" << endl << endl;
  cout << "0. Go Back" << endl << endl;
  cout << "Select option: ";
  cin >> option;
  return option;
}


int librarian_window() {
  int option;
  cout << "Welcome Librarian" << endl << endl;
  cout << "1. Add Book" << endl;
  cout << "2. Modify Book" << endl;
  cout << "3. Delete Book" << endl;
  cout << "4. Search Book" << endl;
  cout << "5. Display All Books" << endl;
  cout << "6. Add Student" << endl;
  cout << "7. Delete Student" << endl;
  cout << "8. Search Student" << endl;
  cout << "9. Display All Student" << endl;
  cout << "10. View Requests" << endl;
  cout << "11. Issue Book" << endl;
  cout << "12. Return Book" << endl;
  cout << "0. Go Back" << endl << endl;
  cout << "Select option: ";
  cin >> option;
  return option;
}
