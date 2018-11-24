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

def fibonacciRecursive(x):
    if x == 1 or x == 0:
        return 1
    return fibonacciRecursive(x - 1) + fibonacciRecursive(x - 2)

if __name__ == "__main__":
    
    
    
    startTime = time.time()

    
    print fibonacciRecursive(35)
    
    endTime = time.time()
    
    elapsedTime = endTime - startTime
    print elapsedTime

