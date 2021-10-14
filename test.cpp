#include <iostream>

using namespace std;

void setup(int bla) {
  cout << bla << "MEister\n";


}


int main() {

int x = 10;

  setup(x);
while (x != 1) {

  x = x - 1;
  setup(x);
}


  return 0;
}
