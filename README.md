# shell

A work-in-progress POSIX-compliant shell written in C.

## Features

- **Builtins**: `echo`, `exit`, `type`, `pwd`
- **External programs**: resolves executables from `PATH` and forks to run them
- **Command parsing**: tokenizes input with argument splitting

## Building

```sh
cc src/main.c -o shell
```

## Usage

```sh
./shell
$ echo hello world
$ pwd
$ type ls
$ ls -la
$ exit
```
