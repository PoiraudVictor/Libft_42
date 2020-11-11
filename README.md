# Libft_42

Libft is the second project of 42 cursus : bulding a library with basic utility C functions.

This library is used within various projects throughout the cursus.

## Installation 📖

To use the library please clone the repo :

```bash
git clone https://github.com/PoiraudVictor/Libft_42.git
```

Then go inside the repo and call the make all function from the Makefile :

```bash
cd Libft_42
make all
```

## Usage 🎬

You are now two steps away from using my Libft !!

First, include the libft.h file in the .c file so your program can call its functions :

```c
#include "libft.h"
```

Finally, compile your files with the libft.a like so (I use gcc with flags, do it the way you want) :

```bash
gcc -Wextra -Werror -Wall <your-file.s> libft.a
```