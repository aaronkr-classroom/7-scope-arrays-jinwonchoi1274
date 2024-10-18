#include <stdio.h>

void check_endianness() {
	//첫 메모리 주소가 0x12이면 빅 엔디언
	//0x74이면 리틀 엔디언이다
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	//모든 바이트 주소와 값을 출력하기
	for (int i = 0; i < sizeof(num);i++) {
		printf("%p 0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	if (byte_ptr[0] == 0x12) {
		printf("\nThis is a big-endian system.");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is a little-endian system.");
	}
	else {
		printf("unknown endianss!~");
	}
}
int main(void) {
	check_endianness();
	return 0;
}