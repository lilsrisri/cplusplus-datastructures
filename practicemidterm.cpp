#include<iostream>
#include <cstring>

using namespace std;

int main(){
  char input[200];
  cin.getline(input, 200);

  for (int i = 0; i < strlen(input); i++) {
    char temp = input[i];
      if (!isspace(input[i])) {
        input[i] = input[i+1];
        input[i+1] = temp;
      }
    while (!isspace(input[i]) && !ispunct(input[i]) && input[i] != '\0') {
      i++;
        }
  }

  cout << "Here is your altered string: " << endl << input;
}

