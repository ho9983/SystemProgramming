#!/bin/bash

for i in `seq 9`
do
  for j in `seq 2 9`
  do
    res=$((j * i))
    printf "$j x $i = $res\t"

  done
    echo 
done




