/*
* CISC220-31L LAB 3
*
* Debra Yarrington
*
* Created on: Oct 3th, 2018
*
* TA: Moumita Bhattacharya
*
* Authors: omaromar@udel.edu Omar Ahmad
*  		tamimoz@udel.edu  Ahmad Tamimi
*
* PAmain.cpp
*/


#include <iostream>
#include <stdlib.h>
#include "Book.hpp"

using namespace std;

void main(){

}

void printGreatestBook(Book arr[], int length){ // putting length in the parameters. Will be 5 for testing
	double tmp1 = 0;
	int position;
	for(int i = 0; i <length-1; i++){
		if(arr[i] > arr[i+1] && tmp > arr[i].avgRating()){
			tmp = arr[i].avgRating();
			postion = i;
		}
		else if(arr[i] < arr[i+1] && tmp > arr[i+1].avgRating()){
			tmp = arr[i+1].avgRating();
			postion = i+1;
		}
		else{
			tmp = tmp;
			position = position;
		}
	}
	arr[position].bookInfo;
}
