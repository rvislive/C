import express from "express"
import bodyParser from "body-parser"

const app = express()
app.use(bodyParser.json())

app.get("/", (req, res) => {
  res.send("Hello Babel with Es6 with build")
})

app.listen(4000, () => {
  console.log(`App is listening to port 4000`)
})