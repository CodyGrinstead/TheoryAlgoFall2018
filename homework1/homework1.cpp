//Cody Grinstead
//Homework 1
//Theory of Algo

/*
Tim is an absolutely obsessive soda drinker, he simply cannot get enough. Most annoyingly though, he almost never has any money, so his only obvious legal way to obtain more soda is to take the money he gets when he recycles empty soda bottles to buy new ones. In addition to the empty bottles resulting from his own consumption he sometimes find empty bottles in the street. One day he was extra thirsty, so he actually drank sodas until he couldn’t afford a new one.

Input
Three non-negative integers e,f,c, where e<1000 equals the number of empty soda bottles in Tim’s possession at the start of the day, f<1000 the number of empty soda bottles found during the day, and 2≤c<2000 the number of empty bottles required to buy a new soda.

Output
How many sodas did Tim drink on his extra thirsty day?



*/
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int sodadrinked(int e,int f, int c, int &ops)
{
	int total;
	int bought=(e+f)/c+(e+f)%c; //5
	total=(e+f)/c; //3
	//ops=8;
	while(bought >=c) //6
	{
		total+=bought/c;
		bought= bought/c +bought%c;
		//ops+=6;
	}


	return total;
}





int main(int argc, char *argv[]){
	int numempty, numfound, costper;
	int e, f, c;
	cin >> numempty >> numfound >>costper;
	int ops=0;
	

	cout<<sodadrinked(numempty,numfound,costper,ops)<<endl;
	sodadrinked(numempty,numfound,costper,ops);
	//cout<< "ops count:" << ops;
	return 0;

}
