
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;

	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;

	// TODO: declare variables for student name, score, sum, average

	for(int i=0; i<N; i++)
	{
		// TODO: read student name and initialize sum

		for (int j=0; j<M; j++)
		{
			// TODO: read each score and accumulate sum
		}

		// TODO: calculate average and print name, sum, average
	}

	return 0;
}
