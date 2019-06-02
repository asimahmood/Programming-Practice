#include <iostream>
#include <fstream>
#include "classLibrarian.h"
using namespace std;




// login check for the admin
bool Librarian::user_login() {
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
      if (id == user_id && id == "admin" && pass == user_password) {
        cout << endl << "Access Granted." << endl;
        cin.ignore();
        fin.close();
        return true;
      }
    }
    cout << endl << "Username or Password Incorrect." << endl;
    fin.close();
    cin.ignore();
    return false;
  }
}






// shows a book detail from the books record (book.csv)
void Librarian::search_book() {
  string book_id;

  cout << "Enter Book ID: ";
  cin >> book_id;

  system("clear");

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
void Librarian::display_books() {
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






// add new student to the students record (students.csv)
void Librarian::add_student() {
  cin.ignore();

  string name,department,batch,roll_no;

  cout << "Student Name: ";
  getline(cin,name);
  cout << "Department: ";
  cin >> department;
  cout << "Batch: ";
  cin >> batch;
  cout << "Roll No: ";
  cin >> roll_no;

  ofstream fout;
  fout.open("students.csv",ios::app);
  fout << roll_no << ',' << name << ',' << department << ',' << batch << '\n';
  fout.close();

  ofstream foutt;
  foutt.open("login.csv", ios::app);
  foutt << roll_no << ',' << "fast123" << '\n';
  foutt.close();

  cout << endl << "Student record added." << endl;

  cin.ignore();
}






// delete a student detail from the students record (student.csv)
void Librarian::delete_student() {
  string roll_no;

  cout << "Enter Student Roll No: ";
  cin >> roll_no;

  string name,department,batch,roll;

  ifstream fin;
  ofstream fout;

  fin.open("students.csv", ios::in);
  fout.open("studentsnew.csv", ios::out);

  if (fin && fout) {
    while(!fin.eof()){
      getline(fin,roll,',');
      getline(fin,name,',');
      getline(fin,department,',');
      getline(fin,batch,'\n');
      if (roll != roll_no && roll != "") {
        fout << roll << ',' << name << ',' << department << ',' << batch << '\n';
      }
    }

    fin.close();
    fout.close();

    remove("students.csv");
    rename("studentsnew.csv", "students.csv");

    cout << endl << "Student record deleted." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}






// shows a student detail from the students record (students.csv)
void Librarian::search_student() {
  string roll_no;

  cout << "Enter Student Roll No: ";
  cin >> roll_no;

  system("clear");

  string name,department,batch,roll;
  bool found = false;

  ifstream fin;
  fin.open("students.csv");

  if (fin) {
    while(found == false && !fin.eof()){
      getline(fin,roll,',');
      getline(fin,name,',');
      getline(fin,department,',');
      getline(fin,batch,'\n');
      if (roll == roll_no) {
        cout << "Student Name" << "\t" << "\t" << "Department" << "\t" << "\t" << "Batch" << "\t" << "\t" << "Roll No" << endl;
        cout << name << "\t" << "\t" << department << "\t" << "\t" << "\t" << batch << "\t" << "\t" << roll << endl << endl;
        found = true;
      }
    }
    if (found == false) {
      cout << "Student not found." << endl;
    }
    fin.close();
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}






// Diplays all students record
void Librarian::display_students() {
  string name,department,batch,roll;

  ifstream fin;
  fin.open("students.csv");

  if (fin) {
    cout << "Student Name" << "\t" << "\t" << "Department" << "\t" << "\t" << "Batch" << "\t" << "\t" << "Roll No" << endl << endl;
    while(!fin.eof()){
      getline(fin,roll,',');
      getline(fin,name,',');
      getline(fin,department,',');
      getline(fin,batch,'\n');
      if (name != "" && department != "" && batch != "" && roll != "" ) {   //extra line was printed with previous values
        cout << name << "\t" << "\t" << department << "\t" << "\t" << "\t" << batch << "\t" << "\t" << roll << endl;
      }
    }
    fin.close();
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// view the requests of students
void Librarian::view_requests() {
  string book,student;

  ifstream fin;
  fin.open("studentrequest.csv", ios::in);

  if (fin) {
    cout << "Book ID" << '\t' << '\t' << "Student ID" << endl << endl;
    while (!fin.eof()) {
      getline(fin,book,',');
      getline(fin,student,'\n');
      if (book != "" && student != "") {
        cout << book << '\t' <<'\t' << student << endl;
      }
    }
    fin.close();
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// issue books to the students
void Librarian::issue_book() {
  string book,student;
  string b_id,s_id;

  cout << "Student ID : ";
  cin >> student;
  cout << "Book ID : ";
  cin >> book;

  ifstream fin;
  ofstream fout;
  fin.open("studentrequest.csv", ios::in);
  fout.open("studentrequestnew.csv", ios::out);

  if (fin && fout) {
    while (!fin.eof()) {
      getline(fin,s_id,',');
      getline(fin,b_id,'\n');
      if (student == s_id && book == b_id) {
        ofstream foutt;
        foutt.open("booksissued.csv",ios::app);
        foutt << student << ',' << book << '\n';
        foutt.close();
      } else if (s_id != "" && b_id != ""){
        fout << s_id << ',' << b_id << '\n';
      }
    }
    fin.close();
    fout.close();

    remove("studentrequest.csv");
    rename("studentrequestnew.csv", "studentrequest.csv");

    cout << endl << "Book issued." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}





// returned books from students
void Librarian::return_book() {
  string book,student;
  string b_id,s_id;

  cout << "Student ID : ";
  cin >> student;
  cout << "Book ID : ";
  cin >> book;

  ifstream fin;
  ofstream fout;

  fin.open("booksissued.csv", ios::in);
  fout.open("booksissuednew.csv", ios::out);

  if (fin && fout) {
    while (!fin.eof()) {
      getline(fin,s_id,',');
      getline(fin,b_id,'\n');
      if ((student != s_id || book != b_id) && s_id != "" && b_id != ""){
        fout << s_id << ',' << b_id << '\n';
      }
    }
    fin.close();
    fout.close();

    remove("booksissued.csv");
    rename("booksissuednew.csv", "booksissued.csv");

    cout << endl << "Book returned." << endl;
  } else {
    cout << "Error : File not loaded." << endl;
  }
  cin.ignore();
}
