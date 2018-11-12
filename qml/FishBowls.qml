import QtQuick 2.0
import QtQuick.Layouts 1.11

Item {
    id: fishBowls
    property int number
    anchors.fill: parent
    Row{
        id: row
        anchors.fill: parent
        spacing: 5
        Component.onCompleted: {
            console.log("Row x:", row.width)
        }
        Repeater{
            model: number
            FishBowl{
                id: fishBowl
                widthOfFishBowl: 1200 / fishBowls.number
                numberOfFish: table.getNumberOfFishInFishBowl(index);
                fishBowlName: table.getFishBowlName(index);
                fishBowlIndex: index
                Component.onCompleted: {
                    console.log("index:", index);
                }
            }
        }
    }
}
