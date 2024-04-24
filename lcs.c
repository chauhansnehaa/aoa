#include <stdio.h>
#include <string.h>
int max(int a, int );
int lcs(char* X, char* Y, int i, int j)
{
if (X[i] == 0 || Y[j] == 0)
return 0;
if (X[i] == Y[j])
return 1 + lcs(X, Y, i + 1, j + 1);
else
return max(lcs(X, Y, i, j + 1), lcs(X, Y, i + 1, j));
}
int max(int a, int b) { return (a > b) ? a : b; }
int main()
{
char S1[] = "Sameeksha";
char S2 [] = "Sakshee";
int m = strlen(S1);
int n = strlen(S2);
int i = 0, j = 0;
printf("Length of LCS is %d", lcs (S1, S2, i, j));
return 0;
}