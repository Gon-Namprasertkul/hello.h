#include<iostream>
#include<string>
using namespace std;
#ifndef HELLO_H_
#define HELLO_H_ 
#endif

void hello() {
  cout << "Hello, World!" << endl;
}

void hello_name(string name) {
  cout << "Hello, " << name << "!" << endl;
}

class Hello {
  public:
  string name;
    void say_hello() {
      cout << "Hello, " << name << "!" << endl; 
    }
};