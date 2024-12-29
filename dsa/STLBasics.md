# STL (standard template library)
- entities that declared in header files <br />
categories:
1) containers
2) iterators
3) algorithms
4) other:
   - errors and exception handling (e.g. casert)
   - regex
   - i/o formating
   - localization
   - etc.

## Containers
1) sequence
   1) arrays
   2) vectors
   3) dequeue
   4) list
   5) forward_list
2) assosiative
   1) map, unordered_map, multimap, unordered multimap
   2) set, unordered_set, multiset, unordered multiset
3) adaptors
   1) queue
   2) priority_queue
   3) stack

## Iterators
(provide interface between containers and algorithms, generalization of pointers)
1) input
2) output
3) forward
4) bidirectional
5) random access

## Algorithms
(generic functions that use iterators as parameters)
1) non-modifying
2) modifying
3) partitioning
4) sorting
5) [binary] searching
6) merging
7) set
8) heap
9) extreme value (min, max)
10) numeric
11) comparison
12) permutation

### sources:
- https://en.cppreference.com/w/cpp/header
- https://www.dre.vanderbilt.edu/~schmidt/PDF/stl.pdf
- https://freecpp.com/standard-template-library-stl/stl-algorithms/
- books: C++ crash course J. Lospinoso