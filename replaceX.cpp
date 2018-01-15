#include <iostream>
#include <string>
using namespace std;

void replaceX(string s)
{
  int g,i;
  string stack[10];

  g = s.find("X");
  cout << "found an X at position: " << g << "\n";
  
  std::string::size_type n = 0;
  if((n = s.find("X")) != std::string::npos)
  {
    s.replace(n, 1, 1, '0');
    cout << s <<endl;
    s.replace(n, 1, 1, '1');
  }

  if((n = s.find_last_of("X")) != std::string::npos)
  {
    s.replace(n, 1, 1, '0');
    cout << s << "/" <<endl;
    s.replace(n, 1, 1, '1');
  }
   cout << s << "*" <<endl;
}

int main ()
{
  string s1, s2, s3;

  s1 = "1000";
  s2 = "1X00";
  s3 = "1X00X";

  replaceX(s1);
  replaceX(s2);
  replaceX(s3);

}


