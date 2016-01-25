# qml-sandbox

Fun with QML - just a simple project for testing fancy QML/C++ ideas.


## Minimum Requirements

- Qt 5.5


## How to build

Open project in QtCreator and build.


## How to run

Ensure to set `%{sourceDir}` as current working directory, so that `main.qml`
can be loaded. If everything worked, you should get some output similar to this:

```
qml: Started
qml:

Calling test_ArrayBuffer
Util.newArrayBuffer: QVariant(QByteArray, "\x00\x01\x02\x03\x04\x05\x06\x07")
qml: byteLength: 8
qml: init views: i32[50462976, 117835012] === i16[256, 770, 1284, 1798]
qml: before views: i32[1, 2] === i16[1, 0, 2, 0]
Util.readBuffer: QVariant(QByteArray, "\x01\x00\x00\x00\x02\x00\x00\x00")
Util.writeBuffer: QVariant(QByteArray, "\x01\x00\x00\x00\x02\x00\x00\x00")
Util.writeBuffer: QVariant(QByteArray, "\x04\x00\x00\x00\x02\x00\x00\x00")
qml: after  views: i32[4, 2] === i16[4, 0, 2, 0]
test_ArrayBuffer: 0ms
qml:

Calling test_Float32Array
qml: init f32: [0, 0]
qml: before f32: [1.1, 2.2]
Util.readBuffer: QVariant(QByteArray, "\xCD\xCC\x8C?\xCD\xCC\f@")
Util.writeBuffer: QVariant(QByteArray, "\xCD\xCC\x8C?\xCD\xCC\f@")
Util.writeBuffer: QVariant(QByteArray, "\x04\xCC\x8C?\xCD\xCC\f@")
qml: after  f32: [1.09998, 2.2]
test_Float32Array: 1ms
Util.quit:
qml: Finished
```
