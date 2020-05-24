cmake_minimum_required(VERSION 3.16)
project(OOS_LB)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
#https://issue.life/questions/1662909
add_executable(OOS_LB main.cpp LB2/main.cpp LB2/FunA.h LB2/FunB.h LB4/main.cpp LB5/main.cpp LB5/Thread.h LB5/Semaphore.h LB5/Mutex.h LB5/main1.cpp LB5/main2.cpp LB5/mainAit.cpp)