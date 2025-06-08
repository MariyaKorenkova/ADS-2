// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double v = 1;
  for (uint16_t i = 1; i <= n; i++) {
    v *= value;
  }
  return v;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  for (uint16_t i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t i = 0; i < count; i++) {
    res += calcItem(x, i);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0;
  uint16_t zn = 1;
  for (uint16_t i = 1; i <= count; i++) {
    res += calcItem(x, i*2 - 1) * zn;
    zn = -zn;
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0;
  uint16_t zn = 1;
  for (uint16_t i = 1; i <= count; i++) {
  res += calcItem(x, i * 2 - 2) * zn;
    zn = -zn;
  }
  return res;
}
