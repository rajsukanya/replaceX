#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

vector<string> replaceX(string s)
{
  int g;
  string s1, s2;
  stack<string> temp;
  vector<string> resultsList;

  temp.push(s);
  
  while(! temp.empty())
  {
    string t = temp.top();
    temp.pop();
    g = t.find("X");

    if(g = -1)
    {
      resultsList.push_back(t);
    }
    else
    {  
      string  s1(t);
      string  s2(t);

      s1[g] = '0';
      s2[g] = '1';
      temp.push(s1);
      temp.push(s2);  
    }
  }
  return resultsList;
}

int main ()
{
  string s;
  vector<string>u;
  vector<string>::iterator v;
  
  cout << "Enter a string: ";
  cin >> s;

  u = replaceX(s);

  for(v = u.begin(); v != u.end(); v++)
  {
    cout << *v << " ";
  }
  cout <<endl;

}
