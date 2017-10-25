/*Student List by Stone Yang */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct person
{
  char fname[12];
  char lname[12];
  int id;
  float gpa;
};

void add();
void print();
int main()
{
  char cmd;
  char loop;
  do
    {
      cout << "What would you like to do?" << endl;
      cout << "Type 1 to create a new entry, 2 to print student list, and 3 to delect an entry." << endl;
      cin >> cmd;
      switch(cmd)
	{
	case 1: "1";
	  add(people);
	  break;
	case 2: "2";
	  print(people);
	  break;
	case 3: "3";
	  break;
	}
      cout << "Do you wish to make more changes? (y/n)" << endl;
      cin >> loop;
    }while(loop != 'y');
    return 0;
}

void add(vector<person>people)
{
  cout << "Enter first name: ";
  cin >> people.fname;
  cout << endl << "Enter last name: ";
  cin >> people.lname;
  cout << endl << "Enter ID: ";
  cin >> people.id;
  cout << endl << "Enter GPA: ";
  cin >> people.gpa;
  cout << people.fname << " " << people.lname << "'s Profile Saved." << endl; 
}

void print(vector<person>people)
{
  cout << people.fname << " " << people.lname << endl;
  cout << "ID: " << people.id << endl;
  cout << "GPA: " << people.gpa << endl;
}
