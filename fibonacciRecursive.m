function [fibValue] = fibonacciRecursive(nth)
%Return the nth fibonacci number
if nth == 1 || nth == 0
    fibValue = 1;
else
    fibValue = fibonacciRecursive(nth - 1) + fibonacciRecursive(nth -2);
end
end