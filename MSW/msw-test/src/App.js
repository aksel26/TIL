import logo from "./logo.svg";
import "./App.css";
import { useEffect, useState } from "react";

function App() {
  const [list, setList] = useState([]);
  const [content, setContent] = useState("");
  const [loading, setLoading] = useState(false);

  useEffect(() => {
    setLoading(true);
    fetch("/todos")
      .then((response) => response.json())
      .then((data) => {
        console.log("data: ", data);
        setList(data);
        setLoading(false);
      });
  }, []);

  const handleAdd = () => {
    setLoading(true);
    fetch("todos", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: content,
    }).then((res) => {
      fetch("/todos")
        .then((res) => res.json())
        .then((data) => {
          setContent("");
          setList(data);
          setLoading(false);
        });
    });
  };

  const handleContent = (e) => {
    setContent(e.target.value);
  };

  return (
    <div className="App">
      <input disabled={loading} value={content} onChange={handleContent} />
      <button onClick={handleAdd}> 추가</button>
      <ul>
        {list.map((item) => {
          return <li>{item}</li>;
        })}
      </ul>
    </div>
  );
}

export default App;
