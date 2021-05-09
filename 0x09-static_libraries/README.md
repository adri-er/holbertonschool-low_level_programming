# Static libraries

With this project I had a closer approach to static libraries, what are they, how does it work, how to create one and use it. As well, for this topic a blog was written, for more information about static libraries you can [access it here](https://2903.medium.com/overview-of-libraries-in-c-3418864f8860). In the next table can be found the files in the repo and a description.

| File name      | Description |
| ----------- | ----------- |
| [libholberton.a](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x09-static_libraries/libholberton.a) | Static library containing the functions listed below. |
| [holberton.h](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x09-static_libraries/holberton.h) | Header file with the prototypes of the functions. |
| [create_static_lib.sh](https://github.com/adri-er/holbertonschool-low_level_programming/blob/main/0x09-static_libraries/create_static_lib.sh) | Script that creates a static library called liball.a from all the .c files that are in the current directory. |

Functions in the static library:

* int _putchar(char c);
* int _islower(int c);
* int _isalpha(int c);
* int _abs(int n);
* int _isupper(int c);
* int _isdigit(int c);
* int _strlen(char *s);
* void _puts(char *s);
* char *_strcpy(char *dest, char *src);
* int _atoi(char *s);
* char *_strcat(char *dest, char *src);
* char *_strncat(char *dest, char *src, int n);
* char *_strncpy(char *dest, char *src, int n);
* int _strcmp(char *s1, char *s2);
* char *_memset(char *s, char b, unsigned int n);
* char *_memcpy(char *dest, char *src, unsigned int n);
* char *_strchr(char *s, char c);
* unsigned int _strspn(char *s, char *accept);
* char *_strpbrk(char *s, char *accept);
* char *_strstr(char *haystack, char *needle);

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


Contains two scripts: 

0 - Create the static library named libholberton.a.

1 - Creates a static library called liball.a from all the .c files that are in the current directory.
