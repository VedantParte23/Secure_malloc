# Secure Malloc
This is a small memory leak traceker where you write your program in **main.c** file and other supporting files will provide this features. 
---
## Links
Download Binary:  https://github.com/VedantParte23/Secure_malloc/releases/download/v1/mal

Video refrence: https://github.com/user-attachments/assets/53c8c7b5-3225-4f86-ba40-897071ea2e89

---
## How to run

if binary downloaded(linux)

```bash
chmod +x mal
./mal 1
```

or for program just compile and run

```bash
 gcc main.c malloc.c debug.c -o mal

 ./mal 1
```
pass one if you want information about your system

---
## Structure

```id="securemalloc-tree"
 secure-malloc
├──  .vscode/                
├──  .gitignore             
├──  README.md              

├──  main.c                 

├──  malloc.c               
├──  malloc.h              

├──  debug.c               
├──  debug.h                
```
Here you have to write your program in main. By Preprocessing we have changes malloc and free function with custom malloc that is tracks memory throguh link list and removes it on free. 

---
### Licence MIT: Do what you want.

