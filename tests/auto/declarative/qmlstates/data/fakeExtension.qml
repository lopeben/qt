import Qt 4.6
Rectangle {
    id: myRectangle
    width: 100; height: 100
    color: "red"
    states: [
        State {
            name: "blue"
            PropertyChanges { target: myRectangle; color: "blue" }
        },
        State {
            name: "green"
            extend: "blue"
            PropertyChanges { target: myRectangle; color: "green" }
        }]
}