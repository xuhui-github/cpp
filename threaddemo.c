#include <threads.h>
#include <stdio.h>

int hello_from_threading(void *arg) {
    printf("Thread about to take a nap...\n");
    thrd_sleep(&(struct timespec) { .tv_sec = 3 }, NULL);
    printf("Woke up from 3 second slumber\n");
    return 42;
}

int main(void) {
    thrd_t thread;
    thrd_create(&thread, hello_from_threading, NULL);
    int res;
    printf("A thread was started\n");
    thrd_join(thread, &res);
    printf("Thread ended, returning %d\n", res);
}
