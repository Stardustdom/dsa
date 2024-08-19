Linked Lists addresses few of the limitations of the arrays. Example:<br>

<ol>
<li>insertion or deletion in case of an array is expEnsive(complex position-based)</li>
<li>as arrays are static structures, they cannot be easily extended or reduced</li>
<li>fixed size</li>
<li>one block allocation</li>
</ol><br>
Linked list---> A LINEAR DYNAMIC DATA STRUCTURE.<br>
<ol>
<li>consists of nodes</li>
<li>the nodes consist of the data and the reference(POINTERS) to the next node</li>
<li>th last node(THE FINAL ELEMENT) has a reference to null</li>
<li>the head(entry point into a linked list) is not a node but a REFERENCE TO THE FIRST NODE</li>
<li>if the list is empty, the head is a null reference</li>
<li>the size  of the list can change during program execution</li>
<li>it can be made as long as necessary, until memory is depleted</li>
<li>it avoids wastage of memory space but additional memory is required for pointers</li></ol> <br>
NOTE:A null reference, also known as a null pointer, is a reference or pointer that does not point to a valid object or memory location. In other words, it is a reference that has no value or points to nothing.<br>
LINKED LIST IS AN ABSTRACT DATA TYPE<br>
ARRAYS--->simple and easy to use and takes constant time for accessing elements based on indices as it is random access O(1)(takes one multiplication and addition, both of which take a constant time)<br>
DYNAMIC ARRAYS--->random access, variable-size list data structure that allows elements to be added or removed.<br>
LINKED LIST--->takes O(n) to access the elements<br>
----COMPARATIVE STUDY----<br>
Contiguous memory allocation: Dynamic arrays store elements in contiguous blocks of memory, which means that each element is stored next to the previous one in memory.<br>
Fixed-size elements: Dynamic arrays typically store elements of a fixed size, which makes it easy to calculate the memory address of each element.<br>
Random access: Dynamic arrays allow for random access to elements, meaning that you can access any element directly using its index.<br>
Cache-friendly: Dynamic arrays are cache-friendly, meaning that the CPU can efficiently access elements in the array because they are stored in contiguous memory locations.<br>
Resizing: Dynamic arrays can be resized by allocating a new block of memory and copying the elements from the old block to the new block.<br>
