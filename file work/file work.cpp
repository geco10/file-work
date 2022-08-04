#include<cstdio>
#pragma warning(disable:4996)
int main() {
	FILE* a = fopen("./io/in.txt","r");
	int b, c;
	fscanf_s(a,"%i %i",&b,&c);
	FILE* z = fopen("./io/out.txt","w");
	fprintf_s(z,"%i",b+c);
	fclose(z);
	fclose(a);
}