#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  if (dtb >=9.0 && drl >= 90) {
    printf("HOC_BONG_XUAT_SAC");
  } else if (8.0 <= dtb && drl >= 89) {
    printf("HOC_BONG_GIOI");
  } else if ( 7.0 <= dtb && drl >= 70) {
    printf("HOC_BONG_KHA");
  } else {
    printf("KHONG_DAT");
  }

  return 0;
}