# 🛡️ Sentinel Malloc: A Simple Memory Forensics Tool

Hey there! This is a project I built to help track down memory leaks and get a better look at the environment where my C code is running. It's essentially a wrapper for `malloc` and `free` that keeps a running log of everything happening under the hood.

---

### 🚀 Quick Links (For Reviewers)
* **The Binary:** [Download `mal` here](https://github.com/VedantParte23/Secure_malloc/releases/download/v1/mal)  
  *(Use this link for the project submission—it points directly to the compiled executable in the GitHub Release to avoid 404 errors.)*
* **The Demo:** [Watch the video walkthrough](https://github.com/user-attachments/assets/53c8c7b5-3225-4f86-ba40-897071ea2e89)

---

## What does it do?

I wanted a way to see exactly where my memory was going without digging through massive logs. Here’s what it handles:

* **No More Mystery Leaks:** Every time you call `malloc`, it records the exact file and line number. When the program ends, it tells you exactly what you forgot to `free`.
* **System Forensics:** It uses C macros to "sniff out" your setup. It'll tell you if you're on Linux, Windows, or Mac, which compiler you're using (GCC, Clang, etc.), and even which C standard (like C11 or C23) is active.
* **Easy Toggles:** I set it up so you can pass a `1` as an argument if you want the full "Environment Report," or leave it off if you just want the leak report.

## The Setup

* `main.c`: A sample program I wrote to show it in action. It deliberately "leaks" a bit of memory so you can see the tool catch it.
* `malloc.c` / `malloc.h`: This is the heart of the project. It uses a Linked List to keep track of addresses and sizes.
* `debug.c` / `debug.h`: All the logic for checking your OS and Compiler versions.

## How to try it out

### 1. Just run the binary (Linux)
If you've downloaded the `mal` file from the link above, just do this in your terminal:
```bash
chmod +x mal
./mal 1
