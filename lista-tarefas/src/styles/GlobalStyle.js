import {createGlobalStyle} from 'styled-components';
export default createGlobalStyle`
*{margin:0;padding:0;box-sizing:border-box}
body{font-family:Verdana,sans-serif;background:${({theme})=>theme.background};color:${({theme})=>theme.text}}
`;