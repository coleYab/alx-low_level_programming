# 0x1A. C - Hash Table

## Objectives

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Data Structures To Use

```c

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tasks

### >>> ht = {}

Write a function that creates a hash table.

- Prototype: hash_table_t *hash_table_create(unsigned long int size);
- where size is the size of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return NULL

### djb2

Write a hash function implementing the djb2 algorithm.

- Prototype: unsigned long int hash_djb2(const unsigned char *str);

### key -> index

Write a function that gives you the index of a key.

- Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
- where key is the key and size is the size of the array of the hash table
- This function should use the hash_djb2 function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table
- You will have to use this hash function for all the next tasks

### >>>ht['betty'] = 'cool'

Write a function that adds an element to the hash table.

- Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
- Where ht is the hash table you want to add or update the key/value to key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
- Returns: 1 if it succeeded, 0 otherwise
- In case of collision, add the new node at the beginning of the list

### >>> ht['betty']

Write a function that retrieves a value associated with a key.

- Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
- where ht is the hash table you want to look into and key is the key you are looking for
- Returns the value associated with the element, or NULL if key couldn’t be found

### print(ht)

Write a function that prints a hash table.

- Prototype: void hash_table_print(const hash_table_t *ht);
- where ht is the hash table
- You should print the key/value in the order that they appear in the array of hash table
- Order: array, list
- Format: see example
- If ht is NULL, don’t print anything

### >>> del ht

Write a function that deletes a hash table.

- Prototype: void hash_table_delete(hash_table_t *ht);
- where ht is the hash table

### $ht['Betty'] = 'Cool'

In PHP, hash tables are ordered. Wait… WAT? How is this even possible?

<img herf="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231221T120058Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9161202bdc620f1b590d044fedb715413baf941d52997fb1ec38da8b66d88518">

Before you continue, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?

For this task, please:

Read PHP Internals Book: HashTable
Use the same hash function
Use these data structures:
