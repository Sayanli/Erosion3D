<h1 align="center">Hydrology erosion</h1>

# Info
This project is a graphical application that allows you to follow the process of hydrological erosion of the landscape. 
The process itself is an imitation of falling raindrops and their further impact on the landscape itself.
This algorithm is often used to generate procedural worlds in games, as it allows you to recreate a surface as close to reality as possible.
All the code was written using C++ and the OpenGL graphics library.


## Dependencies
    Erosion System:
    - gcc
    - glm

    Renderer:
    - OpenGL

    GUI:
    - Dear ImGui


## Compiling
To generate a project, we need to be in the project folder, there is a file in it CMakeLists.txt.
To generate a project from a folder, enter the following commands in the command line.
  ```
     mkdir  ./hydrology-erosion-build
     cd ./hydrology-erosion-build
     cmake ..
     make
  ```


## Creating a heightmap
The Diamond Square algorithm is used to generate the elevation map. It allows you to create a landscape close to reality.


## Uploading your heightmap
To load the elevation map in the program, you need to select the path to the desired image.
The image must necessarily have a resolution multiple of two, otherwise the algorithm will not work correctly.

    
## the process of erosion in 2D
![erosion](https://github.com/Sayanli/Erosion3D/assets/70858476/7b4386b1-6f60-46b2-a033-e3748c404e20)


## the process of erosion in 3D
![erosion3d](https://github.com/Sayanli/Erosion3D/assets/70858476/0907fc89-ba15-444b-8c3e-16ee8e97caab)

