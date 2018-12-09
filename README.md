# pcl-java
This project seeks to be an accurate Java port of the Point Cloud Library (PCL) using the Java Native Interface (JNI).  There is no easy way to integrate this project as a dependency right now because the lack of a remote Maven repository. To get started:

- [User's Guide](https://github.com/vmoglan/pcl-java/wiki/User's-Guide)
- [Developer's Guide](https://github.com/vmoglan/pcl-java/wiki/Developer's-Guide)

After performing the necessary steps presented by the Wiki sections above, in the main class of your Java project:
```
static {
    System.loadLibrary("pcl_java");    // loads the native shared library for pcl-java
}
```
Check the `sphere-detection` example to get an idea of how the project is used.
