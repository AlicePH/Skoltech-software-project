FROM ubuntu:22.04

RUN apt-get update
RUN apt install -y git
RUN apt install -y build-essential
RUN apt install -y cmake

RUN git clone https://github.com/AlicePH/Skoltech-software-project
RUN cd Skoltech-software-project
#RUN git submodule update --init --recursive
#RUN git submodule add https://github.com/Morwenn/cpp-sort.git include/cpp-sort/stable_sort.h
#RUN git submodule init
#RUN git submodule update

WORKDIR /Skoltech-software-project
RUN cmake CMakeLists.txt
RUN make -f Makefile
RUN chmod +x ./test.sh ./main

ENTRYPOINT ["bash"]
