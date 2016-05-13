#!/bin/bash
String
for f in {1..100000}
do
    String+="conf $LINE"
done

./ex10 $String
