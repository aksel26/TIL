import { AUTH_USER, LOGIN_USER, REGISTER_USER } from "../_action/types"

export default function (state = {}, action) {
  switch (action.type) {
    case LOGIN_USER:
      return { ...state, loginSuccess: action.payload }
      break
    case REGISTER_USER:
      return { ...state, register: action.payload }
      break
    case AUTH_USER:
      // index.js 에서 정보들이 모두 오기 때문에 userData라는 포괄적인 의미를 가질 수 있다.
      return { ...state, userData: action.payload }
      break
    default:
      return state
      break
  }
}
