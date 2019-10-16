# PongGame

In order to run this on a Linux machine you need to have SFML installed which you can do using your pakage manager: 
```
sudo apt-get install libsfml-dev
```
The cmake file already has the necessary commands so it should build and run without problem.

If you are using a windows machine I have already added the necessary libs/dll files to the main directory of the game. You do have to
download SFML from their website to some directory onyour computer because if you are using Visual Studio you are going to have to setup 
the environment.

Once you have the files downlaoded in its own folder in VS you have to go to Project > Properties and then click on C/C++ under
"Configuration Properties" and where it says "Additional Include Directories" in the right side, put in the file path to where you have
the libs/dlls for SFML saved to. You also have to go click on "Linker" and in its general settings add the file path where it says 
"Additional Library Directories". Then click the Linker drop down and on the input tab you want to click "Additional Dependencies"
and right at the start of the line paste in:
```
sfml-graphics-d.lib;sfml-window-d.lib;sfml-system-d.lib;sfml-network-d.lib;sfml-audio-d.lib;
```
Apply everything, hit okay and you should be good to go.

-Tristochi
