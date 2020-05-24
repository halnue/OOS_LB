//
// Created by oruel on 23.05.2020.
//

#include "Thread.h"
#include "Semaphore.h"
#include <vector>

typedef void *(*THREADFUNCPTR)(void *);

class Philosopher : public Thread {
    int id;
public:
    static const int QUANTITY_PHILOSOPHERS = 5;

//    static std::vector<Philosopher> philosophers;
    std::vector<bool> *forks;

//    static Semaphore semaphore;
    Semaphore *semaphore;

    Philosopher(int id, Semaphore *semaphore, std::vector<bool> *forks) :
            Thread(NULL, NULL, (THREADFUNCPTR) &Philosopher::eat1), id(id), semaphore(semaphore), forks(forks) {}

    void changeStateFork(bool state) {
        forks->at(id) = state;
        if (id != 0)
            forks->at(id - 1) = state;
        else
            forks->at(forks->size() - 1) = state;
    }

//    void *(*eat)(void *arg){
//      eat1(arg)
//    };
    void eat1(void *arg) {
//        int *id = static_cast<int*>(reinterpret_cast<int *>(arg));
//        while (true) {
//        Semaphore semaphore1 = semaphore;
        semaphore->acquire();

        bool ownFork = forks->at(id);
        bool leftFork;
        if (id != 0) {
            leftFork = forks->at(id - 1);
        } else {
            leftFork = forks->at(forks->size() - 1);
        }
        if (ownFork && leftFork) {
            changeStateFork(false);
            std::cout << "eat" << id << std::endl;
            sleep(1);
            changeStateFork(true);
        } else {
            semaphore->release();
//                continue;
//        }
//        }
        }

        void changeStateFork(bool state) const {
            forks()[id] = state;
            if (id != 0)
                forks()[id - 1] = state;
            else
                forks()[forks().size() - 1] = state;
        };
    };

    static Semaphore semaphore = Semaphore(2);

//    Semaphore getSemaphore() {
//        return semaphore;
//    }

    static std::vector<bool> forks = std::vector<bool>();

    int main() {
        std::vector<Philosopher> philosophers = std::vector<Philosopher>();
//    Philosopher p0 = Philosopher(-1);
//    p0.semaphore = Semaphore(2);
//    p0.philosophers = std::vector<Philosopher>();
//    p0.forks = std::vector<bool>();
//    pthread_t threadId;
//    Philosopher::semaphore = Semaphore(2);
//    Philosopher::philosophers = std::vector()

        Philosopher p0 = Philosopher(0, &semaphore, &forks);
        for (int i = 0; i < Philosopher::QUANTITY_PHILOSOPHERS; ++i) {
            philosophers.push_back(Philosopher(i, &semaphore, &forks));
            forks.push_back(true);
        }
        for (int j = 0; j < Philosopher::QUANTITY_PHILOSOPHERS; ++j) {
            philosophers[j].start();
            philosophers[j].join();
        }
        std::cout << "fd";

    }