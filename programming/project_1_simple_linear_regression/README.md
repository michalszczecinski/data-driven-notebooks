# Computer Programming - C Project, Simple Linear Regression

* Running Simple Linear Regression in C

## Problem definition

Simple linear regression is a method of predicting quantitative response variable (Y) based on a single predictor variable (X).

Mathematically we can write this linear relationship as:

$Y \approx \beta_{0} + \beta_{1}X $

$\beta_{0}$ and $\beta_{1}$ are unknown constants representing intercept and slope terms in the linear model.

In simple linear regression setting we can estimate $\beta_{0}$ and $\beta_{1}$ that minimise the `Residual Sum of Squares (RSS)` using following formulas:

$$
\hat{\beta_{1}} = \frac{\Sigma_{i=1}^{n}(x_i - \bar{x})(y_i - \bar{y})}{\Sigma^{n}_{i=1}(x_i - \bar{x})^{2}}, \\
\beta_0 = \bar{y} - \hat{\beta_1}x,
$$

Write program to estimate the parameters of a Simple Linear Regression model using defined arrays for the training data x and y. Then predict response variable Y based on a new data point X.