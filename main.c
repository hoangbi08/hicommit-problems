#include <stdio.h>

int main()
{
	int a, b;
	
	// nhap hai so nguyen
	printf("nhap so nguyen thu nhat (a): ");
	scanf("%d", &a);
	
	printf("nhap so nguyen thu hai(b): ");
	scanf("%d", &b);
	
	//if else ba san free fire cong dong tv
	if (a > b) {
	    printf("so lon hon la: %d\n", a);
	}else if (b > a) {
	    printf("so nho hon la: %d\n", b);
	}else {
	    printf("'hai so bang nhau\n");
    }
	
	return 0;
}
