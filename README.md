# qml-sandbox

Fun with QML - just a simple project for testing fancy QML/C++ ideas.


## How to build

Open project in QtCreator and build.


## How to run

Ensure to set `%{sourceDir}` as current working directory, so that `main.qml`
can be loaded. If everything worked, you should get some output similar to this:

```
qml: Started
qml: Calling test_ArrayBuffer
qml: byteLength: 8
qml: before views: i32[1, 2] === i16[1, 0, 2, 0]
Util.readBuffer: QVariant(QByteArray, "\x01\x00\x00\x00\x02\x00\x00\x00")
Util.writeBuffer: QVariant(QByteArray, "\x01\x00\x00\x00\x02\x00\x00\x00")
Util.writeBuffer: QVariant(QByteArray, "\x04\x00\x00\x00\x02\x00\x00\x00")
qml: after  views: i32[4, 2] === i16[4, 0, 2, 0]
test_ArrayBuffer: 0ms
qml: Finished
```
