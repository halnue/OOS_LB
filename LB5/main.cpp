////
//// Created by oruel on 22.05.2020.
////
////#include <stdio.h>
////#include <unistd.h>
////#include <stdlib.h>
////#include <string.h>
////#include <pthread.h>
//#include <vector>
//#include <iostream>
//#include <semaphore.h>
//#include "Thread.h"
//#include "Mutex.h"
//
//int value = 0;
//const int NUM_OF_THREADS = 100;
//Mutex mutex;
//std::vector<Thread> threads;
//void *fun1(void *arg) {
//    int local;
//    for (int i = 0; i < 5; ++i) {
//        mutex.lock();
//        local = value;
//        local = local + 1;
//        value = local;
//        mutex.unlock();
//    }
//}
//void* minus(void *args) {
//    int local;
//    for (int i = 0; i < 10; ++i) {
//        mutex.lock();
//        local = value;
//        printf("min %d\n", value);
//        local = local - 1;
//        value = local;
//        mutex.unlock();
//    }
//    return NULL;
//}
//
//void* plus(void *args) {
//    int local;
//    for (int i = 0; i < 10; ++i) {
//        mutex.lock();
//    local = value;
//    printf("pls %d\n", value);
//    local = local + 1;
//    value = local;
//    mutex.unlock();
//    }
//
//    return NULL;
//}
//int main() {
//    mutex = Mutex();
//    int i;
//    for (i = 0; i < NUM_OF_THREADS / 2; i++) {
//        threads.push_back(Thread(NULL,NULL,minus));
//        threads.push_back(Thread(NULL,NULL,plus));
//    }
//    for (i = 0; i < NUM_OF_THREADS; i++) {
//        threads[i].start();
//    }
//    for (i = 0; i < NUM_OF_THREADS; i++) {
//        threads[i].join();
//    }
//    std::cout << "After " << value << std::endl;
//
//}