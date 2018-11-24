function [fibValue] = fibonacci(nth)
%Return the nth fibonacci number

previousValue = 0;
fibValue = 1;
for i = 0:nth - 1   %inclusive both bounds
    temp = fibValue;
    fibValue = fibValue + previousValue;
    previousValue = temp;
end
end

