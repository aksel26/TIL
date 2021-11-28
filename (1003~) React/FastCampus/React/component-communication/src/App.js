import logo from "./logo.svg";
import "./App.css";
import Example1 from "./components/Example1";
// import A from "./component/A"
function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        {/* <A /> */}
        <Example1 />
      </header>
    </div>
  );
}

export default App;
