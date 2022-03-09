#!/bin/bash

if [ -z $1 ]; then
  name=$(dmenu -p "Search kro: " <&-)
else
  name=$1
fi
name="$(echo $query | sed 's/ /+/g')"
#name=$(echo $1|tr ' ' '_')


curl=$(curl -o tmp.html https://www.goodreads.com/author/quotes/$number$name)

number=$(sed -n '/<link href/p' tmp >tempp|sed -i 's/\// /g' tempp)|sed -i 's/\./ /g'|awk '{print $8""}'


url=$($curl| sed -n '/&ldquo/p' output|sed -n 's/&ldquo";"/\n/g')
echo $url
#awk '{print "hellow"}'
