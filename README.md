## How to build

1. Clone the repository then change your current working directory to it
2. Select the appropriate configure preset

```
$ cmake --preset dbg
```

The available presets can be listed with the command `cmake --list-presets`.

The following configure presets are available :
 - Debug : Built with no optimization, suitable for debugging
 - Release : Built with optimization for speed, suitable for delivering
 - Coverage : Same as release with coverage compiler options, not suitable for delivering

3. Build the project with the appropriate target (all targets by default)

```
$ cmake --build Build/Debug                                # Will build all targets
$ cmake --build Build/Debug --target BoilerPlate.Benchmark # Will build the BoilerPlate library and the BoilerPlate benchmark
```