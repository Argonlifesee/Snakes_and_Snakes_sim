#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int gamewon;
int drinks;
int cumulative_drinks;
int current_space;
int i;
/* Returns an integer in the range [0, n).
 *
 * Uses rand(), and so is affected-by/affects the same seed.
 */
srand(time(0));
int dice(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }
	for ( i = 1 ; i < 10000 ; ++i){
	drinks = 0;
	gamewon = 0;
	current_space = 0;
	while(gamewon == 0){
		    if(current_space == 14){
		      	current_space = 4;
			drinks++;
		    }if (current_space == 17) {
		        current_space = 7;
		        drinks++;
		    } else if (current_space == 31) {
		        current_space = 9;
		        drinks++;
		    } else if (current_space == 38) {
		        current_space = 1;
		        drinks++;
		    } else if (current_space == 42) {
		        current_space = 21;
		        drinks++;
		    } else if (current_space == 53) {
		        current_space = 34;
		        drinks++;
		    } else if (current_space == 62) {
		        current_space = 19;
		        drinks++;
		    } else if (current_space == 64) {
		        current_space = 60;
		        drinks++;
		    } else if (current_space == 67) {
		        current_space = 51;
		        drinks++;
		    } else if (current_space == 84) {
		        current_space = 28;
		        drinks++;
		    } else if (current_space == 87) {
		        current_space = 36;
		        drinks++;
		    } else if (current_space == 91) {
		        current_space = 72;
		        drinks++;
		    } else if (current_space == 93) {
		        current_space = 73;
		        drinks++;
		    } else if (current_space == 95) {
		        current_space = 75;
		        drinks++;
		    } else if (current_space == 98) {
		        current_space = 79;
		        drinks++;
		    } else if (current_space == 99) {
		        current_space = 80;
		        drinks++;
		    } else if (current_space == 100) {
		        printf("%d\n", drinks);
		        printf("Game won\n");
			cumulative_drinks = cumulative_drinks + drinks;
			gamewon = 1;
       	    	    } else if (current_space > 100) {
		        current_space = 100 - (current_space - 100);
		    } else {
		        current_space = current_space + dice(1,6);
			printf("%d\n", current_space);
		    }
		}
	}
printf("%d\n", cumulative_drinks / i);
return 0;
}
