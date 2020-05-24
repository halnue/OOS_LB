# Настройка Clion
Для нормальной компиляции в CMakeLists.txt нужно добавить:
```CMake
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
```
Если неопределенная ссылка на pthread_create в Linux (для CLion решение сверху) посмотреть решение можно здесь:
https://issue.life/questions/1662909
