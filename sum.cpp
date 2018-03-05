#include "sum.h"

int sum(int begin, int end){
	int sum=0;
	for(int i=begin; i <= end; i++) sum+=i;
	return sum;
}

