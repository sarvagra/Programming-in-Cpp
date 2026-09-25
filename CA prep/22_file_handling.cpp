#include <iostream>
#include <string>

#include <fstream> // includes read and write both

// for only reading use <ifstream>
// for only writing use <ofstream>

using namespace std;

int main() {

  // writing in a file using ofstream
  // ofstream has a default flag ios::trunc| ios::out which clears the file
  // before writing into it. however we can change it as we desire.
  ofstream file("../res/data.txt"); // create or open a file for writing only

  file << "hello, this is Sarvagra Shishodia."; // Write in single line
  file << "I'm a student of B.tech CSE.\n";     // write in single line and take
                                                // new line.
  file << "I'm 20 years old.\n";

  file.close(); // close the file

  // reading from a file using ifstream
  ifstream file1("../res/data.txt"); // open a file for reading only

  string s;

  file1 >> s; // read the first word separated with a white space from the file
  cout << s << endl; // print the string to realise the working

  // reading the whole line :
  // getline() starts from the current position, not from the beginning.
  getline(file1, s); // read the first line until the newline.

  // notice that the below file is being read from where we first left it i.e.
  // hello, <<-- from the first whitespace included
  cout << s << endl;

  // to read the entire line fron beginning we need to refresh the cursor
  file1.clear();     // !! this clears the stream's error/status flags, not the
                     // contents of data.txt. !!
  file1.seekg(0);    // sets the reading cursor back to 0
  getline(file1, s); // read the first line until the newline again.
  cout << s << endl; // prints the entire line

  file1.close(); // close the file

  // reading a file using fstream, along with the flags. adding flags adds more
  // functionality and control to fstream.
  //  fstream is only ios::in|ios:: out by default, its not having ios::trunc or
  //  ios::app flags
  // so if file has abcdef and we do file << "xyz";, we end up with xyzdef !!

  // usually file is replaced with new content
  // to prevent this and add the content at the end of the
  // file we do ios::app <<-- append
  fstream file2("../res/data.txt", ios::app);
  file2 << "This is writing at the end of the file using ios::app\n";

  file2.close();

  // using flag ios::trunc to clear the contents of the file
  fstream file3("../res/data.txt", ios::trunc | ios::out);
  file3 << "Cleared the file and wrote into it.\n";

  file3.close();

  // usage of seekg() and seekp().
  //  we saw the usage of seekg() earlier, but lets do it again with its
  //  definitions.
  fstream file4("../res/data.txt");
  file4.seekp(2);                  // set the writing position as 2
  file4 << "Appending at index 2"; // index=2 meaning third byte/character.
  file4.flush(); // make sure its in the file not just in the buffer

  file4.seekg(0);    // read first line from beginning
  getline(file4, s); // get the first line
  cout << s << endl; // print

  // usage of tellg and tellp
  cout << "Writing position is : " << file4.tellp() << endl;
  cout << "Reading position is : " << file4.tellg() << endl;

  file4.close();

  return 0;
}