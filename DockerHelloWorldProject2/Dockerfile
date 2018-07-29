FROM amytabb/docker_ubuntu16_essentials
ENV NAME VAR1
ENV NAME VAR2
ENV NAME VAR3
RUN mkdir /write_directory
ARG DIRECTORY=/write_directory
ENV VAR_DIR=$DIRECTORY
COPY run_hello2.sh /run_hello2.sh
COPY HelloWorld /HelloWorld
WORKDIR /HelloWorld/
RUN g++ -o HelloWorld2 helloworld2.cpp
WORKDIR /
CMD ["/bin/sh", "/run_hello2.sh"]

