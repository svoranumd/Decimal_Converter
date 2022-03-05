#include <iostream>
#include <string>

using namespace std;

void binary(int dec) {
	int binary[32] = { 0,0,0,0,0,0,0,0};
	int i = 0;
	while (dec > 0) {
		binary[i] = dec % 2;
		dec = dec / 2;
		i++;
	}
	for (int l = 7; l >= 0; l--) {
		cout << binary[l];
	}
	cout << "\t";
}

void hex(int dec) {
	char hexadecimal[1000];
	int i = 0;
	if (dec == 0) {
		cout << "0";
	}
	while (dec != 0) {
		int remainder = 0;
		remainder = dec % 16;
		if (remainder < 10) {
			hexadecimal[i] = remainder + 48;
			i++;
		}
		else {
			hexadecimal[i] = remainder + 55;
			i++;
		}
		dec = dec / 16;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << hexadecimal[j];
	}
	cout << "\t";
}

void bcd(int dec) {
	string bcd = "";
	int save = dec;
	if (dec == 0) {
		bcd = "0000 0000 0000";
		cout << bcd;
	}
	else if (to_string(dec).length() == 1) {
		bcd = "0000 0000 ";
		int binary[32] = { 0,0,0,0 };
		int i = 0;
		while (dec > 0) {
			binary[i] = dec % 2;
			dec = dec / 2;
			i++;
		}
		cout << bcd;
		for (int j = 3; j >= 0; j--) {
			cout << binary[j];
		}
	}
	else if (to_string(dec).length() == 2) {
		dec = save;
		bcd = "0000 ";
		int tens[32] = { 0,0,0,0 };
		int i = 0;
		dec = dec / 10;
		while ((dec % 10) > 0) {
			tens[i] = dec % 2;
			dec = dec / 2; 
			i++;
		}
		cout << bcd;
		for (int j = 3; j >= 0; j--) {
			cout << tens[j];
		}
		cout << " ";
		dec = save;
		int single[32] = { 0,0,0,0 };
		i = 0;
		int temp = dec / 10; 
		dec = dec % (temp * 10);
		while (dec > 0) {
			single[i] = dec % 2;
			dec = dec / 2; 
			i++;
		}
		for (int j = 3; j >= 0; j--) {
			cout << single[j];
		}
	}
	else if (to_string(dec).length() == 3) {
		dec = save;
		int i = 0;
		int hundred[32] = { 0,0,0,0 };
		dec = dec / 100;
		while (dec > 0) {
			hundred[i] = dec % 2; 
			dec = dec / 2;
			i++;
		}
		for (int j = 3; j >= 0; j--) {
			cout << hundred[j];
		}
		cout << " ";
		int tens[32] = { 0,0,0,0 };
		i = 0;
		dec = save;
		dec = dec % 100;
		dec = dec / 10;
		while ((dec % 10) > 0) {
			tens[i] = dec % 2;
			dec = dec / 2;
			i++;
		}
		for (int j = 3; j >= 0; j--) {
			cout << tens[j];
		}
		cout << " ";
		dec = save;
		int single[32] = { 0,0,0,0 };
		i = 0;
		int temp = dec / 10;
		dec = dec % (temp * 10);
		while (dec > 0) {
			single[i] = dec % 2;
			dec = dec / 2;
			i++;
		}
		for (int j = 3; j >= 0; j--) {
			cout << single[j];
		}
	}
}

int main() {
	cout << "Skyler Voran's Decimal Converter\n\n";
	cout << "DECIMAL\t BINARY\t    HEXADECIMAL\t      BCD" << endl;
	for (int i = 0; i < 256; i++) {
		cout << "   " << i << "\t";
		binary(i);
		hex(i);
		bcd(i);
		cout << endl;
	}
	return 0;
}
