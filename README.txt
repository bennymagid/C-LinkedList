Michelle Fernandez
mf2492
LAB 2 


PART 1:

isort.c -- working program
  This program creates an array of random numbers. The size is input by the user and is 
  assumed to be positive. Two copies of the array are made. The first copy
  is sorted in ascending order, and the second copy is sorted in descending
  order.

  The random numbers that are generated can be changed. It is set to range from 1-100
  only for the purpose of generating lists that are easier to read.


VALGRIND OUTPUT:
==27634== Command: ./isort
==27634== 
Enter the size of the array: 10

Original List: 
39 24 90 96 77 83 21 24 91 3 

Ascending List: 
3 21 24 24 39 77 83 90 91 96 

Descending List: 
96 91 90 83 77 39 24 24 21 3 

==27634== 
==27634== HEAP SUMMARY:
==27634==     in use at exit: 0 bytes in 0 blocks
==27634==   total heap usage: 4 allocs, 4 frees, 376 bytes allocated
==27634== 
==27634== All heap blocks were freed -- no leaks are possible
==27634== 
==27634== For counts of detected and suppressed errors, rerun with: -v
==27634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)



PART 2:

twecho.c -- working program 
 This program takes words as command line arguments, and prints each word twice, 
 once as is and once all-capitalized, separated by a space      


VALGRIND OUTPUT:
==21134== Command: ./twecho hello world dude
==21134== 
hello HELLO
world WORLD
dude DUDE
==21134== 
==21134== HEAP SUMMARY:
==21134==     in use at exit: 0 bytes in 0 blocks
==21134==   total heap usage: 5 allocs, 5 frees, 66 bytes allocated
==21134== 
==21134== All heap blocks were freed -- no leaks are possible
==21134== 
==21134== For counts of detected and suppressed errors, rerun with: -v
==21134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)
