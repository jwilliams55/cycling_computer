
#include "system/system.h"
#include <stdio.h>

int main() {
  printf("here 1\r\n");
  spin::Init();
  printf("here 2\r\n");
  spin::Start();
  printf("here 3\r\n");
}
