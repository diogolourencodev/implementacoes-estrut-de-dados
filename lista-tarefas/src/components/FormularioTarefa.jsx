import {FormBox,InputBox,ActionBtn} from '../styles/components/Tarefa.styles';
export default function FormularioTarefa({valor,setValor,add}){
return <FormBox onSubmit={add}><InputBox value={valor} onChange={e=>setValor(e.target.value)} placeholder='Nova tarefa'/><ActionBtn>Adicionar</ActionBtn></FormBox>
}