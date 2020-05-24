////
//// Created by oruel on 21.05.2020.
////
//#include <iostream>
//#include <unistd.h>
//#include <sys/resource.h>
//#include <csignal>
//#include <syslog.h>
//
//using namespace std;
//void l(string s);
//void sigusr1 (int signum) {
//    signal (SIGUSR1, sigusr1);
//    l("SIGUSR1 checking");
////    (void)signal(SIGINT, SIG_DFL);
//}
//void sigint (int signum) {
//    l("daemon onDestroy");
//    (void)signal(SIGUSR1, SIG_DFL);
//}
//int main() {
//    (void) signal(SIGUSR1, sigusr1);
//    (void) signal(SIGINT, sigint);
//
//    int pid = fork();
//    if (pid < 0) return -1;
//    if (pid != 0) {
//        printf ("daemon started with pid=%d\n", pid);
//        exit (0);
//    }
//    setsid();
//    chdir("/");
//    struct rlimit flim;
//    getrlimit(RLIMIT_NOFILE, &flim);
//    for (auto fd = 0; fd < flim.rlim_max; fd++)
//        close(fd);
//    l("Daemons start");
//    for (; ;) pause();
//
//}
//void l(string s){
//    closelog();
//    openlog ("cs419-3-daemon", LOG_PID, LOG_LOCAL0);
//    syslog (LOG_INFO, s.c_str());
//    closelog();
//}