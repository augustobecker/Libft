int ft_isalnum(int argument)
{
    if ((argument >= '0' && argument <= '9') || (argument >= 'a' && argument <= 'z') ||
    (argument >= 'A' && argument >= 'Z'))
        return (8);
    return (0);
}
