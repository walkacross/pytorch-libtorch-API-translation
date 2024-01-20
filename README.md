# pytorch-libtorch-API-translation

this project aims to prodive API translation between Pytorch(python version) and Libtorch(C++ version), which help researchers who don't write c++ for a living to be able to use libtorch in C++ ecosystem.

all code lives in jupyter notebook, you can interactively write C++ in notebook by using [xeus-cling](https://github.com/jupyter-xeus/xeus-cling).


# how to use code?

## step1: git clone project
~~~
git clone https://github.com/walkacross/pytorch-libtorch-API-translation.git
cd pytorch-libtorch-API-translation
~~~


## step2: create a virtual envronment
~~~
conda create -n libtorch
source activate libtorch
~~~

## step3: install xeus-cling and jupyterlab in virtual env
~~~
conda install xeus-cling -c conda-forge

conda install jupyterlab -c conda-forge

# open jupyter notebook in terminal
jupyter notebook
~~~

# appendix
to use the libtorch in notebook, you need download the libtorch-cxx11-ABI version.
