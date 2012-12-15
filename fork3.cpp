#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main() {
  pid_t childpid;
  childpid = fork();
  int i;
  for (i=0;i<5;i++) {
    cout << "This is a process " << getpid() << endl;
    sleep(2);
  }
  return 0;
}

