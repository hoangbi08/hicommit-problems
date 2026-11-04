#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  if (dtb >=9.0 || dtb<10.0 && drl >= 90 || drl <100) {
    printf("HOC_BONG_XUAT_SAC");
  } else if (8.0 <= dtb < 8.9 && 80 >=  drl < 100 || 9.0 >= dtb < 10.0 && 80 <= drl < 89) {
    printf("HOC_BONG_GIOI");
  } else if ( 7.0 <= dtb < 7.9 && 70 <= drl < 100 || 8.0 <= dtb < 8.9 && 70 <= drl < drl || 9.0 >= dtb < 10.0 && 70 <= drl < 89) {
    printf("HOC_BONG_KHA");
  } else if (dtb < 7.0 && drl < 70 || 7.0 <= dtb 7.9 && drl < 70) {
    printf("KHONG_DAT");
  }

  return 0;
}