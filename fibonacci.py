def fibonacci(x):
    #solve fibonacci using for loop
    currentValue = 1
    previousValue = 0

    for i in range(x):
        temp = currentValue
        currentValue += previousValue
        previousValue = temp
    return currentValue

if __name__ == "__main__":
    for i in range(1000):
        print fibonacci(i)
        