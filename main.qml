import QtQuick 2.9
import QtQuick.Window 2.2
import "./qml/" as ProjectElements

Window {
    visible: true
    width: 1200
    height: 500
    title: qsTr("FishBowl")
    color: "black"

    ProjectElements.FishBowls{
       anchors.fill: parent
       number: table.numberOfFishBowls()
    }
}
