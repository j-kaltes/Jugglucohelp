for f in *.in.html
do
    echo $f
     ./translinks ??/$f
done
