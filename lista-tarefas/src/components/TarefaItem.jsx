import {TaskRow,TaskText,ActionBtn} from '../styles/components/Tarefa.styles';
export default function TarefaItem({item,toggle,remove}){
return <TaskRow><TaskText done={item.concluida}>{item.texto}</TaskText><div><ActionBtn onClick={()=>toggle(item.id)}>✔</ActionBtn><ActionBtn onClick={()=>remove(item.id)}>🗑</ActionBtn></div></TaskRow>
}