
void    ft_putchar_fd(char c, int fd)
{
    if (c >= 0)
        write(fd, &c, 1);
    return;
}
