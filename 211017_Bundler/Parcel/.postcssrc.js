//ESM : ECAM Script Moudle  import, export 방식

//CommonJS Node.js에서는 import, export를 지원하지 않음,
//require, module.exports로 사용함
//브라우저에서 사용되는 js가 아니므로 node.js(CommonJs)

// import autoprefixer from 'autoprefixer' --- ESM
// const autoprefixer = require("autoprefixer")

// export {plugins :[
//     autoprefixer
// ]}----ESM
// module.exports = {
//   plugins: [autoprefixer],
// }

module.exports = {
  plugins: [require("autoprefixer")],
}
