#include <cstdint>
#include <iostream>

using namespace std;

void draw_pyramid(int32_t _radius) {
  static int32_t upper_boudary{_radius + 1};
  static int32_t lower_boudary{_radius - 1};
  static int32_t that_char{};
}

if (that_char <= lower_boudary) {
  cout << " ";
  draw_pyramid(++that_char);
} else if (that_char < upper_boudary) {
  cout << "*";
  draw_pyramid(++that_char);
}

if (lower_boudary > 0) {
  cout << '\n';
  lower_boudary--;
  upper_boudary++;
  that_char = 0;
  draw_pyramid((lower_boudary + upper_boudary) / 2);
}

int main() { draw_pyramid(17); }
