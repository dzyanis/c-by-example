#!/bin/bash

## check params
if [ -z "$1" ] || [ -z "$2" ]; then
    echo "Please, set file and item name"
    exit 1
fi

## make folder and change to it 
if [ ! -d "$1" ]; then
    echo "created folder '${1}'"
    mkdir ${1}
fi

filename="${1}/main.c"

## make file from template code
cp template.c ${filename}

## add item to README
readme="README.md"
echo "* [${2}](${filename})" >> $readme

vi ${filename}
