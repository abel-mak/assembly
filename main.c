#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

extern void asm_main();
extern char *ft_strcpy();
extern size_t ft_strlen();
extern int	ft_strcmp();
extern char *ft_strdup();
extern ssize_t ft_write();
extern ssize_t ft_read();

void	test_ft_strlen()
{
	char *str;

	str = "511111115151515151511";
	printf("%ld\n", ft_strlen(str));
	printf("=======\n");
	printf("%ld\n", strlen(str));
}

void	test_ft_strcpy()
{
	char dest1[20];
	char *src1;
	char dest2[20];
	char *src2;

	src1 = "15151515151515";
	src2 = "15151515151515";
	printf("%s\n", ft_strcpy(dest1, src1));	
	printf("=======\n");
	printf("%s\n", strcpy(dest2, src2));
}

void	test_ft_strcmp()
{
	char *s1;
	char *s2;

	s1 = "hello";
	s2 = "helli";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("=======\n");
	printf("%d\n", strcmp(s1, s2));
}

void	test_ft_write()
{
	int	fd;
	int	fd1;
	int write_ret;
	char *src = "9999999999\n";

	fd = 1; 
	fd1 = 1;
	write_ret = ft_write(fd, src, ft_strlen(src));
	printf("%s\n", strerror(errno));
	printf("%d\n", errno);
	printf("write_ret: %d\n", write_ret);
	printf("=======\n");
	write_ret = write(fd1, src, ft_strlen(src));
	printf("%s\n", strerror(errno));
	printf("%d\n", errno);
	printf("write_ret: %d\n", write_ret);
}

void	test_ft_read()
{
	int	fd;
	int	fd1;
	int read_ret;
	char dest1[20];
	char dest2[20];

	fd = 1; 
	fd1 = 1;
	read_ret = ft_read(1, dest1, 10);
	dest1[read_ret] = '\0';
	printf("%s\n", dest1);
	printf("%s\n", strerror(errno));
	printf("%d\n", errno);
	printf("read_ret: %d\n", read_ret);
	printf("=======\n");
	read_ret = read(1, dest2, 10);
	dest2[read_ret] = '\0';
	printf("%s", dest2);
	printf("%s\n", strerror(errno));
	printf("%d\n", errno);
	printf("read_ret: %d\n", read_ret);
}

void	test_ft_strdup()
{
	char *src;

	src = "hello world";
	printf("%s\n", ft_strdup(src));
	printf("=======\n");
	printf("%s\n", strdup(src));

}

int main()
{
	test_ft_strlen();
	//test_ft_strcpy();
	//test_ft_strcmp();
	//test_ft_write();
	//test_ft_read();
	//test_ft_strdup();
	return (0);
}
