#include"kernel/types.h"
#include"user/user.h"


int main(int argc, char* argv[]) {
  // 如果命令行参数不等于2个，则打印错误信息
  if (argc != 2)
  {
    // 系统调用 write(int fd, char *buf, int n) 函数输出错误信息
    // 调用 user/ulib.c 的 strlen() 函数获取字符串长度字节数
    write(2, "Usage: sleep time\n", strlen("Usage: sleep time\n"));
    // 退出程序,返回值非0表示错误
    exit(1);
  }
  // 把字符串型参数转换为整型
  int time = atoi(argv[1]);
  // 调用系统调用 sleep，传入整型参数
  write(2, "sleeping...\n", strlen("sleeping...\n"));
  sleep(time);
  // 正常退出程序，返回值0
  exit(0);
}
