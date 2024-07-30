'''https://www.naukri.com/code360/problems/second-largest-element-in-the-array_873375?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM '''
from os import *
from sys import *
from collections import *
from math import *
from sys import stdin
import sys

def findSecondLargest(sequenceOfNumbers):
    # Write your code here.
    s=sorted(set(sequenceOfNumbers))
    return s[-2] if len(s)>1 else -1
    
# Taking input using fast I/O.
def takeInput():
    n = int(input())

    sequenceOfNumbers = list(map(int, input().strip().split(" ")))

    return sequenceOfNumbers, n

# Main.
t = int(input())
while t:
    sequenceOfNumbers, n = takeInput()
    print(findSecondLargest(sequenceOfNumbers))
    t = t-1
