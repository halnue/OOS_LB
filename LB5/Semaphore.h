//
// Created by oruel on 23.05.2020.
//

#ifndef OOS_LB_SEMAPHORE_H
#define OOS_LB_SEMAPHORE_H

#include <semaphore.h>
#include <cstdio>
#include <cstdlib>

class Semaphore {
private:
    sem_t bin_sem;
public:
    Semaphore(int value) {
        int res = sem_init(&bin_sem, 0,value);
        if (res != 0) {
            perror("Thread creation failed");
            exit(EXIT_FAILURE);
        }
    }

    void * acquire(){
        sem_wait(&bin_sem);
    }

    void release(){
        sem_post(&bin_sem);
    }
};


#endif //OOS_LB_SEMAPHORE_H
