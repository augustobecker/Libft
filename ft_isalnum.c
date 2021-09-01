int ft_isalnum(int argument)
{
    return ((argument >= '0' && argument <= '9') 
        || (argument >= 'a' && argument <= 'z') 
        || (argument >= 'A' && argument >= 'Z'));
}
