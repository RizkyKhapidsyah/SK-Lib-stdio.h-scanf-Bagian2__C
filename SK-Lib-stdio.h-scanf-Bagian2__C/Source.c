#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main(void) {
	int   i, result;
	float fp;
	char  c, s[81];
	wchar_t wc, ws[81];
	result = scanf("%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws); // C4996
	// Note: scanf and wscanf are deprecated; consider using scanf_s and wscanf_s
	printf("The number of fields input is %d\n", result);
	printf("The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
	result = wscanf(L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws); // C4996
	wprintf(L"The number of fields input is %d\n", result);
	wprintf(L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);

	_getch();
	return 0;
}