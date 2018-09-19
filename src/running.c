
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <math.h>

int T, M, N, K;
#define MAX_NUM 55
int aField[MAX_NUM][MAX_NUM];

main()
{
	scanf("%d", &T);
	for( int t = 0; t < T; t ++ ) {
		scanf("%d%d%d", &M, &N , &K);//The array element corresponding to the upper left corner of the peanut ground is aField[1][1], and the ordinate of the road is 0.
		for( int m = 1; m <= M; m ++ )
			for( int n = 1 ; n <= N; n ++ )
				scanf("%d", & aField[m][n]);
		int nTotalPeanuts = 0; //Total number of peanuts picked
		int nTotalTime = 0; //Time that has been spent
		int nCuri = 0, nCurj; //Current position coordinates,nCuri stands for the ordinate and starts on the road, so the initial value is 0.
		while( nTotalTime < K ) { //If there is still time
			int nMax = 0, nMaxi, nMaxj; //The maximum number of peanuts and their location The following cycle looks for the next largest peanut number and its location
			for( int i = 1; i <= M; i ++ ) {
				for( int j = 1; j <= N ;j ++) {
					if( nMax < aField[i][j]) {
						nMax = aField[i][j];
						nMaxi = i;
						nMaxj = j;
					}
				}
			}
			if( nMax == 0 ) //There are no peanuts in the field.
				break;
			if( nCuri == 0)
				nCurj = nMaxj; //If the current position is on the road, then go to the abscissa nMaxj and enter the peanut ground.
			//The next line shows if the remaining time is enough to go to (nMaxi, nMaxj), pick up the peanuts, and return to the road.
			if( nTotalTime + nMaxi + 1 + abs(nMaxi-nCuri) + abs(nMaxj-nCurj) <= K ) {
				//Next line plus time to go to the new location, and picking peanuts
				nTotalTime += 1 + abs(nMaxi-nCuri) + abs(nMaxj-nCurj);
				nCuri = nMaxi; nCurj = nMaxj; //Go to a new location
				nTotalPeanuts += aField[nMaxi][nMaxj];
				aField[nMaxi][nMaxj] = 0; //Picking up peanuts
			}
			else
				break;
		}
		printf("%d\n", nTotalPeanuts);
	}
}
