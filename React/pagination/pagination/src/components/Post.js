import React from "react"

const Post = ({ posts, loading }) => {
  if (loading) {
    return <h2>Loading...</h2>
  }

  return (
    <ul>
      {posts.map((v) => (
        <li key={v.id}>{v.title}</li>
      ))}
    </ul>
  )
}

export default Post
