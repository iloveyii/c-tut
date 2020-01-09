C Tutorial
=====================================

In this repo we are practicing C. We will cover all the important topics.

## Installations
  * Clone the repo `https://github.com/iloveyii/c-tut/`.
  * Run the script as 
```bash
   gcc pointers.c && ./a.out
``` 


## Arrays

## Pointers 
  * To understand the concept of pointers better let say that there are two types of buckets that hold any value in C.
  * The first type of bucket is saving any data type in C.
  * The second type is a bucket that holds address of a memory location.
 ```bash
    int x = 123;
    int * ptr = &x;
```

  * In the above code snippet x is simply an integer variable (bucket) holding value 123.
  * *ptr is a variable (bucket) holding the address(*) of a variable of data type integer (int).
  * This can be visualized in the figure below.
  
  ![pointers](https://github.com/iloveyii/c-tut/blob/master/images/pointers-a-ptr.png)
  
  * The important point is that each bucket (location) in the figure above has address (as it is RAM)
  * The bucket (memory location) where x is stored has address `0802` and ptr is point it.
  * This location can be accessed by two ways, using `x` or pointer `ptr` which is equal to `&x`
## Array pointer


## How to work with Makefile


## Using templates in C
