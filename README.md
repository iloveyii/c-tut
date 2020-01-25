C Tutorial
=====================================

In this repo we are practicing C. We will cover all the important topics.

## Installations
  * Clone the repo `https://github.com/iloveyii/c-tut/`.
  * Run the script as 
```c
   gcc pointers.c && ./a.out
``` 


## Arrays

## Pointers 
  * To understand the concept of pointers better let say that there are two types of buckets that hold any value in C.
  * The first type of bucket is saving any data type in C.
  * The second type is a bucket that holds address of a memory location.
 ```c
    int x = 123; // bucket loc is 802
    int * ptr = &x; // bucket loc is 806
```

  * In the above code snippet x is simply an integer variable (bucket) holding value 123.
  * `*ptr` is a variable (bucket) holding the address`(*)` of a variable of data type integer (int).
  * This can be visualized in the figure below.
  
  ![pointers](https://github.com/iloveyii/c-tut/blob/master/images/pointers-a-ptr.png)
  
  * The important point is that each bucket (location) in the figure above has address (as it is RAM)
  * The bucket (memory location) where x is stored has address `0802` and ptr is pointing to it.
  * This location can be accessed by two ways, using `x` or pointer `ptr` which is equal to `&x`
  * At the same time we can save the address of (bucket) ptr as well like `ìnt **ptr2`
  
  * To access the content in bucket where ptr is pointing to use content operator `*ptr`
  * To access the content in bucket where ptr2 is pointing to use content operator `*ptr2`
  * To access the content where ptr2 is pointing, and then where that value (address) is pointing to `**ptr2`, this is also called double indirection.
  * As we said in the start of this section that there are two types of buckets, hence if we try to save address of memory location we need to use address operator `&` and to declare such variable its must have star like `int* ptr`

## Array pointer
Array is a special type of data structure in C.
```c
    // Declare and initialize array
    int A[3] = {11,22,33};
    // This is a pointer to the array
    int * ptr = &A[0]; // or simply A
```
  * It saves several values(of same data type) in adjacent locations like the shape of a ladder
  * It implements Iterative interface which means its elements can be accessed using A[i] notation
  * `A` is a pointer in itself and we can add increments to it to get values at different indices
  * To get address of index A[i] use address of operator like `&A[i]`
  
  * First element of A is  `A[0]`
  * First element of A where ptr is pointing to is `*ptr`
  
  * Second element of A is ` A[1]`
  * Second element of A is ` *(ptr + 1) `


## How to work with Makefile


## Using templates in C
 A template is like a dynamic data type that can accept any type of data that you pass at run time.
 It can be declared as :
```c
template <typename T>
```

Now you can declare any variable of type T.
```c
T greater(T a, T b) {
    return a > b ? a : b;
}
```

You can pass any data type to the above function.
```c
greater(7,3) 
greater(7.1,30.2)
```

## Linked lists in C
A linked list is chain like structure in which the previous one points to the next one. It is usually created by 
using struct in C containg two elements i.e value and next pointer. The value contains any desired value whereas
the next points to the next node. The *head is used to point to the head of the linked list.
