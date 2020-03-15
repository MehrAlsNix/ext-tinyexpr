FROM docker.io/php:7.4-cli-buster

RUN set -e; \
    apt-get update; \
    apt-get install -y --no-install-recommends git zip unzip gdb; \
    git clone --branch "master" --depth 1 https://github.com/MehrAlsNix/ext-tinyexpr.git /tmp/tinyexpression; \
    cd /tmp/tinyexpression; \
    phpize; \
    ./configure; \
    make; \
    make install; \
    echo "extension=tinyexpression.so" > /usr/local/etc/php/conf.d/tinyexpression.ini; \
    mkdir /app;

WORKDIR /app
