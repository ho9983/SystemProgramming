#! /bin/bash

echo "Test"
filelist=($(ls))

for i in ${filelist[@]}; do
    if [ -f $i ]; then
        echo $i
    fi

done


