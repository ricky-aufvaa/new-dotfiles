if [ -z $1 ]; then
  name=$(dmenu -p "Search kro: " <&-)
else
  name=$1
fi

name="$(echo $name | sed 's/ /-/g')"
curl= $(curl -o temp.html https://www.brainyquote.com/authors/$name"-quotes")
#getting quote
cut=$(cat $curl|grep -A1 'div style' temp.html|grep -v 'div style'|sed -e "s/\&\#39\;/\'/g" -e '/^\<\/div\>/,/^\<\/div\>/d'||dmenu -i -l 10)
