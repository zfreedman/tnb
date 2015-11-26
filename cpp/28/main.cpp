#include <iostream>
using namespace std;

int volume (int l=1, int w=2, int h=3);

int main () {
  cout << "\nVolume: " << volume(4, 5, 6) << endl;
  cout << "\nVolume (default): " << volume() << endl << endl;
  return 0;

}

int volume (int l, int w, int h) {
  return l * w * h;
}