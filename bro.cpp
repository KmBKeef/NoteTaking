#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> TODOS;

class List {
  // TODO Store Entries in a file
public:
  void addEntry(string entry) {
    TODOS.push_back(entry);
  };
  void delEntry(int index){
    TODOS.erase(TODOS.begin()+index);
  };
  string getEntry(int index){
    return TODOS[index];
  };
  void editEntry(string entry, int index) {
    TODOS[index] = entry;
    // TODO Disallow editing nonexistent indexes
  };
};

int main () {

  List bro;

  string entry;
  char input;
  int index;
  cout << "Type h for help" << endl;
  while(input != 'q') {
    cout << "$ " << flush;
    cin >> input;
    switch(input) {
    case 'h':
      cout << "a string: adds a string" <<endl;
      cout << "l: lists Entries" <<endl;
      cout << "d int: Deletes Entry with index int" << endl;
      cout << "e int string: Changes the string of Entry with index int" << endl;
      cout << "g int: Get Entry with index int" << endl;
      cout << "q: Quits" << endl;
    case 'a':
      getline(cin, entry);
      bro.addEntry(entry);
      break;
    case 'l':
      for(string i : TODOS)
        cout << i << endl;
      break;
    case 'd':
      cin >> index;
      bro.delEntry(index);
      break;
    case 'e':
      cin >> index;
      getline(cin, entry);
      bro.editEntry(entry, index);
      break;
    case 'g':
      cin >> index;
      cout << bro.getEntry(index) << endl;
      break;
    case 'q':
      cout << "Exiting" << endl;
      break;
    default:
      cout << "Unknown option" << endl;
      break;
    }
  }
  return 0;
}
