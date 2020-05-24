//
// Created by oruel on 23.05.2020.
//

#ifndef OOS_LB_MUTEX_H
#define OOS_LB_MUTEX_H

#include <pthread.h>
#include <sys/types.h>


class Mutex {
    pthread_mutex_t mutex;
public:
    Mutex() {
        pthread_mutex_init(&mutex, NULL);
    }

    void lock(){
        pthread_mutex_lock(&mutex);
    }
    void unlock(){
        pthread_mutex_unlock(&mutex);
    }
};


#endif //OOS_LB_MUTEX_H
