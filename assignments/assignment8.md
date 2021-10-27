# Programming Project exercise 17 (ch. 5)

[< Back](../README.md)

---

You would like to find the area under the curve

`y = f(x)`

between the lines `x = a` and `x = b`. One way to approximate this area is to use line segments as approximations of small pieces of the curve and then to sum the area of trapezoids created by drawing perpendicular from the line segment endpoints to the x-axis, as shown in Fig. 5.26. We will assume that `f(x)` is non-negative over the interval `[a,b]`. The trapezoidal rule approximates this area `T` as

`T = h/2 (f(a) + f(b) + 2sum[i = 1, n-1] f(x[i]))`

for `n` subintervals of length `h`:

`h = (b - a) / n`

Write a function `trap` with input parametes `a`, `b`, `n` and `f` that implements the trapezoid rule. Call `trap` with values for `n` of 2, 4, 8, 16, 32, 64 and 128 on functions

`g(x) = x^2 sin x`

`(a = 0, b = 3.14159)`

and

`h(x) = sqrt(4 - x^2)`

`(a = -2, b = 2)`

Function `h` defines a half circle of radius 2. Compare your approximation to the actual area of this half circle.

*Note:* If you have studied calculus, you will observe the trapezoidal rule is approximating

`integral[a, b] f(x)dx`
