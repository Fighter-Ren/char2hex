#include <iostream>

using namespace std;

FILE *fi, *fo;

typedef unsigned int u8;

int main()
{
	cout << "Hello World!" << endl;
	fi = fopen("foreman_new.dat", "r");
	fo = fopen("foreman_out.dat","w");
	int i = 0;
	char ch;
	char chl;
	char s;
	char sl;
	char sout;
	while ((fscanf(fi, "%c", &ch) != EOF) && (fscanf(fi, "%c", &chl) != EOF))
	{
		
		if (ch >= 0x30 && ch <= 0x39){
			switch (ch){
			case 0x30:
				s = 0;
				break;
			case 0x31:
				s = 1;
				break;
			case 0x32:
				s = 2;
				break;
			case 0x33:
				s = 3;
				break;
			case 0x34:
				s = 4;
				break;
			case 0x35:
				s = 5;
				break;
			case 0x36:
				s = 6;
				break;
			case 0x37:
				s = 7;
				break;
			case 0x38:
				s = 8;
				break;
			case 0x39:
				s = 9;
				break;
			}
		}
		else{
			switch (ch){
			case 0x61:
				s = 10;
				break;
			case 0x62:
				s = 11;
				break;
			case 0x63:
				s = 12;
				break;
			case 0x64:
				s = 13;
				break;
			case 0x65:
				s = 14;
				break;
			case 0x66:
				s = 0xf;
				break;
			}
		}


		if (chl >= 0x30 && chl <= 0x39){
			switch (chl){
			case 0x30:
				sl = 0;
				break;
			case 0x31:
				sl = 1;
				break;
			case 0x32:
				sl = 2;
				break;
			case 0x33:
				sl = 3;
				break;
			case 0x34:
				sl = 4;
				break;
			case 0x35:
				sl = 5;
				break;
			case 0x36:
				sl = 6;
				break;
			case 0x37:
				sl = 7;
				break;
			case 0x38:
				sl = 8;
				break;
			case 0x39:
				sl = 9;
				break;
			}
		}
		else{
			switch (chl){
			case 0x61:
				sl = 10;
				break;
			case 0x62:
				sl = 11;
				break;
			case 0x63:
				sl = 12;
				break;
			case 0x64:
				sl = 13;
				break;
			case 0x65:
				sl = 14;
				break;
			case 0x66:
				sl = 0xf;
				break;
			}
		}
		sout = (s << 4) | sl;
		fprintf(fo,"%c",sout);

	}

	fclose(fi);
	fclose(fo);

	return 0;
}