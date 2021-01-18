#include <stdio.h>
#include <windows.h>

int main(void) {
	char hIn[4100] = { 0 };
	int dOut[2172] = { 0 };
	int base;
	int i = 0, j = 0, k = 0, l = 0;
	char header[421] = "                                   `7MM\"\"\"Yb.\n                                     MM    `Yb.\n`7MMpMMMb.pMMMb.   ,6\"Yb. `7MMpdMAo. MM     `Mb\n  MM    MM    MM  8)   MM   MM   `Wb MM      MM\n  MM    MM    MM   ,pm9MM   MM    M8 MM     ,MP\n  MM    MM    MM  8M   MM   MM   ,AP MM    ,dP'\n.JMML  JMML  JMML.`Moo9^Yo. MMbmmd'.JMMmmmdP'\n                            MM\n                          .JMML.\n   Written by: @p4nggi\n\n";
	printf("%s", header);
	printf("Please enter HEX STREAM : ");
	scanf("%s", hIn);
	putchar('\n');
	while (hIn[i] != '\0') {  //정수로 변환
		if (hIn[i] == '0')
			hIn[i] = 0;
		else if (hIn[i] == '1')
			hIn[i] = 1;
		else if (hIn[i] == '2')
			hIn[i] = 2;
		else if (hIn[i] == '3')
			hIn[i] = 3;
		else if (hIn[i] == '4')
			hIn[i] = 4;
		else if (hIn[i] == '5')
			hIn[i] = 5;
		else if (hIn[i] == '6')
			hIn[i] = 6;
		else if (hIn[i] == '7')
			hIn[i] = 7;
		else if (hIn[i] == '8')
			hIn[i] = 8;
		else if (hIn[i] == '9')
			hIn[i] = 9;
		else if (hIn[i] == 'a' || hIn[i] == 'A')
			hIn[i] = 10;
		else if (hIn[i] == 'b' || hIn[i] == 'B')
			hIn[i] = 11;
		else if (hIn[i] == 'c' || hIn[i] == 'C')
			hIn[i] = 12;
		else if (hIn[i] == 'd' || hIn[i] == 'D')
			hIn[i] = 13;
		else if (hIn[i] == 'e' || hIn[i] == 'E')
			hIn[i] = 14;
		else if (hIn[i] == 'f' || hIn[i] == 'F')
			hIn[i] = 15;
		else {
			printf("Please enter a 'HEX' string.\n\n");
			system("pause");
			return -1;
		}

		if (i % 2 == 1) {
			dOut[i / 2] = hIn[i - 1] * 16 + hIn[i];
		}
		++i;
	}
	//데이터 부분의 시작점과 기준값 찾기
	if (dOut[26] == 175 && dOut[27] == 207 && dOut[28] == 0 && dOut[29] == 17 && dOut[34] == 46 && dOut[35] == 224) //af cf 00 11 , 2e e0
		j = 54;
	for (k = 7; k <= 16; ++k) {
		if (dOut[j + k] == dOut[j + k + 1])
			++l;
	}
	if (l == 10)
		base = dOut[j + 7];
	else {
		printf("Enter Base Directly : ");
		scanf("%x", &base);
		if (base < 0 || 255 < base) {
			printf("Enter a value between 00~FF.\n\n");
			system("pause");
			return -1;
		}
		putchar('\n');
	}
	l = 0;
	for (k = j; k < i / 2; ++k) {  //복호화 및 출력
		dOut[k] -= base;
		if (dOut[k] < 0)
			dOut[k] += 256;
		printf("%02X%c", dOut[k], 32);
		++l;
		if (l % 16 == 0)
			putchar('\n');
	}
	printf("\n\n");
	for (; j < i / 2; ++j) {
		k = 0;
		l = 0;
		if (dOut[j] == 0 && dOut[j + 1] == 5 && dOut[j + 2] == 0 && dOut[j + 3] == 0 && dOut[j + 4] == 0) {
			printf("The seller : ");
			while (dOut[j + 5 + k] != 0) {
				printf("%02X%c", dOut[j + 5 + k], 32);
				++k;
			}
			putchar('\n');
			printf("The buyer : ");
			if (dOut[j + 62] == 0)
				printf("no buyer");
			while (dOut[j + 62 + l] != 0) {
				printf("%02X%c", dOut[j + 62 + l], 32);
				++l;
			}
			putchar('\n');
			printf("Item Code(LE) : ");
			printf("%02X%c%02X%c%02X%c", dOut[j + 120], 32, dOut[j + 121], 32, dOut[j + 122], 32);
			if (dOut[j + 120] == 0 && dOut[j + 121] == 0 && dOut[j + 122] == 0) {
				putchar('\n');
				printf("Packet split");
			}
			printf("\n\n");
		}
	}
	system("pause");
	return 0;
}