#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main() {
  pid_t childpid;
  int x = 5;
  childpid = fork();
  while (1) {
    cout << "This is a process" << getpid() << endl;
    cout << "X is " << x << endl;
    sleep(1);
    x++;
  }
  return 0;
}
