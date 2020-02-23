#include "frame.h"

extern MOD MOD_INIT[];

int main()
{
	int i = 0;
	for (; i < sizeof(MOD_INIT); i++) {
		MOD_INIT[i].initFunc();
	}

	printf("cframe work done;");
	while (1) {
		sleep(5000);
	}
	return 0;
}