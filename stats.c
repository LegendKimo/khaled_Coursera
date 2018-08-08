/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void print_array(unsigned char*  , unsigned int);
void sort_array(unsigned char*, unsigned int  );
unsigned char find_median(unsigned char*, unsigned int   );
unsigned char find_mean(unsigned char *, unsigned int  );
unsigned char find_maximum(unsigned char *ptr, unsigned int x );
unsigned char find_minimum(unsigned char *ptr, unsigned int x ) ;
void print_statistics(unsigned char ,unsigned char ,unsigned char , unsigned char );

void main() {
unsigned int num ;
unsigned char mean_value ;
unsigned char max_value ;
unsigned char min_value ;
unsigned char median_value ;
unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
printf ("Please give me the length of array \n");
scanf("%d",&num);
print_array(test,num);
sort_array(test,num);
median_value = find_median(test,num);

mean_value = find_mean(test, num);

max_value = find_maximum(test, num);

min_value = find_minimum(test, num);
print_statistics(median_value ,mean_value ,max_value ,min_value );


}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char median_value ,unsigned char mean_value ,unsigned char max_value , unsigned char min_value  ){
printf ("the median value of given length of array is %d \n",median_value);
printf ("the mean value of given length of array is %d \n",mean_value);
printf ("the max value of given length of array is %d \n",max_value);
printf ("the min value of given length of array is %d \n",min_value);
}

void print_array(unsigned char *ptr , unsigned int x){
printf("the array elements with size %d  : ",x ) ;
for(int i = 0 ; i<x ; i++){
printf ("%d  ",ptr[i]);
}
printf("\n");

}
void sort_array(unsigned char *ptr, unsigned int x) {
int temp =0;
unsigned int iteration = x-1 ;
for(int i = 0 ; i<iteration ; i++){
for(int u =0 ; u<iteration-i ;u++){
if (ptr[u]<ptr[u+1]){
 temp =ptr[u+1];
ptr[u+1]=ptr[u];
ptr[u]=temp;
}
}
}
printf("the array elements after sorting : " ) ;
for(int i = 0 ; i<x; i++){
printf ("%d  ",ptr[i]);
}
printf("\n");
}

unsigned char find_median(unsigned char *ptr, unsigned int x ){
unsigned int sum = 0;
int temp =0;
unsigned int iteration = x-1 ;
for(int i = 0 ; i<iteration ; i++){
for(int u =0 ; u<iteration-i ;u++){
if (ptr[u]>ptr[u+1]){
temp =ptr[u+1];
ptr[u+1]=ptr[u];
ptr[u]=temp;
}
}
}
if(x%2!=0) return ptr[((x-1)/2)];
else return (ptr[(x/2)-1]+ptr[(x/2)])/2 ;

}
unsigned char find_mean(unsigned char *ptr, unsigned int x ){
int sum =0 ; 
unsigned char mean = 0 ; 
for (int i=0 ; i<x ;i++){
sum+=ptr[i];
}
mean = sum/x ; 
return mean  ;
} 
unsigned char find_maximum(unsigned char *ptr, unsigned int x ){
int temp =0;
unsigned int iteration = x-1 ;
for(int i = 0 ; i<iteration ; i++){
for(int u =0 ; u<iteration-i ;u++){
if (ptr[u]<ptr[u+1]){
 temp =ptr[u+1];
ptr[u+1]=ptr[u];
ptr[u]=temp;
}
}
}
return ptr[0] ;
} 
unsigned char find_minimum(unsigned char *ptr, unsigned int x ){
int temp =0;
unsigned int iteration = x-1 ;
for(int i = 0 ; i<iteration ; i++){
for(int u =0 ; u<iteration-i ;u++){
if (ptr[u]>ptr[u+1]){
temp =ptr[u+1];
	ptr[u+1]=ptr[u];
	ptr[u]=temp;
	}
}
}
return ptr[0] ;
} 










