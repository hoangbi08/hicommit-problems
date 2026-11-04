#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  if (dtb >=9.0 || dtb<=10.0 && drl >= 90 || drl <=100) {
    printf("HOC_BONG_XUAT_SAC");
  }

  return 0;
}