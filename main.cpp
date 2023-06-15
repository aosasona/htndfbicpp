#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  if (argc < 2) {
    printf("Usage: ./a.out <number>\n");
    return 1;
  }
  n = stoi(argv[1]);
  for (int i = 1; i <= n; i++) {
    string text = "";
    if (i % 3 == 0) {
      text += "Fizz";
    }
    if (i % 5 == 0) {
      text += "Buzz";
    }
    if (text.length() == 0) {
      text += to_string(i);
    } else {
      text = to_string(i) + ": " + text;
    }

    cout << text << endl;
  }

  return 0;
}
