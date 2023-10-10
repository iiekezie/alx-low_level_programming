## 0x0E. C - Structures, typedef ##

Project done during **Full Stack Software Engineering studies** at **ALX LOW LEVEL PROGRAMMING School**. It aims to learn about C - Structures, typedef Project in **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS

### NOTE All the files within this Folder are made executable ###

## Files
All of the following files are scripts and programs written in C:

| Filename | Description | Prototype  |
| -------- | ----------- | ---------- |
| `0. Poppy` | Define a new type struct dog with the following elements(name, type = char * age, type = float owner, type = char *). | |
| `1. A dog is the only thing on earth that loves you more than you love yourself` |Write a function that initialize a variable of type struct dog | void print_dog(struct dog *d); |
| `2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad` | Write a function that prints a struct dog. | void print_dog(struct dog *d); |
| `3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read` |  Define a new type dog_t as a new name for the type struct dog.| |
| `4. A door is what a dog is perpetually on the wrong side of` | Write a function that creates a new dog. | dog_t *new_dog(char *name, float age, char *owner); |
| `5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg` | Write a function that frees dogs. | void free_dog(dog_t *d); |
