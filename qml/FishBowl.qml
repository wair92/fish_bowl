import QtQuick 2.0

Item {
    id: fishbowl
    property int number
    property int widthOfFishBowl
    property int numberOfFish
    property string fishBowlName
    property int fishBowlIndex
    width: widthOfFishBowl
    height: fishbowlImage.height

    function randomFishPosition() {
            return (Math.random() * 160) - 160;
    }

    function randomFishDirection() {
        return Math.floor(Math.random() * (2))% 2 == 0 ? "left" : "right";
    }

    Image{
        id: fishbowlImage
        source: "../images/fishbowl.png"
        width: widthOfFishBowl
        fillMode: Image.PreserveAspectFit
        Repeater{
            model: numberOfFish
            Fish{
                state: table.getFishState(fishBowlIndex, index)
                direction: randomFishDirection()
                fishballSize: widthOfFishBowl
                NumberAnimation on x {
                    loops: Animation.Infinite
                    running: true
                    from: (parent.width / 2) + randomFishPosition(); to: (parent.width / 2) + randomFishPosition()
                    duration: 60000
                }
                NumberAnimation on y {
                    loops: Animation.Infinite
                    running: true
                    from: (parent.width / 2) + randomFishPosition(); to: (parent.width / 2) + randomFishPosition()
                    duration: 60000
                }
            }
        }
    }

    Item{
        width: widthOfFishBowl / 2
        height: 50
        anchors.bottom: fishbowlImage.bottom
        anchors.horizontalCenter: fishbowlImage.horizontalCenter
        Image{
            anchors.fill: parent
            source: "../images/wood.png"


        }
        Text{
            anchors.centerIn: parent
            text: fishBowlName
        }
    }


    Component.onCompleted: {
        console.log("FishBowl width:", fishbowl.width)
    }
}
