int ft_tolower(int argument)
{
    if (argument >= 'A' && argument <= 'Z')
        argument += 32;
    return (argument);
}
