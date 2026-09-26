#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream file("../res/binary.dat",
               ios::in | ios::out | ios::binary | ios::trunc);

  int x = 25;
  // we always use .read() and .write() for io in binary files
  // however << and >> can be used along ios::binary

  file.write((char *)&x, sizeof(x));

  file.seekg(0);
  // memory address of the object whose bytes are being read/written=(char*)&x
  // --> what memory ? where to end = sizeof(x) -- how many bytes? c-sstyle
  // approach: file.read((char *)&x, sizeof(x));

  // modern c++ approach using reinterpret_cast
  file.read(reinterpret_cast<char *>(&x), sizeof(x));

  cout << x << endl;

  file.close();

  return 0;
}