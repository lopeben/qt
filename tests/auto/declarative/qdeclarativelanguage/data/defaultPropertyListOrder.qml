import Test 1.0
import Qt 4.6

MyContainer {
    QtObject {
        property int index: 0
    }

    QtObject {
        property int index: 1
    }

    children: [
        QtObject {
            property int index: 2
        }, 
        QtObject {
            property int index: 3
        } 
    ]

    QtObject {
        property int index: 4
    }

    QtObject {
        property int index: 5
    }
}