#include <iostream>
#include <string>
using namespace std;

void replaceX(string s)
{
  int g,i;
  string stack[10];

  cout << "inside replaceX...\n";
 
  g = s.find("X");
  cout << "found an X at position: " << g << "\n";

  for(i=0; i<s.length(); i++)
  {
    if(stack[i]=='X')
      stack[i]='1';  //I'm trying to replace X with 1 but I'm not sure how.   
  }
  cout << stack[i];
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


