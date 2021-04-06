#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(){
	uint32_t variable = 0x0A0B0C0DU;
	uint8_t *byte_ptr = (uint8_t *)&variable;

	if (*byte_ptr == 0x0A){
		printf("Big Endian\n");
	}else if (*byte_ptr == 0x0D){
		printf("Little Endian\n");
	}else{
		printf("*byte_ptr = %02X\n", *byte_ptr);
	}

	return 0;
}
