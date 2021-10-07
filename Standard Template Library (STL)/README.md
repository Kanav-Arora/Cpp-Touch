# Standard Template Library

Library of Generic Classes and Functions

Components of STL:
- Containers

    Object which stores data. For eg. Vector

    - Sequence

        Stored data in linear fashion

        - Vector

            - Fast random access
            - Insertion/Deletion is slow
            - Insertion at the end fast 
            
            <br>

        - List

            - Slow random access because memory is not contiguous
            - Insertion/Deletion is fast
            - Insertion at the end fast 

            <br>

        - Dequeue



        <br>

    - Associative
        
        Direct access

        All operations fast except Random Access

        - Map/Multimap
        - Set/Multiset

        <br>

    - Derived

        Real world modelling

        Operations speed depends on real world model and data structure

        - Stack
        - Queue
        - Priority Queue

<br>

- Algorithms
    
    For eg. Sorting, Searching

    They use template functions

    <br>

- Iterators

    Object which points to an element in a container

    Handled just like pointers

    Connects algo with containers
