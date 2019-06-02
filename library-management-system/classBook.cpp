#include <iostream>
#include <fstream>
#include "classBook.h"
using namespace std;




// add a book to the record (books.csv)
void Book::add_book() {
  cin.ignore();

  cout << "Book Name: ";
  getline(cin,book_name);
  cout << "Author Name: ";
  getline(cin,author_name);
  cout << "Book ID: ";
  getline(cin,book_id);
  cout << "Book Price: ";
  cin >> book_price;

  ofstream fout;
  fout.open("books.csv",ios::app);
  fout << book_id << ',' << book_name << ',' << author_name << ',' << book_price << '\n';
  fout.close();

  cout << endl << "Book added." << endl;
  cin.ignore();
}






// modifies a book detail
void Book::modify_book() {

  cout << "Enter Book ID: ";
  cin >> book_id;

  system("clear");

  string modify;
  cout << "Modify :" << endl << endl << "1. Book Name" << endl << "2. Author Name" << endl << "3. Book ID" << endl << "4. Book Price" << endl << endl;
  cout << "Select Option : ";
  cin >> modify;

  cin.ignore();

  system ("clear");
  string id,name,author,price;

  ifstream fin;
  ofstream fout;
  fin.open("books.csv", ios::in);
  fout.open("booksnew.csv", ios::out);

  if (fin && fout) {
    while(!fin.eof()){
      getline(fin,id,',');
      getline(fin,name,',');
      getline(fin,author,',');
      getline(fin,price,'\n');
      if (id == book_id) {
        if (modify == "1") {
          cout << "Book Name : ";
          cin >> name;
          fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
        }
        else if (modify == "2") {
          cout << "Author Name : ";
          cin >> author;
          fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
        }
        else if (modify == "3") {
          cout << "Book ID : ";
          cin >> id;
          fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
        }
        else if (modify == "4") {
          cout << "Book Price : ";
          cin >> price;
          fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
        }
      } else if (id != "") {
        fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
      }
    }

    fin.close();
    fout.close();

    remove("books.csv");
    rename("booksnew.csv", "books.csv");

    cout << endl << "Book updated." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}






// delete a book from the record (books.csv)
void Book::delete_book() {
  string book_id;

  cout << "Enter Book ID: ";
  cin >> book_id;

  cin.ignore();
  
  string id,name,author,price;

  ifstream fin;
  ofstream fout;
  fin.open("books.csv", ios::in);
  fout.open("booksnew.csv", ios::out);

  if (fin && fout) {
    while(!fin.eof()){
      getline(fin,id,',');
      getline(fin,name,',');
      getline(fin,author,',');
      getline(fin,price,'\n');
      if (id != book_id && id != "") {
        fout << id << ',' << name << ',' <<  author << ',' << price << '\n';
      }
    }

    fin.close();
    fout.close();

    remove("books.csv");
    rename("booksnew.csv", "books.csv");

    cout << endl << "Book deleted." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}
