for f in *.html
do
    echo $f
    ./translinks ??/$f
done
