// Mutex struct definition
#ifndef MUTEX_H
#define MUTEX_H

#include "spinlock.h"
typedef struct {
    int locked; // Indicates if the mutex is locked
    int waiting_threads[64]; // Array to store waiting thread IDs
    int num_waiting_threads; // Number of threads waiting for the lock
    struct spinlock lk; // spinlock protecting this sleep lock
    int holder_pid;
    int holder_nice;
    int prev_nice;
    int lock_number;
} mutex;

#endif /* MUTEX_H */