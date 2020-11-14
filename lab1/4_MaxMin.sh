#! /bin/bash

echo "1st number :"
read a
echo "2nd number :"
read b
echo "3rd number :"
read c

if [ $a -le $b ]; then
	min=$a
	max=$b
else 
	min=$b
	max=$a
fi

if [ $max -le $c ]; then
	max=$c
fi

if [ $c -le $min ]; then
	min=$c
fi

echo "Max number : $max"
echo "Min number : $min" 
