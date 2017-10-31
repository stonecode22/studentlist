/*Student List by Stone Yang */
#include<iostream>
#include<string.h>
#include<vector>
#include<iomanip>
using namespace std;

struct person
{
  char fname[20];
  char lname[20];
  int id;
  float gpa;
};

//programminghelporg for explaining how to use vectors, referred by Alex Y.
person add(vector<person> &p, char fname[12], char lname[12], int id, float gpa);
person del(vector<person> &p, int id);
person print(vector<person> &p);
vector<person> p;

int main()
{
  char choice[20];
  
  cout << "Type ADD to create a new entry, PRINT to print student list, DELETE to delete an entry, and EXIT to exit." << endl;
  cin >> choice;
  
    if(strcmp(choice, "ADD") == 0) //add a student
      {
	char fname[20];
	char lname[20];
	int id;
	float gpa;
	
	cout << "Enter first name: ";
	cin >> fname;
	cout << endl << "Enter last name: ";
	cin >> lname;
	cout << endl << "Enter ID: ";
	cin >> id;
	cout << endl << "GPA: ";
	cin >> gpa;
	add(p, fname, lname, id, gpa);
	cout << "Student profile saved." << endl;
	main();
      }
    else if (strcmp(choice, "DELETE") == 0) //delete a student
      {
	int id;
	
	cout << "Student ID Number to delete: ";
	cin >> id;
	del(p, id);
	cout << "Student profile deleted." << endl;
	main();
      }
    else if (strcmp(choice, "PRINT") == 0) //print students
      {
        print(p);
	main();
      }
    else if (strcmp(choice, "EXIT") == 0) //quit program
      {
	return 0;
      }
    else //if none of commands are typed
      {
	cout << "Invalid command. Try again." << endl;
	main();
      }
}

person add(vector<person> &p, char fname[20], char lname[20], int id, float gpa)
{
  p.push_back(person()); //Credit programminghelporg
  int i = p.size() - 1;
  
  strcpy(p[i].fname, fname);
  strcpy(p[i].lname, lname);
  p[i].id = id;
  p[i].gpa = gpa;
}

person del(vector<person> &p, int id)
{
  for(int i = 0; i < p.size(); i++)
    {
      if(p[i].id == id)
	{
	  p.erase(p.begin() + i);
	}
    }
}

person print(vector<person> &p)
{
  vector<person>::iterator it;
  for(it = p.begin(); it != p.end(); ++it)
    {
      std::cout << *it << endl;
      //cout << p[*it].fname << " " << p[*it].lname << endl << " ID: " << p[*it].id << endl << setprecision(2) << " GPA: " << p[*it].gpa << endl;
    }
}
