import {FilterBox,ActionBtn} from '../styles/components/Tarefa.styles';
export default function Filtros({setFiltro}){
return <FilterBox><ActionBtn onClick={()=>setFiltro('todas')}>Todas</ActionBtn><ActionBtn onClick={()=>setFiltro('ativas')}>Ativas</ActionBtn><ActionBtn onClick={()=>setFiltro('concluidas')}>Concluídas</ActionBtn></FilterBox>
}