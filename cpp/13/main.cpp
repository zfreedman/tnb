#include <iostream>
#include <string>
using namespace std;

class A {
  public:
    // Constructor
    A (string s) {
      cout << "This will get printed automagically.\n";
      secret = s;
    }

    // secret accessors
    string getSecret () {
      return secret;
    }
    void setSecret (string s) {
      secret = s;
    }

  private:
    string secret;
};

int main () {
  A a("This is a secret, isn't it?");
  A b("This is my initial secret");
  
  cout << "\na's secret: " << a.getSecret() << endl;
  cout << "b's secret: " << b.getSecret() << endl;
  cout << "a's new secret will be \"hehehe huehuehue\"\n";
  a.setSecret("hehehe huehuehue");
  cout << "a's secret: " << a.getSecret() << endl;
  cout << "b's secret: " << b.getSecret() << endl << endl;
  
  return 0;
}