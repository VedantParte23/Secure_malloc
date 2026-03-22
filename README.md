# Sentinel Malloc: Secure Memory Forensics Tool

**Sentinel Malloc** is a small memory tracher and also it provies envirmonet repost by usig build in macros.

##  Features
- **Allocation Tracking:** Records the size, memory address, file name, and line number of every `malloc`.
- **Leak Detection:** Automatically generates a report of all unfreed memory at the end of execution.
- **System Forensics:** Provides a detailed "Environment Report" showing the C standard, compiler type, and OS being used.
- **Verbosity Control:** Supports command-line arguments to toggle debug information.

##  Project Structure
- `main.c`: The entry point and user logic.
- `malloc.c`: The core "Secure Malloc" implementation using Linked Lists.
- `debug.c`: System-level environment checks and reporting logic.


##  How to Run (Linux / Replit)

### 1. Compilation
Use GCC to compile all source files together:
```bash
gcc main.c debug.c malloc.c -o mal && ./mal


[new_secure_malloc_vid.webm](https://github.com/user-attachments/assets/53c8c7b5-3225-4f86-ba40-897071ea2e89)

