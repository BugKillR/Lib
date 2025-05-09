#include "libft.h"

int     ft_atoi(const char *s)
{
        int     i;
        int     sign;
        int     res;

        i = 0;
        sign = 1;
        res = 0;
        while (s[i] == ' ' || (9 <= s[i] && s[i] <= 13))
                i++;
        if (s[i] == '-' || s[i] == '+')
        {
                if (s[i] == '-')
                        sign *= -1;
                i++;
        }
        while ('0' <= s[i] && s[i] <= '9')
        {
                res = (res * 10) + (s[i] - '0');
                i++;
        }
        return (res * sign);
}
