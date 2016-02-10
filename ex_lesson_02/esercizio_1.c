
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

int main() {

	// crea array 20 elementi
	int myarray[20];
	
	//myarray[0] = 20;
	//myarray[1] = 19;
	//myarray[1] = 18;
	//myarray[1] = 17;
	//... che noia la programmazione....

	int myarraybytelength = sizeof(myarray); // restituisce la dimensione in Byte
	int intbytes = sizeof(int);
	int myarraylength = myarraybytelength / intbytes;

	printf("myarraybytelength = %d\n", myarraybytelength);
	printf("intbytes = %d\n", intbytes);
	printf("myarraylength = %d\n", myarraylength);
	
	// inizializzo array
	for(int i = 0; i < sizeof(myarray)/sizeof(int); ++i) {
		myarray[i] = sizeof(myarray)/sizeof(int) - i;
	}

	// print array
	for(int i = 0; i < sizeof(myarray)/sizeof(int); ++i) {
		printf("myarray[%d] = %d\n", i, myarray[i]);
	}

	return EXIT_SUCCESS; // 0

}