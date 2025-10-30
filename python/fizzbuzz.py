def fizzbuzz(ketlamketlik): 
    natija = []
    for i in range(1, ketlamketlik+1):
        if i % 3 == 0:
            natija.append("Fizz")
        elif i % 5 == 0:
            natija.append("Buzz")
        elif i % 3 == 0 and i % 5 == 0:
            natija.append("FizzBuzz")
        else:
            natija.append(i)
    return natija

print(fizzbuzz(10))