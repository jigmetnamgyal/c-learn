#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

void readRoomCapacities(int** , const int);
void printRoomCapacities(const int**, const int);
void drawRoomCapacities(const int**, const int);

int main()
{
	int  **rooms = NULL;
	int n_floors, n_rooms;

//	printf("Before malloc rooms is pointing at %p\n\n", rooms);

	printf("How many floors in the building? ");
	scanf("%d", &n_floors); // Enter 4
	printf("\n");

	/* Dynamically allocate array of floors */
	rooms = (int**) malloc(n_floors *sizeof(int*));

	if (rooms == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
		return EXIT_FAILURE;
	}

//	printf("After malloc rooms is pointing at address: %p\n\n", rooms);

	/* Dynamically allocate array of classrooms PER EACH FLOOR */
	for (int i = 0; i < n_floors; i++)
	{
		printf("How many classrooms on floor #%d? ", i);
		scanf("%d", &n_rooms); // Enter 3, 2 , 4, 5
		*(rooms+i) = (int*)malloc((1+n_rooms) * sizeof(int)); // *(rooms+i)  is the same as rooms[i] 

		if ( *(rooms + i) == NULL)
		{
			fprintf(stderr, "Error - unable to allocate required memory\n");
			return EXIT_FAILURE;
		}

//		printf("After malloc *(rooms+%d) is pointing at address: %p\n\n", i, *(rooms+i) );

		rooms[i][0] = n_rooms; // we must remember the number of rooms per floor for future calls!
	}

	printf("\n");
	
	// read from user:
	readRoomCapacities(rooms, n_floors);

	// print rooms:
	printRoomCapacities(rooms, n_floors);

	// draw rooms pretty:
	drawRoomCapacities(rooms, n_floors);

	/* release memory*/
	for (int i = 0; i < n_floors; i++)
		free(*(rooms + i));
	free(rooms);


	return 0;
}

/* Get classroom capacities (per floor) from the user */
void readRoomCapacities(int** rooms, const int N_FLOORS)
{
	int room_cap;

	for (int i = 0; i < N_FLOORS; i++)
	{
		printf("Floor #%d [total %d classrooms]\n", i, rooms[i][0]);

		for (int j = 1; j <= rooms[i][0]; j++)
		{
			printf("Enter the capacity of classroom #%d: ", j);
			scanf("%d", &room_cap); // Enter different numbers to understand the output
			rooms[i][j] = room_cap; // same as *(*(rooms+i)+j) = room_cap
		}
		printf("\n");
	}

	printf("\n");
}

/* Show classroom capacities per floor */
void printRoomCapacities(const int** ROOMS, const int N_FLOORS)
{
	for (int i = 0; i < N_FLOORS; i++)
	{
		printf("Floor #%d [total %d classrooms]\n", i, ROOMS[i][0]);

		for (int j = 1; j <= ROOMS[i][0]; j++)
			printf("Capacity of classroom #%d: %d\n", j, ROOMS[i][j]);
		printf("\n");
	}

	printf("\n");
}


/* Draw classroom capacities per floor in a pretty way */
void drawRoomCapacities(const int** ROOMS, const int N_FLOORS)
{
	for (int i = N_FLOORS-1; i >= 0; i--)
	{
		// printf("Floor #%d [total %d classrooms]\n", i, ROOMS[i][0]);

		for (int j = 1; j <= ROOMS[i][0] * 6; j++)
			printf("-");
		printf("\n");

		for (int j = 1; j <= ROOMS[i][0]; j++)
		{
			printf("[ %2d ]", ROOMS[i][j]);
		}
		printf("\n");

		for (int j = 1; j <= ROOMS[i][0] * 6; j++)
			printf("-");
		printf("\n");
	}

	printf("\n");
}
