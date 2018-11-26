/*
 * create or replace procedure select_Emp(eno in number, employee out emp%RowType)
As

Begin
   Select EMPLOYEE_ID,FIRST_NAME,EMAIL into employee from employees
   where EMPLOYEE_ID=eno
End;
 * */
//create or replace procedure select_Emp(eno in number, employee out emp%RowType) As Begin Select EMPLOYEE_ID,FIRST_NAME,EMAIL into employee from employees where EMPLOYEE_ID=eno End;
public class C_JDBC_StoreProcedure {

	
	public static void main(String[] args) {
		
	}

}


