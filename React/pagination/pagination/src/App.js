import logo from "./logo.svg"
import React, { useState, useEffect } from "react"
import axios from "axios"
import Posts from "./components/Post"
import Pagination from "./components/Pagination"
import "./App.css"

function App() {
  const [posts, setPosts] = useState([])

  const [loading, setLoading] = useState(false)
  const [currentPage, setCurrentPage] = useState(1)

  const [postsPerPage] = useState(10)

  useEffect(() => {
    const fetchPosts = async () => {
      setLoading(true)
      const res = await axios.get("https://jsonplaceholder.typicode.com/posts")
      setPosts(res.data)
      setLoading(false)
    }
    fetchPosts()
  }, [])

  const indexOfLasPost = currentPage * postsPerPage
  const indexOfFirstPost = indexOfLasPost - postsPerPage
  const currentPost = posts.slice(indexOfFirstPost, indexOfLasPost)

  const paginate = (pageNumber) => {
    setCurrentPage(pageNumber)
  }

  return (
    <div className="container">
      <h1>pagination Exmaplme</h1>
      <Posts posts={currentPost} loading={loading}></Posts>
      <Pagination
        postsPerPage={postsPerPage}
        totalPosts={posts.length}
        paginate={paginate}
      ></Pagination>
    </div>
  )
}

export default App
