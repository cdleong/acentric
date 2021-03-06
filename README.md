![Acentric Logo](/acentric_logo.png)

## Acentric: a work-in-progress music theory library and language

This is a work-in-progress library for music theory analysis. Its purpose is to assist students, musicians, and researchers with calculating and understanding complex music theory concepts and automating tedious tasks such as determining scale degrees or analyzing musical parts for compliance with counterpoint rules.

The library will serve as a (hopefully) efficient, well-documented *back-end for other programs/interfaces*.

One such interface is included in the project: a parser for the in-development Acentric language. Some initial features of the parser:

![Screenshot of Acentric Features](/initial_feature_samples.png)

Check the [wiki page](https://github.com/r734/acentric/wiki/Acentric-Language) for more details on the language.

### Build
This library uses the CMake build system. You need CMake installed on your computer to build the project.

Go to the root directory of the project, open a command window or terminal and type:

```sh
mkdir build
cd build
cmake ..
```

(Flex and Bison are *optional* to build--only a developer working on the language needs them. On Linux, flex/bison should be available from your package manager (if they aren't installed already). On windows, you'll need to install Cygwin with flex.exe and bison.exe. This will be cleaned up in the future. You'll also need to turn the BUILD_LEXER_AND_PARSER_SOURCE CMake option on, which is off by default.)

If you are on Windows using Visual Studio, there will be a .sln file in the `build` folder which can be opened in Visual Studio.

If you are on Linux, there will be a `makefile` in the `build` folder. From `build`, type `make` to build the project.

### Documentation
Documentation is included in the form of comments in header files and throughout the code. Optionally, you may use Doxygen to generate HTML- or LaTeX documentation based on these comments. Install Doxygen on your system, and from the `build` folder, execute `doxygen Doxyfile`. This will create folders of documentation in your `build` folder.

More accessible documentation is planned.

### Scope/Work in Progress
Priority of concepts to be implemented by this library include:

* Notes
* Intervals
* Chords
* Scales
* Time-dimension definitions (e.g. melodies, chord progressions)
* Polyphony (counterpoint) with analysis/rule-checking
* Harmony/dissonance calculation for simultaneous notes/chords

### Support
This library is being developed in one person's spare time in hopes of helping musically-inclined people anywhere and everywhere. Suggestions and questions submitted by the issue tracker are *completely welcome*, but a quick response (let alone a quick fix/implementation) is not guaranteed!
