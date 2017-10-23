/*Student List by Stone Yang */
#include<iostream>
#include<string>
using namespace std;

struct student
{
  char fname[12];
  char lname[12];
  int id;
  float gpa;
};
//function calls
void add(vector<student>v);
void print(const vector<student>);

int main()
{
  cout << "What would you like to do?" << endl;
  cout << "Type ADD to create a new entry, PRINT to print student list, and DELETE to delect an entry." << endl;
  add();
  print();
  return 0;
}

void add()
{
  cout << "Enter first name: ";
  cin >> person.fname;
  cout << endl << "Enter last name: ";
  cin >> person.lname;
  cout << endl << "Enter ID: ";
  cin >> person.id;
  cout << endl << "Enter GPA: ";
  cin >> person.gpa;
  cout << person.fname << " " << person.lname << "'s Profile Saved." << endl; 
}

void print()
{
  cout << person.fname << " " << person.lname << endl;
  cout << "ID: " << person.id << endl;
  cout << "GPA: " << person.gpa << endl;
}
