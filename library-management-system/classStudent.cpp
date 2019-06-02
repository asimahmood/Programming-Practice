#include <iostream>
#include <fstream>
#include "classStudent.h"
using namespace std;



// Login check for student
bool Student::user_login() {
  string id,pass;

  cout << "User ID: ";
  cin >> user_id;
  cout << "Password: ";
  cin >> user_password;

  ifstream fin;
  fin.open("login.csv");
  if (fin) {
    while(!fin.eof()){
      getline(fin,id,',');
      getline(fin,pass,'\n');
      if (id == user_id && pass == user_password) {
        cout << endl << "Access Granted." << endl;
        cin.ignore();
        fin.close();
        return true;
      }
    }
    cout << endl << "Username or Password Incorrect." << endl;
    cin.ignore();
    fin.close();
    return false;
  }
}






// shows a book detail from the books record (book.csv)
void Student::search_book() {
  string book_id;

  cout << "Enter Book ID: ";
  cin >> book_id;

  string id,name,author,price;
  bool found = false;

  ifstream fin;
  fin.open("books.csv");

  if (fin) {
    while(found == false && !fin.eof()){
      getline(fin,id,',');
      getline(fin,name,',');
      getline(fin,author,',');
      getline(fin,price,'\n');
      if (id == book_id) {
        cout << endl << "Book Name" << "\t" << "\t" << "Author Name" << "\t" << "\t" << "Book ID" << "\t" << "\t" << "Book Price" << endl;
        cout << name << "\t" << "\t" <<  author << "\t" << "\t" <<  id << "\t" << "\t" <<  "$" << price << endl << endl;
        found = true;
      }
    }
    if (found == false) {
      cout << "Book not found." << endl;
    }
    fin.close();
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// All books are displayed
void Student::display_books() {
  string id,name,author,price;

  ifstream fin;
  fin.open("books.csv");

  if (fin) {
    cout << "Book Name" << "\t" << "\t" << "Author Name" << "\t" << "\t" << "Book ID" << "\t" << "\t" << "Book Price" << endl << endl;
    while(!fin.eof()){
      getline(fin,id,',');
      getline(fin,name,',');
      getline(fin,author,',');
      getline(fin,price,'\n');
      if (id != "" && name != "" && author != "" && price != "" ) {
        cout << name << "\t" << "\t" <<  author << "\t" << "\t" <<  id << "\t" << "\t" <<  "$" << price << endl;
      }
    }
    fin.close();
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// Password for student login is changed
void Student::change_password() {
  string s_id,s_pass;
  string pass;

  cout << "Enter New Password : ";
  cin >> pass;

  ifstream fin;
  ofstream fout;

  fin.open("login.csv", ios::in);
  fout.open("loginnew.csv", ios::out);

  if (fin && fout) {
    while (!fin.eof()) {
      getline(fin,s_id,',');
      getline(fin,s_pass,'\n');
      if (s_id == user_id) {
        fout << user_id << ',' << pass << '\n';
      } else if (s_id != "") {
        fout << s_id << ',' << s_pass << '\n';
      }
    }

    fin.close();
    fout.close();

    remove("login.csv");
    rename("loginnew.csv", "login.csv");

    cout << endl << "Password updated." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// student request to issue book
void Student::issue_book_request() {
  string id;
  bool found = false;
  string b_id,s_id;

  cout << "Enter Book ID : ";
  cin >> id;

  ifstream fin;
  fin.open("booksissued.csv", ios::in);

  while (!fin.eof()) {
    getline(fin,s_id,',');
    getline(fin,b_id,'\n');
    if (b_id == id) {
      found = true;
    }
  }
  fin.close();
  if (found == false) {
    ofstream fout;
    fout.open("studentrequest.csv", ios::app);
    fout << user_id << ',' << id << '\n';
    fout.close();

    cout << endl << "Request forwarded." << endl;
  } else {
    cout << endl << "Book already issued." << endl;
  }
  cin.ignore();
}
