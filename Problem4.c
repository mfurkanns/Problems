/*	There is a tribe.In this tribe womens have to give birth boy.They can give birth most 3 childs.
	After giving birth boy,they cannot give birth another.What is the distribution of boys and girls ?	*/

#include <stdio.h>
#include <time.h>


int main(){
	
	srand(time(NULL));
	
	int i,j,k,n,boy=0,girl=0,birth;
		
	for(i=0;i<100000;i++){			// lets say there are 100000 womens
		birth=0;					
		for(j=0;j<3;j++){
			
			birth=rand()%2;			// lets say boy=1 , girl=0
			if(birth==0){			// if it is a girl
				girl++;				// increase girl number
			}
			else{					// if it is a boy
				boy++;				// increase boy number
			}		
			
		}		
		
	}
	printf("girl = %d\n",girl);
	printf("boy = %d",boy);
	
	
	
	// distribution of the girls and boys is almost equal
	// because probability of birth girl equals probability of birth boy - law of nature :)
	
	return 0;
}
