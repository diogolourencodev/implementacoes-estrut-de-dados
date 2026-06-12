import {useState} from 'react';import {ThemeProvider} from 'styled-components';
import Header from './components/Header';import FormularioTarefa from './components/FormularioTarefa';import Filtros from './components/Filtros';import TarefaItem from './components/TarefaItem';
import GlobalStyle from './styles/GlobalStyle';import {lightTheme,darkTheme} from './styles/themes';import {Wrapper} from './styles/components/Tarefa.styles';
export default function App(){
const [dark,setDark]=useState(false);const [texto,setTexto]=useState('');const [filtro,setFiltro]=useState('todas');const [lista,setLista]=useState([]);
const add=e=>{e.preventDefault();if(!texto.trim())return;setLista([...lista,{id:crypto.randomUUID(),texto,concluida:false}]);setTexto('');};
const toggle=id=>setLista(lista.map(t=>t.id===id?{...t,concluida:!t.concluida}:t));
const remove=id=>setLista(lista.filter(t=>t.id!==id));
const view=lista.filter(t=>filtro==='ativas'?!t.concluida:filtro==='concluidas'?t.concluida:true);
return <ThemeProvider theme={dark?darkTheme:lightTheme}><GlobalStyle/><Wrapper><Header dark={dark} toggle={()=>setDark(!dark)}/><FormularioTarefa valor={texto} setValor={setTexto} add={add}/><Filtros setFiltro={setFiltro}/><ul>{view.map(i=><TarefaItem key={i.id} item={i} toggle={toggle} remove={remove}/>)}</ul></Wrapper></ThemeProvider>
}