// #include <iostream>

// int main()
// {
//   std::cout << "hello mac" << std::endl;
//   return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

  for (const string &word : msg)
  {
    cout << word << " ";
  }
  cout << endl;
}