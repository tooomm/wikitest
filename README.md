<p align='center'><img src=https://cloud.githubusercontent.com/assets/9874850/7516775/b00b8e36-f4d1-11e4-8da4-3df294d01f86.png></p>

---

<p align='center'>
   <a href="#cockatrice--"><b>Cockatrice</b></a> | 
   <a href="#downloads-">Downloads</a> | 
   <a href="#get-involved-">Get Involved</a> | 
   <a href="#community-resources">Community</a> | 
   <a href="#translation-status-">Translation</a> | 
   <a href="#building--">Building</a> | 
   <a href="#running">Running</a> | 
   <a href="#license-">License</a>
</p>

---

<br><pre>
<b>If you're getting started &#8674; [view our webpage](https://cockatrice.github.io/)</b><br>
<b>If you're trying to get support or suggest changes &#8674; [file an issue](https://github.com/Cockatrice/Cockatrice/issues) ([How?](https://github.com/Cockatrice/Cockatrice/wiki/How-to-Create-a-GitHub-Ticket))</b>
</pre><br>


# Cockatrice ![](https://img.shields.io/maintenance/yes/2017.svg "Repo Maintenance Status") [![Commit History](https://img.shields.io/github/last-commit/Cockatrice/Cockatrice.svg?label=updated "Most Recent Repo Update")](https://github.com/Cockatrice/Cockatrice/commits/master) 

---

tests with backup pic (real pic: ![](https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg) / backup pic: ![](https://badges.gitter.im/Cockatrice/Cockatrice.svg))
- nested `![]()` [works for real pic / works NOT for backup]
![![](https://badges.gitter.im/Cockatrice/Cockatrice.svg)](https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg)

- use object data in case img src unavailable [works for real pic / unknown]
<object data="https://badges.gitter.im/Cockatrice/Cockatrice.svg" type="image/svg+xml">
<img src="https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg"/>
</object>

- use background image (first) which is overlayed by other if able to load main (second) [works NOT for real pic / unknown]
<img style="background-image: url(https://badges.gitter.im/Cockatrice/Cockatrice.svg), url(https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg);"></img>

- javascript onerror [works for real pic / unknown]
<img src="https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg" onerror="javascript:this.src='https://badges.gitter.im/Cockatrice/Cockatrice.svg'">

- javascript onerror (other appraoch - real forcefully broken to test) [works for real pic / unknown]
<img src="http://google.com/testpic.png" onError="this.onerror=null;this.src='https://badges.gitter.im/Cockatrice/Cockatrice.svg';" />

---

Cockatrice is an open-source multiplatform supported program for playing tabletop card games over a network. The program's server design prevents any kind of client modifications to gain an unfair advantage in a game. The client also has a built in single-player mode where you can brew without being connected to a server.<br><br>
This project is written in C++ and is using the Qt5 libraries.<br>


# Downloads [![Cockatrice Eternal Download Count](https://img.shields.io/github/downloads/cockatrice/cockatrice/total.svg?label=app%20downloads&colorB=0d7ebf)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice)

We offer downloads for all full releases (recommended) and the latest development versions. Full releases are checkpoints with major feature or UI enhancements between them, but currently we don't have a set schedule for releasing new updates. The development version contains the most recently added features and bugfixes, but can be more unstable. Downloads for development versions are updated automatically with every change.

>### TODO
>- **for better overview: use link shortcuts to not confuse badges - at other places in readme, too?!**<br>
>- **minimize badge labels for not displaying badges**<br>
>- **change colors for badges, uniformity + color system**<br>
>- **change alterative link names if badge can't get loaded - uniform, short, simple**<br>
>- **possible to have a backup pic once main badge doesn't load? original travis badge update for shields fail e.g**<br>
>- **have a mouse over tooltip: https://sourceforge.net/p/placeholder/wiki/markdown_syntax/#md_ex_links**<br>
>- **experiement with placeholder/links: https://sourceforge.net/p/placeholder/wiki/markdown_syntax/#md_ex_reflinks ff & https://stackoverflow.com/questions/24580042/github-markdown-are-macros-and-variables-possible**<br>
>- **actually that's just a use of footnotes?!** https://help.ghost.org/hc/en-us/articles/224410728-Markdown-Guide

<br><pre>
**Latest stable release:**<br>
[![Download from GitHub Releases](https://img.shields.io/github/release/cockatrice/cockatrice.svg?colorB=4ac41d)](https://github.com/cockatrice/cockatrice/releases/latest) [![Download Count on Latest Release](https://img.shields.io/github/downloads/cockatrice/cockatrice/latest/total.svg?colorB=4ac41d)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0) ![](https://img.shields.io/github/release-date/Cockatrice/Cockatrice.svg?label=released&colorB=4ac41d)
</pre><pre>
Download latest **beta** version to be a *Cockatrice Beta Tester*:
[![Download from GitHub Pre-Releases](https://img.shields.io/github/release/cockatrice/cockatrice/all.svg?colorA=6d6d6d&colorB=a0a0a0)](https://github.com/cockatrice/cockatrice/releases) [![DL Count on latest Pre-Release](https://img.shields.io/github/downloads-pre/cockatrice/cockatrice/latest/total.svg?colorA=6d6d6d&colorB=a0a0a0)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0) [![](https://img.shields.io/github/commits-since/Cockatrice/Cockatrice/latest.svg?label=changes&colorA=6d6d6d&colorB=f37f40)](https://github.com/Cockatrice/Cockatrice/pulls?q=is%3Apr+is%3Aclosed) ![](https://img.shields.io/github/release-date-pre/Cockatrice/Cockatrice.svg?colorA=6d6d6d)<br>
    &#9679; Use with caution! Beta builds may not be stable and/or contain several bugs
    &#9679; More information can be [found here](https://github.com/Cockatrice/Cockatrice/wiki/Release-Channels)
</pre>
<br>

---


<br><pre>
**Latest stable release:**
[![Download from GitHub Releases](https://img.shields.io/github/release/cockatrice/cockatrice.svg?label=download&colorB=4ac41d&style=for-the-badge)](https://github.com/cockatrice/cockatrice/releases/latest) [![Download Count on Latest Release](https://img.shields.io/github/downloads/cockatrice/cockatrice/latest/total.svg?label=download%20count&colorB=4ac41d&style=for-the-badge)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0) ![](https://img.shields.io/github/release-date/Cockatrice/Cockatrice.svg?label=released&colorB=4ac41d&style=for-the-badge)
</pre><pre>
Download latest **beta** version to be a *Cockatrice Beta Tester*:
[![Download from GitHub Pre-Releases](https://img.shields.io/github/release/cockatrice/cockatrice/all.svg?label=download%20beta&colorA=6d6d6d&colorB=a0a0a0&style=for-the-badge)](https://github.com/cockatrice/cockatrice/releases) [![](https://img.shields.io/github/commits-since/Cockatrice/Cockatrice/latest.svg?label=changes&colorA=6d6d6d&colorB=f37f40&style=for-the-badge)](https://github.com/Cockatrice/Cockatrice/pulls?q=is%3Apr+is%3Aclosed) [![DL Count on latest Pre-Release](https://img.shields.io/github/downloads-pre/cockatrice/cockatrice/latest/total.svg?colorA=6d6d6d&colorB=a0a0a0&style=for-the-badge)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0)
&nbsp;&#9679; Use with caution! Beta builds may not be stable and/or contain several bugs
&nbsp;&#9679; More information can be [found here](https://github.com/Cockatrice/Cockatrice/wiki/Release-Channels)
</pre>
<br>

---

<br><pre>
Latest **stable** release:<br>
[![Download from GitHub Releases](https://img.shields.io/github/release/cockatrice/cockatrice.svg?colorB=4ac41d)](https://github.com/cockatrice/cockatrice/releases/latest) [![Download Count on Latest Release](https://img.shields.io/github/downloads/cockatrice/cockatrice/latest/total.svg?colorB=4ac41d)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0) ![](https://img.shields.io/github/release-date/Cockatrice/Cockatrice.svg?label=released&colorB=4ac41d)
</pre>
>Latest `beta` version:<br>
[![Download from GitHub Pre-Releases](https://img.shields.io/github/release/cockatrice/cockatrice/all.svg)](https://github.com/cockatrice/cockatrice/releases) [![DL Count on latest Pre-Release](https://img.shields.io/github/downloads-pre/cockatrice/cockatrice/latest/total.svg?colorB=f37f40)](https://tooomm.github.io/github-release-stats/?username=Cockatrice&repository=Cockatrice&search=0) [![](https://img.shields.io/github/commits-since/Cockatrice/Cockatrice/latest.svg?label=changes&colorB=f37f40)](https://github.com/Cockatrice/Cockatrice/pulls?q=is%3Apr+is%3Aclosed) ![](https://img.shields.io/github/release-date-pre/Cockatrice/Cockatrice.svg)<br>
>&nbsp;&nbsp; &#9679; Development builds may not be stable and/or contain several bugs.<br>
>&nbsp;&nbsp; &#9679; If you'd like to be a Cockatrice Beta Tester, use this version.<br>
>&nbsp;&nbsp; &#9679; More information can be [found here](https://github.com/Cockatrice/Cockatrice/wiki/Release-Channels)


# Get Involved [![Gitter Chat](https://badges.gitter.im/Cockatrice/Cockatrice.svg)](https://gitter.im/Cockatrice/Cockatrice)

# Get Involved [![Gitter Chat](https://img.shields.io/gitter/room/Cockatrice/Cockatrice.svg?colorB=0d7ebf)](https://gitter.im/Cockatrice/Cockatrice)

[Chat](https://gitter.im/Cockatrice/Cockatrice) with the Cockatrice developers on Gitter. Come here to talk about the application, features, or just to hang out. For support regarding specific servers, please contact that server's admin or forum for support rather than asking here.<br>

If you'd like to contribute code to the project, please review [the guidelines](https://github.com/Cockatrice/Cockatrice/blob/master/.github/CONTRIBUTING.md).
We maintain a tag for "easy" changes on our issue tracker, issues tagged in this way provide a simple way to get started: [![Issues tagged as "Good first issue"](https://img.shields.io/github/issues/Cockatrice/Cockatrice/Good%20first%20issue.svg)](https://github.com/Cockatrice/Cockatrice/labels/Good%20first%20issue) [![Issues tagged as "Help Wanted"](https://img.shields.io/github/issues/Cockatrice/Cockatrice/Help%20Wanted.svg)](https://github.com/Cockatrice/Cockatrice/labels/Help%20Wanted)<br>
We are also participating in every years [Hacktoberfest](https://hacktoberfest.digitalocean.com/) by DigitalOcean & GitHub: [![Issues tagged for Hacktoberfest](https://img.shields.io/github/issues/Cockatrice/Cockatrice/Hacktoberfest.svg)](https://github.com/Cockatrice/Cockatrice/labels/Hacktoberfest)

[![Issues tagged as "Roadmap"](https://img.shields.io/github/issues/Cockatrice/Cockatrice/Roadmap.svg)](https://github.com/Cockatrice/Cockatrice/labels/Roadmap)

We try to be very responsive to new issues. We'll try to give you advice on how a feature should be implemented / advice on places the codebase is doing something similar before you get too far along with a PR.

Check our long-term project **roadmap** with some visions [here](https://docs.google.com/document/d/1Ewe5uSaRE2nR2pNPMaGmP6gVZdqgFbBgwSscGqIr4W0/edit).


# Community Resources

- [Cockatrice Official Site](https://cockatrice.github.io)
- [Cockatrice Official Wiki](https://github.com/Cockatrice/Cockatrice/wiki)
- [reddit r/Cockatrice](https://reddit.com/r/cockatrice)


# Translation Status [![Cockatrice on Transiflex](https://tx-assets.scdn5.secure.raxcdn.com/static/charts/images/tx-logo-micro.c5603f91c780.png)](https://www.transifex.com/projects/p/cockatrice/)

# Translation Status [![Cockatrice on Transiflex](https://img.shields.io/badge/translate-on%20transifex-blue.svg)](https://www.transifex.com/projects/p/cockatrice/)

Cockatrice uses Transifex for translations. You can help us bring Cockatrice and Oracle to your language or just edit single wordings right from within your browser by simply visiting our [Transifex project page](https://www.transifex.com/projects/p/cockatrice/).<br>

| Cockatrice | Oracle |
|:-:|:-:|
| [![Cockatrice Translation Status](https://www.transifex.com/projects/p/cockatrice/resource/cockatrice/chart/image_png/)](https://www.transifex.com/projects/p/cockatrice/) | [![Oracle Translation Status](https://www.transifex.com/projects/p/cockatrice/resource/oracle/chart/image_png/)](https://www.transifex.com/projects/p/cockatrice/) |

Check out our [Translator FAQ](https://github.com/Cockatrice/Cockatrice/wiki/Translation-FAQ) for more information about contributing!<br>


# Building [![Travis Build Status - master](https://travis-ci.org/Cockatrice/Cockatrice.svg?branch=master)](https://travis-ci.org/Cockatrice/Cockatrice/branches) [![Appveyor Build Status - master](https://img.shields.io/appveyor/ci/Daenyth/Cockatrice/master.svg?logo=appveyor)](https://ci.appveyor.com/project/Daenyth/cockatrice/branch/master) ([![Travis Build Status - master](https://img.shields.io/travis/Cockatrice/Cockatrice/master.svg?label=linux%20%26%20unix%20build)](https://travis-ci.org/Cockatrice/Cockatrice/branches) [![Appveyor Build Status - master](https://img.shields.io/appveyor/ci/Daenyth/Cockatrice/master.svg?label=win%20build)](https://ci.appveyor.com/project/Daenyth/cockatrice/branch/master))

# Building [![Travis Build Status - master](https://img.shields.io/travis/Cockatrice/Cockatrice/master.svg?label=linux%20%26%20unix%20build&logo=travis&style=for-the-badge)](https://travis-ci.org/Cockatrice/Cockatrice/branches) [![Appveyor Build Status - master](https://img.shields.io/appveyor/ci/Daenyth/Cockatrice/master.svg?label=win%20build&logo=appveyor&style=for-the-badge)](https://ci.appveyor.com/project/Daenyth/cockatrice/branch/master)

**Detailed compiling instructions are on the Cockatrice wiki under [Compiling Cockatrice](https://github.com/Cockatrice/Cockatrice/wiki/Compiling-Cockatrice)**

Dependencies:
- [Qt](https://www.qt.io/developers/) 
- [protobuf](https://github.com/google/protobuf)
- [CMake](https://www.cmake.org/)

Oracle can optionally use zlib to load zipped files:
- [zlib](https://www.zlib.net/)

To compile:

    mkdir build
    cd build
    cmake ..
    make

You can then run

    make install

to get a cockatrice installation inside the `release` folder, or:

    make package

to create a system-specific installation package.

The following flags can be passed to `cmake`:

- `-DWITH_SERVER=1` Whether to build the server (default 0 = no).
- `-DWITH_CLIENT=0` Whether to build the client (default 1 = yes).
- `-DWITH_ORACLE=0` Whether to build oracle (default 1 = yes).
- `-DCMAKE_BUILD_TYPE=Debug` Compile in debug mode. Enables extra logging output, debug symbols, and much more verbose compiler warnings (default `Release`).
- `-DUPDATE_TRANSLATIONS=1` Configure `make` to update the translation .ts files for new strings in the source code. Note: Running `make clean` will remove the .ts files (default 0 = no).
- `-DTEST=1` Enable regression tests (default 0 = no). Note: needs googletest, will be downloaded on the fly if unavailable. To run tests: ```make test```.


# Running

`Cockatrice` is the game client    
`Oracle` fetches card data    
`Servatrice` is the server<br>


#### Servatrice Docker container

A Dockerfile is provided to run Servatrice (the Cockatrice server) using [Docker](https://www.docker.com/what-docker).<br>

You just need to create an image from the Dockerfile<br>
`cd /path/to/Cockatrice-Repo/`
`docker build -t servatrice .`<br>
And then run it<br>
`docker run -i -p 4747:4747/tcp -t servatrice:latest`<br>

>Please note that running this command will expose the TCP port 4747 of the docker container<br>
to permit connections to the server.

More infos on how to use Servatrice with Docker can be found in our [wiki](https://github.com/Cockatrice/Cockatrice/wiki/Setting-up-Servatrice#using-docker).


# License [![GPLv2 License](https://img.shields.io/github/license/Cockatrice/Cockatrice.svg)](https://github.com/Cockatrice/Cockatrice/blob/master/LICENSE)

# License [![GPLv2 License](https://img.shields.io/github/license/Cockatrice/Cockatrice.svg?style=for-the-badge)](https://github.com/Cockatrice/Cockatrice/blob/master/LICENSE)

Cockatrice is free software, licensed under the [GPLv2](https://github.com/Cockatrice/Cockatrice/blob/master/LICENSE).

