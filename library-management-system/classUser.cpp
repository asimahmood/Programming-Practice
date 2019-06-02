#include <iostream>
#include <fstream>
#include "classUser.h"
using namespace std;



bool User::user_login() {
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
        cout << "Access Granted." << endl;
        return true;
      }
      else if (id == user_id && pass != user_password) {
        cout << "Incorrect Password." << endl;
        return false;
      }
      else if (id != user_id && pass == user_password) {
        cout << "User name doesn't exist." << endl;
        return false;
      } else {
        cout << "Access Denied." << endl;
        return false;
      }
    }
  }
  fin.close();
}


// shows a book detail from the books record (book.csv)
void User::search_book() {
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
        cout << "Book Name" << "\t" << "\t" << "Author Name" << "\t" << "\t" << "Book ID" << "\t" << "\t" << "Book Price" << endl;
        cout << name << "\t" << "\t" <<  author << "\t" << "\t" << "\t" <<  id << "\t" << "\t" <<  "$" << price << endl << endl;
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
}
