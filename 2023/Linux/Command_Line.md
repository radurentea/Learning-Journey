
- [Learning the Shell](#learning-the-shell)
  - [Navigation](#navigation)
    - [pwd](#pwd)
    - [cd](#cd)
  - [Looking Around](#looking-around)
    - [ls](#ls)
    - [less](#less)
    - [file](#file)


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

**File Permissions** - A representation of the file's access permissions. The first character is the type of file. A "-" indicates a regular (ordinary) file. A "d" indicates a directory. The second set of three characters represent the read, write, and execution rights of the file's owner. The next three represent the rights of the file's group, and the final three represent the rights granted to everybody else. We'll discuss this in more detail in a later lesson.

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