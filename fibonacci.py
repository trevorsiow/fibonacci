import time
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
    startTime = time.time()

    
    fibonacci(1000000)
    
    endTime = time.time()
    
    elapsedTime = endTime - startTime
    print elapsedTime

