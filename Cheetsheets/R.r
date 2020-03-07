# ===== R Cheatsheet ===== #

library(ISLR)               # loads a specific library
names(DatasetName)          # shows the names of all the attirbuites in the dataset 
dim(DatasetName)            # shows the dimension of the dataset
summary(dataName, digits = digits, maxsum = maxsum) # shows the summary of all the attribiutes of the dataset
# Min: the lower element
# 1st Quater: il primo Quantile
# Median: the middle element
# Mean: 
# 3rd Quarter: il terzo quartile
# Max: the maximum element
cor(Smarket)                       #  function produces a matrix that contains all of the pairwise correlations among the predictors in a data set. All elements must be numeric
cor(Smarket[,-9])                  # excludes the last line, which is qualitative
attach(frame)                      # it locks the dataset to the console, so you don't have to repeat it
glm.fits = glm(formula, family=, data)        # fit for Generalized Linear Models, data = The dataset, Family = The model adopted for this
# Formula = Direction ( what i want to predict ) ~ x1+x2+x3+x4 ( all the attributes that contribiute the prediction)
summary(glm.gits)       # summary of the model
coef()          # gives the coefficients of the model