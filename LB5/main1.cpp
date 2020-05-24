//
// Created by oruel on 23.05.2020.
//
//#include <iostream>
//#include <fstream>
//#include "Semaphore.h"
//#include "Thread.h"
//
//Semaphore semaphore = Semaphore(1);
//
//void *write(void *args) {
//    semaphore.acquire();
//    std::ofstream out;// поток для записи
//    out.open("/home/oruel/CLionProjects/OOS_LB/LB5/task2.txt");
//    if (out.is_open()) {
//        out << "Hello World!" << std::endl;
//    }
//    out.close();
//    semaphore.release();
//}
//
//void *read(void *args) {
//    semaphore.acquire();
//    std::string line;
//
//    std::ifstream in("/home/oruel/CLionProjects/OOS_LB/LB5/task2.txt");
//    if (in.is_open()) {
//        while (getline(in, line)) {
//            std::cout << line << std::endl;
//        }
//    }
//    in.close();
//    semaphore.release();
//}
//
//int main() {
//    Thread threadWrite = Thread(NULL, NULL, write);
//    Thread threadRead = Thread(NULL, NULL, read);
//    threadWrite.start();
//    threadRead.start();
//    threadWrite.join();
//    threadRead.join();
//}