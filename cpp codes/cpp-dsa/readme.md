# readme

This folder contains cpp implementation for Data structures and algorithms.

##### What are data structures?

In computer science, a data structure is a data organisation, management, and storage format that enables access and modification. In simple words, data structure is a way in which data is stored on a computer.

Data structures allows efficient data search and retrieval. It allows us to manage large amount of data such as large databases and indexing services such as hash table.

##### What is abstract data type?

ADTs are entities that are definitions of data and operations but do not have implementation details.
Example: array
abstract/ logical view:

- stores a set of elements of int type
- read elements by position i.e. index
- modify elements by index
- perform sorting

implementation view:

```
int arr[5] = {1,2,3,4,5};
cout<<arr[1];
arr[2] = 10;
```

##### What is an algorithm?

An algorithm is a finite set of instructions that are carried in a specific order to perform a specific task.
Algorithms typically have the following characteristics-

- inputs: 0 or more input values
- outputs: 1 or more than 1 output
- unambiguity: clear and simple instructions
- finiteness: Limited number of instructions
- effectiveness: Each instruction has an impact on the overall process
