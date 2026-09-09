#include <iostream>
#include <string>
#include <unordered_map> // import unordered map first
using namespace std;

int main() {
  // an unordered map is a container that stores key-> value pairs
  // with each key being unique, for non unique keys we use unordered_multimap.
  // this uses hashing to find the values quickly
  // eg
  // 3->0,
  // 2->1,
  // 4->5

  // create an unordered map :
  unordered_map<int, int> map_a; // here key, value both -> int

  // initialize / declare values in an unordered map:
  map_a = {{3, 0}, {7, 1}, {11, 2}};

  // accessing values:
  cout << map_a[3] << "\n"; // shows 0 since 3->0

  // !! notice 0 isnt available in the map, so using map[key which doesnt exist]
  // inserts and displays value 0 for that non-existant key
  cout << map_a[0] << "\n";

  // to find if a key exists without creating one, use the member method find()
  // find() points to a memory location of key if exists
  // if doesnt then points to map.end()
  string f = map_a.find(0) != map_a.end() ? "true" : "false";
  cout << f
       << "\n"; // this will prove that 0 was inserted when we called it above

  // count() method can also be used to find if a key exists or not without
  // creating it.
  cout << (map_a.count(4) ? "true" : "false") << "\n";

  // inserting elements in an unordered map is done mainly using below 3 ways:

  // 1. using map[key]=value;
  map_a[9] = 69; // updates value if existing key

  // 2. using map.insert({key,value});
  map_a.insert({19, 88}); // ignores insertion or updation if key exists.

  // 3. using map.emplace(key,value);
  map_a.emplace(2, 23); // ignores insertion or updation if key exists, this is
                        // most efficient.

  cout << map_a[9] << " " << map_a[19] << " " << map_a[2] << "\n";

  // removing elements from the unordered map:
  map_a.erase(9);
  cout << (map_a.find(9) == map_a.end() ? "Removed element" : "Element exists")
       << "\n";

  // find the size(number of key->value pairs) of an unordered map:
  cout << map_a.size() << "\n";

  // iterate through whole unordered map:
  for (const auto &[key, value] : map_a) {
    {
      cout << key << "->" << value << "\n";
    }
  }
  // since above loop will cause unexpected behaviours if we are deleting while
  // iteration, so we use this approach of for loop to delete elements during
  // iteration

  for (auto i = map_a.begin(); i != map_a.end(); ++i) {
    cout << i->first << "->" << i->second << "\n";
    // to erase while iterating :
    // if(i->first==19){
    //    i=map_a.erase(i);} <- this will erase element at i and point to the
    //    next iterator
  }
}
