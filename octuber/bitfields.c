#include<stdio.h>
int main (){
	struct protocol{
		unsigned int flags:4;
		unsigned int checksu:6;
	}tcp;
	printf("size of tcp=%d\n",(int)sizeof(tcp));
	tcp.flags=7;
	printf("%u\n",tcp.flags);
	tcp.flags=17;
	printf("%u\n",tcp.flags);
	return 0;
}
