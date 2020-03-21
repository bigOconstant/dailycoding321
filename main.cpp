#include <iostream>
#include <math.h>      

//Can't prove mathimatically this works. But it works for every test case i've thrown at it.
//Start at the square root and increment up to n-1;
int smallestSteps(int N,int steps = 0){

  if(N == 1){
    return steps;
  }

  for(int i = sqrt(N); i > 1; --i){
    if( (N % i ) == 0){
      return smallestSteps(std::max(i,N/i),(steps +1));
    }
  }
  return smallestSteps(N-1,steps +1);
}



int main (){
  std::cout<<"smallest:"<<smallestSteps(100)<<std::endl;
  std::cout<<"smallest:"<<smallestSteps(50)<<std::endl;
  std::cout<<"smallest:"<<smallestSteps(64)<<std::endl;
  std::cout<<"smallest:"<<smallestSteps(31)<<std::endl;

  return 0;
}
