class Controls{
    constructor(forward,reverse,left,right)
    {
        this.forward=false;
        this.reverse=false;
        this.left=false;
        this.right=false;
        this.#addKeyboardListener()
    }
    #addKeyboardListener()
    {
        document.onkeydown=(Event)=>
        {
            switch(Event.key)
                {
                    case "ArrowLeft":
                        this.left=true;
                        break;
                    case "ArrowRight":
                        this.right=true;
                        break;
                    case "ArrowUp":
                        this.forward=true;
                        break;
                    case "ArrowDown":
                        this.reverse=true;
                        break;
                }
                console.table(this);
        }

        document.onkeyup=(Event)=>
        {
            switch(Event.key)
                {
                    case "ArrowLeft":
                        this.left=false;
                        break;
                    case "ArrowRight":
                        this.right=false;
                        break;
                    case "ArrowUp":
                        this.forward=false;
                        break;
                    case "ArrowDown":
                        this.reverse=false;
                        break;
                }
                console.table(this);
        }
    }
}