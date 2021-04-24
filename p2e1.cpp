#include <stdio.h>
#include <string.h>

int parkinglookup;
char licenceplatedb[][10];
char licenceplate[];
int vehicletype;
int parkinglookupfreeindex(char lisenceplatedb[][10]);

int main (void) {
	int totalPrice = 0;
	int bikePrice = 0;
	int carPrice = 0;
	int carCounter = 0;
	int bikeCounter = 0;
	char licencePlate[10];
	int vehicleType = 0;
	char licencePlateCarsDB [200][10] = {};
	char licencePlateBikesDB [40][10] = {};
	for (int i = 0; i < 200; i++) {
		strcpy(licencePlateCarsDB[i], "0");
    }
    for (int i = 0; i < 40; i++) {
    	strcpy(licencePlateBikesDB[i], "0");
	}
	while (strcmp("-1", licencePlate) ! = 0) {
		while (vehicleType ! = 1 && vehicleType ! = 2) {
			printf ("Enter the type of vehicle (1 or 2):\n");
			scanf("%d", &vehicleType);
		}
	printf("Enter licence plate(type end to exit):\n");
	scanf("%s", licencePlate);
	if (strcmp("end", licencePlate) == 0) {
		//calculate price
		carPrice = 10 * carCounter;
		bikeprice = 4 * bikePrice;
		totalPrice = carPrice + bikePrice;
		printf ("the price you need to pay is:%d\n", totalPrice)
		return 0;
	}
	int ret;
	if (vehicleType == 1) {
		ret = parkingLookup (licencePlateCarsDB, licencePlate, 2);
		if (ret == -1) {
			ret = parkingLookupFreeIndex (licencePlateCarsDB);
			strcpy(licencePlateCarsDB[ret], licencePlate);
			printf("your car has been stored at location :%d\n", ret);	
		}
		else {
			printf("your car was found at location :%d\n, ret");
			carCounter++;
			strcpy(:licencePlateCarsDB[ret], "0");
		}
	}
	if (vahicleType == 2) {
		ret = parkingLookup (licencePlateBikeDB, licencePlate, 2);
		if (ret == -1) {
			ret = parkingLookupFreeIndex (licencePlateBikesDB);
			strcpy(licencePlateBikesDB[ret], licencePlate);
			printf("your bike has been stored at location :%d\n", ret);
		}
		else {
			printf("your bike was found at location :%d\n", ret);
			bikeCounter++;
			strcpy(licencePlateBikesDB[ret], "0");
		}		     
	} 
	vehicleType = 0;	
	}
	return 0;
}
int parkingLookup(char licencePlateDB[][10], char licencePlate[], int vehicleType) {
   int numberOfVehiclesInDB = 200;
   if (vehicleType == 2) {
   	numberOfVehiclesInDB = 40;
   }
   int entryIndexInDB = -1;
   for (int y = 0; y <numberOfVehiclesInDB; y++) {
   	int result = strcmp(licencePlateDB[y], LicencePlate);
   	if (result ==0) {
   		entryIndexInDB = y;
   		break;
	   }
   }
   return entryIndexDB
}
int parkingLookupFreeIndex(char licencePlateDB[][10]) {
	return parkingLookup(licencePlateDB, "0", 1);
}    	