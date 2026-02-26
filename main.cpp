#include <iostream>
#include "infinite_str.h"

using namespace std;

int main(int argc, char** argv)
{
  InfiniteString *s = new InfiniteString();

  cout << "size: " << s->size() << endl;

  *s += "abc";
  cout << s->c_str() << endl;

  *s += "123";
  cout << s->c_str() << endl;

  *s += "Put a really big string here.";
  cout << s->c_str() << endl;


}