if [ -d "/usr/include/" ]; then
    cp ./hello.c /usr/include/
else
    cp ./hello.h /usr/local/include/
fi