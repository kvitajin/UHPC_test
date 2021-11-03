#include "heated_plate.h"

int main(int argc, char* argv[])
{
	int M = 128;
	int N = 512;
	double epsilon = 0.01;
	const char* output_filename = "output.txt";

	//Check args
	if (argc < 2) {
		printf("USAGE:\theatedplate 0 (tiny)\n\theatedplate 1 (large)\n");
		return 0;
	}

	// Read Input
	int type = atoi(argv[1]);
	//tiny
	if (type == 0) {
		M = 128;
		N = 512;
		epsilon = 0.01;
	}
	//large
	if (type == 1) {
		M = 1024;
		N = 2048;
		epsilon = 0.001;
	}

	solve(M, N, epsilon, output_filename);

	return 0;
}