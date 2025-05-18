add rd, rs1, rs2	  Add registers	Adds rs1 with rs2, and stores the result in rd
auipc rd,          immediate	Add upper immediate to PC	Adds the 20-bit immediate left-shifted by 12 bits to the PC and writes the result to rd
jal rd,            offset	Jump and link	Writes PC+4 to rd and jumps to PC plus the sign-extended offset
jalr rd,           offset(rs1)	Jump and link register	Writes PC+4 to rd and jumps to rs1 plus the sign-extended offset
lw rd,             offset(rs1)	Load word	Loads 4 bytes from address rs1 plus the sign-extended offset, and writes them to rd
lb rd,             offset(rs1)	Load byte	Loads 1 byte from address rs1 plus the sign-extended offset, and writes it to rd
lui rd,             immediate	Load upper immediate	Writes the 20-bit immediate, left shifted by 12 bits to rd, zeroing the lower 12 bits
addi rd,          rs1, immediate	Add immediate	Adds the 12-bit immediate to rs1 and writes the result to rd
sw rs2,         offset(rs1)	Store word	Stores 4 bytes from rs2 into address rs1 plus the sign-extended offset
sb rs2,         offset(rs1)	Store byte	Stores the least significant byte from rs2 into address rs1 plus the sign-extended offset
