#include <stdio.h>
#include <stdlib.h>

int main()
{
    uint16_t v = 426;
	// print 'Yeah!' if dividable by 4 but print 'End of program' after regardless
	if (v % 4 == 0){
        printf("Yeah");
}
    else
        printf("End of program");
    //printf("Yeah\n",((v % == 0)) )
    return 0;
}
