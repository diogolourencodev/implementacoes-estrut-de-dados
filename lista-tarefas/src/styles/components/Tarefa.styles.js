import styled from 'styled-components';
export const Wrapper=styled.div`max-width:750px;margin:30px auto;padding:20px;background:${({theme})=>theme.card};border-radius:12px;`;
export const InputBox=styled.input`flex:1;padding:10px;`;
export const ActionBtn=styled.button`padding:10px;cursor:pointer;`;
export const FormBox=styled.form`display:flex;gap:10px;margin:15px 0;`;
export const FilterBox=styled.div`display:flex;gap:10px;margin:15px 0;`;
export const TaskRow=styled.li`display:flex;justify-content:space-between;padding:10px;border-bottom:1px solid #ddd;`;
export const TaskText=styled.span`text-decoration:${p=>p.done?'line-through':'none'};`;