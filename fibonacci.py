import time
def fibonacci(x):
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
    
    
    for i in range(5, 50, 5):
        startTime = time.time()
        fibonacciRecursive(i)
        endTime = time.time()
        elapsedTime = endTime - startTime
        print "Fibonacci number %d" % i
        print "elapsed time is %f\n" % elapsedTime

