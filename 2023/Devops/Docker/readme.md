# Docker related things
## What is Docker?
Docker is an open-source platform designed to make it easier to create, deploy, and run applications by using containers. Containers allow a developer to package up an application with all of the parts it needs, such as libraries and other dependencies, and ship it all out as one package. This means that the application will run on any other machine regardless of any customized settings that machine might have that could differ from the machine used for writing and testing the code.

In a way, Docker is a bit like a virtual machine. But unlike a virtual machine, rather than creating a whole virtual operating system, Docker allows applications to use the same Linux kernel as the system they're running on and only requires applications be shipped with things not already running on the host computer. This gives a significant performance boost and reduces the size of the applications.

Key aspects of Docker include:

- **Containers:** These are lightweight and standalone executables that include everything needed to run a piece of software, including the code, a runtime, libraries, environment variables, and config files.

- **Images:** Docker images are read-only templates used to create containers. Images are created with the build command, and they'll produce a container when started with run.

- **Dockerfile:** This is a text file that contains the instructions needed to create a Docker image. They are like a step-by-step guide on how to configure a custom Docker environment.

- **Docker Hub:** This is a public repository where Docker images are stored and shared.
