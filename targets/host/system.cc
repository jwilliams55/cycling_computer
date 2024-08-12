
#include "pw_thread/sleep.h"
#include <stdio.h>

using namespace std::chrono_literals;

namespace spin {
void Init() { printf("Initializing...\r\n"); }

void Start() {
  printf("i don't do anything\r\n");
  while (true) {
    printf("spam\r\n");
    pw::this_thread::sleep_for(250ms);
  }
}
} // namespace spin
