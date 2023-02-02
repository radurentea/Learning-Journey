
- [Learning the Shell](#learning-the-shell)
  - [Navigation](#navigation)
    - [pwd](#pwd)
    - [cd](#cd)
  - [Looking Around](#looking-around)
    - [ls](#ls)
    - [less](#less)
    - [file](#file)
  - [Common Linux Directories](#common-linux-directories)
  - [Manipulating files](#manipulating-files)
    - [Wildcards](#wildcards)
    - [cp](#cp)
    - [mv](#mv)
    - [rm](#rm)
    - [mkdir](#mkdir)
    - [touch](#touch)


# Learning the Shell

Most commands operate like this:

*`command -options arguments`*
## Navigation

### pwd
The `pwd` command prints the working directory.
### cd

The `cd` command changes working directory.

| Command | Result                  |
| ------- | -------                 |
| **cd**    | Changes to home directory        |
| **cd usr/bin**   | Change to *usr/bin* directory       |
| **cd ..**   | Changes to parent directory       |
| **cd -**   | Changes to previous directory       |

## Looking Around

### ls
The `ls` command lists the contents of a directory.

| Command | Result                  |
| ------- | -------                 |
| **ls**    | Lists file in the working directory        |
| **ls /bin**    | List the files in the */bin* directory (or any other directory we care to specify)       |
| **ls -l**    | List the files in the working directory in long format      |
| **ls -l /etc /bin**    | List the files in the /bin directory and the /etc directory in long format       |
| **ls -la ..**    | List all files (even ones with names beginning with a period character, which are normally hidden) in the parent of the working directory in long format       |

**A Closer Look at Long Format**

If we use the -l option with ls, you will get a file listing that contains a wealth of information about the files being listed. Here's an example:

<pre>
-rw-------   1 me       me            576 Apr 17  2019 weather.txt
drwxr-xr-x   6 me       me           1024 Oct  9  2019 web_page
-rw-rw-r--   1 me       me         276480 Feb 11 20:41 web_site.tar
-rw-------   1 me       me           5743 Dec 16  2018 xmas_file.txt

----------     -------  -------  -------- ------------ -------------
    |             |        |         |         |             |
    |             |        |         |         |         File Name
    |             |        |         |         |
    |             |        |         |         +---  Modification Time
    |             |        |         |
    |             |        |         +-------------   Size (in bytes)
    |             |        |
    |             |        +-----------------------        Group
    |             |
    |             +--------------------------------        Owner
    |
    +----------------------------------------------   File Permissions
</pre>
**File Name** - The name of the file or directory.

**Modification Time** - The last time the file was modified. If the last modification occurred more than six months in the past, the date and year are displayed. Otherwise, the time of day is shown.

**Size** -The size of the file in bytes.

**Group** - The name of the group that has file permissions in addition to the file's owner.

**Owner** - The name of the user who owns the file.

**File Permissions** - A representation of the file's access permissions. The first character is the type of file. A "-" indicates a regular (ordinary) file. A "d" indicates a directory. A "l" indicates a symbolic link (= a special type of file that points to another file). The second set of three characters represent the read, write, and execution rights of the file's owner. The next three represent the rights of the file's group, and the final three represent the rights granted to everybody else. We'll discuss this in more detail in a later lesson.

### less

`less` is a program that lets us view text files

<pre>less <i>text_file</i></pre>

**Controlling less**
<table>
  <tbody><tr>
    <th><strong>Command</strong></th>
    <th><strong>Action</strong></th>
  </tr>

  <tr>
    <td>Page Up or b</td>
    <td>Scroll back one page</td>
  </tr>

  <tr>
    <td>Page Down or space</td>
    <td>Scroll forward one page</td>
  </tr>

  <tr>
    <td>G</td>
    <td>Go to the end of the text file</td>
  </tr>

  <tr>
    <td>1G</td>
    <td>Go to the beginning of the text file</td>
  </tr>

  <tr>
    <td>/<i>characters</i></td>
    <td>Search forward in the text file for an
    occurrence of the specified <i>characters</i></td>
  </tr>

  <tr>
    <td>n</td>
    <td>Repeat the previous search</td>
  </tr>

  <tr>
    <td>h</td>
    <td>Display a complete list less commands and options</td>
  </tr>
  
  <tr>
    <td>q</td>
    <td>Quit</td>
  </tr>
</tbody></table>

### file
The `file` command outputs the file type.
<pre>file <i>name_of_file</i></pre>

## Common Linux Directories

<table>


  <tbody><tr>
    <th><strong>Directory</strong></th>
    <th><strong>Description</strong></th>
  </tr>

  <tr>
    <td><code>/</code></td>
    <td>The root directory where the file system
    begins.</td>
  </tr>

  <tr>
    <td><code>/boot</code></td>
    <td>This is where the Linux kernel and boot loader
    files are kept. The kernel is a file called <code class="user">vmlinuz</code>.</td>
  </tr>

  <tr>
    <td><code>/etc</code></td>
    <td>The <code>/etc</code> directory contains the configuration files for the system.</td>
  </tr>

  <tr>
    <td><code>/etc/passwd</code></td>
    <td>The <code>passwd</code> file contains the essential information for each user. This is where user accounts are defined.</td>
  </tr>

  <tr>
    <td><code>/etc/fstab</code></td>
    <td>The <code>fstab</code> file contains a table of devices that get mounted when the system boots. This file defines the system's disk drives.</td>
  </tr>

  <tr>
    <td><code>/etc/hosts</code></td>
    <td>This file lists the network host names and IP addresses that are intrinsically known to the system.</td>
  </tr>

  <tr>
    <td><code>/etc/init.d</code></td>
    <td>This directory contains the scripts that start various system services at boot time.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code>/bin, /usr/bin</code></span></td>
    <td>These two directories contain most of the programs for the 
    system. The <code>/bin</code> directory has the essential
    programs that the system requires to operate,
    while <code>/usr/bin</code> contains
    applications for the system's users.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code>/sbin, /usr/sbin</code></span></td>
    <td>The <code>sbin</code> directories
    contain programs for system administration, mostly for use by the superuser.</td>
  </tr>

  <tr>
    <td><code>/usr</code></td>
    <td>The <code>/usr</code> directory contains a variety of things that support user applications.</td>
  </tr>

  <tr>
    <td><code>/usr/share/doc</code></td>
    <td>Various documentation files in a
      variety of formats.</td>
  </tr>

  <tr>
    <td><code>/usr/share/man</code></td>
    <td>The man pages are kept here.</td>
  </tr>

  <tr>
    <td><code>/usr/local</code></td>
    <td><code>/usr/local</code> and its
    subdirectories are used for the installation
    of software and other files for use on the
    local machine. What this really means is that
    software that is not part of the official
    distribution (which usually goes in <code>/usr/bin</code>) goes here.<br><br>
    When you find interesting programs to
    install on your system, they should be
    installed in one of the <code>/usr/local</code> directories. Most
    often, the directory of choice is <code>/usr/local/bin</code>.</td>
  </tr>

  <tr>
    <td><code>/var</code></td>
    <td>The <code>/var</code> directory
    contains files that change as the system is
    running.
    </td>
  </tr>

  <tr>
    <td><code>/var/log</code></td>
    <td>Directory that contains log files.  These are updated as the system
      runs. It's a good idea to view the files in this directory from time to
      time, to monitor the health of your system.</td>
  </tr>

  <tr>
    <td><code>/lib</code></td>
    <td>The shared libraries (similar to DLLs in
    that other operating system) are kept
    here.</td>
  </tr>

  <tr>
    <td><code>/home</code></td>
    <td><code>/home</code> is where users
    keep their personal work. In general, this is
    the only place users are allowed to write
    files.</td>
  </tr>

  <tr>
    <td><code>/root</code></td>
    <td>This is the superuser's home directory.</td>
  </tr>

  <tr>
    <td><code>/tmp</code></td>
    <td><code>/tmp</code> is a directory
    in which programs can write their temporary files.</td>
  </tr>

  <tr>
    <td><code>/dev</code></td>
    <td>The <code>/dev</code> directory
    is a special directory, since it does not
    really contain files in the usual sense.
    Rather, it contains devices that are available
    to the system. In Linux (like Unix), devices
    are treated like files. You can read and
    write devices as though they were files. For
    example <code>/dev/fd0</code> is the
    first floppy disk drive, <code>/dev/sda</code> is the first hard
    drive. All the devices that the kernel
    understands are represented here.</td>
  </tr>
</tbody></table>

## Manipulating files

### Wildcards

Wildcards can be used with any command that accepts filename arguments.

<table>

  <tbody><tr>
    <th><strong>Wildcard</strong></th>
    <th><strong>Meaning</strong></th>
  </tr>

  <tr>
    <td><strong>*</strong></td>
    <td>Matches any characters</td>
  </tr>

  <tr>
    <td><strong>?</strong></td>
    <td>Matches any single character</td>
  </tr>

  <tr>
    <td><strong>[<i>characters</i>]</strong></td>
    <td>Matches any character that is a member of
    the set <i>characters</i>. The set of
    characters may also be expressed as a <i>POSIX
    character class</i> such as one of the following:
    <table>
      <caption>POSIX Character Classes</caption>
      <tbody><tr>
        <td><strong>[:alnum:]</strong></td>
        <td>Alphanumeric characters</td>
      </tr>
      <tr>
        <td><strong>[:alpha:]</strong></td>
        <td>Alphabetic characters</td>
      </tr>
      <tr>
        <td><strong>[:digit:]</strong></td>
        <td>Numerals</td>
      </tr>
      <tr>
        <td><strong>[:upper:]</strong></td>
        <td>Uppercase alphabetic characters</td>
      </tr>
      <tr>
        <td><strong>[:lower:]</strong></td>
        <td>Lowercase alphabetic characters</td>
      </tr>
    </tbody></table>
    </td>
  </tr>

  <tr>
    <td><strong>[!<i>characters</i>]</strong></td>
    <td>Matches any character that is not a member
    of the set <i>characters</i></td>
  </tr>
</tbody></table>

Some use cases:

<table>
  <tbody><tr>
    <th><strong>Pattern</strong></th>
    <th><strong>Matches</strong></th>
  </tr>

  <tr>
    <td>
    <code >*</code>
    </td>
    <td>
    <p>All filenames</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >g*</code>
    </td>
    <td>
    <p>All filenames that begin with the
    character "g"</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >b*.txt</code>
    </td>
    <td>
    <p>All filenames that begin with the
    character "b" and end with the characters
    ".txt"</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >Data???</code>
    </td>
    <td>
    <p>Any filename that begins with the
    characters "Data" followed by exactly 3 more
    characters</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >[abc]*</code>
    </td>
    <td>
    <p>Any filename that begins with "a" or "b"
    or "c" followed by any other characters</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >[[:upper:]]*</code>
    </td>
    <td>
    <p>Any filename that begins with an uppercase
    letter. This is an example of a character class.</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >BACKUP.[[:digit:]][[:digit:]]</code>
    </td>
    <td>
    <p>Another example of character classes. This pattern
    matches any filename that begins with the
    characters "BACKUP." followed by exactly two
    numerals.</p>
    </td>
  </tr>

  <tr>
    <td>
    <code >*[![:lower:]]</code>
    </td>
    <td>
    <p>Any filename that does not end with a
    lowercase letter.</p>
    </td>
  </tr>
</tbody></table>

### cp
The `cp` command copies files and directories
<table>
  <tbody><tr>
    <th><strong>Command</strong></th>
    <th><strong>Results</strong></th>
  </tr>

  <tr>
    <td><code >cp <i>file1 file2</i></code></td>
    <td>Copies the contents of <i>file1</i> into
    <i>file2</i>. If <i>file2</i> does not exist,
    it is created; <b>otherwise, <i>file2</i> is
    silently overwritten with the contents of
    <i>file1</i>.</b></td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >cp -i <i>file1 file2</i></code></span></td>
    <td>Like above however, since the "-i"
    (interactive) option is specified, if
    <i>file2</i> exists, the user is prompted
    before it is overwritten with the contents of
    <i>file1</i>.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >cp <i>file1 dir1</i></code></span></td>
    <td>Copy the contents of <i>file1</i> (into a
    file named <i>file1</i>) inside of directory
    <i>dir1</i>.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >cp -R <i>dir1 dir2</i></code></span></td>
    <td>Copy the contents of the directory
    <i>dir1</i>. If directory <i>dir2</i> does
    not exist, it is created. Otherwise, it
    creates a directory named <i>dir1</i> within
    directory <i>dir2</i>.</td>
  </tr>
</tbody></table>

### mv
The `mv` command moves or renames files and directories
<table>
  <tbody><tr>
    <th><strong>Command</strong></th>
    <th><strong>Results</strong></th>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >mv <i>file1 file2</i></code></span></td>
    <td>If <i>file2</i> does not exist, then
    <i>file1</i> is renamed <i>file2</i>. <b>If
    <i>file2</i> exists, its contents are
    silently replaced with the contents of
    <i>file1</i>.</b></td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >mv -i <i>file1 file2</i></code></span></td>
    <td>Like above however, since the "-i"
    (interactive) option is specified, if
    <i>file2</i> exists, the user is prompted
    before it is overwritten with the contents of
    <i>file1</i>.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >mv <i>file1 file2 dir1</i></code></span></td>
    <td>The files <i>file1</i> and <i>file2 </i> are
    moved to directory <i>dir1</i>. If <i>dir1</i>
    does not exist, <code class="user">mv</code> will
    exit with an error.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >mv <i>dir1 dir2</i></code></span></td>
    <td>If <i>dir2</i> does not exist, then
    <i>dir1</i> is renamed <i>dir2</i>. If
    <i>dir2</i> exists, the directory <i>dir1</i>
    is moved within directory <i>dir2</i>.</td>
  </tr>
</tbody></table>

### rm
The `rm` command removes files and directories
<table>
  <tbody><tr>
    <th><strong>Command</strong></th>
    <th><strong>Results</strong></th>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >rm <i>file1 file2</i></code></span></td>
    <td>Delete <i>file1</i> and <i>file2</i>. </td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >rm -i <i>file1 file2</i></code></span></td>
    <td>Like above however, since the "-i"
    (interactive) option is specified, the user
    is prompted before each file is deleted.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >rm -r <i>dir1 dir2</i></code></span></td>
    <td>Directories <i>dir1</i> and <i>dir2</i>
    are deleted along with all of their
    contents.</td>
  </tr>
</tbody></table>

### mkdir
The `mkdir` command creates directories
<table>

  <tbody><tr>
    <th><strong>Command</strong></th>
    <th><strong>Results</strong></th>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >cp *.txt text_files</code></span></td>
    <td>Copy all files in the current working directory with names
    ending with the characters ".txt" to an existing directory named
    <i>text_files</i>.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >mv dir1 ../*.bak dir2</code></span></td>
    <td>Move the subdirectory <i>dir1</i> and all the files ending
    in ".bak" in the current working directory's parent directory
    to an existing directory named <i>dir2</i>.</td>
  </tr>

  <tr>
    <td><span style="white-space: nowrap"><code >rm *~</code></span></td>
    <td>Delete all files in the current working directory that end
    with the character "~". Some applications create backup files
    using this naming scheme. Using this command will clean them
    out of a directory.</td>
  </tr>
</tbody></table>

### touch
The `touch` command creates files