//
// Created by oruel on 23.05.2020.
//

#ifndef OOS_LB_THREAD_H
#define OOS_LB_THREAD_H


#include <sys/types.h>
#include <cstdio>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
#include <cstring>
#include <iostream>

class Thread {
private:
    void *(*run)(void *);

    pthread_t a_thread;
    void *thread_result;
    void *thread_argument;
public:
    Thread( void *threadResult, void *threadArgument,void *(*run)(void *))
           : thread_result(threadResult), thread_argument(threadArgument),run(run) {}

    void start() {
        int res;
        res = pthread_create(&a_thread, NULL, run, thread_argument);
        if (res != 0) {
            perror("Thread creation failed");
            exit(EXIT_FAILURE);
        }
    }



    void join() {
        int res = pthread_join(a_thread, &thread_result);
        if (res != 0) {
            perror("Thread join-failed");
            exit(EXIT_FAILURE);
        }
    }

    pthread_t getAThread() const {
        return a_thread;
    }
};


#endif //OOS_LB_THREAD_H
