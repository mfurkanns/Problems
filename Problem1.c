/* You are given a coin and road.You will start from the beginning of the road and you have to reach to n. point of the road(n = ∞).
You will move according to coin. Throw the coin.If it comes heads you can go 1 step otherwise 2. 
WHAT IS THE PROBABILITY OF REACHING TO THE n. POINT ? */



#include <stdio.h>
#include <time.h>


int main (){
  
  srand(time(NULL));
  
  int i,j,n,current_position,coin; 
  double coming=0;                // we didnt reach yet !
  n=10000;                        // n=10000 means infinite
  current_position=0;             // beginning of the road
  
  for(i=0;i<100000;i++){          // lets try 100000 times.
    for(j=0;j<10000;j++){
      coin = rand()%2;            // heads=0 or tails=1
      if(coin==0){                   // if it comes heads
        current_position+=1;
          if(current_position==n){ //did i reach ? 
            coming++; 
            current_position=0;    // if i have reached then position have to be zero to reach again to n. point
          }        
      }
      if(coin==1){                // if it comes tails
        current_position+=2;
          if(current_position==n){  //did i reach ?
            coming++;
            current_position=0;     // if i have reached then position have to be zero to reach again to n. point
          }        
      }
    } 
    if(current_position!=n){        
      current_position=0;           // if i passed n. point then position have to be zero to reach again to n. point
    }    
  }
  
  printf("Probability of reaching = %lf",coming/100000);
  




  return 0 ;
}




// if we increase trials, we get almost 2/3=0,66666..
