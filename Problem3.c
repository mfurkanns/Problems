/* There is a game which is played by two players. Players have money and money increases/decreases according to the coin.
If it comes heads p1 have to give 1 dollar to p2 otherwise p2 have to give 1 dollar to p1.Game ends when someone has 0 dollar.
FIND THE PROBABILITY OF P1'S AND P2'S WINNINGS. */

#include <stdio.h>
#include <time.h>


int main(){
	
	srand(time(NULL));
	
	int i,j,p1_money=10,p2_money=10,coin,a,b;
	double p1_win=0,p2_win=0;
	
	printf("Enter the 1.players money = ");
	scanf("%d",&a);
	printf("Enter the 2.players money = ");
	scanf("%d",&b);
	
	for(i=0;i<1000;i++){						            // lets play 1000 times
		p1_money=a;
		p2_money=b;			
		while((p1_money!=0)&&(p2_money!=0)){	    // moneys have not to be zero
			coin=rand()%2;						              // throw the coin
			if(coin==0){						                // if it comes heads 
				p1_money--;					                	// decrease p1's money
				p2_money++;					                	// increase p2's money
			}
			else{								                    // if it comes tails
				p1_money++;					                 	// increase p1's money
				p2_money--;					                	// decrease p2's money
			}		
		}
		if(p1_money==0){					              	// if p2 wins
			p2_win++;						                  	// increase p2_win
		}
		else{								                    	// if p1 wins
			p1_win++;						                  	// increase p1_win
		}
	}
	
	printf("p1 win rate = %lf\n",p1_win/1000);
	printf("p2 win rate = %lf\n",p2_win/1000);
	
	
	
	return 0;
}


// the probaility of winnig 1.player is  p1_money/(p1_money + p2_money)
// the probaility of winnig 2.player is  p2_money/(p1_money + p2_money)
// p1_money/(p1_money + p2_money) + p2_money/(p1_money + p2_money) = (p1_money + p2_money)/(p1_money + p2_money) = 1
