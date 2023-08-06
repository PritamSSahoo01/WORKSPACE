#!/bin/bash


x=12
y=23

calculator=$(bc <<< "scale=2: $x/$y")

echo $calculator

exit 0
