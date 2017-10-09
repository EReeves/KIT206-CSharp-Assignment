#include <stdio.h>
#include "graph.h"

void main() {

	int **dist; // VxV ints to   store shortest path distances
	int **next; // VxV ints to store shortest path data
	int *cent;  // V ints to store the centrality score for each vertex

	Graph G;

	//Used for storing bounds when reading input.
	int no_vertices;
	int no_edges; //Reused per vertex

	const FILE_NAME = "input1.txt";
	FILE *filePtr;

	filePtr = fopen(FILE_NAME, "r");
	fscanf(filePtr, "%d", &no_vertices); //First line is total number of vertices.
	int lines_to_read = no_vertices * 2;
	printf("%d\n", no_vertices);

	for (int line = 0; line < lines_to_read; line++) {

		fscanf(filePtr, "%d", &no_edges); //Get edge count to read on the next line.
		printf("%d\n", no_edges);

		//Read edges
		for (int edge = 0; edge < no_edges; edge++) {
			int num;
			fscanf(filePtr, "%d", &num);
			printf("%d", num);
		}
		printf("\n");
	}

	getchar();
	getchar();
}

void path_reconstruction() {

}

void path() {

}