def factorial(n,contador = 0):
    if n < 0:                                       #2
        contador += 1               
        return 0,contador                           #1
    elif n == 0 or n == 1:                          #5
        contador += 1
        return 1,contador                           #1
    else:
        fact = 1                                    #1
        while(n > 1):                               #n+1    #4(n+1) = 4n +4
            contador += 1                                     
            fact *= n                               #2
            n -= 1                                  #2
        return fact,contador

x = factorial(5)

print ("EL factorial de 5 es:", x[0])