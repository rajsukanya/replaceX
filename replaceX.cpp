#include <iostream>
#include <string>
using namespace std;

void replaceX(string s)
{
  int g,i;
  string stack[10];
 
  g = s.find("X");

}

int main ()
{
  string s1, s2, s3;

  s1 = "1000";
  s2 = "1Xoo";
  s3 = "1XooX";

  replaceX(s1);
  replaceX(s2);
  replaceX(s3);

}


