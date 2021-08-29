int ft_toupper(int argument)
{
    if (argument >= 'a' && argument <= 'z')
        argument -= 32;
    return (argument);
}
