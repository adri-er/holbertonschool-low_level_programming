# Hash Tables

With this project I had my first approach to hash functions, what are they, how to implement them and the appropiate situations to use them. In this case the hash function was implemented using the djb2
algorithm, structs for nodes and linked lists for collisions. In the next table can be found the files in the repo and a description.

| File name      | Description |
| ----------- | ----------- |
| [0-hash_table_create.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/0-hash_table_create.c) | Creates a hash table. |
| [1-djb2.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/1-djb2.c) | Hash function implementing the djb2 algorithm. |
| [2-key_index.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/2-key_index.c) | Gives the index of a key. |
| [3-hash_table_set.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/3-hash_table_set.c) | Adds an element to the hash table. |
| [4-hash_table_get.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/4-hash_table_get.c) | Retrieves a value associated with a key. |
| [5-hash_table_print.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/5-hash_table_print.c) | Prints a hash table following a python dictionary syntax. |
| [6-hash_table_delete.c](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x1A-hash_tables/6-hash_table_delete.c) | Deletes a hash table. |

## Usage ⚙️

For correct compilation:
```
gcc -Wall -Werror -Wextra -pedantic --std=c89
```

## Built with 🛠️

_The whole repository based on low level programming phase of Holberton School foundations is constructed in C and tested in `Ubuntu 14.06.6 LTS`._

## Authors ✒️

* **Adriana Echeverri** - [adri-er](https://github.com/adri-er)

This project was developed following the schedule of the foundations program in Holberton.
