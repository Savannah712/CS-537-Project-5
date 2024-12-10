This project builds on the previous implementation of the xv6 operating system. It is mean to address priority inversion. The main objectives are to implement a mutex for thread synchronization as well as functions for initialization, acquisition, and release. Additionally, implementing a system call to adjust thread scheduling priorities dynamically and implementing a priority inheritance feature that allows the scheduler to temporarily elevate the priority of lock holders to match the highest waiting thread

Names: Jo Alshwaish, Savannah Ahnen

Implementation passes all tests except 10 and 11

Files Altered:
Makefile
grade.c
mutex.h
proc.c
proc.h
sleeplockuser.c
syscall.c
syscall.h
sysproc.c
ulib.c
user.h
usys.S
