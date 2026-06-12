import {HeaderWrap,ThemeBtn} from '../styles/components/Header.styles';
export default function Header({dark,toggle}){
return <HeaderWrap><h2>Minhas Tarefas</h2><ThemeBtn onClick={toggle}>{dark?'☀️':'🌙'}</ThemeBtn></HeaderWrap>
}