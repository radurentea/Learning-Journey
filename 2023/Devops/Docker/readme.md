# Docker related things
## What is Docker?
Docker is an open-source platform designed to make it easier to create, deploy, and run applications by using containers. Containers allow a developer to package up an application with all of the parts it needs, such as libraries and other dependencies, and ship it all out as one package. This means that the application will run on any other machine regardless of any customized settings that machine might have that could differ from the machine used for writing and testing the code.

In a way, Docker is a bit like a virtual machine. But unlike a virtual machine, rather than creating a whole virtual operating system, Docker allows applications to use the same Linux kernel as the system they're running on and only requires applications be shipped with things not already running on the host computer. This gives a significant performance boost and reduces the size of the applications.

Key aspects of Docker include:

- **Containers:** These are lightweight and standalone executables that include everything needed to run a piece of software, including the code, a runtime, libraries, environment variables, and config files.

- **Images:** Docker images are read-only templates used to create containers. Images are created with the build command, and they'll produce a container when started with run.

- **Dockerfile:** This is a text file that contains the instructions needed to create a Docker image. They are like a step-by-step guide on how to configure a custom Docker environment.

- **Docker Hub:** This is a public repository where Docker images are stored and shared.

## What problems Docker solves?

**"It works on my machine" problem:** Often developers write code that works perfectly on their machines, but when deployed on production servers, the code breaks due to different environmental setups. Docker alleviates this problem by ensuring that the application runs within a consistent environment. That is, Docker containers run the same regardless of where they are run. They contain all the dependencies needed to run the application, so you don't have to worry about the host environment.

**Isolation:** Docker allows you to isolate your applications in separate containers to avoid any conflict between the system libraries and dependencies. This can also increase security as applications running within containers are isolated from each other and from the host system.

**Ease of Deployment and Scalability:** Docker allows you to easily package and distribute applications along with their dependencies. This leads to simplified deployment, where deploying an application is as easy as running a Docker image. Docker also integrates well with orchestration tools like Kubernetes for scaling out applications.

**Resource Efficiency:** Unlike traditional virtual machines, Docker containers share the host system’s OS kernel, making them much more lightweight. Multiple containers can run on the same machine, each requiring only the resources needed to run their application, which leads to more efficient use of system resources.

**Microservices:** Docker is well-suited to microservices architectures, where applications are split into smaller, independent services. Each service can run in its own container, which can be managed independently, thereby increasing the modularity and flexibility of your application.

**Continuous Integration/Continuous Deployment (CI/CD):** Docker is widely used in CI/CD pipelines. It allows you to create a container with your application and run tests against it. Once the tests pass, you can deploy the same container to production.

**Version Control and Component Reuse:** Docker allows you to version control not only your application's source code but also the environment in which it runs. This is useful when you need to rollback your software environment. Also, Docker images can be reused across multiple projects, promoting component reuse.

**Simplified Configuration:** By using Dockerfile to build Docker images, the setup and configuration of the environment are simplified and can be tracked as part of the codebase.
