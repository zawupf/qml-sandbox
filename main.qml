//import QtQuick 2.5
import QtQuick 2.5

QtObject {
    id: sandbox

    Component.onCompleted: {
        console.info('Started');

        call('test_ArrayBuffer');

        util.quit();
        console.info('Finished');
    }

    function call(fn, a1, a2, a3, a4, a5, a6, a7, a8, a9) {
        var f = sandbox[fn] || function () {};
        console.info('Calling', fn);
        console.time(fn);
        f(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        console.timeEnd(fn);
    }

    function test_ArrayBuffer() {
        var buffer = new ArrayBuffer(8);
        console.log('byteLength:', buffer.byteLength);

        var v = new Int32Array(buffer);
        var v2 = new Int16Array(buffer);
        v[0] = 1;
        v[1] = 2;

        var dump = function (prefix) {
            var msg = 'views: i32[%1, %2] === i16[%3, %4, %5, %6]';
            if (prefix) {
                msg = prefix + ' ' + msg;
            }
            console.log(msg
                        .arg(v[0])
                        .arg(v[1])
                        .arg(v2[0])
                        .arg(v2[1])
                        .arg(v2[2])
                        .arg(v2[3]));
        };

        dump("before");
        util.readBuffer(buffer);
        util.writeBuffer(buffer);
        dump("after ")
    }
}
