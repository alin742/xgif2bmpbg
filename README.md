# xgif2bmpbg

Worst named program ever...

its an extension to my gif2bmp program which converts gif to bmp files.
This program displays a bunch of bmp files as your X11 background using feh.

# Dependencies

- nobuild.h (Thanks to Tsoding <3 [original repo](https://github.com/tsoding/nobuild))
- feh ([archwiki page](https://wiki.archlinux.org/title/feh))

# Usage

``` bash
$ xgif2bmpbg [folder]
```

The files within the order must have the same name and ordered numerically, for example

``` bash
$ ls folder
out-1.bmp
out-2.bmp
out-3.bmp
out-4.bmp
out-5.bmp
out-6.bmp
out-7.bmp
out-8.bmp
```

if you want to define the framrate just edit the source file. There's a SAMPLE_MS defined that sets the sleep time between each two frames.

``` c
#define SLEEP_MS 16 // <- Change this to the sleep time you want
```

Happy Fancy animated wallpaper!!

