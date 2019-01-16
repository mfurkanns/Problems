/* You are given a coin and road. You have to reach to 1.step(n=1) of the road.You will start from the beginnig of the road(n=0).
You have to move according to the coin.Throw the coin.If it comes heads you can go next step otherwise you have to go back 1 step.
WHAT IS THE PROBABILITY OF REACHING TO THE 1. STEP OF THE ROAD ? */

#include <stdio.h>
#include <time.h>

int main(){	
		
	srand(time(NULL));
	
	int i,j,current_position=0,n=1,coin;
	double coming=0;
	
	for(i=0;i<1000;i++){  					// lets try 1000 times
		for(j=0;j<10000;j++){				// we can go back in our every movement, it means n = - infinite
			
			coin=rand()%2;				// throw the coin
			if(coin==0){
				current_position++;		// if it comes heads go to the next step
				if(current_position==n){	// did i reach ?
					coming++;							
					current_position=0;	// if i have reached then position have to be zero to reach again to n=1. step
					break;
				}
			}
			else{
				current_position--;   // we don't need to check arrival because we cannot reach with going previous step
			}			
		}
		if(current_position!=n){	// if we didn't reach then position have to be zero to reach again to n=1. step
			current_position=0;
		}
	}
	
	
	printf("%lf",coming/1000);          // probability of coming to the 1.step of the road with 1000 trial
	
	// if we increase trials we get almost 0,99999=1 
	
	
	return 0;
}
