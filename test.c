#include <inttypes.h>
#include <stdio.h>

#include "rotate.h"

int main(void) {

  uint8_t c = 1;
  uint16_t h = 1;
  uint32_t w = 1;
  uint64_t l = 1;

  for (int i = 1; i < 5; i += 1) {
    printf("R(8, %d): ", i);
    printf("%" PRIu8 " >> %" PRIu8 "\n", c, rotR_8(c, i));
  }
  for (int i = 1; i < 5; i += 1) {
    printf("L(8, %d): ", i);
    printf("%" PRIu8 " << %" PRIu8 "\n", c, rotL_8(c, i));
  }

  for (int i = 1; i < 5; i += 1) {
    printf("R(16, %d): ", i);
    printf("%" PRIu16 " >> %" PRIu16 "\n", h, rotR_16(c, i));
  }
  for (int i = 1; i < 5; i += 1) {
    printf("L(16, %d): ", i);
    printf("%" PRIu16 " << %" PRIu16 "\n", h, rotL_16(c, i));
  }

  for (int i = 1; i < 5; i += 1) {
    printf("R(32, %d): ", i);
    printf("%" PRIu32 " >> %" PRIu32 "\n", w, rotR_32(c, i));
  }
  for (int i = 1; i < 5; i += 1) {
    printf("L(32, %d): ", i);
    printf("%" PRIu32 " << %" PRIu32 "\n", w, rotL_32(c, i));
  }

  for (int i = 1; i < 5; i += 1) {
    printf("R(64, %d): ", i);
    printf("%" PRIu64 " >> %" PRIu64 "\n", l, rotR_64(c, i));
  }
  for (int i = 1; i < 5; i += 1) {
    printf("L(64, %d): ", i);
    printf("%" PRIu64 " << %" PRIu64 "\n", l, rotL_64(c, i));
  }

  return 0;
}
