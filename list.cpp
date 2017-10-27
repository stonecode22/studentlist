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

person &p = p;
person add(person&p);
person print(person&p);

int main()
{
  char cmd;
  char loop;
  do
    {
      cout << "What would you like to do?" << endl;
      cout << "Type 1 to create a new entry, 2 to print student list, and 3 to delete an entry." << endl;
      cin >> cmd;
      if(cmd = '1')
	{
	  add(A);
	}
      else if(cmd = '2')
	{
	  print(A);
	}
      
      cout << "Do you wish to make more changes? (y/n)" << endl;
      cin >> loop;
    }while(loop != 'n');
    return 0;
}

person add(person&p)
{
  cout << "Enter first name: ";
  cin >> p.fname;
  cout << endl << "Enter last name: ";
  cin >> p.lname;
  cout << endl << "Enter ID: ";
  cin >> p.id;
  cout << endl << "Enter GPA: ";
  cin >> p.gpa;
  cout << p.fname << " " << p.lname << "'s Profile Saved." << endl;
  return p;
  
}

person print(person&p)
{
  cout << p.fname << " " << p.lname << endl;
  cout << "ID: " << p.id << endl;
  cout << "GPA: " << p.gpa << endl;
}
