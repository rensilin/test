#!/usr/bin/env python
#-*- coding:utf-8 -*-
# Standard scientific Python imports  
import matplotlib.pyplot as plt  
  
# Import datasets, classifiers and performance metrics  
from sklearn import datasets, svm, metrics  
  
# The digits dataset  
digits = datasets.load_digits() 

image_and_labels = list(zip(digits.images,digits.target))
for index,(image,label) in enumerate(image_and_labels[:8]):
    plt.subplot(2,4,index+1)
    plt.axis('off')
    plt.imshow(image,cmap=plt.cm.gray_r,interpolation='nearest')
    plt.title('Training: %i'%label)
plt.show()
