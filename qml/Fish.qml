import QtQuick 2.0


Item {
    property int fishballSize
    property string direction
    property string state
    function randomFishSize() {
            return (Math.random() * (fishballSize/3.0) + 10);
    }

    function rotationAngle(){
        return direction=="left"? 180 : 0
    }

    function getImageOfFish(){
    console.log("Qml fish state: ", state)
    if(state == "alive")
        return "../images/fish.png";
    else
    {
        if(state == "dead")
        {
            return "../images/deadfish.png";
        }
        else
        {
            return "../images/yellowfish.png";
        }
    }

    }
    id: fish
    width: image.width
    height: image.height
    Image{
        id: image
        source: getImageOfFish("confused");
        width: randomFishSize()
        height: image.width
        fillMode: Image.PreserveAspectFit
        transform: Rotation{ origin.x: 50; origin.y: 50; axis { x: 0; y: 1; z: 0 } angle: rotationAngle() }
    }
}
