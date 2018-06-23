# Welcome to RTXI!

[The Real-Time eXperiment Interface](http://rtxi.org) (RTXI) is a collaborative
open-source software development project aimed at producing a real-time Linux
based software system for hard real-time data acquisition and control
applications in biological research.

RTXI uses the open source [Xenomai framework](http://xenomai.org) to implement
communication with a variety of commercially available multifunction DAQ cards
with both analog and digital input and output channels. This makes RTXI
essentially hardware-agnostic and able to communicate with multiple actuators
and sensors that may span different modalities.  

At the heart of RTXI is a dynamic framework allowing for easy creation and use
of modules. Each module features its own encapsulated interface through which
users can control module execution and modify its various parameters. Modules
contain function-specific code that can be used in combinations to build custom
workflows and experiment protocols. They are compiled outside the core RTXI
source tree as shared object libraries that are linked at runtime. Take a look
[here](http://rtxi.org/docs/tutorials/2014/12/06/rtxi-architecture/) for more
information on the architecture of RTXI and [here](http://rtxi.org/modules/)
for the modules currently available. 

To get started, please refer to our [documentation](http://rtxi.org/docs/). If
you encounter any bugs or have new feature requests, post them to the [issues
section](https://github.com/RTXI/rtxi/issues) and we'll help you get started.

You can also check out our [community](http://rtxi.org/community) to see
who/how RTXI is being used around the world.
