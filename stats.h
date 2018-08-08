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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
 
/**
 * @brief this function prints the content of the array
 *
 * the function takes two inputs one of them is the length of the array and 
 * the other input (unsigned char pointer) which is assigned to the address of the array 
 * and with using printf and for loop we can print the content of the array with given length.
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return Void type .
 */
void print_array(unsigned char*  , unsigned int);

/**
 * @brief this function sorts the elements of the array in descending order.
 *
 * the function sorts the elements of the array with given length so it takes two arguments 
 * and after that it sorts the elements in descending order. 
 *
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return Void type .
 */
void sort_array(unsigned char*, unsigned int  );

/**
 * @brief this function gets the median of the array with given length.
 *
 * this function takes two inputs one of them is the unsigned char pointer 
 * which is assigned to the array and the other input is the given length of the array 
 * and the output of the function is the median value of the array.
 *
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return unsigned char which represents  the median value .
 */
unsigned char find_median(unsigned char*, unsigned int   );

/**
 * @brief this function gets the mean of the array with given length.
 *
 * this function takes two inputs one of them is the unsigned char pointer 
 * which is assigned to the array and the other input is the given length of the array 
 * and the output of the function is the mean value of the array.
 *
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return unsigned char which represents  the median value .
 */
unsigned char find_mean(unsigned char *, unsigned int  );

/**
 * @brief this function gets the maximum value of the array with given length.
 *
 * this function takes two inputs one of them is the unsigned char pointer 
 * which is assigned to the array and the other input is the given length of the array 
 * and the output of the function is the maximum value of the array.
 *
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return unsigned char which represents  the maximum value .
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int x );

/**
 * @brief this function gets the minimum value of the array with given length.
 *
 * this function takes two inputs one of them is the unsigned char pointer 
 * which is assigned to the array and the other input is the given length of the array 
 * and the output of the function is the minimum value of the array.
 *
 * @param unsigned char pointer which  is assigned to the address of the array. 
 * @param unsigned int which represents the length of the array.
 *
 * @return unsigned char which represents  the minimum value .
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int x ) ;

/**
 * @brief this function prints the statistics of the array with given length.
 *
 * this function takes the arguments of the outputs of the previous functions 
 * and prints the outputs 
 * which is the maximum ,minimum , mean and    median values . 
 *
 * @param unsigned char  which  is assigned to the output of the function maximum. 
 * @param unsigned char  which  is assigned to the output of the function minimum. 
 * @param unsigned char  which  is assigned to the output of the function mean. 
 * @param unsigned char  which  is assigned to the output of the function median. 
 * @param unsigned int which represents the length of the array.
 *
 * @return  void type.
 */
void print_statistics(unsigned char ,unsigned char ,unsigned char , unsigned char );



#endif /* __STATS_H__ */
