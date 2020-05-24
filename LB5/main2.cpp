////
//// Created by oruel on 23.05.2020.
////
//
//#include <fstream>
//#include <condition_variable>
//#include "Thread.h"
//std::condition_variable cv;
//std::mutex m;
//bool reading = false;
//bool writing = false;
//
//void *write(void *args) {
//    std::unique_lock<std::mutex> lk(m);
//    cv.wait(lk,[&](){return !reading;});
//    writing = true;
////    semaphore.acquire();
//    std::ofstream out;// поток для записи
//    out.open("/home/oruel/CLionProjects/OOS_LB/LB5/task2.txt");
//    if (out.is_open()) {
//        out << "Hello World!" << std::endl;
//    }
//    out.close();
//    writing = false;
//    cv.notify_one();
////    semaphore.release();
//}
//
//void *read(void *args) {
//    std::unique_lock<std::mutex> lk(m);
//    cv.wait(lk,[&](){return !writing;});
//    reading = true;
////    semaphore.acquire();
//    std::string line;
//
//    std::ifstream in("/home/oruel/CLionProjects/OOS_LB/LB5/task2.txt");
//    if (in.is_open()) {
//        while (getline(in, line)) {
//            std::cout << line << std::endl;
//        }
//    }
//    in.close();
//    reading = false;
//    cv.notify_one();
////    semaphore.release();
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
//#include <iostream>
////int main(){
////    std::cout << "fdfhjf";
////}