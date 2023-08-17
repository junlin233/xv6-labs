#include"kernel/types.h"
#include"user/user.h"


int main(int argc, char* argv[]) {
  // ��������в���������2�������ӡ������Ϣ
  if (argc != 2)
  {
    // ϵͳ���� write(int fd, char *buf, int n) �������������Ϣ
    // ���� user/ulib.c �� strlen() ������ȡ�ַ��������ֽ���
    write(2, "Usage: sleep time\n", strlen("Usage: sleep time\n"));
    // �˳�����,����ֵ��0��ʾ����
    exit(1);
  }
  // ���ַ����Ͳ���ת��Ϊ����
  int time = atoi(argv[1]);
  // ����ϵͳ���� sleep���������Ͳ���
  write(2, "sleeping...\n", strlen("sleeping...\n"));
  sleep(time);
  // �����˳����򣬷���ֵ0
  exit(0);
}
