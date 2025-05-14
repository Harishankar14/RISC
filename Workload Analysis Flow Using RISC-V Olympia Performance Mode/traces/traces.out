----------------
IN: _start
0x0001053c:  024000ef          jal                     ra,36                   # 0x10560

----------------
IN: 
0x00010560:  0006d197          auipc                   gp,109                  # 0x7d560
0x00010564:  b4018193          addi                    gp,gp,-1216
0x00010568:  8082              ret                     

----------------
IN: _start
0x00010540:  87aa              mv                      a5,a0
0x00010542:  00000517          auipc                   a0,0                    # 0x10542
0x00010546:  01c50513          addi                    a0,a0,28
0x0001054a:  6582              ld                      a1,0(sp)
0x0001054c:  0030              addi                    a2,sp,8
0x0001054e:  ff017113          andi                    sp,sp,-16
0x00010552:  4681              mv                      a3,zero
0x00010554:  4701              mv                      a4,zero
0x00010556:  880a              mv                      a6,sp
0x00010558:  168000ef          jal                     ra,360                  # 0x106c0

----------------
IN: __libc_start_main
0x000106c0:  00158713          addi                    a4,a1,1
0x000106c4:  7159              addi                    sp,sp,-112
0x000106c6:  070e              slli                    a4,a4,3
0x000106c8:  e8ca              sd                      s2,80(sp)
0x000106ca:  e4ce              sd                      s3,72(sp)
0x000106cc:  e0d2              sd                      s4,64(sp)
0x000106ce:  fc56              sd                      s5,56(sp)
0x000106d0:  f85a              sd                      s6,48(sp)
0x000106d2:  f486              sd                      ra,104(sp)
0x000106d4:  f0a2              sd                      s0,96(sp)
0x000106d6:  eca6              sd                      s1,88(sp)
0x000106d8:  f45e              sd                      s7,40(sp)
0x000106da:  f062              sd                      s8,32(sp)
0x000106dc:  ec66              sd                      s9,24(sp)
0x000106de:  9732              add                     a4,a4,a2
0x000106e0:  000a1a17          auipc                   s4,161                  # 0xb16e0
0x000106e4:  ee0a0a13          addi                    s4,s4,-288
0x000106e8:  8abe              mv                      s5,a5
0x000106ea:  892e              mv                      s2,a1
0x000106ec:  89b2              mv                      s3,a2
0x000106ee:  8b2a              mv                      s6,a0
0x000106f0:  00069797          auipc                   a5,105                  # 0x796f0
0x000106f4:  7507b823          sd                      a6,1872(a5)
0x000106f8:  00ea3023          sd                      a4,0(s4)
0x000106fc:  6314              ld                      a3,0(a4)
0x000106fe:  0721              addi                    a4,a4,8
0x00010700:  fef5              bnez                    a3,-4                   # 0x106fc

----------------
IN: __libc_start_main
0x000106fc:  6314              ld                      a3,0(a4)
0x000106fe:  0721              addi                    a4,a4,8
0x00010700:  fef5              bnez                    a3,-4                   # 0x106fc

----------------
IN: __libc_start_main
0x00010702:  853a              mv                      a0,a4
0x00010704:  7190b0ef          jal                     ra,48920                # 0x1c61c

----------------
IN: _dl_aux_init
0x0001c61c:  7121              addi                    sp,sp,-448
0x0001c61e:  fb22              sd                      s0,432(sp)
0x0001c620:  f726              sd                      s1,424(sp)
0x0001c622:  842a              mv                      s0,a0
0x0001c624:  ff06              sd                      ra,440(sp)
0x0001c626:  1a000613          addi                    a2,zero,416
0x0001c62a:  00095497          auipc                   s1,149                  # 0xb162a
0x0001c62e:  fde48493          addi                    s1,s1,-34
0x0001c632:  850a              mv                      a0,sp
0x0001c634:  4581              mv                      a1,zero
0x0001c636:  e080              sd                      s0,0(s1)
0x0001c638:  e00fd0ef          jal                     ra,-10752               # 0x19c38

----------------
IN: memset
0x00019c38:  471d              addi                    a4,zero,7
0x00019c3a:  87aa              mv                      a5,a0
0x00019c3c:  06c77863          bleu                    a2,a4,112               # 0x19cac

----------------
IN: memset
0x00019c40:  010106b7          lui                     a3,4112
0x00019c44:  10168693          addi                    a3,a3,257
0x00019c48:  02069713          slli                    a4,a3,32
0x00019c4c:  9736              add                     a4,a4,a3
0x00019c4e:  0ff5f813          andi                    a6,a1,255
0x00019c52:  00757693          andi                    a3,a0,7
0x00019c56:  02e80733          mul                     a4,a6,a4
0x00019c5a:  c6ad              beqz                    a3,106                  # 0x19cc4

----------------
IN: memset
0x00019cc4:  00665693          srli                    a3,a2,6
0x00019cc8:  f6cd              bnez                    a3,-86                  # 0x19c72

----------------
IN: memset
0x00019c72:  00669813          slli                    a6,a3,6
0x00019c76:  983e              add                     a6,a6,a5
0x00019c78:  88be              mv                      a7,a5
0x00019c7a:  e398              sd                      a4,0(a5)
0x00019c7c:  e798              sd                      a4,8(a5)
0x00019c7e:  eb98              sd                      a4,16(a5)
0x00019c80:  ef98              sd                      a4,24(a5)
0x00019c82:  f398              sd                      a4,32(a5)
0x00019c84:  f798              sd                      a4,40(a5)
0x00019c86:  fb98              sd                      a4,48(a5)
0x00019c88:  ff98              sd                      a4,56(a5)
0x00019c8a:  04078793          addi                    a5,a5,64
0x00019c8e:  ff0796e3          bne                     a5,a6,-20               # 0x19c7a

----------------
IN: memset
0x00019c7a:  e398              sd                      a4,0(a5)
0x00019c7c:  e798              sd                      a4,8(a5)
0x00019c7e:  eb98              sd                      a4,16(a5)
0x00019c80:  ef98              sd                      a4,24(a5)
0x00019c82:  f398              sd                      a4,32(a5)
0x00019c84:  f798              sd                      a4,40(a5)
0x00019c86:  fb98              sd                      a4,48(a5)
0x00019c88:  ff98              sd                      a4,56(a5)
0x00019c8a:  04078793          addi                    a5,a5,64
0x00019c8e:  ff0796e3          bne                     a5,a6,-20               # 0x19c7a

----------------
IN: memset
0x00019c92:  069a              slli                    a3,a3,6
0x00019c94:  96c6              add                     a3,a3,a7
0x00019c96:  00365793          srli                    a5,a2,3
0x00019c9a:  8b9d              andi                    a5,a5,7
0x00019c9c:  cb9d              beqz                    a5,54                   # 0x19cd2

----------------
IN: memset
0x00019c9e:  078e              slli                    a5,a5,3
0x00019ca0:  97b6              add                     a5,a5,a3
0x00019ca2:  e298              sd                      a4,0(a3)
0x00019ca4:  06a1              addi                    a3,a3,8
0x00019ca6:  fed79ee3          bne                     a5,a3,-4                # 0x19ca2

----------------
IN: memset
0x00019ca2:  e298              sd                      a4,0(a3)
0x00019ca4:  06a1              addi                    a3,a3,8
0x00019ca6:  fed79ee3          bne                     a5,a3,-4                # 0x19ca2

----------------
IN: memset
0x00019caa:  8a1d              andi                    a2,a2,7
0x00019cac:  0ff5f593          andi                    a1,a1,255
0x00019cb0:  00c78733          add                     a4,a5,a2
0x00019cb4:  c619              beqz                    a2,14                   # 0x19cc2

----------------
IN: memset
0x00019cc2:  8082              ret                     

----------------
IN: _dl_aux_init
0x0001c63c:  6705              lui                     a4,1
0x0001c63e:  601c              ld                      a5,0(s0)
0x0001c640:  86ba              mv                      a3,a4
0x0001c642:  ffff4617          auipc                   a2,-12                  # 0x10642
0x0001c646:  efa60613          addi                    a2,a2,-262
0x0001c64a:  80070713          addi                    a4,a4,-2048
0x0001c64e:  e4b2              sd                      a2,72(sp)
0x0001c650:  f836              sd                      a3,48(sp)
0x0001c652:  ef3a              sd                      a4,408(sp)
0x0001c654:  c3dd              beqz                    a5,166                  # 0x1c6fa

----------------
IN: _dl_aux_init
0x0001c656:  882a              mv                      a6,a0
0x0001c658:  03300713          addi                    a4,zero,51
0x0001c65c:  00f76663          bgtu                    a5,a4,12                # 0x1c668

----------------
IN: _dl_aux_init
0x0001c660:  6414              ld                      a3,8(s0)
0x0001c662:  078e              slli                    a5,a5,3
0x0001c664:  97c2              add                     a5,a5,a6
0x0001c666:  e394              sd                      a3,0(a5)
0x0001c668:  681c              ld                      a5,16(s0)
0x0001c66a:  0441              addi                    s0,s0,16
0x0001c66c:  fbe5              bnez                    a5,-16                  # 0x1c65c

----------------
IN: _dl_aux_init
0x0001c65c:  00f76663          bgtu                    a5,a4,12                # 0x1c668

----------------
IN: _dl_aux_init
0x0001c66e:  76c2              ld                      a3,48(sp)
0x0001c670:  464a              lw                      a2,144(sp)
0x0001c672:  677a              ld                      a4,408(sp)
0x0001c674:  68aa              ld                      a7,136(sp)
0x0001c676:  72ea              ld                      t0,184(sp)
0x0001c678:  7fe6              ld                      t6,120(sp)
0x0001c67a:  6f0a              ld                      t5,128(sp)
0x0001c67c:  6ece              ld                      t4,208(sp)
0x0001c67e:  7e2e              ld                      t3,232(sp)
0x0001c680:  734e              ld                      t1,240(sp)
0x0001c682:  682e              ld                      a6,200(sp)
0x0001c684:  6532              ld                      a0,264(sp)
0x0001c686:  67e2              ld                      a5,24(sp)
0x0001c688:  75a2              ld                      a1,40(sp)
0x0001c68a:  d8d0              sw                      a2,52(s1)
0x0001c68c:  0005f617          auipc                   a2,95                   # 0x7b68c
0x0001c690:  2dc60613          addi                    a2,a2,732
0x0001c694:  0314a823          sw                      a7,48(s1)
0x0001c698:  00060397          auipc                   t2,96                   # 0x7c698
0x0001c69c:  8c53a823          sw                      t0,-1840(t2)
0x0001c6a0:  01f4b423          sd                      t6,8(s1)
0x0001c6a4:  01e4b823          sd                      t5,16(s1)
0x0001c6a8:  01d4bc23          sd                      t4,24(s1)
0x0001c6ac:  03c4b023          sd                      t3,32(s1)
0x0001c6b0:  0264b423          sd                      t1,40(s1)
0x0001c6b4:  0005d897          auipc                   a7,93                   # 0x796b4
0x0001c6b8:  7508ba23          sd                      a6,1876(a7)
0x0001c6bc:  fc88              sd                      a0,56(s1)
0x0001c6be:  e0bc              sd                      a5,64(s1)
0x0001c6c0:  e4ac              sd                      a1,72(s1)
0x0001c6c2:  e214              sd                      a3,0(a2)
0x0001c6c4:  e618              sd                      a4,8(a2)
0x0001c6c6:  e78d              bnez                    a5,42                   # 0x1c6f0

----------------
IN: _dl_aux_init
0x0001c6f0:  70fa              ld                      ra,440(sp)
0x0001c6f2:  745a              ld                      s0,432(sp)
0x0001c6f4:  74ba              ld                      s1,424(sp)
0x0001c6f6:  6139              addi                    sp,sp,448
0x0001c6f8:  8082              ret                     

----------------
IN: __libc_start_main
0x00010708:  000a3503          ld                      a0,0(s4)
0x0001070c:  0006a417          auipc                   s0,106                  # 0x7a70c
0x00010710:  60c43403          ld                      s0,1548(s0)
0x00010714:  0006ab97          auipc                   s7,106                  # 0x7a714
0x00010718:  59cbbb83          ld                      s7,1436(s7)
0x0001071c:  2130b0ef          jal                     ra,47634                # 0x1c12e

----------------
IN: __tunables_init
0x0001c12e:  00060797          auipc                   a5,96                   # 0x7c12e
0x0001c132:  e3a7a783          lw                      a5,-454(a5)
0x0001c136:  30079763          bnez                    a5,782                  # 0x1c444

----------------
IN: __tunables_init
0x0001c13a:  c0010113          addi                    sp,sp,-1024
0x0001c13e:  3e913423          sd                      s1,1000(sp)
0x0001c142:  0024              addi                    s1,sp,8
0x0001c144:  3d313c23          sd                      s3,984(sp)
0x0001c148:  0c000613          addi                    a2,zero,192
0x0001c14c:  89aa              mv                      s3,a0
0x0001c14e:  4581              mv                      a1,zero
0x0001c150:  8526              mv                      a0,s1
0x0001c152:  3e813823          sd                      s0,1008(sp)
0x0001c156:  3f213023          sd                      s2,992(sp)
0x0001c15a:  3d413823          sd                      s4,976(sp)
0x0001c15e:  3e113c23          sd                      ra,1016(sp)
0x0001c162:  3d513423          sd                      s5,968(sp)
0x0001c166:  3d613023          sd                      s6,960(sp)
0x0001c16a:  3b713c23          sd                      s7,952(sp)
0x0001c16e:  3b813823          sd                      s8,944(sp)
0x0001c172:  03d00a13          addi                    s4,zero,61
0x0001c176:  ac3fd0ef          jal                     ra,-9534                # 0x19c38

----------------
IN: memset
0x00019cd2:  87b6              mv                      a5,a3
0x00019cd4:  8a1d              andi                    a2,a2,7
0x00019cd6:  bfd9              j                       -42                     # 0x19cac

----------------
IN: memset
0x00019cac:  0ff5f593          andi                    a1,a1,255
0x00019cb0:  00c78733          add                     a4,a5,a2
0x00019cb4:  c619              beqz                    a2,14                   # 0x19cc2

----------------
IN: __tunables_init
0x0001c17a:  497d              addi                    s2,zero,31
0x0001c17c:  844e              mv                      s0,s3
0x0001c17e:  08098563          beqz                    s3,138                  # 0x1c208

----------------
IN: __tunables_init
0x0001c182:  0009b583          ld                      a1,0(s3)
0x0001c186:  c1c9              beqz                    a1,130                  # 0x1c208

----------------
IN: __tunables_init
0x0001c188:  0005c703          lbu                     a4,0(a1)
0x0001c18c:  0421              addi                    s0,s0,8
0x0001c18e:  4781              mv                      a5,zero
0x0001c190:  eb01              bnez                    a4,16                   # 0x1c1a0

----------------
IN: __tunables_init
0x0001c1a0:  0785              addi                    a5,a5,1
0x0001c1a2:  ff4719e3          bne                     a4,s4,-14               # 0x1c194

----------------
IN: __tunables_init
0x0001c194:  00f58733          add                     a4,a1,a5
0x0001c198:  00074703          lbu                     a4,0(a4)
0x0001c19c:  12070a63          beqz                    a4,308                  # 0x1c2d0

----------------
IN: __tunables_init
0x0001c1a6:  00f589b3          add                     s3,a1,a5
0x0001c1aa:  00034717          auipc                   a4,52                   # 0x501aa
0x0001c1ae:  53e70713          addi                    a4,a4,1342
0x0001c1b2:  87ae              mv                      a5,a1
0x0001c1b4:  04700613          addi                    a2,zero,71
0x0001c1b8:  a039              j                       14                      # 0x1c1c6

----------------
IN: __tunables_init
0x0001c1c6:  0007c683          lbu                     a3,0(a5)
0x0001c1ca:  0705              addi                    a4,a4,1
0x0001c1cc:  0785              addi                    a5,a5,1
0x0001c1ce:  f6f5              bnez                    a3,-20                  # 0x1c1ba

----------------
IN: __tunables_init
0x0001c1ba:  00c69b63          bne                     a3,a2,22                # 0x1c1d0

----------------
IN: __tunables_init
0x0001c1d0:  0003a897          auipc                   a7,58                   # 0x561d0
0x0001c1d4:  dd088893          addi                    a7,a7,-560
0x0001c1d8:  4801              mv                      a6,zero
0x0001c1da:  0005d317          auipc                   t1,93                   # 0x791da
0x0001c1de:  cae30313          addi                    t1,t1,-850
0x0001c1e2:  4e21              addi                    t3,zero,8
0x0001c1e4:  0008e503          lwu                     a0,0(a7)
0x0001c1e8:  86ae              mv                      a3,a1
0x0001c1ea:  051e              slli                    a0,a0,7
0x0001c1ec:  06950793          addi                    a5,a0,105
0x0001c1f0:  979a              add                     a5,a5,t1
0x0001c1f2:  0007c703          lbu                     a4,0(a5)
0x0001c1f6:  e759              bnez                    a4,142                  # 0x1c284

----------------
IN: __tunables_init
0x0001c284:  0006c603          lbu                     a2,0(a3)
0x0001c288:  0785              addi                    a5,a5,1
0x0001c28a:  0685              addi                    a3,a3,1
0x0001c28c:  d635              beqz                    a2,-148                 # 0x1c1f8

----------------
IN: __tunables_init
0x0001c28e:  f6e615e3          bne                     a2,a4,-150              # 0x1c1f8

----------------
IN: __tunables_init
0x0001c1f8:  2805              addiw                   a6,a6,1
0x0001c1fa:  0891              addi                    a7,a7,4
0x0001c1fc:  ffc814e3          bne                     a6,t3,-24               # 0x1c1e4

----------------
IN: __tunables_init
0x0001c1e4:  0008e503          lwu                     a0,0(a7)
0x0001c1e8:  86ae              mv                      a3,a1
0x0001c1ea:  051e              slli                    a0,a0,7
0x0001c1ec:  06950793          addi                    a5,a0,105
0x0001c1f0:  979a              add                     a5,a5,t1
0x0001c1f2:  0007c703          lbu                     a4,0(a5)
0x0001c1f6:  e759              bnez                    a4,142                  # 0x1c284

----------------
IN: __tunables_init
0x0001c200:  89a2              mv                      s3,s0
0x0001c202:  844e              mv                      s0,s3
0x0001c204:  f6099fe3          bnez                    s3,-130                 # 0x1c182

----------------
IN: __tunables_init
0x0001c292:  0007c703          lbu                     a4,0(a5)
0x0001c296:  f77d              bnez                    a4,-18                  # 0x1c284

----------------
IN: __tunables_init
0x0001c1be:  00074603          lbu                     a2,0(a4)
0x0001c1c2:  10060963          beqz                    a2,274                  # 0x1c2d4

----------------
IN: __tunables_init
0x0001c208:  00060797          auipc                   a5,96                   # 0x7c208
0x0001c20c:  d607a783          lw                      a5,-672(a5)
0x0001c210:  e3b9              bnez                    a5,70                   # 0x1c256

----------------
IN: __tunables_init
0x0001c212:  0c810913          addi                    s2,sp,200
0x0001c216:  a021              j                       8                       # 0x1c21e

----------------
IN: __tunables_init
0x0001c21e:  6080              ld                      s0,0(s1)
0x0001c220:  8522              mv                      a0,s0
0x0001c222:  d87d              beqz                    s0,-10                  # 0x1c218

----------------
IN: __tunables_init
0x0001c218:  04e1              addi                    s1,s1,24
0x0001c21a:  03248e63          beq                     s1,s2,60                # 0x1c256

----------------
IN: __tunables_init
0x0001c256:  3f813083          ld                      ra,1016(sp)
0x0001c25a:  3f013403          ld                      s0,1008(sp)
0x0001c25e:  3e813483          ld                      s1,1000(sp)
0x0001c262:  3e013903          ld                      s2,992(sp)
0x0001c266:  3d813983          ld                      s3,984(sp)
0x0001c26a:  3d013a03          ld                      s4,976(sp)
0x0001c26e:  3c813a83          ld                      s5,968(sp)
0x0001c272:  3c013b03          ld                      s6,960(sp)
0x0001c276:  3b813b83          ld                      s7,952(sp)
0x0001c27a:  3b013c03          ld                      s8,944(sp)
0x0001c27e:  40010113          addi                    sp,sp,1024
0x0001c282:  8082              ret                     

----------------
IN: __libc_start_main
0x00010720:  e4dff0ef          jal                     ra,-436                 # 0x1056c

----------------
IN: _dl_relocate_static_pie
0x0001056c:  8082              ret                     

----------------
IN: __libc_start_main
0x00010724:  05747163          bleu                    s7,s0,66                # 0x10766

----------------
IN: __libc_start_main
0x00010728:  03a00c13          addi                    s8,zero,58
0x0001072c:  000a1c97          auipc                   s9,161                  # 0xb172c
0x00010730:  eecc8c93          addi                    s9,s9,-276
0x00010734:  a831              j                       28                      # 0x10750

----------------
IN: __libc_start_main
0x00010750:  00846703          lwu                     a4,8(s0)
0x00010754:  6004              ld                      s1,0(s0)
0x00010756:  ff8700e3          beq                     a4,s8,-32               # 0x10736

----------------
IN: __libc_start_main
0x00010736:  681c              ld                      a5,16(s0)
0x00010738:  000cb503          ld                      a0,0(s9)
0x0001073c:  4601              mv                      a2,zero
0x0001073e:  0000b597          auipc                   a1,11                   # 0x1b73e
0x00010742:  85658593          addi                    a1,a1,-1962
0x00010746:  9782              jalr                    ra,a5,0

----------------
IN: __libc_memcpy_ifunc
0x00019be8:  c1b9              beqz                    a1,70                   # 0x19c2e

----------------
IN: __libc_memcpy_ifunc
0x00019bea:  1101              addi                    sp,sp,-32
0x00019bec:  4815              addi                    a6,zero,5
0x00019bee:  ec06              sd                      ra,24(sp)
0x00019bf0:  87ae              mv                      a5,a1
0x00019bf2:  4701              mv                      a4,zero
0x00019bf4:  4681              mv                      a3,zero
0x00019bf6:  4601              mv                      a2,zero
0x00019bf8:  4585              addi                    a1,zero,1
0x00019bfa:  850a              mv                      a0,sp
0x00019bfc:  e042              sd                      a6,0(sp)
0x00019bfe:  9782              jalr                    ra,a5,0

----------------
IN: __riscv_hwprobe
0x0001af94:  00060797          auipc                   a5,96                   # 0x7af94
0x0001af98:  c9c7b783          ld                      a5,-868(a5)
0x0001af9c:  639c              ld                      a5,0(a5)
0x0001af9e:  7179              addi                    sp,sp,-48
0x0001afa0:  f022              sd                      s0,32(sp)
0x0001afa2:  ec26              sd                      s1,24(sp)
0x0001afa4:  e84a              sd                      s2,16(sp)
0x0001afa6:  e44e              sd                      s3,8(sp)
0x0001afa8:  e052              sd                      s4,0(sp)
0x0001afaa:  f406              sd                      ra,40(sp)
0x0001afac:  8a2a              mv                      s4,a0
0x0001afae:  842e              mv                      s0,a1
0x0001afb0:  84b2              mv                      s1,a2
0x0001afb2:  8936              mv                      s2,a3
0x0001afb4:  89ba              mv                      s3,a4
0x0001afb6:  c385              beqz                    a5,32                   # 0x1afd6

----------------
IN: __riscv_hwprobe
0x0001afd6:  02099713          slli                    a4,s3,32
0x0001afda:  8552              mv                      a0,s4
0x0001afdc:  85a2              mv                      a1,s0
0x0001afde:  8626              mv                      a2,s1
0x0001afe0:  86ca              mv                      a3,s2
0x0001afe2:  9301              srli                    a4,a4,32
0x0001afe4:  10200893          addi                    a7,zero,258
0x0001afe8:  00000073          ecall                   

----------------
IN: __riscv_hwprobe
0x0001afec:  2501              sext.w                  a0,a0
0x0001afee:  bfd1              j                       -44                     # 0x1afc2

----------------
IN: __riscv_hwprobe
0x0001afc2:  70a2              ld                      ra,40(sp)
0x0001afc4:  7402              ld                      s0,32(sp)
0x0001afc6:  64e2              ld                      s1,24(sp)
0x0001afc8:  6942              ld                      s2,16(sp)
0x0001afca:  69a2              ld                      s3,8(sp)
0x0001afcc:  6a02              ld                      s4,0(sp)
0x0001afce:  40a0053b          negw                    a0,a0
0x0001afd2:  6145              addi                    sp,sp,48
0x0001afd4:  8082              ret                     

----------------
IN: __libc_memcpy_ifunc
0x00019c00:  e909              bnez                    a0,18                   # 0x19c12

----------------
IN: __libc_memcpy_ifunc
0x00019c02:  6782              ld                      a5,0(sp)
0x00019c04:  0007c763          bltz                    a5,14                   # 0x19c12

----------------
IN: __libc_memcpy_ifunc
0x00019c08:  67a2              ld                      a5,8(sp)
0x00019c0a:  470d              addi                    a4,zero,3
0x00019c0c:  8b9d              andi                    a5,a5,7
0x00019c0e:  00e78963          beq                     a5,a4,18                # 0x19c20

----------------
IN: __libc_memcpy_ifunc
0x00019c20:  60e2              ld                      ra,24(sp)
0x00019c22:  00000517          auipc                   a0,0                    # 0x19c22
0x00019c26:  3fa50513          addi                    a0,a0,1018
0x00019c2a:  6105              addi                    sp,sp,32
0x00019c2c:  8082              ret                     

----------------
IN: __libc_start_main
0x00010748:  0461              addi                    s0,s0,24
0x0001074a:  e088              sd                      a0,0(s1)
0x0001074c:  01747d63          bleu                    s7,s0,26                # 0x10766

----------------
IN: __libc_start_main
0x00010766:  162000ef          jal                     ra,354                  # 0x108c8

----------------
IN: __libc_setup_tls
0x000108c8:  7119              addi                    sp,sp,-128
0x000108ca:  0006a797          auipc                   a5,106                  # 0x7a8ca
0x000108ce:  71e7b783          ld                      a5,1822(a5)
0x000108d2:  f4a6              sd                      s1,104(sp)
0x000108d4:  fc86              sd                      ra,120(sp)
0x000108d6:  6384              ld                      s1,0(a5)
0x000108d8:  f8a2              sd                      s0,112(sp)
0x000108da:  f0ca              sd                      s2,96(sp)
0x000108dc:  ecce              sd                      s3,88(sp)
0x000108de:  e8d2              sd                      s4,80(sp)
0x000108e0:  e4d6              sd                      s5,72(sp)
0x000108e2:  e0da              sd                      s6,64(sp)
0x000108e4:  fc5e              sd                      s7,56(sp)
0x000108e6:  f862              sd                      s8,48(sp)
0x000108e8:  f466              sd                      s9,40(sp)
0x000108ea:  f06a              sd                      s10,32(sp)
0x000108ec:  ec6e              sd                      s11,24(sp)
0x000108ee:  6280b0ef          jal                     ra,46632                # 0x1bf16

----------------
IN: __tls_pre_init_tp
0x0001bf16:  0005f697          auipc                   a3,95                   # 0x7af16
0x0001bf1a:  ffa6b683          ld                      a3,-6(a3)
0x0001bf1e:  0005f717          auipc                   a4,95                   # 0x7af1e
0x0001bf22:  d3273703          ld                      a4,-718(a4)
0x0001bf26:  0005f797          auipc                   a5,95                   # 0x7af26
0x0001bf2a:  dba7b783          ld                      a5,-582(a5)
0x0001bf2e:  e694              sd                      a3,8(a3)
0x0001bf30:  e294              sd                      a3,0(a3)
0x0001bf32:  e718              sd                      a4,8(a4)
0x0001bf34:  e318              sd                      a4,0(a4)
0x0001bf36:  e79c              sd                      a5,8(a5)
0x0001bf38:  e39c              sd                      a5,0(a5)
0x0001bf3a:  8082              ret                     

----------------
IN: __libc_setup_tls
0x000108f2:  0006a797          auipc                   a5,106                  # 0x7a8f2
0x000108f6:  64e7b783          ld                      a5,1614(a5)
0x000108fa:  6398              ld                      a4,0(a5)
0x000108fc:  0006a797          auipc                   a5,106                  # 0x7a8fc
0x00010900:  53c7b783          ld                      a5,1340(a5)
0x00010904:  639c              ld                      a5,0(a5)
0x00010906:  00371693          slli                    a3,a4,3
0x0001090a:  8e99              sub                     a3,a3,a4
0x0001090c:  068e              slli                    a3,a3,3
0x0001090e:  96be              add                     a3,a3,a5
0x00010910:  14d7f063          bleu                    a3,a5,320               # 0x10a50

----------------
IN: __libc_setup_tls
0x00010914:  461d              addi                    a2,zero,7
0x00010916:  a029              j                       10                      # 0x10920

----------------
IN: __libc_setup_tls
0x00010920:  4398              lw                      a4,0(a5)
0x00010922:  fec71be3          bne                     a4,a2,-10               # 0x10918

----------------
IN: __libc_setup_tls
0x00010918:  03878793          addi                    a5,a5,56
0x0001091c:  12d7fa63          bleu                    a3,a5,308               # 0x10a50

----------------
IN: __libc_setup_tls
0x00010926:  0004ba83          ld                      s5,0(s1)
0x0001092a:  6b90              ld                      a2,16(a5)
0x0001092c:  0307bb83          ld                      s7,48(a5)
0x00010930:  02000713          addi                    a4,zero,32
0x00010934:  0287b983          ld                      s3,40(a5)
0x00010938:  0207bb03          ld                      s6,32(a5)
0x0001093c:  9ab2              add                     s5,s5,a2
0x0001093e:  8a5e              mv                      s4,s7
0x00010940:  12ebe763          bgtu                    a4,s7,302               # 0x10a6e

----------------
IN: __libc_setup_tls
0x00010a6e:  8a3a              mv                      s4,a4
0x00010a70:  bdd1              j                       -300                    # 0x10944

----------------
IN: __libc_setup_tls
0x00010944:  4501              mv                      a0,zero
0x00010946:  fffa0c93          addi                    s9,s4,-1
0x0001094a:  41400c33          neg                     s8,s4
0x0001094e:  7ff0a0ef          jal                     ra,45054                # 0x1b94c

----------------
IN: _dl_tls_static_surplus_init
0x0001b94c:  7179              addi                    sp,sp,-48
0x0001b94e:  f022              sd                      s0,32(sp)
0x0001b950:  0020              addi                    s0,sp,8
0x0001b952:  85a2              mv                      a1,s0
0x0001b954:  ec26              sd                      s1,24(sp)
0x0001b956:  4601              mv                      a2,zero
0x0001b958:  84aa              mv                      s1,a0
0x0001b95a:  4575              addi                    a0,zero,29
0x0001b95c:  f406              sd                      ra,40(sp)
0x0001b95e:  3f1000ef          jal                     ra,3056                 # 0x1c54e

----------------
IN: __tunable_get_val
0x0001c54e:  1502              slli                    a0,a0,32
0x0001c550:  9101              srli                    a0,a0,32
0x0001c552:  0005d797          auipc                   a5,93                   # 0x79552
0x0001c556:  93678793          addi                    a5,a5,-1738
0x0001c55a:  00751713          slli                    a4,a0,7
0x0001c55e:  00e786b3          add                     a3,a5,a4
0x0001c562:  0306a803          lw                      a6,48(a3)
0x0001c566:  4889              addi                    a7,zero,2
0x0001c568:  0308e463          bgtu                    a6,a7,40                # 0x1c590

----------------
IN: __tunable_get_val
0x0001c56c:  6eb8              ld                      a4,88(a3)
0x0001c56e:  00080f63          beqz                    a6,30                   # 0x1c58c

----------------
IN: __tunable_get_val
0x0001c572:  e198              sd                      a4,0(a1)
0x0001c574:  051e              slli                    a0,a0,7
0x0001c576:  00a78733          add                     a4,a5,a0
0x0001c57a:  06874703          lbu                     a4,104(a4)
0x0001c57e:  c711              beqz                    a4,12                   # 0x1c58a

----------------
IN: __tunable_get_val
0x0001c58a:  8082              ret                     

----------------
IN: _dl_tls_static_surplus_init
0x0001b962:  85a2              mv                      a1,s0
0x0001b964:  6422              ld                      s0,8(sp)
0x0001b966:  4601              mv                      a2,zero
0x0001b968:  4579              addi                    a0,zero,30
0x0001b96a:  3e5000ef          jal                     ra,3044                 # 0x1c54e

----------------
IN: _dl_tls_static_surplus_init
0x0001b96e:  66a2              ld                      a3,8(sp)
0x0001b970:  4785              addi                    a5,zero,1
0x0001b972:  e011              bnez                    s0,4                    # 0x1b976

----------------
IN: _dl_tls_static_surplus_init
0x0001b976:  0017c613          xori                    a2,a5,1
0x0001b97a:  02966d63          bgtu                    s1,a2,58                # 0x1b9b4

----------------
IN: _dl_tls_static_surplus_init
0x0001b97e:  9fa5              addw                    a5,a5,s1
0x0001b980:  fff7871b          addiw                   a4,a5,-1
0x0001b984:  9f3d              addw                    a4,a4,a5
0x0001b986:  0037179b          slliw                   a5,a4,3
0x0001b98a:  9fb9              addw                    a5,a5,a4
0x0001b98c:  0047979b          slliw                   a5,a5,4
0x0001b990:  70a2              ld                      ra,40(sp)
0x0001b992:  7402              ld                      s0,32(sp)
0x0001b994:  9fb5              addw                    a5,a5,a3
0x0001b996:  0907879b          addiw                   a5,a5,144
0x0001b99a:  0005f617          auipc                   a2,95                   # 0x7a99a
0x0001b99e:  52663603          ld                      a2,1318(a2)
0x0001b9a2:  0005f717          auipc                   a4,95                   # 0x7a9a2
0x0001b9a6:  37e73703          ld                      a4,894(a4)
0x0001b9aa:  e21c              sd                      a5,0(a2)
0x0001b9ac:  e314              sd                      a3,0(a4)
0x0001b9ae:  64e2              ld                      s1,24(sp)
0x0001b9b0:  6145              addi                    sp,sp,48
0x0001b9b2:  8082              ret                     

----------------
IN: __libc_setup_tls
0x00010952:  140b8263          beqz                    s7,324                  # 0x10a96

----------------
IN: __libc_setup_tls
0x00010956:  fffb8d93          addi                    s11,s7,-1
0x0001095a:  037df7b3          remu                    a5,s11,s7
0x0001095e:  895e              mv                      s2,s7
0x00010960:  40fd8db3          sub                     s11,s11,a5
0x00010964:  e46e              sd                      s11,8(sp)
0x00010966:  0009cd17          auipc                   s10,156                 # 0xac966
0x0001096a:  f7ad0d13          addi                    s10,s10,-134
0x0001096e:  000d3503          ld                      a0,0(s10)
0x00010972:  76050513          addi                    a0,a0,1888
0x00010976:  954e              add                     a0,a0,s3
0x00010978:  9552              add                     a0,a0,s4
0x0001097a:  956e              add                     a0,a0,s11
0x0001097c:  41d0b0ef          jal                     ra,48156                # 0x1c598

----------------
IN: _dl_early_allocate
0x0001c598:  00095797          auipc                   a5,149                  # 0xb1598
0x0001c59c:  0307b783          ld                      a5,48(a5)
0x0001c5a0:  1141              addi                    sp,sp,-16
0x0001c5a2:  e022              sd                      s0,0(sp)
0x0001c5a4:  e406              sd                      ra,8(sp)
0x0001c5a6:  842a              mv                      s0,a0
0x0001c5a8:  cf89              beqz                    a5,26                   # 0x1c5c2

----------------
IN: _dl_early_allocate
0x0001c5c2:  0d600893          addi                    a7,zero,214
0x0001c5c6:  4501              mv                      a0,zero
0x0001c5c8:  00000073          ecall                   

----------------
IN: _dl_early_allocate
0x0001c5cc:  87aa              mv                      a5,a0
0x0001c5ce:  9522              add                     a0,a0,s0
0x0001c5d0:  00000073          ecall                   

----------------
IN: _dl_early_allocate
0x0001c5d4:  fea791e3          bne                     a5,a0,-30               # 0x1c5b6

----------------
IN: _dl_early_allocate
0x0001c5b6:  c38d              beqz                    a5,34                   # 0x1c5d8

----------------
IN: _dl_early_allocate
0x0001c5b8:  60a2              ld                      ra,8(sp)
0x0001c5ba:  6402              ld                      s0,0(sp)
0x0001c5bc:  853e              mv                      a0,a5
0x0001c5be:  0141              addi                    sp,sp,16
0x0001c5c0:  8082              ret                     

----------------
IN: __libc_setup_tls
0x00010980:  842a              mv                      s0,a0
0x00010982:  c965              beqz                    a0,240                  # 0x10a72

----------------
IN: __libc_setup_tls
0x00010984:  67a2              ld                      a5,8(sp)
0x00010986:  76040413          addi                    s0,s0,1888
0x0001098a:  9466              add                     s0,s0,s9
0x0001098c:  01847433          and                     s0,s0,s8
0x00010990:  865a              mv                      a2,s6
0x00010992:  85d6              mv                      a1,s5
0x00010994:  01b40533          add                     a0,s0,s11
0x00010998:  44f4b823          sd                      a5,1104(s1)
0x0001099c:  03e00793          addi                    a5,zero,62
0x000109a0:  0009c717          auipc                   a4,156                  # 0xac9a0
0x000109a4:  f6073823          sd                      zero,-144(a4)
0x000109a8:  00fd3423          sd                      a5,8(s10)
0x000109ac:  02ad3423          sd                      a0,40(s10)
0x000109b0:  00000097          auipc                   ra,0                    # 0x109b0
0x000109b4:  880080e7          jalr                    ra,ra,-1920

----------------
IN: 
0x00010230:  0006be17          auipc                   t3,107                  # 0x7b230
0x00010234:  dd0e3e03          ld                      t3,-560(t3)
0x00010238:  000e0367          jalr                    t1,t3,0

----------------
IN: __memcpy_noalignment
0x0001a01c:  14060663          beqz                    a2,332                  # 0x1a168

----------------
IN: __memcpy_noalignment
0x0001a020:  479d              addi                    a5,zero,7
0x0001a022:  882a              mv                      a6,a0
0x0001a024:  10c7f063          bleu                    a2,a5,256               # 0x1a124

----------------
IN: __memcpy_noalignment
0x0001a028:  6194              ld                      a3,0(a1)
0x0001a02a:  00757793          andi                    a5,a0,7
0x0001a02e:  1661              addi                    a2,a2,-8
0x0001a030:  4721              addi                    a4,zero,8
0x0001a032:  8f1d              sub                     a4,a4,a5
0x0001a034:  e114              sd                      a3,0(a0)
0x0001a036:  963e              add                     a2,a2,a5
0x0001a038:  07f00693          addi                    a3,zero,127
0x0001a03c:  00e507b3          add                     a5,a0,a4
0x0001a040:  95ba              add                     a1,a1,a4
0x0001a042:  12c6f663          bleu                    a2,a3,300               # 0x1a16e

----------------
IN: __memcpy_noalignment
0x0001a16e:  86be              mv                      a3,a5
0x0001a170:  bfad              j                       -134                    # 0x1a0ea

----------------
IN: __memcpy_noalignment
0x0001a0ea:  479d              addi                    a5,zero,7
0x0001a0ec:  06c7ff63          bleu                    a2,a5,126               # 0x1a16a

----------------
IN: __memcpy_noalignment
0x0001a0f0:  ff860893          addi                    a7,a2,-8
0x0001a0f4:  ff88f893          andi                    a7,a7,-8
0x0001a0f8:  08a1              addi                    a7,a7,8
0x0001a0fa:  01168833          add                     a6,a3,a7
0x0001a0fe:  87ae              mv                      a5,a1
0x0001a100:  6398              ld                      a4,0(a5)
0x0001a102:  06a1              addi                    a3,a3,8
0x0001a104:  07a1              addi                    a5,a5,8
0x0001a106:  fee6bc23          sd                      a4,-8(a3)
0x0001a10a:  ff069be3          bne                     a3,a6,-10               # 0x1a100

----------------
IN: __memcpy_noalignment
0x0001a100:  6398              ld                      a4,0(a5)
0x0001a102:  06a1              addi                    a3,a3,8
0x0001a104:  07a1              addi                    a5,a5,8
0x0001a106:  fee6bc23          sd                      a4,-8(a3)
0x0001a10a:  ff069be3          bne                     a3,a6,-10               # 0x1a100

----------------
IN: __memcpy_noalignment
0x0001a10e:  95c6              add                     a1,a1,a7
0x0001a110:  8a1d              andi                    a2,a2,7
0x0001a112:  00c586b3          add                     a3,a1,a2
0x0001a116:  00c80733          add                     a4,a6,a2
0x0001a11a:  ff86b283          ld                      t0,-8(a3)
0x0001a11e:  fe573c23          sd                      t0,-8(a4)
0x0001a122:  8082              ret                     

----------------
IN: __libc_setup_tls
0x000109b8:  0009c797          auipc                   a5,156                  # 0xac9b8
0x000109bc:  f4078793          addi                    a5,a5,-192
0x000109c0:  fef43823          sd                      a5,-16(s0)
0x000109c4:  8222              mv                      tp,s0
0x000109c6:  5760b0ef          jal                     ra,46454                # 0x1bf3c

----------------
IN: __tls_init_tp
0x0001bf3c:  0005f797          auipc                   a5,95                   # 0x7af3c
0x0001bf40:  d147b783          ld                      a5,-748(a5)
0x0001bf44:  6394              ld                      a3,0(a5)
0x0001bf46:  1101              addi                    sp,sp,-32
0x0001bf48:  e822              sd                      s0,16(sp)
0x0001bf4a:  ec06              sd                      ra,24(sp)
0x0001bf4c:  96f23423          sd                      a5,-1688(tp)
0x0001bf50:  96d23023          sd                      a3,-1696(tp)
0x0001bf54:  96020713          addi                    a4,tp,-1696
0x0001bf58:  e698              sd                      a4,8(a3)
0x0001bf5a:  8412              mv                      s0,tp
0x0001bf5c:  0330000f          fence                   rw,rw
0x0001bf60:  06000893          addi                    a7,zero,96
0x0001bf64:  e398              sd                      a4,0(a5)
0x0001bf66:  97020513          addi                    a0,tp,-1680
0x0001bf6a:  00000073          ecall                   

----------------
IN: __tls_init_tp
0x0001bf6e:  00095617          auipc                   a2,149                  # 0xb0f6e
0x0001bf72:  69664603          lbu                     a2,1686(a2)
0x0001bf76:  98020793          addi                    a5,tp,-1664
0x0001bf7a:  9b020593          addi                    a1,tp,-1616
0x0001bf7e:  5681              addi                    a3,zero,-32
0x0001bf80:  4705              addi                    a4,zero,1
0x0001bf82:  96a22823          sw                      a0,-1680(tp)
0x0001bf86:  bab23823          sd                      a1,-1104(tp)
0x0001bf8a:  cac208a3          sb                      a2,-847(tp)
0x0001bf8e:  98d23423          sd                      a3,-1656(tp)
0x0001bf92:  96f23c23          sd                      a5,-1672(tp)
0x0001bf96:  98f23023          sd                      a5,-1664(tp)
0x0001bf9a:  853e              mv                      a0,a5
0x0001bf9c:  cae20923          sb                      a4,-846(tp)
0x0001bfa0:  06300893          addi                    a7,zero,99
0x0001bfa4:  45e1              addi                    a1,zero,24
0x0001bfa6:  00000073          ecall                   

----------------
IN: __tls_init_tp
0x0001bfaa:  77fd              lui                     a5,-1
0x0001bfac:  2501              sext.w                  a0,a0
0x0001bfae:  00a7e863          bgtu                    a0,a5,16                # 0x1bfbe

----------------
IN: __tls_init_tp
0x0001bfbe:  006c              addi                    a1,sp,12
0x0001bfc0:  4601              mv                      a2,zero
0x0001bfc2:  4561              addi                    a0,zero,24
0x0001bfc4:  58a000ef          jal                     ra,1418                 # 0x1c54e

----------------
IN: __tunable_get_val
0x0001c58c:  c198              sw                      a4,0(a1)
0x0001c58e:  b7dd              j                       -26                     # 0x1c574

----------------
IN: __tunable_get_val
0x0001c574:  051e              slli                    a0,a0,7
0x0001c576:  00a78733          add                     a4,a5,a0
0x0001c57a:  06874703          lbu                     a4,104(a4)
0x0001c57e:  c711              beqz                    a4,12                   # 0x1c58a

----------------
IN: __tls_init_tp
0x0001bfc8:  0005f797          auipc                   a5,95                   # 0x7afc8
0x0001bfcc:  c707b783          ld                      a5,-912(a5)
0x0001bfd0:  639c              ld                      a5,0(a5)
0x0001bfd2:  5779              addi                    a4,zero,-2
0x0001bfd4:  60e2              ld                      ra,24(sp)
0x0001bfd6:  fce42223          sw                      a4,-60(s0)
0x0001bfda:  d2f43c23          sd                      a5,-712(s0)
0x0001bfde:  6442              ld                      s0,16(sp)
0x0001bfe0:  6105              addi                    sp,sp,32
0x0001bfe2:  8082              ret                     

----------------
IN: __libc_setup_tls
0x000109ca:  4785              addi                    a5,zero,1
0x000109cc:  0009d717          auipc                   a4,157                  # 0xad9cc
0x000109d0:  f1470713          addi                    a4,a4,-236
0x000109d4:  04000593          addi                    a1,zero,64
0x000109d8:  0009c617          auipc                   a2,156                  # 0xac9d8
0x000109dc:  31060613          addi                    a2,a2,784
0x000109e0:  4574b023          sd                      s7,1088(s1)
0x000109e4:  4334bc23          sd                      s3,1080(s1)
0x000109e8:  4354b423          sd                      s5,1064(s1)
0x000109ec:  4364b823          sd                      s6,1072(s1)
0x000109f0:  429d3823          sd                      s1,1072(s10)
0x000109f4:  44f4bc23          sd                      a5,1112(s1)
0x000109f8:  40bd3423          sd                      a1,1032(s10)
0x000109fc:  80f73c23          sd                      a5,-2024(a4)
0x00010a00:  82c73023          sd                      a2,-2016(a4)
0x00010a04:  000b8663          beqz                    s7,12                   # 0x10a10

----------------
IN: __libc_setup_tls
0x00010a08:  99de              add                     s3,s3,s7
0x00010a0a:  19fd              addi                    s3,s3,-1
0x00010a0c:  0379d9b3          divu                    s3,s3,s7
0x00010a10:  000d3783          ld                      a5,0(s10)
0x00010a14:  70e6              ld                      ra,120(sp)
0x00010a16:  7446              ld                      s0,112(sp)
0x00010a18:  07fd              addi                    a5,a5,31
0x00010a1a:  4685              addi                    a3,zero,1
0x00010a1c:  83473c23          sd                      s4,-1992(a4)
0x00010a20:  84d73023          sd                      a3,-1984(a4)
0x00010a24:  74a6              ld                      s1,104(sp)
0x00010a26:  6a46              ld                      s4,80(sp)
0x00010a28:  6aa6              ld                      s5,72(sp)
0x00010a2a:  6b06              ld                      s6,64(sp)
0x00010a2c:  7be2              ld                      s7,56(sp)
0x00010a2e:  7c42              ld                      s8,48(sp)
0x00010a30:  7ca2              ld                      s9,40(sp)
0x00010a32:  7d02              ld                      s10,32(sp)
0x00010a34:  03390933          mul                     s2,s2,s3
0x00010a38:  69e6              ld                      s3,88(sp)
0x00010a3a:  996e              add                     s2,s2,s11
0x00010a3c:  97ca              add                     a5,a5,s2
0x00010a3e:  9b81              andi                    a5,a5,-32
0x00010a40:  83273823          sd                      s2,-2000(a4)
0x00010a44:  82f73423          sd                      a5,-2008(a4)
0x00010a48:  7906              ld                      s2,96(sp)
0x00010a4a:  6de2              ld                      s11,24(sp)
0x00010a4c:  6109              addi                    sp,sp,128
0x00010a4e:  8082              ret                     

----------------
IN: __libc_start_main
0x0001076a:  00069497          auipc                   s1,105                  # 0x7976a
0x0001076e:  69e48493          addi                    s1,s1,1694
0x00010772:  609c              ld                      a5,0(s1)
0x00010774:  00068417          auipc                   s0,104                  # 0x78774
0x00010778:  62c40413          addi                    s0,s0,1580
0x0001077c:  0006a817          auipc                   a6,106                  # 0x7a77c
0x00010780:  64483803          ld                      a6,1604(a6)
0x00010784:  0017c703          lbu                     a4,1(a5)
0x00010788:  0007c683          lbu                     a3,0(a5)
0x0001078c:  0027c503          lbu                     a0,2(a5)
0x00010790:  0037c583          lbu                     a1,3(a5)
0x00010794:  0047c603          lbu                     a2,4(a5)
0x00010798:  0722              slli                    a4,a4,8
0x0001079a:  8f55              or                      a4,a4,a3
0x0001079c:  0542              slli                    a0,a0,16
0x0001079e:  0057c683          lbu                     a3,5(a5)
0x000107a2:  8d59              or                      a0,a0,a4
0x000107a4:  05e2              slli                    a1,a1,24
0x000107a6:  0067c703          lbu                     a4,6(a5)
0x000107aa:  8dc9              or                      a1,a1,a0
0x000107ac:  0077c783          lbu                     a5,7(a5)
0x000107b0:  1602              slli                    a2,a2,32
0x000107b2:  8e4d              or                      a2,a2,a1
0x000107b4:  16a2              slli                    a3,a3,40
0x000107b6:  8ed1              or                      a3,a3,a2
0x000107b8:  1742              slli                    a4,a4,48
0x000107ba:  8f55              or                      a4,a4,a3
0x000107bc:  17e2              slli                    a5,a5,56
0x000107be:  8fd9              or                      a5,a5,a4
0x000107c0:  f007f793          andi                    a5,a5,-256
0x000107c4:  e01c              sd                      a5,0(s0)
0x000107c6:  00080363          beqz                    a6,6                    # 0x107cc

----------------
IN: __libc_start_main
0x000107cc:  609c              ld                      a5,0(s1)
0x000107ce:  0087c303          lbu                     t1,8(a5)
0x000107d2:  0097c883          lbu                     a7,9(a5)
0x000107d6:  00a7c803          lbu                     a6,10(a5)
0x000107da:  00b7c503          lbu                     a0,11(a5)
0x000107de:  00c7c583          lbu                     a1,12(a5)
0x000107e2:  00d7c603          lbu                     a2,13(a5)
0x000107e6:  00e7c683          lbu                     a3,14(a5)
0x000107ea:  00f7c703          lbu                     a4,15(a5)
0x000107ee:  00610423          sb                      t1,8(sp)
0x000107f2:  011104a3          sb                      a7,9(sp)
0x000107f6:  01010523          sb                      a6,10(sp)
0x000107fa:  00a105a3          sb                      a0,11(sp)
0x000107fe:  00b10623          sb                      a1,12(sp)
0x00010802:  00c106a3          sb                      a2,13(sp)
0x00010806:  00d10723          sb                      a3,14(sp)
0x0001080a:  00e107a3          sb                      a4,15(sp)
0x0001080e:  67a2              ld                      a5,8(sp)
0x00010810:  e41c              sd                      a5,8(s0)
0x00010812:  000a8763          beqz                    s5,14                   # 0x10820

----------------
IN: __libc_start_main
0x00010820:  4505              addi                    a0,zero,1
0x00010822:  60a0c0ef          jal                     ra,50698                # 0x1ce2c

----------------
IN: __libc_early_init
0x0001ce2c:  1101              addi                    sp,sp,-32
0x0001ce2e:  ec06              sd                      ra,24(sp)
0x0001ce30:  e822              sd                      s0,16(sp)
0x0001ce32:  842a              mv                      s0,a0
0x0001ce34:  4de070ef          jal                     ra,29918                # 0x24312

----------------
IN: __ctype_init
0x00024312:  00057717          auipc                   a4,87                   # 0x7b312
0x00024316:  a9e73703          ld                      a4,-1378(a4)
0x0002431a:  00057797          auipc                   a5,87                   # 0x7b31a
0x0002431e:  8ce7b783          ld                      a5,-1842(a5)
0x00024322:  9712              add                     a4,a4,tp
0x00024324:  6318              ld                      a4,0(a4)
0x00024326:  9792              add                     a5,a5,tp
0x00024328:  6318              ld                      a4,0(a4)
0x0002432a:  7f10              ld                      a2,56(a4)
0x0002432c:  6334              ld                      a3,64(a4)
0x0002432e:  6b38              ld                      a4,80(a4)
0x00024330:  10060613          addi                    a2,a2,256
0x00024334:  20068693          addi                    a3,a3,512
0x00024338:  20070713          addi                    a4,a4,512
0x0002433c:  e390              sd                      a2,0(a5)
0x0002433e:  e794              sd                      a3,8(a5)
0x00024340:  eb98              sd                      a4,16(a5)
0x00024342:  8082              ret                     

----------------
IN: __libc_early_init
0x0001ce38:  858a              mv                      a1,sp
0x0001ce3a:  450d              addi                    a0,zero,3
0x0001ce3c:  00060797          auipc                   a5,96                   # 0x7ce3c
0x0001ce40:  a4878023          sb                      s0,-1472(a5)
0x0001ce44:  619170ef          jal                     ra,97816                # 0x34c5c

----------------
IN: getrlimit64
0x00034c5c:  86ae              mv                      a3,a1
0x00034c5e:  02051593          slli                    a1,a0,32
0x00034c62:  9181              srli                    a1,a1,32
0x00034c64:  10500893          addi                    a7,zero,261
0x00034c68:  4501              mv                      a0,zero
0x00034c6a:  4601              mv                      a2,zero
0x00034c6c:  00000073          ecall                   

----------------
IN: getrlimit64
0x00034c70:  77fd              lui                     a5,-1
0x00034c72:  00a7e463          bgtu                    a0,a5,8                 # 0x34c7a

----------------
IN: getrlimit64
0x00034c76:  2501              sext.w                  a0,a0
0x00034c78:  8082              ret                     

----------------
IN: __libc_early_init
0x0001ce48:  002005b7          lui                     a1,512
0x0001ce4c:  e909              bnez                    a0,18                   # 0x1ce5e

----------------
IN: __libc_early_init
0x0001ce4e:  6782              ld                      a5,0(sp)
0x0001ce50:  577d              addi                    a4,zero,-1
0x0001ce52:  00e78663          beq                     a5,a4,12                # 0x1ce5e

----------------
IN: __libc_early_init
0x0001ce56:  85be              mv                      a1,a5
0x0001ce58:  6791              lui                     a5,4
0x0001ce5a:  06f5e163          bgtu                    a5,a1,98                # 0x1cebc

----------------
IN: __libc_early_init
0x0001ce5e:  0005e717          auipc                   a4,94                   # 0x7ae5e
0x0001ce62:  eda73703          ld                      a4,-294(a4)
0x0001ce66:  0005e797          auipc                   a5,94                   # 0x7ae66
0x0001ce6a:  f2a7b783          ld                      a5,-214(a5)
0x0001ce6e:  6318              ld                      a4,0(a4)
0x0001ce70:  639c              ld                      a5,0(a5)
0x0001ce72:  0005e697          auipc                   a3,94                   # 0x7ae72
0x0001ce76:  14e6b683          ld                      a3,334(a3)
0x0001ce7a:  6294              ld                      a3,0(a3)
0x0001ce7c:  97ba              add                     a5,a5,a4
0x0001ce7e:  17fd              addi                    a5,a5,-1
0x0001ce80:  02e7f633          remu                    a2,a5,a4
0x0001ce84:  6705              lui                     a4,1
0x0001ce86:  80070713          addi                    a4,a4,-2048
0x0001ce8a:  9736              add                     a4,a4,a3
0x0001ce8c:  8f91              sub                     a5,a5,a2
0x0001ce8e:  97ba              add                     a5,a5,a4
0x0001ce90:  00b7f363          bleu                    a1,a5,6                 # 0x1ce96

----------------
IN: __libc_early_init
0x0001ce94:  87ae              mv                      a5,a1
0x0001ce96:  fff68713          addi                    a4,a3,-1
0x0001ce9a:  97ba              add                     a5,a5,a4
0x0001ce9c:  40d00733          neg                     a4,a3
0x0001cea0:  8ff9              and                     a5,a5,a4
0x0001cea2:  00095717          auipc                   a4,149                  # 0xb1ea2
0x0001cea6:  b4670713          addi                    a4,a4,-1210
0x0001ceaa:  e03e              sd                      a5,0(sp)
0x0001ceac:  f31c              sd                      a5,32(a4)
0x0001ceae:  eb14              sd                      a3,16(a4)
0x0001ceb0:  43b130ef          jal                     ra,80954                # 0x30aea

----------------
IN: __pthread_tunables_init
0x00030aea:  1101              addi                    sp,sp,-32
0x00030aec:  e822              sd                      s0,16(sp)
0x00030aee:  0020              addi                    s0,sp,8
0x00030af0:  85a2              mv                      a1,s0
0x00030af2:  00000617          auipc                   a2,0                    # 0x30af2
0x00030af6:  fd260613          addi                    a2,a2,-46
0x00030afa:  455d              addi                    a0,zero,23
0x00030afc:  ec06              sd                      ra,24(sp)
0x00030afe:  a51eb0ef          jal                     ra,-83376               # 0x1c54e

----------------
IN: __pthread_tunables_init
0x00030b02:  85a2              mv                      a1,s0
0x00030b04:  00000617          auipc                   a2,0                    # 0x30b04
0x00030b08:  fcc60613          addi                    a2,a2,-52
0x00030b0c:  4565              addi                    a0,zero,25
0x00030b0e:  a41eb0ef          jal                     ra,-83392               # 0x1c54e

----------------
IN: __pthread_tunables_init
0x00030b12:  85a2              mv                      a1,s0
0x00030b14:  00000617          auipc                   a2,0                    # 0x30b14
0x00030b18:  fc860613          addi                    a2,a2,-56
0x00030b1c:  4569              addi                    a0,zero,26
0x00030b1e:  a31eb0ef          jal                     ra,-83408               # 0x1c54e

----------------
IN: __pthread_tunables_init
0x00030b22:  60e2              ld                      ra,24(sp)
0x00030b24:  6442              ld                      s0,16(sp)
0x00030b26:  6105              addi                    sp,sp,32
0x00030b28:  8082              ret                     

----------------
IN: __libc_early_init
0x0001ceb4:  60e2              ld                      ra,24(sp)
0x0001ceb6:  6442              ld                      s0,16(sp)
0x0001ceb8:  6105              addi                    sp,sp,32
0x0001ceba:  8082              ret                     

----------------
IN: __libc_start_main
0x00010826:  000a3603          ld                      a2,0(s4)
0x0001082a:  85ce              mv                      a1,s3
0x0001082c:  854a              mv                      a0,s2
0x0001082e:  73a0c0ef          jal                     ra,51002                # 0x1cf68

----------------
IN: __libc_init_first
0x0001cf68:  1101              addi                    sp,sp,-32
0x0001cf6a:  e822              sd                      s0,16(sp)
0x0001cf6c:  e426              sd                      s1,8(sp)
0x0001cf6e:  e04a              sd                      s2,0(sp)
0x0001cf70:  ec06              sd                      ra,24(sp)
0x0001cf72:  00094797          auipc                   a5,148                  # 0xb0f72
0x0001cf76:  7ae78793          addi                    a5,a5,1966
0x0001cf7a:  0005e717          auipc                   a4,94                   # 0x7af7a
0x0001cf7e:  dc673703          ld                      a4,-570(a4)
0x0001cf82:  842a              mv                      s0,a0
0x0001cf84:  84ae              mv                      s1,a1
0x0001cf86:  8932              mv                      s2,a2
0x0001cf88:  e310              sd                      a2,0(a4)
0x0001cf8a:  c388              sw                      a0,0(a5)
0x0001cf8c:  e78c              sd                      a1,8(a5)
0x0001cf8e:  f90ff0ef          jal                     ra,-2160                # 0x1c71e

----------------
IN: _dl_non_dynamic_init
0x0001c71e:  7159              addi                    sp,sp,-112
0x0001c720:  eca6              sd                      s1,88(sp)
0x0001c722:  e8ca              sd                      s2,80(sp)
0x0001c724:  fc56              sd                      s5,56(sp)
0x0001c726:  f486              sd                      ra,104(sp)
0x0001c728:  00095a97          auipc                   s5,149                  # 0xb1728
0x0001c72c:  ee0a8a93          addi                    s5,s5,-288
0x0001c730:  f0a2              sd                      s0,96(sp)
0x0001c732:  f85a              sd                      s6,48(sp)
0x0001c734:  1b01d0ef          jal                     ra,119216               # 0x398e4

----------------
IN: _dl_get_origin
0x000398e4:  7179              addi                    sp,sp,-48
0x000398e6:  72fd              lui                     t0,-1
0x000398e8:  f406              sd                      ra,40(sp)
0x000398ea:  f022              sd                      s0,32(sp)
0x000398ec:  ec26              sd                      s1,24(sp)
0x000398ee:  e84a              sd                      s2,16(sp)
0x000398f0:  9116              add                     sp,sp,t0
0x000398f2:  0810              addi                    a2,sp,16
0x000398f4:  04e00893          addi                    a7,zero,78
0x000398f8:  f9c00513          addi                    a0,zero,-100
0x000398fc:  0001a597          auipc                   a1,26                   # 0x538fc
0x00039900:  e5c58593          addi                    a1,a1,-420
0x00039904:  6685              lui                     a3,1
0x00039906:  00000073          ecall                   

----------------
IN: _dl_get_origin
0x0003990a:  2501              sext.w                  a0,a0
0x0003990c:  04a05363          blez                    a0,70                   # 0x39952

----------------
IN: _dl_get_origin
0x00039910:  00064703          lbu                     a4,0(a2)
0x00039914:  05b00793          addi                    a5,zero,91
0x00039918:  02f70d63          beq                     a4,a5,58                # 0x39952

----------------
IN: _dl_get_origin
0x0003991c:  02f00793          addi                    a5,zero,47
0x00039920:  4685              addi                    a3,zero,1
0x00039922:  00f70a63          beq                     a4,a5,20                # 0x39936

----------------
IN: _dl_get_origin
0x00039936:  0005041b          sext.w                  s0,a0
0x0003993a:  fed417e3          bne                     s0,a3,-18               # 0x39928

----------------
IN: _dl_get_origin
0x00039928:  157d              addi                    a0,a0,-1
0x0003992a:  00a607b3          add                     a5,a2,a0
0x0003992e:  0007c783          lbu                     a5,0(a5)
0x00039932:  08e78463          beq                     a5,a4,136               # 0x399ba

----------------
IN: _dl_get_origin
0x000399ba:  0014051b          addiw                   a0,s0,1
0x000399be:  e432              sd                      a2,8(sp)
0x000399c0:  a93de0ef          jal                     ra,-136558              # 0x18452

----------------
IN: __libc_malloc
0x00018452:  00099797          auipc                   a5,153                  # 0xb1452
0x00018456:  11b7c783          lbu                     a5,283(a5)
0x0001845a:  1101              addi                    sp,sp,-32
0x0001845c:  e426              sd                      s1,8(sp)
0x0001845e:  ec06              sd                      ra,24(sp)
0x00018460:  e822              sd                      s0,16(sp)
0x00018462:  84aa              mv                      s1,a0
0x00018464:  cfdd              beqz                    a5,190                  # 0x18522

----------------
IN: __libc_malloc
0x00018522:  beefd0ef          jal                     ra,-11282               # 0x15910

----------------
IN: ptmalloc_init.part.0
0x00015910:  7179              addi                    sp,sp,-48
0x00015912:  ec26              sd                      s1,24(sp)
0x00015914:  e84a              sd                      s2,16(sp)
0x00015916:  4485              addi                    s1,zero,1
0x00015918:  f406              sd                      ra,40(sp)
0x0001591a:  f022              sd                      s0,32(sp)
0x0001591c:  0009c917          auipc                   s2,156                  # 0xb191c
0x00015920:  c4c90913          addi                    s2,s2,-948
0x00015924:  009902a3          sb                      s1,5(s2)
0x00015928:  8626              mv                      a2,s1
0x0001592a:  11600893          addi                    a7,zero,278
0x0001592e:  0009c517          auipc                   a0,156                  # 0xb192e
0x00015932:  c4250513          addi                    a0,a0,-958
0x00015936:  45a1              addi                    a1,zero,8
0x00015938:  00000073          ecall                   

----------------
IN: ptmalloc_init.part.0
0x0001593c:  840a              mv                      s0,sp
0x0001593e:  04b50c63          beq                     a0,a1,88                # 0x15996

----------------
IN: ptmalloc_init.part.0
0x00015996:  00065797          auipc                   a5,101                  # 0x7a996
0x0001599a:  24a7b783          ld                      a5,586(a5)
0x0001599e:  00065697          auipc                   a3,101                  # 0x7a99e
0x000159a2:  72a68693          addi                    a3,a3,1834
0x000159a6:  00065817          auipc                   a6,101                  # 0x7a9a6
0x000159aa:  78280813          addi                    a6,a6,1922
0x000159ae:  9792              add                     a5,a5,tp
0x000159b0:  e394              sd                      a3,0(a5)
0x000159b2:  00066717          auipc                   a4,102                  # 0x7b9b2
0x000159b6:  f6670713          addi                    a4,a4,-154
0x000159ba:  87c2              mv                      a5,a6
0x000159bc:  ef9c              sd                      a5,24(a5)
0x000159be:  eb9c              sd                      a5,16(a5)
0x000159c0:  07c1              addi                    a5,a5,16
0x000159c2:  fee79de3          bne                     a5,a4,-6                # 0x159bc

----------------
IN: ptmalloc_init.part.0
0x000159bc:  ef9c              sd                      a5,24(a5)
0x000159be:  eb9c              sd                      a5,16(a5)
0x000159c0:  07c1              addi                    a5,a5,16
0x000159c2:  fee79de3          bne                     a5,a4,-6                # 0x159bc

----------------
IN: ptmalloc_init.part.0
0x000159c6:  f8000793          addi                    a5,zero,-128
0x000159ca:  00f90223          sb                      a5,4(s2)
0x000159ce:  00065797          auipc                   a5,101                  # 0x7a9ce
0x000159d2:  70278793          addi                    a5,a5,1794
0x000159d6:  0007a023          sw                      zero,0(a5)
0x000159da:  85a2              mv                      a1,s0
0x000159dc:  fffff617          auipc                   a2,-1                   # 0x149dc
0x000159e0:  6b460613          addi                    a2,a2,1716
0x000159e4:  454d              addi                    a0,zero,19
0x000159e6:  0706b023          sd                      a6,96(a3)
0x000159ea:  365060ef          jal                     ra,27492                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x000159ee:  85a2              mv                      a1,s0
0x000159f0:  fffff617          auipc                   a2,-1                   # 0x149f0
0x000159f4:  6b260613          addi                    a2,a2,1714
0x000159f8:  453d              addi                    a0,zero,15
0x000159fa:  355060ef          jal                     ra,27476                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x000159fe:  85a2              mv                      a1,s0
0x00015a00:  fffff617          auipc                   a2,-1                   # 0x14a00
0x00015a04:  66c60613          addi                    a2,a2,1644
0x00015a08:  4535              addi                    a0,zero,13
0x00015a0a:  345060ef          jal                     ra,27460                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a0e:  85a2              mv                      a1,s0
0x00015a10:  fffff617          auipc                   a2,-1                   # 0x14a10
0x00015a14:  69e60613          addi                    a2,a2,1694
0x00015a18:  4551              addi                    a0,zero,20
0x00015a1a:  335060ef          jal                     ra,27444                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a1e:  85a2              mv                      a1,s0
0x00015a20:  fffff617          auipc                   a2,-1                   # 0x14a20
0x00015a24:  65e60613          addi                    a2,a2,1630
0x00015a28:  4531              addi                    a0,zero,12
0x00015a2a:  325060ef          jal                     ra,27428                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a2e:  85a2              mv                      a1,s0
0x00015a30:  fffff617          auipc                   a2,-1                   # 0x14a30
0x00015a34:  69060613          addi                    a2,a2,1680
0x00015a38:  4521              addi                    a0,zero,8
0x00015a3a:  315060ef          jal                     ra,27412                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a3e:  85a2              mv                      a1,s0
0x00015a40:  fffff617          auipc                   a2,-1                   # 0x14a40
0x00015a44:  68c60613          addi                    a2,a2,1676
0x00015a48:  4525              addi                    a0,zero,9
0x00015a4a:  305060ef          jal                     ra,27396                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a4e:  85a2              mv                      a1,s0
0x00015a50:  fffff617          auipc                   a2,-1                   # 0x14a50
0x00015a54:  68860613          addi                    a2,a2,1672
0x00015a58:  4545              addi                    a0,zero,17
0x00015a5a:  2f5060ef          jal                     ra,27380                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a5e:  85a2              mv                      a1,s0
0x00015a60:  fffff617          auipc                   a2,-1                   # 0x14a60
0x00015a64:  6a460613          addi                    a2,a2,1700
0x00015a68:  4541              addi                    a0,zero,16
0x00015a6a:  2e5060ef          jal                     ra,27364                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a6e:  85a2              mv                      a1,s0
0x00015a70:  fffff617          auipc                   a2,-1                   # 0x14a70
0x00015a74:  6a860613          addi                    a2,a2,1704
0x00015a78:  4549              addi                    a0,zero,18
0x00015a7a:  2d5060ef          jal                     ra,27348                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a7e:  85a2              mv                      a1,s0
0x00015a80:  fffff617          auipc                   a2,-1                   # 0x14a80
0x00015a84:  6a460613          addi                    a2,a2,1700
0x00015a88:  4539              addi                    a0,zero,14
0x00015a8a:  2c5060ef          jal                     ra,27332                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a8e:  85a2              mv                      a1,s0
0x00015a90:  00000617          auipc                   a2,0                    # 0x15a90
0x00015a94:  87260613          addi                    a2,a2,-1934
0x00015a98:  452d              addi                    a0,zero,11
0x00015a9a:  2b5060ef          jal                     ra,27316                # 0x1c54e

----------------
IN: ptmalloc_init.part.0
0x00015a9e:  00065417          auipc                   s0,101                  # 0x7aa9e
0x00015aa2:  59240413          addi                    s0,s0,1426
0x00015aa6:  781c              ld                      a5,48(s0)
0x00015aa8:  e799              bnez                    a5,14                   # 0x15ab6

----------------
IN: ptmalloc_init.part.0
0x00015aaa:  70a2              ld                      ra,40(sp)
0x00015aac:  7402              ld                      s0,32(sp)
0x00015aae:  64e2              ld                      s1,24(sp)
0x00015ab0:  6942              ld                      s2,16(sp)
0x00015ab2:  6145              addi                    sp,sp,48
0x00015ab4:  8082              ret                     

----------------
IN: __libc_malloc
0x00018526:  f404d2e3          bgez                    s1,-188                 # 0x1846a

----------------
IN: __libc_malloc
0x0001846a:  e04a              sd                      s2,0(sp)
0x0001846c:  01748793          addi                    a5,s1,23
0x00018470:  477d              addi                    a4,zero,31
0x00018472:  4901              mv                      s2,zero
0x00018474:  00f77663          bleu                    a5,a4,12                # 0x18480

----------------
IN: __libc_malloc
0x00018478:  9bc1              andi                    a5,a5,-16
0x0001847a:  17bd              addi                    a5,a5,-17
0x0001847c:  0047d913          srli                    s2,a5,4
0x00018480:  01820413          addi                    s0,tp,24
0x00018484:  641c              ld                      a5,8(s0)
0x00018486:  c3e1              beqz                    a5,192                  # 0x18546

----------------
IN: __libc_malloc
0x00018546:  01044783          lbu                     a5,16(s0)
0x0001854a:  f7a9              bnez                    a5,-182                 # 0x18494

----------------
IN: __libc_malloc
0x0001854c:  903ff0ef          jal                     ra,-1790                # 0x17e4e

----------------
IN: tcache_init.part.0
0x00017e4e:  00063797          auipc                   a5,99                   # 0x7ae4e
0x00017e52:  d927b783          ld                      a5,-622(a5)
0x00017e56:  1101              addi                    sp,sp,-32
0x00017e58:  e822              sd                      s0,16(sp)
0x00017e5a:  9792              add                     a5,a5,tp
0x00017e5c:  6380              ld                      s0,0(a5)
0x00017e5e:  ec06              sd                      ra,24(sp)
0x00017e60:  e426              sd                      s1,8(sp)
0x00017e62:  c829              beqz                    s0,82                   # 0x17eb4

----------------
IN: tcache_init.part.0
0x00017e64:  e04a              sd                      s2,0(sp)
0x00017e66:  4705              addi                    a4,zero,1
0x00017e68:  140427af          lr.w.aq                 a5,(s0)
0x00017e6c:  e781              bnez                    a5,8                    # 0x17e74

----------------
IN: tcache_init.part.0
0x00017e6e:  18e426af          sc.w                    a3,a4,(s0)
0x00017e72:  fafd              bnez                    a3,-10                  # 0x17e68

----------------
IN: tcache_init.part.0
0x00017e74:  2781              sext.w                  a5,a5
0x00017e76:  0017b913          seqz                    s2,a5
0x00017e7a:  ebc9              bnez                    a5,146                  # 0x17f0c

----------------
IN: tcache_init.part.0
0x00017e7c:  28000593          addi                    a1,zero,640
0x00017e80:  8522              mv                      a0,s0
0x00017e82:  b56ff0ef          jal                     ra,-3242                # 0x171d8

----------------
IN: _int_malloc
0x000171d8:  711d              addi                    sp,sp,-96
0x000171da:  ec86              sd                      ra,88(sp)
0x000171dc:  f852              sd                      s4,48(sp)
0x000171de:  4405c263          bltz                    a1,1092                 # 0x17622

----------------
IN: _int_malloc
0x000171e2:  e8a2              sd                      s0,80(sp)
0x000171e4:  e4a6              sd                      s1,72(sp)
0x000171e6:  e0ca              sd                      s2,64(sp)
0x000171e8:  fc4e              sd                      s3,56(sp)
0x000171ea:  01758413          addi                    s0,a1,23
0x000171ee:  47fd              addi                    a5,zero,31
0x000171f0:  892e              mv                      s2,a1
0x000171f2:  84aa              mv                      s1,a0
0x000171f4:  2a87fd63          bleu                    s0,a5,698               # 0x174ae

----------------
IN: _int_malloc
0x000171f8:  9841              andi                    s0,s0,-16
0x000171fa:  42050f63          beqz                    a0,1086                 # 0x17638

----------------
IN: _int_malloc
0x000171fe:  0009a797          auipc                   a5,154                  # 0xb11fe
0x00017202:  36e7c783          lbu                     a5,878(a5)
0x00017206:  1487e363          bgtu                    s0,a5,326               # 0x1734c

----------------
IN: _int_malloc
0x0001734c:  3ff00793          addi                    a5,zero,1023
0x00017350:  6a87f163          bleu                    s0,a5,1698              # 0x179f2

----------------
IN: _int_malloc
0x000179f2:  0044599b          srliw                   s3,s0,4
0x000179f6:  00499793          slli                    a5,s3,4
0x000179fa:  06078793          addi                    a5,a5,96
0x000179fe:  b4e9              j                       -1334                   # 0x174c8

----------------
IN: _int_malloc
0x000174c8:  97a6              add                     a5,a5,s1
0x000174ca:  6788              ld                      a0,8(a5)
0x000174cc:  ff078593          addi                    a1,a5,-16
0x000174d0:  1aa58163          beq                     a1,a0,418               # 0x17672

----------------
IN: _int_malloc
0x00017672:  f456              sd                      s5,40(sp)
0x00017674:  f05a              sd                      s6,32(sp)
0x00017676:  ec5e              sd                      s7,24(sp)
0x00017678:  e862              sd                      s8,16(sp)
0x0001767a:  e466              sd                      s9,8(sp)
0x0001767c:  b321              j                       -760                    # 0x17384

----------------
IN: _int_malloc
0x00017384:  01820793          addi                    a5,tp,24
0x00017388:  679c              ld                      a5,8(a5)
0x0001738a:  fef40b93          addi                    s7,s0,-17
0x0001738e:  004bdb93          srli                    s7,s7,4
0x00017392:  4a81              mv                      s5,zero
0x00017394:  cb99              beqz                    a5,22                   # 0x173aa

----------------
IN: _int_malloc
0x000173aa:  7cac              ld                      a1,120(s1)
0x000173ac:  06048c13          addi                    s8,s1,96
0x000173b0:  4c81              mv                      s9,zero
0x000173b2:  3d858563          beq                     a1,s8,970               # 0x1777c

----------------
IN: _int_malloc
0x0001777c:  3ff00793          addi                    a5,zero,1023
0x00017780:  1687ef63          bgtu                    s0,a5,382               # 0x178fe

----------------
IN: _int_malloc
0x00017784:  e06a              sd                      s10,0(sp)
0x00017786:  0019979b          slliw                   a5,s3,1
0x0001778a:  4d05              addi                    s10,zero,1
0x0001778c:  4a0d              addi                    s4,zero,3
0x0001778e:  0019871b          addiw                   a4,s3,1
0x00017792:  0057581b          srliw                   a6,a4,5
0x00017796:  27b9              addiw                   a5,a5,14
0x00017798:  21880693          addi                    a3,a6,536
0x0001779c:  1782              slli                    a5,a5,32
0x0001779e:  068a              slli                    a3,a3,2
0x000177a0:  9381              srli                    a5,a5,32
0x000177a2:  96a6              add                     a3,a3,s1
0x000177a4:  078e              slli                    a5,a5,3
0x000177a6:  4290              lw                      a2,0(a3)
0x000177a8:  17c1              addi                    a5,a5,-16
0x000177aa:  97a6              add                     a5,a5,s1
0x000177ac:  00ed173b          sllw                    a4,s10,a4
0x000177b0:  0ce66863          bgtu                    a4,a2,208               # 0x17880

----------------
IN: _int_malloc
0x00017880:  0018079b          addiw                   a5,a6,1
0x00017884:  02079713          slli                    a4,a5,32
0x00017888:  9301              srli                    a4,a4,32
0x0001788a:  21870713          addi                    a4,a4,536
0x0001788e:  070a              slli                    a4,a4,2
0x00017890:  9726              add                     a4,a4,s1
0x00017892:  a031              j                       12                      # 0x1789e

----------------
IN: _int_malloc
0x0001789e:  883e              mv                      a6,a5
0x000178a0:  fefa7ae3          bleu                    a5,s4,-12               # 0x17894

----------------
IN: _int_malloc
0x00017894:  4310              lw                      a2,0(a4)
0x00017896:  0711              addi                    a4,a4,4
0x00017898:  26061f63          bnez                    a2,638                  # 0x17b16

----------------
IN: _int_malloc
0x0001789c:  2785              addiw                   a5,a5,1
0x0001789e:  883e              mv                      a6,a5
0x000178a0:  fefa7ae3          bleu                    a5,s4,-12               # 0x17894

----------------
IN: _int_malloc
0x000178a4:  70a8              ld                      a0,96(s1)
0x000178a6:  6705              lui                     a4,1
0x000178a8:  9726              add                     a4,a4,s1
0x000178aa:  651c              ld                      a5,8(a0)
0x000178ac:  88873703          ld                      a4,-1912(a4)
0x000178b0:  9be1              andi                    a5,a5,-8
0x000178b2:  38f76e63          bgtu                    a5,a4,924               # 0x17c4e

----------------
IN: _int_malloc
0x000178b6:  02040713          addi                    a4,s0,32
0x000178ba:  48e7f163          bleu                    a4,a5,1154              # 0x17d3c

----------------
IN: _int_malloc
0x000178be:  00848793          addi                    a5,s1,8
0x000178c2:  439c              lw                      a5,0(a5)
0x000178c4:  2781              sext.w                  a5,a5
0x000178c6:  40078063          beqz                    a5,1024                 # 0x17cc6

----------------
IN: _int_malloc
0x00017cc6:  85a6              mv                      a1,s1
0x00017cc8:  8522              mv                      a0,s0
0x00017cca:  f35fe0ef          jal                     ra,-4300                # 0x16bfe

----------------
IN: sysmalloc
0x00016bfe:  7175              addi                    sp,sp,-144
0x00016c00:  e122              sd                      s0,128(sp)
0x00016c02:  f8ca              sd                      s2,112(sp)
0x00016c04:  ecd6              sd                      s5,88(sp)
0x00016c06:  f86a              sd                      s10,48(sp)
0x00016c08:  f46e              sd                      s11,40(sp)
0x00016c0a:  e506              sd                      ra,136(sp)
0x00016c0c:  00064d97          auipc                   s11,100                 # 0x7ac0c
0x00016c10:  3b4dbd83          ld                      s11,948(s11)
0x00016c14:  e4de              sd                      s7,72(sp)
0x00016c16:  000dba83          ld                      s5,0(s11)
0x00016c1a:  842e              mv                      s0,a1
0x00016c1c:  892a              mv                      s2,a0
0x00016c1e:  00064d17          auipc                   s10,100                 # 0x7ac1e
0x00016c22:  412d0d13          addi                    s10,s10,1042
0x00016c26:  12058a63          beqz                    a1,308                  # 0x16d5a

----------------
IN: sysmalloc
0x00016c2a:  010d3783          ld                      a5,16(s10)
0x00016c2e:  10f57c63          bleu                    a5,a0,280               # 0x16d46

----------------
IN: sysmalloc
0x00016c32:  e0e2              sd                      s8,64(sp)
0x00016c34:  06043c03          ld                      s8,96(s0)
0x00016c38:  f4ce              sd                      s3,104(sp)
0x00016c3a:  fca6              sd                      s1,120(sp)
0x00016c3c:  008c3783          ld                      a5,8(s8)
0x00016c40:  f0d2              sd                      s4,96(sp)
0x00016c42:  e8da              sd                      s6,80(sp)
0x00016c44:  ff87f993          andi                    s3,a5,-8
0x00016c48:  fc66              sd                      s9,56(sp)
0x00016c4a:  06040713          addi                    a4,s0,96
0x00016c4e:  4b81              mv                      s7,zero
0x00016c50:  013c0833          add                     a6,s8,s3
0x00016c54:  14ec0463          beq                     s8,a4,328               # 0x16d9c

----------------
IN: sysmalloc
0x00016d9c:  ea099ee3          bnez                    s3,-324                 # 0x16c58

----------------
IN: sysmalloc
0x00016da0:  02090c93          addi                    s9,s2,32
0x00016da4:  bdd1              j                       -300                    # 0x16c78

----------------
IN: sysmalloc
0x00016c78:  00064b17          auipc                   s6,100                  # 0x7ac78
0x00016c7c:  450b0b13          addi                    s6,s6,1104
0x00016c80:  19640f63          beq                     s0,s6,414               # 0x16e1e

----------------
IN: sysmalloc
0x00016e1e:  008d3783          ld                      a5,8(s10)
0x00016e22:  4058              lw                      a4,4(s0)
0x00016e24:  02078793          addi                    a5,a5,32
0x00016e28:  8b09              andi                    a4,a4,2
0x00016e2a:  97ca              add                     a5,a5,s2
0x00016e2c:  e319              bnez                    a4,6                    # 0x16e32

----------------
IN: sysmalloc
0x00016e2e:  413787b3          sub                     a5,a5,s3
0x00016e32:  028d3703          ld                      a4,40(s10)
0x00016e36:  28071963          bnez                    a4,658                  # 0x170c8

----------------
IN: sysmalloc
0x00016e3a:  000db703          ld                      a4,0(s11)
0x00016e3e:  fff70a13          addi                    s4,a4,-1
0x00016e42:  9a3e              add                     s4,s4,a5
0x00016e44:  40e00733          neg                     a4,a4
0x00016e48:  00ea7a33          and                     s4,s4,a4
0x00016e4c:  ec52              sd                      s4,24(sp)
0x00016e4e:  15404e63          bgtz                    s4,348                  # 0x16faa

----------------
IN: sysmalloc
0x00016faa:  0009a797          auipc                   a5,154                  # 0xb0faa
0x00016fae:  5ce7c783          lbu                     a5,1486(a5)
0x00016fb2:  ea0790e3          bnez                    a5,-352                 # 0x16e52

----------------
IN: sysmalloc
0x00016fb6:  8552              mv                      a0,s4
0x00016fb8:  e042              sd                      a6,0(sp)
0x00016fba:  763030ef          jal                     ra,16226                # 0x1af1c

----------------
IN: sbrk
0x0001af1c:  1101              addi                    sp,sp,-32
0x0001af1e:  e04a              sd                      s2,0(sp)
0x0001af20:  00096917          auipc                   s2,150                  # 0xb0f20
0x0001af24:  6a890913          addi                    s2,s2,1704
0x0001af28:  e426              sd                      s1,8(sp)
0x0001af2a:  00093483          ld                      s1,0(s2)
0x0001af2e:  e822              sd                      s0,16(sp)
0x0001af30:  ec06              sd                      ra,24(sp)
0x0001af32:  842a              mv                      s0,a0
0x0001af34:  c8a1              beqz                    s1,80                   # 0x1af84

----------------
IN: sbrk
0x0001af84:  4501              mv                      a0,zero
0x0001af86:  a4bff0ef          jal                     ra,-1462                # 0x1a9d0

----------------
IN: brk
0x0001a9d0:  87aa              mv                      a5,a0
0x0001a9d2:  0d600893          addi                    a7,zero,214
0x0001a9d6:  00000073          ecall                   

----------------
IN: brk
0x0001a9da:  00097717          auipc                   a4,151                  # 0xb19da
0x0001a9de:  bea73723          sd                      a0,-1042(a4)
0x0001a9e2:  00f56463          bgtu                    a5,a0,8                 # 0x1a9ea

----------------
IN: brk
0x0001a9e6:  4501              mv                      a0,zero
0x0001a9e8:  8082              ret                     

----------------
IN: sbrk
0x0001af8a:  fe0545e3          bltz                    a0,-22                  # 0x1af74

----------------
IN: sbrk
0x0001af8e:  00093483          ld                      s1,0(s2)
0x0001af92:  b755              j                       -92                     # 0x1af36

----------------
IN: sbrk
0x0001af36:  c819              beqz                    s0,22                   # 0x1af4c

----------------
IN: sbrk
0x0001af38:  02805163          blez                    s0,34                   # 0x1af5a

----------------
IN: sbrk
0x0001af3c:  00848533          add                     a0,s1,s0
0x0001af40:  02956363          bgtu                    s1,a0,38                # 0x1af66

----------------
IN: sbrk
0x0001af44:  a8dff0ef          jal                     ra,-1396                # 0x1a9d0

----------------
IN: sbrk
0x0001af48:  02054663          bltz                    a0,44                   # 0x1af74

----------------
IN: sbrk
0x0001af4c:  60e2              ld                      ra,24(sp)
0x0001af4e:  6442              ld                      s0,16(sp)
0x0001af50:  6902              ld                      s2,0(sp)
0x0001af52:  8526              mv                      a0,s1
0x0001af54:  64a2              ld                      s1,8(sp)
0x0001af56:  6105              addi                    sp,sp,32
0x0001af58:  8082              ret                     

----------------
IN: sysmalloc
0x00016fbe:  57fd              addi                    a5,zero,-1
0x00016fc0:  6802              ld                      a6,0(sp)
0x00016fc2:  84aa              mv                      s1,a0
0x00016fc4:  e8f507e3          beq                     a0,a5,-370              # 0x16e52

----------------
IN: sysmalloc
0x00016fc8:  e80505e3          beqz                    a0,-374                 # 0x16e52

----------------
IN: sysmalloc
0x00016fcc:  028d3783          ld                      a5,40(s10)
0x00016fd0:  c385              beqz                    a5,32                   # 0x16ff0

----------------
IN: sysmalloc
0x00016ff0:  4701              mv                      a4,zero
0x00016ff2:  bd51              j                       -364                    # 0x16e86

----------------
IN: sysmalloc
0x00016e86:  060d3783          ld                      a5,96(s10)
0x00016e8a:  20078363          beqz                    a5,518                  # 0x17090

----------------
IN: sysmalloc
0x00017090:  069d3023          sd                      s1,96(s10)
0x00017094:  bbed              j                       -518                    # 0x16e8e

----------------
IN: sysmalloc
0x00016e8e:  00065b97          auipc                   s7,101                  # 0x7be8e
0x00016e92:  23ab8b93          addi                    s7,s7,570
0x00016e96:  888bb783          ld                      a5,-1912(s7)
0x00016e9a:  97d2              add                     a5,a5,s4
0x00016e9c:  88fbb423          sd                      a5,-1912(s7)
0x00016ea0:  1e980b63          beq                     a6,s1,502               # 0x17096

----------------
IN: sysmalloc
0x00016ea4:  00064617          auipc                   a2,100                  # 0x7aea4
0x00016ea8:  22862603          lw                      a2,552(a2)
0x00016eac:  8a09              andi                    a2,a2,2
0x00016eae:  16061663          bnez                    a2,364                  # 0x1701a

----------------
IN: sysmalloc
0x00016eb2:  00098963          beqz                    s3,18                   # 0x16ec4

----------------
IN: sysmalloc
0x00016ec4:  00f4f713          andi                    a4,s1,15
0x00016ec8:  1a071663          bnez                    a4,428                  # 0x17074

----------------
IN: sysmalloc
0x00016ecc:  87ce              mv                      a5,s3
0x00016ece:  e026              sd                      s1,0(sp)
0x00016ed0:  9a3e              add                     s4,s4,a5
0x00016ed2:  9a26              add                     s4,s4,s1
0x00016ed4:  fffa8713          addi                    a4,s5,-1
0x00016ed8:  9752              add                     a4,a4,s4
0x00016eda:  41500ab3          neg                     s5,s5
0x00016ede:  414787b3          sub                     a5,a5,s4
0x00016ee2:  01577a33          and                     s4,a4,s5
0x00016ee6:  9a3e              add                     s4,s4,a5
0x00016ee8:  2c0a4763          bltz                    s4,718                  # 0x171b6

----------------
IN: sysmalloc
0x00016eec:  0009a797          auipc                   a5,154                  # 0xb0eec
0x00016ef0:  68c7c783          lbu                     a5,1676(a5)
0x00016ef4:  16079b63          bnez                    a5,374                  # 0x1706a

----------------
IN: sysmalloc
0x00016ef8:  8552              mv                      a0,s4
0x00016efa:  022040ef          jal                     ra,16418                # 0x1af1c

----------------
IN: sysmalloc
0x00016efe:  57fd              addi                    a5,zero,-1
0x00016f00:  872a              mv                      a4,a0
0x00016f02:  1ef50363          beq                     a0,a5,486               # 0x170e8

----------------
IN: sysmalloc
0x00016f06:  1e050163          beqz                    a0,482                  # 0x170e8

----------------
IN: sysmalloc
0x00016f0a:  028d3783          ld                      a5,40(s10)
0x00016f0e:  1a078863          beqz                    a5,432                  # 0x170be

----------------
IN: sysmalloc
0x000170be:  888bb783          ld                      a5,-1912(s7)
0x000170c2:  6482              ld                      s1,0(sp)
0x000170c4:  97d2              add                     a5,a5,s4
0x000170c6:  b785              j                       -160                    # 0x17026

----------------
IN: sysmalloc
0x00017026:  8f05              sub                     a4,a4,s1
0x00017028:  9752              add                     a4,a4,s4
0x0001702a:  00176713          ori                     a4,a4,1
0x0001702e:  069b3023          sd                      s1,96(s6)
0x00017032:  e498              sd                      a4,8(s1)
0x00017034:  88fbb423          sd                      a5,-1912(s7)
0x00017038:  ca0988e3          beqz                    s3,-848                 # 0x16ce8

----------------
IN: sysmalloc
0x00016ce8:  6705              lui                     a4,1
0x00016cea:  9722              add                     a4,a4,s0
0x00016cec:  89073683          ld                      a3,-1904(a4)
0x00016cf0:  00f6f463          bleu                    a5,a3,8                 # 0x16cf8

----------------
IN: sysmalloc
0x00016cf4:  88f73823          sd                      a5,-1904(a4)
0x00016cf8:  6498              ld                      a4,8(s1)
0x00016cfa:  9b61              andi                    a4,a4,-8
0x00016cfc:  11976263          bgtu                    s9,a4,260               # 0x16e00

----------------
IN: sysmalloc
0x00016d00:  416407b3          sub                     a5,s0,s6
0x00016d04:  00f037b3          snez                    a5,a5
0x00016d08:  078a              slli                    a5,a5,2
0x00016d0a:  012486b3          add                     a3,s1,s2
0x00016d0e:  0127e7b3          or                      a5,a5,s2
0x00016d12:  f034              sd                      a3,96(s0)
0x00016d14:  0017e793          ori                     a5,a5,1
0x00016d18:  41270733          sub                     a4,a4,s2
0x00016d1c:  e49c              sd                      a5,8(s1)
0x00016d1e:  00176713          ori                     a4,a4,1
0x00016d22:  e698              sd                      a4,8(a3)
0x00016d24:  01048513          addi                    a0,s1,16
0x00016d28:  74e6              ld                      s1,120(sp)
0x00016d2a:  79a6              ld                      s3,104(sp)
0x00016d2c:  7a06              ld                      s4,96(sp)
0x00016d2e:  6b46              ld                      s6,80(sp)
0x00016d30:  6c06              ld                      s8,64(sp)
0x00016d32:  7ce2              ld                      s9,56(sp)
0x00016d34:  60aa              ld                      ra,136(sp)
0x00016d36:  640a              ld                      s0,128(sp)
0x00016d38:  7946              ld                      s2,112(sp)
0x00016d3a:  6ae6              ld                      s5,88(sp)
0x00016d3c:  6ba6              ld                      s7,72(sp)
0x00016d3e:  7d42              ld                      s10,48(sp)
0x00016d40:  7da2              ld                      s11,40(sp)
0x00016d42:  6149              addi                    sp,sp,144
0x00016d44:  8082              ret                     

----------------
IN: _int_malloc
0x00017cce:  8a2a              mv                      s4,a0
0x00017cd0:  d539              beqz                    a0,-178                 # 0x17c1e

----------------
IN: _int_malloc
0x00017cd2:  85ca              mv                      a1,s2
0x00017cd4:  d68fd0ef          jal                     ra,-10904               # 0x1523c

----------------
IN: alloc_perturb
0x0001523c:  0009c797          auipc                   a5,156                  # 0xb123c
0x00015240:  32c7a783          lw                      a5,812(a5)
0x00015244:  e391              bnez                    a5,4                    # 0x15248

----------------
IN: alloc_perturb
0x00015246:  8082              ret                     

----------------
IN: _int_malloc
0x00017cd8:  b799              j                       -186                    # 0x17c1e

----------------
IN: _int_malloc
0x00017c1e:  6446              ld                      s0,80(sp)
0x00017c20:  64a6              ld                      s1,72(sp)
0x00017c22:  6906              ld                      s2,64(sp)
0x00017c24:  79e2              ld                      s3,56(sp)
0x00017c26:  7aa2              ld                      s5,40(sp)
0x00017c28:  7b02              ld                      s6,32(sp)
0x00017c2a:  6be2              ld                      s7,24(sp)
0x00017c2c:  6c42              ld                      s8,16(sp)
0x00017c2e:  6ca2              ld                      s9,8(sp)
0x00017c30:  6d02              ld                      s10,0(sp)
0x00017c32:  ba45              j                       -1616                   # 0x175e2

----------------
IN: _int_malloc
0x000175e2:  60e6              ld                      ra,88(sp)
0x000175e4:  8552              mv                      a0,s4
0x000175e6:  7a42              ld                      s4,48(sp)
0x000175e8:  6125              addi                    sp,sp,96
0x000175ea:  8082              ret                     

----------------
IN: tcache_init.part.0
0x00017e86:  84aa              mv                      s1,a0
0x00017e88:  6902              ld                      s2,0(sp)
0x00017e8a:  c521              beqz                    a0,72                   # 0x17ed2

----------------
IN: tcache_init.part.0
0x00017e8c:  4781              mv                      a5,zero
0x00017e8e:  0af427af          amoswap.w.rl            a5,a5,(s0)
0x00017e92:  2781              sext.w                  a5,a5
0x00017e94:  4705              addi                    a4,zero,1
0x00017e96:  08f74f63          bgt                     a5,a4,158               # 0x17f34

----------------
IN: tcache_init.part.0
0x00017e9a:  6442              ld                      s0,16(sp)
0x00017e9c:  01820793          addi                    a5,tp,24
0x00017ea0:  60e2              ld                      ra,24(sp)
0x00017ea2:  e784              sd                      s1,8(a5)
0x00017ea4:  8526              mv                      a0,s1
0x00017ea6:  64a2              ld                      s1,8(sp)
0x00017ea8:  28000613          addi                    a2,zero,640
0x00017eac:  4581              mv                      a1,zero
0x00017eae:  6105              addi                    sp,sp,32
0x00017eb0:  5890106f          j                       7560                    # 0x19c38

----------------
IN: __libc_malloc
0x00018550:  00063797          auipc                   a5,99                   # 0x7b550
0x00018554:  b487b783          ld                      a5,-1208(a5)
0x00018558:  f2f97ee3          bleu                    a5,s2,-196              # 0x18494

----------------
IN: __libc_malloc
0x0001855c:  641c              ld                      a5,8(s0)
0x0001855e:  db9d              beqz                    a5,-202                 # 0x18494

----------------
IN: __libc_malloc
0x00018560:  00191713          slli                    a4,s2,1
0x00018564:  973e              add                     a4,a4,a5
0x00018566:  00075683          lhu                     a3,0(a4)
0x0001856a:  d68d              beqz                    a3,-214                 # 0x18494

----------------
IN: __libc_malloc
0x00018494:  8a022783          lw                      a5,-1888(tp)
0x00018498:  10078263          beqz                    a5,260                  # 0x1859c

----------------
IN: __libc_malloc
0x0001859c:  85a6              mv                      a1,s1
0x0001859e:  00063517          auipc                   a0,99                   # 0x7b59e
0x000185a2:  b2a50513          addi                    a0,a0,-1238
0x000185a6:  c33fe0ef          jal                     ra,-5070                # 0x171d8

----------------
IN: _int_malloc
0x0001720a:  0044599b          srliw                   s3,s0,4
0x0001720e:  ffe9831b          addiw                   t1,s3,-2
0x00017212:  02031793          slli                    a5,t1,32
0x00017216:  01d7d313          srli                    t1,a5,29
0x0001721a:  9326              add                     t1,t1,s1
0x0001721c:  01033783          ld                      a5,16(t1)
0x00017220:  00399713          slli                    a4,s3,3
0x00017224:  38078a63          beqz                    a5,916                  # 0x175b8

----------------
IN: _int_malloc
0x000175b8:  0019979b          slliw                   a5,s3,1
0x000175bc:  27b1              addiw                   a5,a5,12
0x000175be:  1782              slli                    a5,a5,32
0x000175c0:  83f5              srli                    a5,a5,29
0x000175c2:  b719              j                       -250                    # 0x174c8

----------------
IN: _int_malloc
0x00017396:  00064a97          auipc                   s5,100                  # 0x7b396
0x0001739a:  d02aba83          ld                      s5,-766(s5)
0x0001739e:  015bbab3          sltu                    s5,s7,s5
0x000173a2:  41500ab3          neg                     s5,s5
0x000173a6:  01547ab3          and                     s5,s0,s5
0x000173aa:  7cac              ld                      a1,120(s1)
0x000173ac:  06048c13          addi                    s8,s1,96
0x000173b0:  4c81              mv                      s9,zero
0x000173b2:  3d858563          beq                     a1,s8,970               # 0x1777c

----------------
IN: _int_malloc
0x00017d3c:  00063717          auipc                   a4,99                   # 0x7ad3c
0x00017d40:  38c70713          addi                    a4,a4,908
0x00017d44:  40e48733          sub                     a4,s1,a4
0x00017d48:  00e03733          snez                    a4,a4
0x00017d4c:  070a              slli                    a4,a4,2
0x00017d4e:  008506b3          add                     a3,a0,s0
0x00017d52:  8f41              or                      a4,a4,s0
0x00017d54:  f0b4              sd                      a3,96(s1)
0x00017d56:  8f81              sub                     a5,a5,s0
0x00017d58:  00176713          ori                     a4,a4,1
0x00017d5c:  e518              sd                      a4,8(a0)
0x00017d5e:  0017e793          ori                     a5,a5,1
0x00017d62:  01050a13          addi                    s4,a0,16
0x00017d66:  85ca              mv                      a1,s2
0x00017d68:  e69c              sd                      a5,8(a3)
0x00017d6a:  8552              mv                      a0,s4
0x00017d6c:  cd0fd0ef          jal                     ra,-11056               # 0x1523c

----------------
IN: _int_malloc
0x00017d70:  b57d              j                       -338                    # 0x17c1e

----------------
IN: __libc_malloc
0x000185aa:  842a              mv                      s0,a0
0x000185ac:  cd25              beqz                    a0,120                  # 0x18624

----------------
IN: __libc_malloc
0x000185ae:  ff853783          ld                      a5,-8(a0)
0x000185b2:  0027f713          andi                    a4,a5,2
0x000185b6:  ff39              bnez                    a4,-162                 # 0x18514

----------------
IN: __libc_malloc
0x000185b8:  8b91              andi                    a5,a5,4
0x000185ba:  dfa9              beqz                    a5,-166                 # 0x18514

----------------
IN: __libc_malloc
0x00018514:  60e2              ld                      ra,24(sp)
0x00018516:  8522              mv                      a0,s0
0x00018518:  6442              ld                      s0,16(sp)
0x0001851a:  6902              ld                      s2,0(sp)
0x0001851c:  64a2              ld                      s1,8(sp)
0x0001851e:  6105              addi                    sp,sp,32
0x00018520:  8082              ret                     

----------------
IN: _dl_get_origin
0x000399c4:  6622              ld                      a2,8(sp)
0x000399c6:  84aa              mv                      s1,a0
0x000399c8:  dd79              beqz                    a0,-34                  # 0x399a6

----------------
IN: _dl_get_origin
0x000399ca:  347d              addiw                   s0,s0,-1
0x000399cc:  85b2              mv                      a1,a2
0x000399ce:  8622              mv                      a2,s0
0x000399d0:  fffd7097          auipc                   ra,-41                  # 0x109d0
0x000399d4:  860080e7          jalr                    ra,ra,-1952

----------------
IN: _dl_get_origin
0x000399d8:  9522              add                     a0,a0,s0
0x000399da:  00050023          sb                      zero,0(a0)
0x000399de:  b7e9              j                       -54                     # 0x399a8

----------------
IN: _dl_get_origin
0x000399a8:  6285              lui                     t0,1
0x000399aa:  9116              add                     sp,sp,t0
0x000399ac:  70a2              ld                      ra,40(sp)
0x000399ae:  8526              mv                      a0,s1
0x000399b0:  7402              ld                      s0,32(sp)
0x000399b2:  64e2              ld                      s1,24(sp)
0x000399b4:  6942              ld                      s2,16(sp)
0x000399b6:  6145              addi                    sp,sp,48
0x000399b8:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c738:  040ab683          ld                      a3,64(s5)
0x0001c73c:  048ab703          ld                      a4,72(s5)
0x0001c740:  038ab783          ld                      a5,56(s5)
0x0001c744:  0005f497          auipc                   s1,95                   # 0x7b744
0x0001c748:  2cc48493          addi                    s1,s1,716
0x0001c74c:  36a4b023          sd                      a0,864(s1)
0x0001c750:  2cd4b023          sd                      a3,704(s1)
0x0001c754:  2ce49823          sh                      a4,720(s1)
0x0001c758:  4901              mv                      s2,zero
0x0001c75a:  54078863          beqz                    a5,1360                 # 0x1ccaa

----------------
IN: _dl_non_dynamic_init
0x0001c75e:  00032597          auipc                   a1,50                   # 0x4e75e
0x0001c762:  51a58593          addi                    a1,a1,1306
0x0001c766:  852e              mv                      a0,a1
0x0001c768:  4781              mv                      a5,zero
0x0001c76a:  01000737          lui                     a4,4096
0x0001c76e:  4681              mv                      a3,zero
0x0001c770:  4605              addi                    a2,zero,1
0x0001c772:  76d1c0ef          jal                     ra,118636               # 0x396de

----------------
IN: _dl_new_object
0x000396de:  715d              addi                    sp,sp,-80
0x000396e0:  f052              sd                      s4,32(sp)
0x000396e2:  8a2a              mv                      s4,a0
0x000396e4:  852e              mv                      a0,a1
0x000396e6:  e486              sd                      ra,72(sp)
0x000396e8:  e0a2              sd                      s0,64(sp)
0x000396ea:  fc26              sd                      s1,56(sp)
0x000396ec:  f84a              sd                      s2,48(sp)
0x000396ee:  f44e              sd                      s3,40(sp)
0x000396f0:  ec56              sd                      s5,24(sp)
0x000396f2:  e85a              sd                      s6,16(sp)
0x000396f4:  e45e              sd                      s7,8(sp)
0x000396f6:  e062              sd                      s8,0(sp)
0x000396f8:  8bae              mv                      s7,a1
0x000396fa:  8ab2              mv                      s5,a2
0x000396fc:  8436              mv                      s0,a3
0x000396fe:  89ba              mv                      s3,a4
0x00039700:  893e              mv                      s2,a5
0x00039702:  f32e00ef          jal                     ra,-129230              # 0x19e34

----------------
IN: strlen
0x00019e34:  ff857793          andi                    a5,a0,-8
0x00019e38:  7f7f8737          lui                     a4,522232
0x00019e3c:  f7f70713          addi                    a4,a4,-129
0x00019e40:  6390              ld                      a2,0(a5)
0x00019e42:  02071693          slli                    a3,a4,32
0x00019e46:  96ba              add                     a3,a3,a4
0x00019e48:  00d67733          and                     a4,a2,a3
0x00019e4c:  9736              add                     a4,a4,a3
0x00019e4e:  8f51              or                      a4,a4,a2
0x00019e50:  8f55              or                      a4,a4,a3
0x00019e52:  00757693          andi                    a3,a0,7
0x00019e56:  fff74713          not                     a4,a4
0x00019e5a:  0036969b          slliw                   a3,a3,3
0x00019e5e:  00d75733          srl                     a4,a4,a3
0x00019e62:  ef35              bnez                    a4,124                  # 0x19ede

----------------
IN: strlen
0x00019ede:  08077793          andi                    a5,a4,128
0x00019ee2:  4501              mv                      a0,zero
0x00019ee4:  ffe5              bnez                    a5,-8                   # 0x19edc

----------------
IN: strlen
0x00019edc:  8082              ret                     

----------------
IN: _dl_new_object
0x00039706:  8b2a              mv                      s6,a0
0x00039708:  4585              addi                    a1,zero,1
0x0003970a:  4a150513          addi                    a0,a0,1185
0x0003970e:  00bb0c33          add                     s8,s6,a1
0x00039712:  999df0ef          jal                     ra,-132712              # 0x190aa

----------------
IN: calloc
0x000190aa:  7179              addi                    sp,sp,-48
0x000190ac:  ec26              sd                      s1,24(sp)
0x000190ae:  02b504b3          mul                     s1,a0,a1
0x000190b2:  f406              sd                      ra,40(sp)
0x000190b4:  f022              sd                      s0,32(sp)
0x000190b6:  02b537b3          mulhu                   a5,a0,a1
0x000190ba:  2204c163          bltz                    s1,546                  # 0x192dc

----------------
IN: calloc
0x000190be:  00f037b3          snez                    a5,a5
0x000190c2:  20079d63          bnez                    a5,538                  # 0x192dc

----------------
IN: calloc
0x000190c6:  00098797          auipc                   a5,152                  # 0xb10c6
0x000190ca:  4a77c783          lbu                     a5,1191(a5)
0x000190ce:  e84a              sd                      s2,16(sp)
0x000190d0:  e44e              sd                      s3,8(sp)
0x000190d2:  e052              sd                      s4,0(sp)
0x000190d4:  1c078b63          beqz                    a5,470                  # 0x192aa

----------------
IN: calloc
0x000190d8:  01820793          addi                    a5,tp,24
0x000190dc:  6798              ld                      a4,8(a5)
0x000190de:  20070863          beqz                    a4,528                  # 0x192ee

----------------
IN: calloc
0x000190e2:  8a022783          lw                      a5,-1888(tp)
0x000190e6:  cbcd              beqz                    a5,178                  # 0x19198

----------------
IN: calloc
0x00019198:  00062997          auipc                   s3,98                   # 0x7b198
0x0001919c:  f3098993          addi                    s3,s3,-208
0x000191a0:  0609ba03          ld                      s4,96(s3)
0x000191a4:  85a6              mv                      a1,s1
0x000191a6:  854e              mv                      a0,s3
0x000191a8:  008a3903          ld                      s2,8(s4)
0x000191ac:  82cfe0ef          jal                     ra,-8148                # 0x171d8

----------------
IN: _int_malloc
0x00017354:  f456              sd                      s5,40(sp)
0x00017356:  f05a              sd                      s6,32(sp)
0x00017358:  ec5e              sd                      s7,24(sp)
0x0001735a:  e862              sd                      s8,16(sp)
0x0001735c:  e466              sd                      s9,8(sp)
0x0001735e:  00645993          srli                    s3,s0,6
0x00017362:  03000793          addi                    a5,zero,48
0x00017366:  2537ff63          bleu                    s3,a5,606               # 0x175c4

----------------
IN: _int_malloc
0x000175c4:  0309899b          addiw                   s3,s3,48
0x000175c8:  bb45              j                       -592                    # 0x17378

----------------
IN: _int_malloc
0x00017378:  00848793          addi                    a5,s1,8
0x0001737c:  439c              lw                      a5,0(a5)
0x0001737e:  2781              sext.w                  a5,a5
0x00017380:  2c079e63          bnez                    a5,732                  # 0x1765c

----------------
IN: _int_malloc
0x000178fe:  0019979b          slliw                   a5,s3,1
0x00017902:  00c7871b          addiw                   a4,a5,12
0x00017906:  1702              slli                    a4,a4,32
0x00017908:  8375              srli                    a4,a4,29
0x0001790a:  9726              add                     a4,a4,s1
0x0001790c:  6314              ld                      a3,0(a4)
0x0001790e:  ff070613          addi                    a2,a4,-16
0x00017912:  00c68563          beq                     a3,a2,10                # 0x1791c

----------------
IN: _int_malloc
0x0001791c:  e06a              sd                      s10,0(sp)
0x0001791e:  b5b5              j                       -404                    # 0x1778a

----------------
IN: _int_malloc
0x0001778a:  4d05              addi                    s10,zero,1
0x0001778c:  4a0d              addi                    s4,zero,3
0x0001778e:  0019871b          addiw                   a4,s3,1
0x00017792:  0057581b          srliw                   a6,a4,5
0x00017796:  27b9              addiw                   a5,a5,14
0x00017798:  21880693          addi                    a3,a6,536
0x0001779c:  1782              slli                    a5,a5,32
0x0001779e:  068a              slli                    a3,a3,2
0x000177a0:  9381              srli                    a5,a5,32
0x000177a2:  96a6              add                     a3,a3,s1
0x000177a4:  078e              slli                    a5,a5,3
0x000177a6:  4290              lw                      a2,0(a3)
0x000177a8:  17c1              addi                    a5,a5,-16
0x000177aa:  97a6              add                     a5,a5,s1
0x000177ac:  00ed173b          sllw                    a4,s10,a4
0x000177b0:  0ce66863          bgtu                    a4,a2,208               # 0x17880

----------------
IN: calloc
0x000191b0:  842a              mv                      s0,a0
0x000191b2:  ff897913          andi                    s2,s2,-8
0x000191b6:  f14d              bnez                    a0,-94                  # 0x19158

----------------
IN: calloc
0x00019158:  ff853603          ld                      a2,-8(a0)
0x0001915c:  00267793          andi                    a5,a2,2
0x00019160:  e3cd              bnez                    a5,162                  # 0x19202

----------------
IN: calloc
0x00019162:  00467793          andi                    a5,a2,4
0x00019166:  ff050713          addi                    a4,a0,-16
0x0001916a:  14078363          beqz                    a5,326                  # 0x192b0

----------------
IN: calloc
0x000192b0:  00062797          auipc                   a5,98                   # 0x7b2b0
0x000192b4:  e1878793          addi                    a5,a5,-488
0x000192b8:  08f99963          bne                     s3,a5,146               # 0x1934a

----------------
IN: calloc
0x000192bc:  8a022783          lw                      a5,-1888(tp)
0x000192c0:  f7b1              bnez                    a5,-180                 # 0x1920c

----------------
IN: calloc
0x000192c2:  9a61              andi                    a2,a2,-8
0x000192c4:  b79d              j                       -154                    # 0x1922a

----------------
IN: calloc
0x0001922a:  00098797          auipc                   a5,152                  # 0xb122a
0x0001922e:  33e7a783          lw                      a5,830(a5)
0x00019232:  e399              bnez                    a5,6                    # 0x19238

----------------
IN: calloc
0x00019234:  0cea0e63          beq                     s4,a4,220               # 0x19310

----------------
IN: calloc
0x00019310:  f2c974e3          bleu                    a2,s2,-216              # 0x19238

----------------
IN: calloc
0x00019238:  1661              addi                    a2,a2,-8
0x0001923a:  47dd              addi                    a5,zero,23
0x0001923c:  0ec7f663          bleu                    a2,a5,236               # 0x19328

----------------
IN: calloc
0x00019240:  04f00793          addi                    a5,zero,79
0x00019244:  08c7e163          bgtu                    a2,a5,130               # 0x192c6

----------------
IN: calloc
0x000192c6:  8522              mv                      a0,s0
0x000192c8:  7402              ld                      s0,32(sp)
0x000192ca:  6942              ld                      s2,16(sp)
0x000192cc:  69a2              ld                      s3,8(sp)
0x000192ce:  6a02              ld                      s4,0(sp)
0x000192d0:  70a2              ld                      ra,40(sp)
0x000192d2:  64e2              ld                      s1,24(sp)
0x000192d4:  4581              mv                      a1,zero
0x000192d6:  6145              addi                    sp,sp,48
0x000192d8:  1610006f          j                       2400                    # 0x19c38

----------------
IN: _dl_new_object
0x00039716:  84aa              mv                      s1,a0
0x00039718:  14050763          beqz                    a0,334                  # 0x39866

----------------
IN: _dl_new_object
0x0003971c:  48050713          addi                    a4,a0,1152
0x00039720:  48850793          addi                    a5,a0,1160
0x00039724:  85de              mv                      a1,s7
0x00039726:  2ee4b423          sd                      a4,744(s1)
0x0003972a:  fc9c              sd                      a5,56(s1)
0x0003972c:  8662              mv                      a2,s8
0x0003972e:  4a050513          addi                    a0,a0,1184
0x00039732:  f484              sd                      s1,40(s1)
0x00039734:  fffd7097          auipc                   ra,-41                  # 0x10734
0x00039738:  afc080e7          jalr                    ra,ra,-1284

----------------
IN: __memcpy_noalignment
0x0001a124:  00467793          andi                    a5,a2,4
0x0001a128:  00c586b3          add                     a3,a1,a2
0x0001a12c:  00c80733          add                     a4,a6,a2
0x0001a130:  cb91              beqz                    a5,20                   # 0x1a144

----------------
IN: __memcpy_noalignment
0x0001a144:  c215              beqz                    a2,36                   # 0x1a168

----------------
IN: __memcpy_noalignment
0x0001a146:  8205              srli                    a2,a2,1
0x0001a148:  00c58eb3          add                     t4,a1,a2
0x0001a14c:  00c80f33          add                     t5,a6,a2
0x0001a150:  0005c283          lbu                     t0,0(a1)
0x0001a154:  fff6c303          lbu                     t1,-1(a3)
0x0001a158:  000ec383          lbu                     t2,0(t4)
0x0001a15c:  00580023          sb                      t0,0(a6)
0x0001a160:  fe670fa3          sb                      t1,-1(a4)
0x0001a164:  007f0023          sb                      t2,0(t5)
0x0001a168:  8082              ret                     

----------------
IN: _dl_new_object
0x0003973c:  000a4b83          lbu                     s7,0(s4)
0x00039740:  4785              addi                    a5,zero,1
0x00039742:  48a4b423          sd                      a0,1160(s1)
0x00039746:  48f4ac23          sw                      a5,1176(s1)
0x0003974a:  8752              mv                      a4,s4
0x0003974c:  120b8e63          beqz                    s7,316                  # 0x39888

----------------
IN: _dl_new_object
0x00039888:  01650733          add                     a4,a0,s6
0x0003988c:  b5d1              j                       -316                    # 0x39750

----------------
IN: _dl_new_object
0x00039750:  3344d603          lhu                     a2,820(s1)
0x00039754:  00041797          auipc                   a5,65                   # 0x7a754
0x00039758:  5647b783          ld                      a5,1380(a5)
0x0003975c:  439c              lw                      a5,0(a5)
0x0003975e:  003afa93          andi                    s5,s5,3
0x00039762:  9a71              andi                    a2,a2,-4
0x00039764:  01566633          or                      a2,a2,s5
0x00039768:  e498              sd                      a4,8(s1)
0x0003976a:  32c49a23          sh                      a2,820(s1)
0x0003976e:  1007f793          andi                    a5,a5,256
0x00039772:  10078763          beqz                    a5,270                  # 0x39880

----------------
IN: _dl_new_object
0x00039880:  4785              addi                    a5,zero,1
0x00039882:  3ef4a623          sw                      a5,1004(s1)
0x00039886:  bdc5              j                       -272                    # 0x39776

----------------
IN: _dl_new_object
0x00039776:  00291793          slli                    a5,s2,2
0x0003977a:  97ca              add                     a5,a5,s2
0x0003977c:  00042717          auipc                   a4,66                   # 0x7b77c
0x00039780:  86c73703          ld                      a4,-1940(a4)
0x00039784:  0796              slli                    a5,a5,5
0x00039786:  97ba              add                     a5,a5,a4
0x00039788:  639c              ld                      a5,0(a5)
0x0003978a:  567d              addi                    a2,zero,-1
0x0003978c:  37848693          addi                    a3,s1,888
0x00039790:  4711              addi                    a4,zero,4
0x00039792:  2e84bc23          sd                      s0,760(s1)
0x00039796:  0324b823          sd                      s2,48(s1)
0x0003979a:  44c4b823          sd                      a2,1104(s1)
0x0003979e:  3ad4b023          sd                      a3,928(s1)
0x000397a2:  38e4bc23          sd                      a4,920(s1)
0x000397a6:  10078363          beqz                    a5,262                  # 0x398ac

----------------
IN: _dl_new_object
0x000397aa:  2d878713          addi                    a4,a5,728
0x000397ae:  36e4bc23          sd                      a4,888(s1)
0x000397b2:  0e040b63          beqz                    s0,246                  # 0x398a8

----------------
IN: _dl_new_object
0x000398a8:  87a6              mv                      a5,s1
0x000398aa:  b7e5              j                       -24                     # 0x39892

----------------
IN: _dl_new_object
0x00039892:  2d878613          addi                    a2,a5,728
0x00039896:  f2c709e3          beq                     a4,a2,-206              # 0x397c8

----------------
IN: _dl_new_object
0x0003989a:  0089f993          andi                    s3,s3,8
0x0003989e:  00098d63          beqz                    s3,26                   # 0x398b8

----------------
IN: _dl_new_object
0x000398b8:  38048693          addi                    a3,s1,896
0x000398bc:  b729              j                       -246                    # 0x397c6

----------------
IN: _dl_new_object
0x000397c6:  e290              sd                      a2,0(a3)
0x000397c8:  2d848793          addi                    a5,s1,728
0x000397cc:  3af4b423          sd                      a5,936(s1)
0x000397d0:  080b8b63          beqz                    s7,150                  # 0x39866

----------------
IN: _dl_new_object
0x00039866:  60a6              ld                      ra,72(sp)
0x00039868:  6406              ld                      s0,64(sp)
0x0003986a:  7942              ld                      s2,48(sp)
0x0003986c:  79a2              ld                      s3,40(sp)
0x0003986e:  7a02              ld                      s4,32(sp)
0x00039870:  6ae2              ld                      s5,24(sp)
0x00039872:  6b42              ld                      s6,16(sp)
0x00039874:  6ba2              ld                      s7,8(sp)
0x00039876:  6c02              ld                      s8,0(sp)
0x00039878:  8526              mv                      a0,s1
0x0003987a:  74e2              ld                      s1,56(sp)
0x0003987c:  6161              addi                    sp,sp,80
0x0003987e:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c776:  842a              mv                      s0,a0
0x0001c778:  52050963          beqz                    a0,1330                 # 0x1ccaa

----------------
IN: _dl_non_dynamic_init
0x0001c77c:  038abe03          ld                      t3,56(s5)
0x0001c780:  020e3783          ld                      a5,32(t3)
0x0001c784:  038e5683          lhu                     a3,56(t3)
0x0001c788:  97f2              add                     a5,a5,t3
0x0001c78a:  2cf53023          sd                      a5,704(a0)
0x0001c78e:  2cd51823          sh                      a3,720(a0)
0x0001c792:  0006871b          sext.w                  a4,a3
0x0001c796:  c6b5              beqz                    a3,108                  # 0x1c802

----------------
IN: _dl_non_dynamic_init
0x0001c798:  377d              addiw                   a4,a4,-1
0x0001c79a:  1702              slli                    a4,a4,32
0x0001c79c:  9301              srli                    a4,a4,32
0x0001c79e:  00371613          slli                    a2,a4,3
0x0001c7a2:  8e19              sub                     a2,a2,a4
0x0001c7a4:  03878693          addi                    a3,a5,56
0x0001c7a8:  060e              slli                    a2,a2,3
0x0001c7aa:  9636              add                     a2,a2,a3
0x0001c7ac:  4509              addi                    a0,zero,2
0x0001c7ae:  4805              addi                    a6,zero,1
0x0001c7b0:  431d              addi                    t1,zero,7
0x0001c7b2:  a809              j                       18                      # 0x1c7c4

----------------
IN: _dl_non_dynamic_init
0x0001c7c4:  4398              lw                      a4,0(a5)
0x0001c7c6:  fea717e3          bne                     a4,a0,-18               # 0x1c7b4

----------------
IN: _dl_non_dynamic_init
0x0001c7b4:  49070463          beq                     a4,a6,1160              # 0x1cc3c

----------------
IN: _dl_non_dynamic_init
0x0001c7b8:  5a670e63          beq                     a4,t1,1468              # 0x1cd74

----------------
IN: _dl_non_dynamic_init
0x0001c7bc:  03878793          addi                    a5,a5,56
0x0001c7c0:  04c78163          beq                     a5,a2,66                # 0x1c802

----------------
IN: _dl_non_dynamic_init
0x0001cc3c:  6014              ld                      a3,0(s0)
0x0001cc3e:  6b98              ld                      a4,16(a5)
0x0001cc40:  e291              bnez                    a3,4                    # 0x1cc44

----------------
IN: _dl_non_dynamic_init
0x0001cc42:  e018              sd                      a4,0(s0)
0x0001cc44:  778c              ld                      a1,40(a5)
0x0001cc46:  37043683          ld                      a3,880(s0)
0x0001cc4a:  972e              add                     a4,a4,a1
0x0001cc4c:  b6d768e3          bgtu                    a3,a4,-1168             # 0x1c7bc

----------------
IN: _dl_non_dynamic_init
0x0001cc50:  36e43823          sd                      a4,880(s0)
0x0001cc54:  b6a5              j                       -1176                   # 0x1c7bc

----------------
IN: _dl_non_dynamic_init
0x0001c7ca:  43d8              lw                      a4,4(a5)
0x0001c7cc:  33644683          lbu                     a3,822(s0)
0x0001c7d0:  778c              ld                      a1,40(a5)
0x0001c7d2:  0017571b          srliw                   a4,a4,1
0x0001c7d6:  8b05              andi                    a4,a4,1
0x0001c7d8:  0107b883          ld                      a7,16(a5)
0x0001c7dc:  00174713          xori                    a4,a4,1
0x0001c7e0:  fdf6f693          andi                    a3,a3,-33
0x0001c7e4:  0057171b          slliw                   a4,a4,5
0x0001c7e8:  8f55              or                      a4,a4,a3
0x0001c7ea:  0045d693          srli                    a3,a1,4
0x0001c7ee:  32e40b23          sb                      a4,822(s0)
0x0001c7f2:  2cd41923          sh                      a3,722(s0)
0x0001c7f6:  01143823          sd                      a7,16(s0)
0x0001c7fa:  03878793          addi                    a5,a5,56
0x0001c7fe:  fcc793e3          bne                     a5,a2,-58               # 0x1c7c4

----------------
IN: _dl_non_dynamic_init
0x0001c802:  601c              ld                      a5,0(s0)
0x0001c804:  37043683          ld                      a3,880(s0)
0x0001c808:  6818              ld                      a4,16(s0)
0x0001c80a:  40fe07b3          sub                     a5,t3,a5
0x0001c80e:  96be              add                     a3,a3,a5
0x0001c810:  973e              add                     a4,a4,a5
0x0001c812:  37c43423          sd                      t3,872(s0)
0x0001c816:  e01c              sd                      a5,0(s0)
0x0001c818:  36d43823          sd                      a3,880(s0)
0x0001c81c:  e818              sd                      a4,16(s0)
0x0001c81e:  50070f63          beqz                    a4,1310                 # 0x1cd3c

----------------
IN: _dl_non_dynamic_init
0x0001c822:  631c              ld                      a5,0(a4)
0x0001c824:  04040593          addi                    a1,s0,64
0x0001c828:  cf9d              beqz                    a5,62                   # 0x1c866

----------------
IN: _dl_non_dynamic_init
0x0001c82a:  70000537          lui                     a0,458752
0x0001c82e:  832a              mv                      t1,a0
0x0001c830:  88aa              mv                      a7,a0
0x0001c832:  dff30313          addi                    t1,t1,-513
0x0001c836:  157d              addi                    a0,a0,-1
0x0001c838:  02588893          addi                    a7,a7,37
0x0001c83c:  02500613          addi                    a2,zero,37
0x0001c840:  483d              addi                    a6,zero,15
0x0001c842:  5e71              addi                    t3,zero,-4
0x0001c844:  4f2d              addi                    t5,zero,11
0x0001c846:  03500e93          addi                    t4,zero,53
0x0001c84a:  00f67863          bleu                    a5,a2,16                # 0x1c85a

----------------
IN: _dl_non_dynamic_init
0x0001c85a:  078e              slli                    a5,a5,3
0x0001c85c:  97ae              add                     a5,a5,a1
0x0001c85e:  e398              sd                      a4,0(a5)
0x0001c860:  6b1c              ld                      a5,16(a4)
0x0001c862:  0741              addi                    a4,a4,16
0x0001c864:  f3fd              bnez                    a5,-26                  # 0x1c84a

----------------
IN: _dl_non_dynamic_init
0x0001c84a:  00f67863          bleu                    a5,a2,16                # 0x1c85a

----------------
IN: _dl_non_dynamic_init
0x0001c84e:  40f506b3          sub                     a3,a0,a5
0x0001c852:  42d86563          bgtu                    a3,a6,1066              # 0x1cc7c

----------------
IN: _dl_non_dynamic_init
0x0001cc7c:  0017969b          slliw                   a3,a5,1
0x0001cc80:  4016d69b          sraiw                   a3,a3,1
0x0001cc84:  00de7863          bleu                    a3,t3,16                # 0x1cc94

----------------
IN: _dl_non_dynamic_init
0x0001cc94:  40f306b3          sub                     a3,t1,a5
0x0001cc98:  02df6e63          bgtu                    a3,t5,60                # 0x1ccd4

----------------
IN: _dl_non_dynamic_init
0x0001ccd4:  700006b7          lui                     a3,458752
0x0001ccd8:  eff68693          addi                    a3,a3,-257
0x0001ccdc:  8e9d              sub                     a3,a3,a5
0x0001ccde:  4fa9              addi                    t6,zero,10
0x0001cce0:  b8dfe0e3          bgtu                    a3,t6,-1152             # 0x1c860

----------------
IN: _dl_non_dynamic_init
0x0001cce4:  700006b7          lui                     a3,458752
0x0001cce8:  f4468693          addi                    a3,a3,-188
0x0001ccec:  40f687b3          sub                     a5,a3,a5
0x0001ccf0:  b6ad              j                       -1174                   # 0x1c85a

----------------
IN: _dl_non_dynamic_init
0x0001c856:  40f887b3          sub                     a5,a7,a5
0x0001c85a:  078e              slli                    a5,a5,3
0x0001c85c:  97ae              add                     a5,a5,a1
0x0001c85e:  e398              sd                      a4,0(a5)
0x0001c860:  6b1c              ld                      a5,16(a4)
0x0001c862:  0741              addi                    a4,a4,16
0x0001c864:  f3fd              bnez                    a5,-26                  # 0x1c84a

----------------
IN: _dl_non_dynamic_init
0x0001c866:  707c              ld                      a5,224(s0)
0x0001c868:  c789              beqz                    a5,10                   # 0x1c872

----------------
IN: _dl_non_dynamic_init
0x0001c872:  7c3c              ld                      a5,120(s0)
0x0001c874:  c791              beqz                    a5,12                   # 0x1c880

----------------
IN: _dl_non_dynamic_init
0x0001c876:  6458              ld                      a4,136(s0)
0x0001c878:  47e1              addi                    a5,zero,24
0x0001c87a:  6718              ld                      a4,8(a4)
0x0001c87c:  56f71f63          bne                     a4,a5,1406              # 0x1cdfa

----------------
IN: _dl_non_dynamic_init
0x0001c880:  16043783          ld                      a5,352(s0)
0x0001c884:  c799              beqz                    a5,14                   # 0x1c892

----------------
IN: _dl_non_dynamic_init
0x0001c892:  13043703          ld                      a4,304(s0)
0x0001c896:  f45e              sd                      s7,40(sp)
0x0001c898:  c305              beqz                    a4,32                   # 0x1c8b8

----------------
IN: _dl_non_dynamic_init
0x0001c8b8:  19043783          ld                      a5,400(s0)
0x0001c8bc:  c795              beqz                    a5,44                   # 0x1c8e8

----------------
IN: _dl_non_dynamic_init
0x0001c8e8:  12843783          ld                      a5,296(s0)
0x0001c8ec:  c399              beqz                    a5,6                    # 0x1c8f2

----------------
IN: _dl_non_dynamic_init
0x0001c8f2:  8522              mv                      a0,s0
0x0001c8f4:  5f01e0ef          jal                     ra,124400               # 0x3aee4

----------------
IN: _dl_setup_hash
0x0003aee4:  2b853783          ld                      a5,696(a0)
0x0003aee8:  cbb1              beqz                    a5,84                   # 0x3af3c

----------------
IN: _dl_setup_hash
0x0003aeea:  6794              ld                      a3,8(a5)
0x0003aeec:  611c              ld                      a5,0(a0)
0x0003aeee:  96be              add                     a3,a3,a5
0x0003aef0:  4298              lw                      a4,0(a3)
0x0003aef2:  30e52623          sw                      a4,780(a0)
0x0003aef6:  469c              lw                      a5,8(a3)
0x0003aef8:  42d0              lw                      a2,4(a3)
0x0003aefa:  fff7859b          addiw                   a1,a5,-1
0x0003aefe:  00f5f833          and                     a6,a1,a5
0x0003af02:  06081063          bnez                    a6,96                   # 0x3af62

----------------
IN: _dl_setup_hash
0x0003af06:  0017979b          slliw                   a5,a5,1
0x0003af0a:  1782              slli                    a5,a5,32
0x0003af0c:  1702              slli                    a4,a4,32
0x0003af0e:  1602              slli                    a2,a2,32
0x0003af10:  9201              srli                    a2,a2,32
0x0003af12:  9381              srli                    a5,a5,32
0x0003af14:  9301              srli                    a4,a4,32
0x0003af16:  30b52823          sw                      a1,784(a0)
0x0003af1a:  8f11              sub                     a4,a4,a2
0x0003af1c:  078a              slli                    a5,a5,2
0x0003af1e:  01068613          addi                    a2,a3,16
0x0003af22:  46d4              lw                      a3,12(a3)
0x0003af24:  97b2              add                     a5,a5,a2
0x0003af26:  070a              slli                    a4,a4,2
0x0003af28:  973e              add                     a4,a4,a5
0x0003af2a:  32e53423          sd                      a4,808(a0)
0x0003af2e:  32f53023          sd                      a5,800(a0)
0x0003af32:  30d52a23          sw                      a3,788(a0)
0x0003af36:  30c53c23          sd                      a2,792(a0)
0x0003af3a:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c8f8:  33445783          lhu                     a5,820(s0)
0x0001c8fc:  3a843703          ld                      a4,936(s0)
0x0001c900:  7850              ld                      a2,176(s0)
0x0001c902:  4685              addi                    a3,zero,1
0x0001c904:  0087e793          ori                     a5,a5,8
0x0001c908:  32f41a23          sh                      a5,820(s0)
0x0001c90c:  3ed42623          sw                      a3,1004(s0)
0x0001c910:  02840793          addi                    a5,s0,40
0x0001c914:  c714              sw                      a3,8(a4)
0x0001c916:  e31c              sd                      a5,0(a4)
0x0001c918:  ca11              beqz                    a2,20                   # 0x1c92c

----------------
IN: _dl_non_dynamic_init
0x0001c91a:  743c              ld                      a5,104(s0)
0x0001c91c:  6610              ld                      a2,8(a2)
0x0001c91e:  6014              ld                      a3,0(s0)
0x0001c920:  679c              ld                      a5,8(a5)
0x0001c922:  7c18              ld                      a4,56(s0)
0x0001c924:  97b2              add                     a5,a5,a2
0x0001c926:  97b6              add                     a5,a5,a3
0x0001c928:  e31c              sd                      a5,0(a4)
0x0001c92a:  e41c              sd                      a5,8(s0)
0x0001c92c:  4581              mv                      a1,zero
0x0001c92e:  8522              mv                      a0,s0
0x0001c930:  53d1c0ef          jal                     ra,118076               # 0x3966c

----------------
IN: _dl_add_to_namespace_list
0x0003966c:  1101              addi                    sp,sp,-32
0x0003966e:  e426              sd                      s1,8(sp)
0x00039670:  84aa              mv                      s1,a0
0x00039672:  00042517          auipc                   a0,66                   # 0x7b672
0x00039676:  91653503          ld                      a0,-1770(a0)
0x0003967a:  e822              sd                      s0,16(sp)
0x0003967c:  ec06              sd                      ra,24(sp)
0x0003967e:  842e              mv                      s0,a1
0x00039680:  a7ff70ef          jal                     ra,-34178               # 0x310fe

----------------
IN: ___pthread_mutex_lock
0x000310fe:  01050793          addi                    a5,a0,16
0x00031102:  439c              lw                      a5,0(a5)
0x00031104:  07c7f713          andi                    a4,a5,124
0x00031108:  ef29              bnez                    a4,90                   # 0x31162

----------------
IN: ___pthread_mutex_lock
0x0003110a:  1101              addi                    sp,sp,-32
0x0003110c:  e822              sd                      s0,16(sp)
0x0003110e:  ec06              sd                      ra,24(sp)
0x00031110:  17f7f793          andi                    a5,a5,383
0x00031114:  842a              mv                      s0,a0
0x00031116:  e7b9              bnez                    a5,78                   # 0x31164

----------------
IN: ___pthread_mutex_lock
0x00031164:  01050793          addi                    a5,a0,16
0x00031168:  439c              lw                      a5,0(a5)
0x0003116a:  07f7f793          andi                    a5,a5,127
0x0003116e:  4705              addi                    a4,zero,1
0x00031170:  06e79363          bne                     a5,a4,102               # 0x311d6

----------------
IN: ___pthread_mutex_lock
0x00031174:  4518              lw                      a4,8(a0)
0x00031176:  97022683          lw                      a3,-1680(tp)
0x0003117a:  00d71d63          bne                     a4,a3,26                # 0x31194

----------------
IN: ___pthread_mutex_lock
0x00031194:  01050693          addi                    a3,a0,16
0x00031198:  428c              lw                      a1,0(a3)
0x0003119a:  0805f593          andi                    a1,a1,128
0x0003119e:  ed81              bnez                    a1,24                   # 0x311b6

----------------
IN: ___pthread_mutex_lock
0x000311a0:  8a022683          lw                      a3,-1888(tp)
0x000311a4:  ea89              bnez                    a3,18                   # 0x311b6

----------------
IN: ___pthread_mutex_lock
0x000311a6:  4114              lw                      a3,0(a0)
0x000311a8:  e699              bnez                    a3,14                   # 0x311b6

----------------
IN: ___pthread_mutex_lock
0x000311aa:  c11c              sw                      a5,0(a0)
0x000311ac:  12071c63          bnez                    a4,312                  # 0x312e4

----------------
IN: ___pthread_mutex_lock
0x000311b0:  4785              addi                    a5,zero,1
0x000311b2:  c05c              sw                      a5,4(s0)
0x000311b4:  b761              j                       -120                    # 0x3113c

----------------
IN: ___pthread_mutex_lock
0x0003113c:  445c              lw                      a5,12(s0)
0x0003113e:  97022703          lw                      a4,-1680(tp)
0x00031142:  2785              addiw                   a5,a5,1
0x00031144:  c45c              sw                      a5,12(s0)
0x00031146:  c418              sw                      a4,8(s0)
0x00031148:  4501              mv                      a0,zero
0x0003114a:  60e2              ld                      ra,24(sp)
0x0003114c:  6442              ld                      s0,16(sp)
0x0003114e:  6105              addi                    sp,sp,32
0x00031150:  8082              ret                     

----------------
IN: _dl_add_to_namespace_list
0x00039684:  00241693          slli                    a3,s0,2
0x00039688:  00868733          add                     a4,a3,s0
0x0003968c:  0716              slli                    a4,a4,5
0x0003968e:  00042617          auipc                   a2,66                   # 0x7b68e
0x00039692:  95a63603          ld                      a2,-1702(a2)
0x00039696:  9732              add                     a4,a4,a2
0x00039698:  631c              ld                      a5,0(a4)
0x0003969a:  c3a1              beqz                    a5,64                   # 0x396da

----------------
IN: _dl_add_to_namespace_list
0x0003969c:  873e              mv                      a4,a5
0x0003969e:  6f9c              ld                      a5,24(a5)
0x000396a0:  fff5              bnez                    a5,-4                   # 0x3969c

----------------
IN: _dl_add_to_namespace_list
0x000396a2:  f098              sd                      a4,32(s1)
0x000396a4:  ef04              sd                      s1,24(a4)
0x000396a6:  96a2              add                     a3,a3,s0
0x000396a8:  0696              slli                    a3,a3,5
0x000396aa:  00d607b3          add                     a5,a2,a3
0x000396ae:  4794              lw                      a3,8(a5)
0x000396b0:  00041617          auipc                   a2,65                   # 0x7a6b0
0x000396b4:  62063603          ld                      a2,1568(a2)
0x000396b8:  6218              ld                      a4,0(a2)
0x000396ba:  2685              addiw                   a3,a3,1
0x000396bc:  6442              ld                      s0,16(sp)
0x000396be:  c794              sw                      a3,8(a5)
0x000396c0:  46e4bc23          sd                      a4,1144(s1)
0x000396c4:  60e2              ld                      ra,24(sp)
0x000396c6:  64a2              ld                      s1,8(sp)
0x000396c8:  0705              addi                    a4,a4,1
0x000396ca:  e218              sd                      a4,0(a2)
0x000396cc:  00042517          auipc                   a0,66                   # 0x7b6cc
0x000396d0:  8bc53503          ld                      a0,-1860(a0)
0x000396d4:  6105              addi                    sp,sp,32
0x000396d6:  886f806f          j                       -32634                  # 0x3175c

----------------
IN: pthread_mutex_unlock
0x0003175c:  4585              addi                    a1,zero,1
0x0003175e:  b721              j                       -248                    # 0x31666

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031666:  01050713          addi                    a4,a0,16
0x0003166a:  4318              lw                      a4,0(a4)
0x0003166c:  07c77813          andi                    a6,a4,124
0x00031670:  04081a63          bnez                    a6,84                   # 0x316c4

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031674:  1141              addi                    sp,sp,-16
0x00031676:  e406              sd                      ra,8(sp)
0x00031678:  17f77713          andi                    a4,a4,383
0x0003167c:  87aa              mv                      a5,a0
0x0003167e:  86ae              mv                      a3,a1
0x00031680:  e339              bnez                    a4,70                   # 0x316c6

----------------
IN: __pthread_mutex_unlock_usercnt
0x000316c6:  10000593          addi                    a1,zero,256
0x000316ca:  02b71163          bne                     a4,a1,34                # 0x316ec

----------------
IN: __pthread_mutex_unlock_usercnt
0x000316ec:  01050613          addi                    a2,a0,16
0x000316f0:  4210              lw                      a2,0(a2)
0x000316f2:  07f67613          andi                    a2,a2,127
0x000316f6:  4585              addi                    a1,zero,1
0x000316f8:  00b61e63          bne                     a2,a1,28                # 0x31714

----------------
IN: __pthread_mutex_unlock_usercnt
0x000316fc:  4510              lw                      a2,8(a0)
0x000316fe:  97022703          lw                      a4,-1680(tp)
0x00031702:  00e60463          beq                     a2,a4,8                 # 0x3170a

----------------
IN: __pthread_mutex_unlock_usercnt
0x0003170a:  4158              lw                      a4,4(a0)
0x0003170c:  377d              addiw                   a4,a4,-1
0x0003170e:  c158              sw                      a4,4(a0)
0x00031710:  f759              bnez                    a4,-114                 # 0x3169e

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031712:  bf85              j                       -144                    # 0x31682

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031682:  0007a423          sw                      zero,8(a5)
0x00031686:  ea9d              bnez                    a3,54                   # 0x316bc

----------------
IN: __pthread_mutex_unlock_usercnt
0x000316bc:  47d8              lw                      a4,12(a5)
0x000316be:  377d              addiw                   a4,a4,-1
0x000316c0:  c7d8              sw                      a4,12(a5)
0x000316c2:  b7d9              j                       -58                     # 0x31688

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031688:  01078713          addi                    a4,a5,16
0x0003168c:  430c              lw                      a1,0(a4)
0x0003168e:  0805f593          andi                    a1,a1,128
0x00031692:  e991              bnez                    a1,20                   # 0x316a6

----------------
IN: __pthread_mutex_unlock_usercnt
0x00031694:  8a022703          lw                      a4,-1888(tp)
0x00031698:  e719              bnez                    a4,14                   # 0x316a6

----------------
IN: __pthread_mutex_unlock_usercnt
0x0003169a:  0007a023          sw                      zero,0(a5)
0x0003169e:  4501              mv                      a0,zero
0x000316a0:  60a2              ld                      ra,8(sp)
0x000316a2:  0141              addi                    sp,sp,16
0x000316a4:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c934:  4785              addi                    a5,zero,1
0x0001c936:  048abc23          sd                      s0,88(s5)
0x0001c93a:  0005f717          auipc                   a4,95                   # 0x7b93a
0x0001c93e:  02f73f23          sd                      a5,62(a4)
0x0001c942:  e402              sd                      zero,8(sp)
0x0001c944:  02000313          addi                    t1,zero,32
0x0001c948:  0005b717          auipc                   a4,91                   # 0x77948
0x0001c94c:  1c070713          addi                    a4,a4,448
0x0001c950:  85a2              mv                      a1,s0
0x0001c952:  860a              mv                      a2,sp
0x0001c954:  00810b13          addi                    s6,sp,8
0x0001c958:  4881              mv                      a7,zero
0x0001c95a:  4801              mv                      a6,zero
0x0001c95c:  4781              mv                      a5,zero
0x0001c95e:  3a840693          addi                    a3,s0,936
0x0001c962:  00034517          auipc                   a0,52                   # 0x50962
0x0001c966:  fe650513          addi                    a0,a0,-26
0x0001c96a:  e802              sd                      zero,16(sp)
0x0001c96c:  ec02              sd                      zero,24(sp)
0x0001c96e:  00610623          sb                      t1,12(sp)
0x0001c972:  e05a              sd                      s6,0(sp)
0x0001c974:  2d01c0ef          jal                     ra,115408               # 0x38c44

----------------
IN: _dl_lookup_symbol_x
0x00038c44:  716d              addi                    sp,sp,-272
0x00038c46:  f96a              sd                      s10,176(sp)
0x00038c48:  5d7d              addi                    s10,zero,-1
0x00038c4a:  e9da              sd                      s6,208(sp)
0x00038c4c:  8b3e              mv                      s6,a5
0x00038c4e:  020d5793          srli                    a5,s10,32
0x00038c52:  e222              sd                      s0,256(sp)
0x00038c54:  fda6              sd                      s1,248(sp)
0x00038c56:  f9ca              sd                      s2,240(sp)
0x00038c58:  f5ce              sd                      s3,232(sp)
0x00038c5a:  f1d2              sd                      s4,224(sp)
0x00038c5c:  edd6              sd                      s5,216(sp)
0x00038c5e:  e606              sd                      ra,264(sp)
0x00038c60:  fd66              sd                      s9,184(sp)
0x00038c62:  842a              mv                      s0,a0
0x00038c64:  8aae              mv                      s5,a1
0x00038c66:  84b2              mv                      s1,a2
0x00038c68:  f836              sd                      a3,48(sp)
0x00038c6a:  89ba              mv                      s3,a4
0x00038c6c:  8a42              mv                      s4,a6
0x00038c6e:  8946              mv                      s2,a7
0x00038c70:  e0be              sd                      a5,64(sp)
0x00038c72:  00044703          lbu                     a4,0(s0)
0x00038c76:  6585              lui                     a1,1
0x00038c78:  50558c93          addi                    s9,a1,1285
0x00038c7c:  cb0d              beqz                    a4,50                   # 0x38cae

----------------
IN: _dl_lookup_symbol_x
0x00038c7e:  86a2              mv                      a3,s0
0x00038c80:  0016c783          lbu                     a5,1(a3)
0x00038c84:  863e              mv                      a2,a5
0x00038c86:  16078063          beqz                    a5,352                  # 0x38de6

----------------
IN: _dl_lookup_symbol_x
0x00038c8a:  004c979b          slliw                   a5,s9,4
0x00038c8e:  019787bb          addw                    a5,a5,s9
0x00038c92:  0067979b          slliw                   a5,a5,6
0x00038c96:  019787bb          addw                    a5,a5,s9
0x00038c9a:  0057159b          slliw                   a1,a4,5
0x00038c9e:  0689              addi                    a3,a3,2
0x00038ca0:  9dbd              addw                    a1,a1,a5
0x00038ca2:  9db9              addw                    a1,a1,a4
0x00038ca4:  0006c703          lbu                     a4,0(a3)
0x00038ca8:  00b60cbb          addw                    s9,a2,a1
0x00038cac:  fb71              bnez                    a4,-44                  # 0x38c80

----------------
IN: _dl_lookup_symbol_x
0x00038c80:  0016c783          lbu                     a5,1(a3)
0x00038c84:  863e              mv                      a2,a5
0x00038c86:  16078063          beqz                    a5,352                  # 0x38de6

----------------
IN: _dl_lookup_symbol_x
0x00038cae:  6786              ld                      a5,64(sp)
0x00038cb0:  f0be              sd                      a5,96(sp)
0x00038cb2:  14098463          beqz                    s3,328                  # 0x38dfa

----------------
IN: _dl_lookup_symbol_x
0x00038cb6:  002a7793          andi                    a5,s4,2
0x00038cba:  48079d63          bnez                    a5,1178                 # 0x39154

----------------
IN: _dl_lookup_symbol_x
0x00038cbe:  77c2              ld                      a5,48(sp)
0x00038cc0:  f402              sd                      zero,40(sp)
0x00038cc2:  6394              ld                      a3,0(a5)
0x00038cc4:  87b6              mv                      a5,a3
0x00038cc6:  1c091f63          bnez                    s2,478                  # 0x38ea4

----------------
IN: _dl_lookup_symbol_x
0x00038cca:  28068463          beqz                    a3,648                  # 0x38f52

----------------
IN: _dl_lookup_symbol_x
0x00038cce:  e5de              sd                      s7,200(sp)
0x00038cd0:  e1e2              sd                      s8,192(sp)
0x00038cd2:  f56e              sd                      s11,168(sp)
0x00038cd4:  7822              ld                      a6,40(sp)
0x00038cd6:  7c42              ld                      s8,48(sp)
0x00038cd8:  4d01              mv                      s10,zero
0x00038cda:  4e81              mv                      t4,zero
0x00038cdc:  06810d93          addi                    s11,sp,104
0x00038ce0:  06010b93          addi                    s7,sp,96
0x00038ce4:  a031              j                       12                      # 0x38cf0

----------------
IN: _dl_lookup_symbol_x
0x00038cf0:  6094              ld                      a3,0(s1)
0x00038cf2:  88ce              mv                      a7,s3
0x00038cf4:  ec56              sd                      s5,24(sp)
0x00038cf6:  e85a              sd                      s6,16(sp)
0x00038cf8:  e44a              sd                      s2,8(sp)
0x00038cfa:  e052              sd                      s4,0(sp)
0x00038cfc:  876e              mv                      a4,s11
0x00038cfe:  865e              mv                      a2,s7
0x00038d00:  85e6              mv                      a1,s9
0x00038d02:  8522              mv                      a0,s0
0x00038d04:  f4f6              sd                      t4,104(sp)
0x00038d06:  f8ea              sd                      s10,112(sp)
0x00038d08:  f92ff0ef          jal                     ra,-2158                # 0x3849a

----------------
IN: do_lookup_x
0x0003849a:  7111              addi                    sp,sp,-256
0x0003849c:  0087e303          lwu                     t1,8(a5)
0x000384a0:  f036              sd                      a3,32(sp)
0x000384a2:  10012683          lw                      a3,256(sp)
0x000384a6:  f5a6              sd                      s1,232(sp)
0x000384a8:  e5d6              sd                      s5,200(sp)
0x000384aa:  e0ba              sd                      a4,64(sp)
0x000384ac:  6f32              ld                      t5,264(sp)
0x000384ae:  8742              mv                      a4,a6
0x000384b0:  11012a83          lw                      s5,272(sp)
0x000384b4:  62f2              ld                      t0,280(sp)
0x000384b6:  fd86              sd                      ra,248(sp)
0x000384b8:  f9a2              sd                      s0,240(sp)
0x000384ba:  f1ca              sd                      s2,224(sp)
0x000384bc:  edce              sd                      s3,216(sp)
0x000384be:  e9d2              sd                      s4,208(sp)
0x000384c0:  e1da              sd                      s6,192(sp)
0x000384c2:  fd5e              sd                      s7,184(sp)
0x000384c4:  f962              sd                      s8,176(sp)
0x000384c6:  f566              sd                      s9,168(sp)
0x000384c8:  f16a              sd                      s10,160(sp)
0x000384ca:  ed6e              sd                      s11,152(sp)
0x000384cc:  84aa              mv                      s1,a0
0x000384ce:  e4b2              sd                      a2,72(sp)
0x000384d0:  fc46              sd                      a7,56(sp)
0x000384d2:  881a              mv                      a6,t1
0x000384d4:  f836              sd                      a3,48(sp)
0x000384d6:  0007b303          ld                      t1,0(a5)
0x000384da:  00371793          slli                    a5,a4,3
0x000384de:  0065dd1b          srliw                   s10,a1,6
0x000384e2:  933e              add                     t1,t1,a5
0x000384e4:  8b3a              mv                      s6,a4
0x000384e6:  002aff93          andi                    t6,s5,2
0x000384ea:  00042997          auipc                   s3,66                   # 0x7a4ea
0x000384ee:  7ce9b983          ld                      s3,1998(s3)
0x000384f2:  4c85              addi                    s9,zero,1
0x000384f4:  8a1a              mv                      s4,t1
0x000384f6:  892e              mv                      s2,a1
0x000384f8:  8bfa              mv                      s7,t5
0x000384fa:  f456              sd                      s5,40(sp)
0x000384fc:  8c16              mv                      s8,t0
0x000384fe:  8742              mv                      a4,a6
0x00038500:  8eea              mv                      t4,s10
0x00038502:  a889              j                       82                      # 0x38554

----------------
IN: do_lookup_x
0x00038554:  000a3783          ld                      a5,0(s4)
0x00038558:  7780              ld                      s0,40(a5)
0x0003855a:  ff7409e3          beq                     s0,s7,-14               # 0x3854c

----------------
IN: do_lookup_x
0x0003855e:  000f8663          beqz                    t6,12                   # 0x3856a

----------------
IN: do_lookup_x
0x0003856a:  33644783          lbu                     a5,822(s0)
0x0003856e:  8b91              andi                    a5,a5,4
0x00038570:  c799              beqz                    a5,14                   # 0x3857e

----------------
IN: do_lookup_x
0x0003857e:  0009a783          lw                      a5,0(s3)
0x00038582:  8ba1              andi                    a5,a5,8
0x00038584:  d3c1              beqz                    a5,-128                 # 0x38504

----------------
IN: do_lookup_x
0x00038504:  30c42583          lw                      a1,780(s0)
0x00038508:  c1b1              beqz                    a1,68                   # 0x3854c

----------------
IN: do_lookup_x
0x0003850a:  7834              ld                      a3,112(s0)
0x0003850c:  743c              ld                      a5,104(s0)
0x0003850e:  00043883          ld                      a7,0(s0)
0x00038512:  6694              ld                      a3,8(a3)
0x00038514:  679c              ld                      a5,8(a5)
0x00038516:  31843503          ld                      a0,792(s0)
0x0003851a:  c302              sw                      zero,132(sp)
0x0003851c:  e502              sd                      zero,136(sp)
0x0003851e:  00d88ab3          add                     s5,a7,a3
0x00038522:  98be              add                     a7,a7,a5
0x00038524:  c145              beqz                    a0,160                  # 0x385c4

----------------
IN: do_lookup_x
0x00038526:  31042603          lw                      a2,784(s0)
0x0003852a:  31442783          lw                      a5,788(s0)
0x0003852e:  00cef633          and                     a2,t4,a2
0x00038532:  060e              slli                    a2,a2,3
0x00038534:  9532              add                     a0,a0,a2
0x00038536:  6110              ld                      a2,0(a0)
0x00038538:  00f957bb          srlw                    a5,s2,a5
0x0003853c:  00f657b3          srl                     a5,a2,a5
0x00038540:  01265633          srl                     a2,a2,s2
0x00038544:  8ff1              and                     a5,a5,a2
0x00038546:  8b85              andi                    a5,a5,1
0x00038548:  16079263          bnez                    a5,356                  # 0x386ac

----------------
IN: do_lookup_x
0x000386ac:  02b975bb          remuw                   a1,s2,a1
0x000386b0:  32043783          ld                      a5,800(s0)
0x000386b4:  02059613          slli                    a2,a1,32
0x000386b8:  01e65593          srli                    a1,a2,30
0x000386bc:  97ae              add                     a5,a5,a1
0x000386be:  439c              lw                      a5,0(a5)
0x000386c0:  e80786e3          beqz                    a5,-372                 # 0x3854c

----------------
IN: do_lookup_x
0x000386c4:  32843e03          ld                      t3,808(s0)
0x000386c8:  02079613          slli                    a2,a5,32
0x000386cc:  01e65793          srli                    a5,a2,30
0x000386d0:  00fe0d33          add                     s10,t3,a5
0x000386d4:  013c              addi                    a5,sp,136
0x000386d6:  e8d2              sd                      s4,80(sp)
0x000386d8:  ecda              sd                      s6,88(sp)
0x000386da:  8a4a              mv                      s4,s2
0x000386dc:  08410d93          addi                    s11,sp,132
0x000386e0:  8922              mv                      s2,s0
0x000386e2:  f0ba              sd                      a4,96(sp)
0x000386e4:  846a              mv                      s0,s10
0x000386e6:  8b3e              mv                      s6,a5
0x000386e8:  8d46              mv                      s10,a7
0x000386ea:  f4fe              sd                      t6,104(sp)
0x000386ec:  f8f6              sd                      t4,112(sp)
0x000386ee:  a029              j                       10                      # 0x386f8

----------------
IN: do_lookup_x
0x000386f8:  401c              lw                      a5,0(s0)
0x000386fa:  0147c733          xor                     a4,a5,s4
0x000386fe:  0017571b          srliw                   a4,a4,1
0x00038702:  f77d              bnez                    a4,-18                  # 0x386f0

----------------
IN: do_lookup_x
0x000386f0:  8b85              andi                    a5,a5,1
0x000386f2:  0411              addi                    s0,s0,4
0x000386f4:  2e079763          bnez                    a5,750                  # 0x389e2

----------------
IN: do_lookup_x
0x00038704:  32893803          ld                      a6,808(s2)
0x00038708:  76c2              ld                      a3,48(sp)
0x0003870a:  7662              ld                      a2,56(sp)
0x0003870c:  41040833          sub                     a6,s0,a6
0x00038710:  40285813          srai                    a6,a6,2
0x00038714:  02081713          slli                    a4,a6,32
0x00038718:  9301              srli                    a4,a4,32
0x0003871a:  00171793          slli                    a5,a4,1
0x0003871e:  97ba              add                     a5,a5,a4
0x00038720:  7582              ld                      a1,32(sp)
0x00038722:  7722              ld                      a4,40(sp)
0x00038724:  078e              slli                    a5,a5,3
0x00038726:  88ea              mv                      a7,s10
0x00038728:  e86e              sd                      s11,16(sp)
0x0003872a:  e45a              sd                      s6,8(sp)
0x0003872c:  e04a              sd                      s2,0(sp)
0x0003872e:  2801              sext.w                  a6,a6
0x00038730:  97d6              add                     a5,a5,s5
0x00038732:  8526              mv                      a0,s1
0x00038734:  bfdff0ef          jal                     ra,-1028                # 0x38330

----------------
IN: check_match
0x00038330:  7179              addi                    sp,sp,-48
0x00038332:  f022              sd                      s0,32(sp)
0x00038334:  ec26              sd                      s1,24(sp)
0x00038336:  e84a              sd                      s2,16(sp)
0x00038338:  e44e              sd                      s3,8(sp)
0x0003833a:  e052              sd                      s4,0(sp)
0x0003833c:  f406              sd                      ra,40(sp)
0x0003833e:  843e              mv                      s0,a5
0x00038340:  0047c783          lbu                     a5,4(a5)
0x00038344:  00843e83          ld                      t4,8(s0)
0x00038348:  89b2              mv                      s3,a2
0x0003834a:  00f7f613          andi                    a2,a5,15
0x0003834e:  74c2              ld                      s1,48(sp)
0x00038350:  00645783          lhu                     a5,6(s0)
0x00038354:  8e2e              mv                      t3,a1
0x00038356:  8a36              mv                      s4,a3
0x00038358:  8942              mv                      s2,a6
0x0003835a:  8332              mv                      t1,a2
0x0003835c:  0e0e8963          beqz                    t4,242                  # 0x3844e

----------------
IN: check_match
0x00038360:  0017b793          seqz                    a5,a5
0x00038364:  8f7d              and                     a4,a4,a5
0x00038366:  e761              bnez                    a4,200                  # 0x3842e

----------------
IN: check_match
0x00038368:  b9800793          addi                    a5,zero,-1128
0x0003836c:  4067d7bb          sraw                    a5,a5,t1
0x00038370:  8b85              andi                    a5,a5,1
0x00038372:  efd5              bnez                    a5,188                  # 0x3842e

----------------
IN: check_match
0x00038374:  01c40a63          beq                     s0,t3,20                # 0x38388

----------------
IN: check_match
0x00038378:  00046783          lwu                     a5,0(s0)
0x0003837c:  85aa              mv                      a1,a0
0x0003837e:  00f88533          add                     a0,a7,a5
0x00038382:  971fa0ef          jal                     ra,-22160               # 0x32cf2

----------------
IN: strcmp
0x00032cf2:  40a00633          neg                     a2,a0
0x00032cf6:  8a1d              andi                    a2,a2,7
0x00032cf8:  872a              mv                      a4,a0
0x00032cfa:  c20d              beqz                    a2,34                   # 0x32d1c

----------------
IN: strcmp
0x00032cfc:  962a              add                     a2,a2,a0
0x00032cfe:  a021              j                       8                       # 0x32d06

----------------
IN: strcmp
0x00032d06:  00074683          lbu                     a3,0(a4)
0x00032d0a:  0005c783          lbu                     a5,0(a1)
0x00032d0e:  0705              addi                    a4,a4,1
0x00032d10:  0585              addi                    a1,a1,1
0x00032d12:  40f687bb          subw                    a5,a3,a5
0x00032d16:  853e              mv                      a0,a5
0x00032d18:  f6e5              bnez                    a3,-24                  # 0x32d00

----------------
IN: strcmp
0x00032d00:  ef89              bnez                    a5,26                   # 0x32d1a

----------------
IN: strcmp
0x00032d02:  00c70e63          beq                     a4,a2,28                # 0x32d1e

----------------
IN: strcmp
0x00032d1e:  0075f313          andi                    t1,a1,7
0x00032d22:  6208              ld                      a0,0(a2)
0x00032d24:  00860813          addi                    a6,a2,8
0x00032d28:  04031963          bnez                    t1,82                   # 0x32d7a

----------------
IN: strcmp
0x00032d7a:  99e1              andi                    a1,a1,-8
0x00032d7c:  0005be83          ld                      t4,0(a1)
0x00032d80:  00331713          slli                    a4,t1,3
0x00032d84:  04000e13          addi                    t3,zero,64
0x00032d88:  feff07b7          lui                     a5,-4112
0x00032d8c:  eff78793          addi                    a5,a5,-257
0x00032d90:  833a              mv                      t1,a4
0x00032d92:  40ee0e33          sub                     t3,t3,a4
0x00032d96:  577d              addi                    a4,zero,-1
0x00032d98:  02079893          slli                    a7,a5,32
0x00032d9c:  006edeb3          srl                     t4,t4,t1
0x00032da0:  01c71733          sll                     a4,a4,t3
0x00032da4:  80808637          lui                     a2,-522232
0x00032da8:  01d76733          or                      a4,a4,t4
0x00032dac:  98be              add                     a7,a7,a5
0x00032dae:  08160613          addi                    a2,a2,129
0x00032db2:  808086b7          lui                     a3,-522232
0x00032db6:  011707b3          add                     a5,a4,a7
0x00032dba:  fff74f13          not                     t5,a4
0x00032dbe:  1602              slli                    a2,a2,32
0x00032dc0:  08068693          addi                    a3,a3,128
0x00032dc4:  01e7f7b3          and                     a5,a5,t5
0x00032dc8:  9636              add                     a2,a2,a3
0x00032dca:  8ff1              and                     a5,a5,a2
0x00032dcc:  ebb9              bnez                    a5,86                   # 0x32e22

----------------
IN: strcmp
0x00032dce:  6598              ld                      a4,8(a1)
0x00032dd0:  01058693          addi                    a3,a1,16
0x00032dd4:  01c717b3          sll                     a5,a4,t3
0x00032dd8:  01d7e7b3          or                      a5,a5,t4
0x00032ddc:  00f50d63          beq                     a0,a5,26                # 0x32df6

----------------
IN: strcmp
0x00032df6:  fff74593          not                     a1,a4
0x00032dfa:  011707b3          add                     a5,a4,a7
0x00032dfe:  8fed              and                     a5,a5,a1
0x00032e00:  8ff1              and                     a5,a5,a2
0x00032e02:  06a1              addi                    a3,a3,8
0x00032e04:  006755b3          srl                     a1,a4,t1
0x00032e08:  dfe9              beqz                    a5,-38                  # 0x32de2

----------------
IN: strcmp
0x00032de2:  ff86b703          ld                      a4,-8(a3)
0x00032de6:  00083503          ld                      a0,0(a6)
0x00032dea:  0821              addi                    a6,a6,8
0x00032dec:  01c717b3          sll                     a5,a4,t3
0x00032df0:  8fcd              or                      a5,a5,a1
0x00032df2:  08a79f63          bne                     a5,a0,158               # 0x32e90

----------------
IN: strcmp
0x00032e0a:  011507b3          add                     a5,a0,a7
0x00032e0e:  fff54513          not                     a0,a0
0x00032e12:  8fe9              and                     a5,a5,a0
0x00032e14:  8ff1              and                     a5,a5,a2
0x00032e16:  4501              mv                      a0,zero
0x00032e18:  f389              bnez                    a5,-254                 # 0x32d1a

----------------
IN: strcmp
0x00032e1a:  00083503          ld                      a0,0(a6)
0x00032e1e:  00675733          srl                     a4,a4,t1
0x00032e22:  7f7f87b7          lui                     a5,522232
0x00032e26:  f7f78793          addi                    a5,a5,-129
0x00032e2a:  02079693          slli                    a3,a5,32
0x00032e2e:  96be              add                     a3,a3,a5
0x00032e30:  00d577b3          and                     a5,a0,a3
0x00032e34:  00e545b3          xor                     a1,a0,a4
0x00032e38:  97b6              add                     a5,a5,a3
0x00032e3a:  00d5f633          and                     a2,a1,a3
0x00032e3e:  8fc9              or                      a5,a5,a0
0x00032e40:  96b2              add                     a3,a3,a2
0x00032e42:  8ecd              or                      a3,a3,a1
0x00032e44:  fff7c793          not                     a5,a5
0x00032e48:  8fd5              or                      a5,a5,a3
0x00032e4a:  0807f693          andi                    a3,a5,128
0x00032e4e:  ea9d              bnez                    a3,54                   # 0x32e84

----------------
IN: strcmp
0x00032e50:  03079693          slli                    a3,a5,48
0x00032e54:  0a06c563          bltz                    a3,170                  # 0x32efe

----------------
IN: strcmp
0x00032efe:  8121              srli                    a0,a0,8
0x00032f00:  8321              srli                    a4,a4,8
0x00032f02:  b749              j                       -126                    # 0x32e84

----------------
IN: strcmp
0x00032e84:  0ff77713          andi                    a4,a4,255
0x00032e88:  0ff57513          andi                    a0,a0,255
0x00032e8c:  9d19              subw                    a0,a0,a4
0x00032e8e:  8082              ret                     

----------------
IN: check_match
0x00038386:  e545              bnez                    a0,168                  # 0x3842e

----------------
IN: check_match
0x00038388:  3584b783          ld                      a5,856(s1)
0x0003838c:  04098e63          beqz                    s3,92                   # 0x383e8

----------------
IN: check_match
0x00038390:  cff1              beqz                    a5,220                  # 0x3846c

----------------
IN: check_match
0x0003846c:  0109b503          ld                      a0,16(s3)
0x00038470:  d13d              beqz                    a0,-154                 # 0x383d6

----------------
IN: check_match
0x000383d6:  70a2              ld                      ra,40(sp)
0x000383d8:  8522              mv                      a0,s0
0x000383da:  7402              ld                      s0,32(sp)
0x000383dc:  64e2              ld                      s1,24(sp)
0x000383de:  6942              ld                      s2,16(sp)
0x000383e0:  69a2              ld                      s3,8(sp)
0x000383e2:  6a02              ld                      s4,0(sp)
0x000383e4:  6145              addi                    sp,sp,48
0x000383e6:  8082              ret                     

----------------
IN: do_lookup_x
0x00038738:  48051363          bnez                    a0,1158                 # 0x38bbe

----------------
IN: do_lookup_x
0x00038bbe:  844a              mv                      s0,s2
0x00038bc0:  6b66              ld                      s6,88(sp)
0x00038bc2:  8952              mv                      s2,s4
0x00038bc4:  7706              ld                      a4,96(sp)
0x00038bc6:  6a46              ld                      s4,80(sp)
0x00038bc8:  7fa6              ld                      t6,104(sp)
0x00038bca:  7ec6              ld                      t4,112(sp)
0x00038bcc:  87aa              mv                      a5,a0
0x00038bce:  88ea              mv                      a7,s10
0x00038bd0:  b469              j                       -1398                   # 0x3865a

----------------
IN: do_lookup_x
0x0003865a:  0057c683          lbu                     a3,5(a5)
0x0003865e:  8a8d              andi                    a3,a3,3
0x00038660:  fff6861b          addiw                   a2,a3,-1
0x00038664:  eeccf4e3          bleu                    a2,s9,-280              # 0x3854c

----------------
IN: do_lookup_x
0x00038668:  460d              addi                    a2,zero,3
0x0003866a:  0cc68b63          beq                     a3,a2,214               # 0x38740

----------------
IN: do_lookup_x
0x0003866e:  0047c683          lbu                     a3,4(a5)
0x00038672:  4609              addi                    a2,zero,2
0x00038674:  8291              srli                    a3,a3,4
0x00038676:  10c68963          beq                     a3,a2,274               # 0x38788

----------------
IN: do_lookup_x
0x0003867a:  4629              addi                    a2,zero,10
0x0003867c:  12c68563          beq                     a3,a2,298               # 0x387a6

----------------
IN: do_lookup_x
0x00038680:  4605              addi                    a2,zero,1
0x00038682:  ecc695e3          bne                     a3,a2,-310              # 0x3854c

----------------
IN: do_lookup_x
0x00038686:  6706              ld                      a4,64(sp)
0x00038688:  e31c              sd                      a5,0(a4)
0x0003868a:  e700              sd                      s0,8(a4)
0x0003868c:  4505              addi                    a0,zero,1
0x0003868e:  70ee              ld                      ra,248(sp)
0x00038690:  744e              ld                      s0,240(sp)
0x00038692:  74ae              ld                      s1,232(sp)
0x00038694:  790e              ld                      s2,224(sp)
0x00038696:  69ee              ld                      s3,216(sp)
0x00038698:  6a4e              ld                      s4,208(sp)
0x0003869a:  6aae              ld                      s5,200(sp)
0x0003869c:  6b0e              ld                      s6,192(sp)
0x0003869e:  7bea              ld                      s7,184(sp)
0x000386a0:  7c4a              ld                      s8,176(sp)
0x000386a2:  7caa              ld                      s9,168(sp)
0x000386a4:  7d0a              ld                      s10,160(sp)
0x000386a6:  6dea              ld                      s11,152(sp)
0x000386a8:  6111              addi                    sp,sp,256
0x000386aa:  8082              ret                     

----------------
IN: _dl_lookup_symbol_x
0x00038d0c:  7ea6              ld                      t4,104(sp)
0x00038d0e:  7d46              ld                      s10,112(sp)
0x00038d10:  d979              beqz                    a0,-42                  # 0x38ce6

----------------
IN: _dl_lookup_symbol_x
0x00038d12:  0004b883          ld                      a7,0(s1)
0x00038d16:  87c6              mv                      a5,a7
0x00038d18:  2a0e8b63          beqz                    t4,694                  # 0x38fce

----------------
IN: _dl_lookup_symbol_x
0x00038d1c:  0e088b63          beqz                    a7,246                  # 0x38e12

----------------
IN: _dl_lookup_symbol_x
0x00038d20:  0058c783          lbu                     a5,5(a7)
0x00038d24:  470d              addi                    a4,zero,3
0x00038d26:  4d81              mv                      s11,zero
0x00038d28:  8ff9              and                     a5,a5,a4
0x00038d2a:  04e78963          beq                     a5,a4,82                # 0x38d7c

----------------
IN: _dl_lookup_symbol_x
0x00038d2e:  334d5783          lhu                     a5,820(s10)
0x00038d32:  4709              addi                    a4,zero,2
0x00038d34:  8b8d              andi                    a5,a5,3
0x00038d36:  0ee78563          beq                     a5,a4,234               # 0x38e20

----------------
IN: _dl_lookup_symbol_x
0x00038d3a:  00042917          auipc                   s2,66                   # 0x7ad3a
0x00038d3e:  f7e93903          ld                      s2,-130(s2)
0x00038d42:  88f6              mv                      a7,t4
0x00038d44:  8b6e              mv                      s6,s11
0x00038d46:  3ecd2783          lw                      a5,1004(s10)
0x00038d4a:  16078c63          beqz                    a5,376                  # 0x38ec2

----------------
IN: _dl_lookup_symbol_x
0x00038d4e:  00092783          lw                      a5,0(s2)
0x00038d52:  8b91              andi                    a5,a5,4
0x00038d54:  16079b63          bnez                    a5,374                  # 0x38eca

----------------
IN: _dl_lookup_symbol_x
0x00038d58:  6bae              ld                      s7,200(sp)
0x00038d5a:  6c0e              ld                      s8,192(sp)
0x00038d5c:  7daa              ld                      s11,168(sp)
0x00038d5e:  60b2              ld                      ra,264(sp)
0x00038d60:  6412              ld                      s0,256(sp)
0x00038d62:  0114b023          sd                      a7,0(s1)
0x00038d66:  794e              ld                      s2,240(sp)
0x00038d68:  74ee              ld                      s1,248(sp)
0x00038d6a:  79ae              ld                      s3,232(sp)
0x00038d6c:  7a0e              ld                      s4,224(sp)
0x00038d6e:  6aee              ld                      s5,216(sp)
0x00038d70:  6b4e              ld                      s6,208(sp)
0x00038d72:  7cea              ld                      s9,184(sp)
0x00038d74:  856a              mv                      a0,s10
0x00038d76:  7d4a              ld                      s10,176(sp)
0x00038d78:  6151              addi                    sp,sp,272
0x00038d7a:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c978:  6702              ld                      a4,0(sp)
0x0001c97a:  058ab583          ld                      a1,88(s5)
0x0001c97e:  8b8a              mv                      s7,sp
0x0001c980:  3a070363          beqz                    a4,934                  # 0x1cd26

----------------
IN: _dl_non_dynamic_init
0x0001c984:  00675683          lhu                     a3,6(a4)
0x0001c988:  67c1              lui                     a5,16
0x0001c98a:  17c5              addi                    a5,a5,-15
0x0001c98c:  3af68a63          beq                     a3,a5,948               # 0x1cd40

----------------
IN: _dl_non_dynamic_init
0x0001c990:  4781              mv                      a5,zero
0x0001c992:  c111              beqz                    a0,4                    # 0x1c996

----------------
IN: _dl_non_dynamic_init
0x0001c994:  611c              ld                      a5,0(a0)
0x0001c996:  6718              ld                      a4,8(a4)
0x0001c998:  97ba              add                     a5,a5,a4
0x0001c99a:  0005d417          auipc                   s0,93                   # 0x7999a
0x0001c99e:  46e40413          addi                    s0,s0,1134
0x0001c9a2:  e41c              sd                      a5,8(s0)
0x0001c9a4:  3e058f63          beqz                    a1,1022                 # 0x1cda2

----------------
IN: _dl_non_dynamic_init
0x0001c9a8:  e402              sd                      zero,8(sp)
0x0001c9aa:  02000313          addi                    t1,zero,32
0x0001c9ae:  0005b717          auipc                   a4,91                   # 0x779ae
0x0001c9b2:  15a70713          addi                    a4,a4,346
0x0001c9b6:  3a858693          addi                    a3,a1,936
0x0001c9ba:  4881              mv                      a7,zero
0x0001c9bc:  4801              mv                      a6,zero
0x0001c9be:  4781              mv                      a5,zero
0x0001c9c0:  865e              mv                      a2,s7
0x0001c9c2:  00034517          auipc                   a0,52                   # 0x509c2
0x0001c9c6:  f9e50513          addi                    a0,a0,-98
0x0001c9ca:  e802              sd                      zero,16(sp)
0x0001c9cc:  ec02              sd                      zero,24(sp)
0x0001c9ce:  e05a              sd                      s6,0(sp)
0x0001c9d0:  00610623          sb                      t1,12(sp)
0x0001c9d4:  2701c0ef          jal                     ra,115312               # 0x38c44

----------------
IN: _dl_lookup_symbol_x
0x00038de6:  6786              ld                      a5,64(sp)
0x00038de8:  0197073b          addw                    a4,a4,s9
0x00038dec:  005c959b          slliw                   a1,s9,5
0x00038df0:  f0be              sd                      a5,96(sp)
0x00038df2:  00b70cbb          addw                    s9,a4,a1
0x00038df6:  ec0990e3          bnez                    s3,-320                 # 0x38cb6

----------------
IN: strcmp
0x00032e90:  7f7f8737          lui                     a4,522232
0x00032e94:  f7f70713          addi                    a4,a4,-129
0x00032e98:  02071693          slli                    a3,a4,32
0x00032e9c:  96ba              add                     a3,a3,a4
0x00032e9e:  00d57733          and                     a4,a0,a3
0x00032ea2:  00a7c5b3          xor                     a1,a5,a0
0x00032ea6:  9736              add                     a4,a4,a3
0x00032ea8:  00d5f633          and                     a2,a1,a3
0x00032eac:  8f49              or                      a4,a4,a0
0x00032eae:  96b2              add                     a3,a3,a2
0x00032eb0:  8ecd              or                      a3,a3,a1
0x00032eb2:  fff74713          not                     a4,a4
0x00032eb6:  8f55              or                      a4,a4,a3
0x00032eb8:  08077693          andi                    a3,a4,128
0x00032ebc:  ea9d              bnez                    a3,54                   # 0x32ef2

----------------
IN: strcmp
0x00032ebe:  03071693          slli                    a3,a4,48
0x00032ec2:  0406c463          bltz                    a3,72                   # 0x32f0a

----------------
IN: strcmp
0x00032ec6:  02871693          slli                    a3,a4,40
0x00032eca:  0206cd63          bltz                    a3,58                   # 0x32f04

----------------
IN: strcmp
0x00032ece:  02071693          slli                    a3,a4,32
0x00032ed2:  0406c263          bltz                    a3,68                   # 0x32f16

----------------
IN: strcmp
0x00032ed6:  01871693          slli                    a3,a4,24
0x00032eda:  0406c763          bltz                    a3,78                   # 0x32f28

----------------
IN: strcmp
0x00032f28:  9101              srli                    a0,a0,32
0x00032f2a:  9381              srli                    a5,a5,32
0x00032f2c:  b7d9              j                       -58                     # 0x32ef2

----------------
IN: strcmp
0x00032ef2:  0ff7f793          andi                    a5,a5,255
0x00032ef6:  0ff57513          andi                    a0,a0,255
0x00032efa:  9d1d              subw                    a0,a0,a5
0x00032efc:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001c9d8:  6702              ld                      a4,0(sp)
0x0001c9da:  058ab583          ld                      a1,88(s5)
0x0001c9de:  34070663          beqz                    a4,844                  # 0x1cd2a

----------------
IN: _dl_non_dynamic_init
0x0001c9e2:  00675683          lhu                     a3,6(a4)
0x0001c9e6:  67c1              lui                     a5,16
0x0001c9e8:  17c5              addi                    a5,a5,-15
0x0001c9ea:  34f68d63          beq                     a3,a5,858               # 0x1cd44

----------------
IN: _dl_non_dynamic_init
0x0001c9ee:  4781              mv                      a5,zero
0x0001c9f0:  c111              beqz                    a0,4                    # 0x1c9f4

----------------
IN: _dl_non_dynamic_init
0x0001c9f2:  611c              ld                      a5,0(a0)
0x0001c9f4:  6718              ld                      a4,8(a4)
0x0001c9f6:  97ba              add                     a5,a5,a4
0x0001c9f8:  e81c              sd                      a5,16(s0)
0x0001c9fa:  3a058263          beqz                    a1,932                  # 0x1cd9e

----------------
IN: _dl_non_dynamic_init
0x0001c9fe:  e402              sd                      zero,8(sp)
0x0001ca00:  02000313          addi                    t1,zero,32
0x0001ca04:  0005b717          auipc                   a4,91                   # 0x77a04
0x0001ca08:  10470713          addi                    a4,a4,260
0x0001ca0c:  3a858693          addi                    a3,a1,936
0x0001ca10:  4881              mv                      a7,zero
0x0001ca12:  4801              mv                      a6,zero
0x0001ca14:  4781              mv                      a5,zero
0x0001ca16:  865e              mv                      a2,s7
0x0001ca18:  00034517          auipc                   a0,52                   # 0x50a18
0x0001ca1c:  f6050513          addi                    a0,a0,-160
0x0001ca20:  e802              sd                      zero,16(sp)
0x0001ca22:  ec02              sd                      zero,24(sp)
0x0001ca24:  e05a              sd                      s6,0(sp)
0x0001ca26:  00610623          sb                      t1,12(sp)
0x0001ca2a:  21a1c0ef          jal                     ra,115226               # 0x38c44

----------------
IN: strcmp
0x00032e58:  02879693          slli                    a3,a5,40
0x00032e5c:  0a06ca63          bltz                    a3,180                  # 0x32f10

----------------
IN: strcmp
0x00032e60:  02079693          slli                    a3,a5,32
0x00032e64:  0a06cc63          bltz                    a3,184                  # 0x32f1c

----------------
IN: strcmp
0x00032f1c:  8161              srli                    a0,a0,24
0x00032f1e:  8361              srli                    a4,a4,24
0x00032f20:  b795              j                       -156                    # 0x32e84

----------------
IN: _dl_non_dynamic_init
0x0001ca2e:  6702              ld                      a4,0(sp)
0x0001ca30:  058ab583          ld                      a1,88(s5)
0x0001ca34:  2e070d63          beqz                    a4,762                  # 0x1cd2e

----------------
IN: _dl_non_dynamic_init
0x0001ca38:  00675683          lhu                     a3,6(a4)
0x0001ca3c:  67c1              lui                     a5,16
0x0001ca3e:  17c5              addi                    a5,a5,-15
0x0001ca40:  30f68463          beq                     a3,a5,776               # 0x1cd48

----------------
IN: _dl_non_dynamic_init
0x0001ca44:  4781              mv                      a5,zero
0x0001ca46:  c111              beqz                    a0,4                    # 0x1ca4a

----------------
IN: _dl_non_dynamic_init
0x0001ca48:  611c              ld                      a5,0(a0)
0x0001ca4a:  6718              ld                      a4,8(a4)
0x0001ca4c:  97ba              add                     a5,a5,a4
0x0001ca4e:  ec1c              sd                      a5,24(s0)
0x0001ca50:  34058563          beqz                    a1,842                  # 0x1cd9a

----------------
IN: _dl_non_dynamic_init
0x0001ca54:  e402              sd                      zero,8(sp)
0x0001ca56:  02000313          addi                    t1,zero,32
0x0001ca5a:  0005b717          auipc                   a4,91                   # 0x77a5a
0x0001ca5e:  0ae70713          addi                    a4,a4,174
0x0001ca62:  3a858693          addi                    a3,a1,936
0x0001ca66:  4881              mv                      a7,zero
0x0001ca68:  4801              mv                      a6,zero
0x0001ca6a:  4781              mv                      a5,zero
0x0001ca6c:  865e              mv                      a2,s7
0x0001ca6e:  00034517          auipc                   a0,52                   # 0x50a6e
0x0001ca72:  f1a50513          addi                    a0,a0,-230
0x0001ca76:  e802              sd                      zero,16(sp)
0x0001ca78:  ec02              sd                      zero,24(sp)
0x0001ca7a:  e05a              sd                      s6,0(sp)
0x0001ca7c:  00610623          sb                      t1,12(sp)
0x0001ca80:  1c41c0ef          jal                     ra,115140               # 0x38c44

----------------
IN: strcmp
0x00032ede:  01071693          slli                    a3,a4,16
0x00032ee2:  0406cc63          bltz                    a3,88                   # 0x32f3a

----------------
IN: strcmp
0x00032f3a:  9121              srli                    a0,a0,40
0x00032f3c:  93a1              srli                    a5,a5,40
0x00032f3e:  bf55              j                       -76                     # 0x32ef2

----------------
IN: _dl_non_dynamic_init
0x0001ca84:  6702              ld                      a4,0(sp)
0x0001ca86:  058ab583          ld                      a1,88(s5)
0x0001ca8a:  2a070463          beqz                    a4,680                  # 0x1cd32

----------------
IN: _dl_non_dynamic_init
0x0001ca8e:  00675683          lhu                     a3,6(a4)
0x0001ca92:  67c1              lui                     a5,16
0x0001ca94:  17c5              addi                    a5,a5,-15
0x0001ca96:  2af68b63          beq                     a3,a5,694               # 0x1cd4c

----------------
IN: _dl_non_dynamic_init
0x0001ca9a:  4781              mv                      a5,zero
0x0001ca9c:  c111              beqz                    a0,4                    # 0x1caa0

----------------
IN: _dl_non_dynamic_init
0x0001ca9e:  611c              ld                      a5,0(a0)
0x0001caa0:  6718              ld                      a4,8(a4)
0x0001caa2:  97ba              add                     a5,a5,a4
0x0001caa4:  f01c              sd                      a5,32(s0)
0x0001caa6:  28058863          beqz                    a1,656                  # 0x1cd36

----------------
IN: _dl_non_dynamic_init
0x0001caaa:  e402              sd                      zero,8(sp)
0x0001caac:  02000313          addi                    t1,zero,32
0x0001cab0:  0005b717          auipc                   a4,91                   # 0x77ab0
0x0001cab4:  05870713          addi                    a4,a4,88
0x0001cab8:  865e              mv                      a2,s7
0x0001caba:  4881              mv                      a7,zero
0x0001cabc:  4801              mv                      a6,zero
0x0001cabe:  4781              mv                      a5,zero
0x0001cac0:  3a858693          addi                    a3,a1,936
0x0001cac4:  00034517          auipc                   a0,52                   # 0x50ac4
0x0001cac8:  edc50513          addi                    a0,a0,-292
0x0001cacc:  e802              sd                      zero,16(sp)
0x0001cace:  ec02              sd                      zero,24(sp)
0x0001cad0:  e05a              sd                      s6,0(sp)
0x0001cad2:  00610623          sb                      t1,12(sp)
0x0001cad6:  16e1c0ef          jal                     ra,115054               # 0x38c44

----------------
IN: do_lookup_x
0x0003854c:  0b05              addi                    s6,s6,1
0x0003854e:  0a21              addi                    s4,s4,8
0x00038550:  30eb7763          bleu                    a4,s6,782               # 0x3885e

----------------
IN: do_lookup_x
0x0003885e:  4501              mv                      a0,zero
0x00038860:  b53d              j                       -466                    # 0x3868e

----------------
IN: do_lookup_x
0x0003868e:  70ee              ld                      ra,248(sp)
0x00038690:  744e              ld                      s0,240(sp)
0x00038692:  74ae              ld                      s1,232(sp)
0x00038694:  790e              ld                      s2,224(sp)
0x00038696:  69ee              ld                      s3,216(sp)
0x00038698:  6a4e              ld                      s4,208(sp)
0x0003869a:  6aae              ld                      s5,200(sp)
0x0003869c:  6b0e              ld                      s6,192(sp)
0x0003869e:  7bea              ld                      s7,184(sp)
0x000386a0:  7c4a              ld                      s8,176(sp)
0x000386a2:  7caa              ld                      s9,168(sp)
0x000386a4:  7d0a              ld                      s10,160(sp)
0x000386a6:  6dea              ld                      s11,152(sp)
0x000386a8:  6111              addi                    sp,sp,256
0x000386aa:  8082              ret                     

----------------
IN: _dl_lookup_symbol_x
0x00038ce6:  008c3783          ld                      a5,8(s8)
0x00038cea:  0c21              addi                    s8,s8,8
0x00038cec:  4801              mv                      a6,zero
0x00038cee:  c395              beqz                    a5,36                   # 0x38d12

----------------
IN: _dl_lookup_symbol_x
0x00038fce:  6bae              ld                      s7,200(sp)
0x00038fd0:  6c0e              ld                      s8,192(sp)
0x00038fd2:  7daa              ld                      s11,168(sp)
0x00038fd4:  b741              j                       -128                    # 0x38f54

----------------
IN: _dl_lookup_symbol_x
0x00038f54:  c799              beqz                    a5,14                   # 0x38f62

----------------
IN: _dl_lookup_symbol_x
0x00038f56:  0047c783          lbu                     a5,4(a5)
0x00038f5a:  4709              addi                    a4,zero,2
0x00038f5c:  8391              srli                    a5,a5,4
0x00038f5e:  08e78e63          beq                     a5,a4,156               # 0x38ffa

----------------
IN: _dl_lookup_symbol_x
0x00038ffa:  4881              mv                      a7,zero
0x00038ffc:  4d01              mv                      s10,zero
0x00038ffe:  b385              j                       -672                    # 0x38d5e

----------------
IN: _dl_lookup_symbol_x
0x00038d5e:  60b2              ld                      ra,264(sp)
0x00038d60:  6412              ld                      s0,256(sp)
0x00038d62:  0114b023          sd                      a7,0(s1)
0x00038d66:  794e              ld                      s2,240(sp)
0x00038d68:  74ee              ld                      s1,248(sp)
0x00038d6a:  79ae              ld                      s3,232(sp)
0x00038d6c:  7a0e              ld                      s4,224(sp)
0x00038d6e:  6aee              ld                      s5,216(sp)
0x00038d70:  6b4e              ld                      s6,208(sp)
0x00038d72:  7cea              ld                      s9,184(sp)
0x00038d74:  856a              mv                      a0,s10
0x00038d76:  7d4a              ld                      s10,176(sp)
0x00038d78:  6151              addi                    sp,sp,272
0x00038d7a:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001cada:  6702              ld                      a4,0(sp)
0x0001cadc:  24070d63          beqz                    a4,602                  # 0x1cd36

----------------
IN: _dl_non_dynamic_init
0x0001cd36:  7ba2              ld                      s7,40(sp)
0x0001cd38:  4781              mv                      a5,zero
0x0001cd3a:  bb7d              j                       -578                    # 0x1caf8

----------------
IN: _dl_non_dynamic_init
0x0001caf8:  0005f717          auipc                   a4,95                   # 0x7baf8
0x0001cafc:  47072703          lw                      a4,1136(a4)
0x0001cb00:  f41c              sd                      a5,40(s0)
0x0001cb02:  14071a63          bnez                    a4,340                  # 0x1cc56

----------------
IN: _dl_non_dynamic_init
0x0001cb06:  00034517          auipc                   a0,52                   # 0x50b06
0x0001cb0a:  eb250513          addi                    a0,a0,-334
0x0001cb0e:  6d10a0ef          jal                     ra,44752                # 0x279de

----------------
IN: getenv
0x000279de:  7139              addi                    sp,sp,-64
0x000279e0:  00053797          auipc                   a5,83                   # 0x7a9e0
0x000279e4:  3607b783          ld                      a5,864(a5)
0x000279e8:  f426              sd                      s1,40(sp)
0x000279ea:  6384              ld                      s1,0(a5)
0x000279ec:  fc06              sd                      ra,56(sp)
0x000279ee:  f822              sd                      s0,48(sp)
0x000279f0:  c4c1              beqz                    s1,136                  # 0x27a78

----------------
IN: getenv
0x000279f2:  e852              sd                      s4,16(sp)
0x000279f4:  f04a              sd                      s2,32(sp)
0x000279f6:  00054903          lbu                     s2,0(a0)
0x000279fa:  8a2a              mv                      s4,a0
0x000279fc:  06090563          beqz                    s2,106                  # 0x27a66

----------------
IN: getenv
0x00027a00:  ec4e              sd                      s3,24(sp)
0x00027a02:  c32f20ef          jal                     ra,-56270               # 0x19e34

----------------
IN: strlen
0x00019ee6:  03071793          slli                    a5,a4,48
0x00019eea:  4505              addi                    a0,zero,1
0x00019eec:  fe07c8e3          bltz                    a5,-16                  # 0x19edc

----------------
IN: strlen
0x00019ef0:  02871793          slli                    a5,a4,40
0x00019ef4:  4509              addi                    a0,zero,2
0x00019ef6:  fe07c3e3          bltz                    a5,-26                  # 0x19edc

----------------
IN: strlen
0x00019efa:  02071793          slli                    a5,a4,32
0x00019efe:  450d              addi                    a0,zero,3
0x00019f00:  fc07cee3          bltz                    a5,-36                  # 0x19edc

----------------
IN: strlen
0x00019f04:  01871793          slli                    a5,a4,24
0x00019f08:  4511              addi                    a0,zero,4
0x00019f0a:  fc07c9e3          bltz                    a5,-46                  # 0x19edc

----------------
IN: strlen
0x00019f0e:  01071793          slli                    a5,a4,16
0x00019f12:  4515              addi                    a0,zero,5
0x00019f14:  fc07c4e3          bltz                    a5,-56                  # 0x19edc

----------------
IN: strlen
0x00019f18:  4785              addi                    a5,zero,1
0x00019f1a:  17de              slli                    a5,a5,55
0x00019f1c:  8f7d              and                     a4,a4,a5
0x00019f1e:  00173513          seqz                    a0,a4
0x00019f22:  0519              addi                    a0,a0,6
0x00019f24:  8082              ret                     

----------------
IN: getenv
0x00027a06:  6080              ld                      s0,0(s1)
0x00027a08:  89aa              mv                      s3,a0
0x00027a0a:  c82d              beqz                    s0,114                  # 0x27a7c

----------------
IN: getenv
0x00027a0c:  e456              sd                      s5,8(sp)
0x00027a0e:  03d00a93          addi                    s5,zero,61
0x00027a12:  a021              j                       8                       # 0x27a1a

----------------
IN: getenv
0x00027a1a:  00044783          lbu                     a5,0(s0)
0x00027a1e:  ff279be3          bne                     a5,s2,-10               # 0x27a14

----------------
IN: getenv
0x00027a14:  6480              ld                      s0,8(s1)
0x00027a16:  04a1              addi                    s1,s1,8
0x00027a18:  cc0d              beqz                    s0,58                   # 0x27a52

----------------
IN: getenv
0x00027a22:  864e              mv                      a2,s3
0x00027a24:  85a2              mv                      a1,s0
0x00027a26:  8552              mv                      a0,s4
0x00027a28:  6740b0ef          jal                     ra,46708                # 0x3309c

----------------
IN: strncmp
0x0003309c:  40a008b3          neg                     a7,a0
0x000330a0:  0078f893          andi                    a7,a7,7
0x000330a4:  872a              mv                      a4,a0
0x000330a6:  8346              mv                      t1,a7
0x000330a8:  01167363          bleu                    a7,a2,6                 # 0x330ae

----------------
IN: strncmp
0x000330ae:  02030363          beqz                    t1,38                   # 0x330d4

----------------
IN: strncmp
0x000330d4:  883a              mv                      a6,a4
0x000330d6:  4501              mv                      a0,zero
0x000330d8:  fec8fde3          bleu                    a2,a7,-6                # 0x330d2

----------------
IN: strncmp
0x000330dc:  0075fe13          andi                    t3,a1,7
0x000330e0:  00880893          addi                    a7,a6,8
0x000330e4:  40660633          sub                     a2,a2,t1
0x000330e8:  00083803          ld                      a6,0(a6)
0x000330ec:  120e0a63          beqz                    t3,308                  # 0x33220

----------------
IN: strncmp
0x000330f0:  99e1              andi                    a1,a1,-8
0x000330f2:  0005b283          ld                      t0,0(a1)
0x000330f6:  003e1793          slli                    a5,t3,3
0x000330fa:  04000e93          addi                    t4,zero,64
0x000330fe:  feff0537          lui                     a0,-4112
0x00033102:  eff50513          addi                    a0,a0,-257
0x00033106:  40fe8eb3          sub                     t4,t4,a5
0x0003310a:  577d              addi                    a4,zero,-1
0x0003310c:  00f2d2b3          srl                     t0,t0,a5
0x00033110:  02051f13          slli                    t5,a0,32
0x00033114:  01d71733          sll                     a4,a4,t4
0x00033118:  808086b7          lui                     a3,-522232
0x0003311c:  00576733          or                      a4,a4,t0
0x00033120:  9f2a              add                     t5,t5,a0
0x00033122:  08168693          addi                    a3,a3,129
0x00033126:  80808537          lui                     a0,-522232
0x0003312a:  8fbe              mv                      t6,a5
0x0003312c:  fff74313          not                     t1,a4
0x00033130:  01e707b3          add                     a5,a4,t5
0x00033134:  1682              slli                    a3,a3,32
0x00033136:  08050513          addi                    a0,a0,128
0x0003313a:  0067f7b3          and                     a5,a5,t1
0x0003313e:  96aa              add                     a3,a3,a0
0x00033140:  8ff5              and                     a5,a5,a3
0x00033142:  1a079c63          bnez                    a5,440                  # 0x332fa

----------------
IN: strncmp
0x00033146:  47a1              addi                    a5,zero,8
0x00033148:  41c78533          sub                     a0,a5,t3
0x0003314c:  1ac57763          bleu                    a2,a0,430               # 0x332fa

----------------
IN: strncmp
0x00033150:  6598              ld                      a4,8(a1)
0x00033152:  05c1              addi                    a1,a1,16
0x00033154:  01d71333          sll                     t1,a4,t4
0x00033158:  00536333          or                      t1,t1,t0
0x0003315c:  04c7f063          bleu                    a2,a5,64                # 0x3319c

----------------
IN: strncmp
0x0003319c:  7f7f87b7          lui                     a5,522232
0x000331a0:  f7f78793          addi                    a5,a5,-129
0x000331a4:  02079713          slli                    a4,a5,32
0x000331a8:  973e              add                     a4,a4,a5
0x000331aa:  00e877b3          and                     a5,a6,a4
0x000331ae:  010345b3          xor                     a1,t1,a6
0x000331b2:  97ba              add                     a5,a5,a4
0x000331b4:  00e5f6b3          and                     a3,a1,a4
0x000331b8:  0107e7b3          or                      a5,a5,a6
0x000331bc:  9736              add                     a4,a4,a3
0x000331be:  8f4d              or                      a4,a4,a1
0x000331c0:  fff7c793          not                     a5,a5
0x000331c4:  8fd9              or                      a5,a5,a4
0x000331c6:  0807f713          andi                    a4,a5,128
0x000331ca:  e721              bnez                    a4,72                   # 0x33212

----------------
IN: strncmp
0x000331cc:  03079713          slli                    a4,a5,48
0x000331d0:  28074763          bltz                    a4,654                  # 0x3345e

----------------
IN: strncmp
0x0003345e:  00885813          srli                    a6,a6,8
0x00033462:  00835313          srli                    t1,t1,8
0x00033466:  b375              j                       -596                    # 0x33212

----------------
IN: strncmp
0x00033212:  0ff87513          andi                    a0,a6,255
0x00033216:  0ff37313          andi                    t1,t1,255
0x0003321a:  4065053b          subw                    a0,a0,t1
0x0003321e:  8082              ret                     

----------------
IN: getenv
0x00027a2c:  013407b3          add                     a5,s0,s3
0x00027a30:  f175              bnez                    a0,-28                  # 0x27a14

----------------
IN: getenv
0x00027a52:  7902              ld                      s2,32(sp)
0x00027a54:  69e2              ld                      s3,24(sp)
0x00027a56:  6a42              ld                      s4,16(sp)
0x00027a58:  6aa2              ld                      s5,8(sp)
0x00027a5a:  70e2              ld                      ra,56(sp)
0x00027a5c:  8522              mv                      a0,s0
0x00027a5e:  7442              ld                      s0,48(sp)
0x00027a60:  74a2              ld                      s1,40(sp)
0x00027a62:  6121              addi                    sp,sp,64
0x00027a64:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001cb12:  4781              mv                      a5,zero
0x0001cb14:  c509              beqz                    a0,10                   # 0x1cb1e

----------------
IN: _dl_non_dynamic_init
0x0001cb1e:  00034517          auipc                   a0,52                   # 0x50b1e
0x0001cb22:  ea250513          addi                    a0,a0,-350
0x0001cb26:  06faa023          sw                      a5,96(s5)
0x0001cb2a:  6b50a0ef          jal                     ra,44724                # 0x279de

----------------
IN: strlen
0x00019e64:  feff0737          lui                     a4,-4112
0x00019e68:  80808637          lui                     a2,-522232
0x00019e6c:  eff70713          addi                    a4,a4,-257
0x00019e70:  08160613          addi                    a2,a2,129
0x00019e74:  808086b7          lui                     a3,-522232
0x00019e78:  02071593          slli                    a1,a4,32
0x00019e7c:  1602              slli                    a2,a2,32
0x00019e7e:  08068693          addi                    a3,a3,128
0x00019e82:  95ba              add                     a1,a1,a4
0x00019e84:  9636              add                     a2,a2,a3
0x00019e86:  883e              mv                      a6,a5
0x00019e88:  6798              ld                      a4,8(a5)
0x00019e8a:  07a1              addi                    a5,a5,8
0x00019e8c:  00b706b3          add                     a3,a4,a1
0x00019e90:  fff74713          not                     a4,a4
0x00019e94:  8f75              and                     a4,a4,a3
0x00019e96:  00c776b3          and                     a3,a4,a2
0x00019e9a:  d6f5              beqz                    a3,-20                  # 0x19e86

----------------
IN: strlen
0x00019e9c:  08077693          andi                    a3,a4,128
0x00019ea0:  ee85              bnez                    a3,56                   # 0x19ed8

----------------
IN: strlen
0x00019ea2:  03071793          slli                    a5,a4,48
0x00019ea6:  0807c063          bltz                    a5,128                  # 0x19f26

----------------
IN: strlen
0x00019eaa:  02871793          slli                    a5,a4,40
0x00019eae:  0807c163          bltz                    a5,130                  # 0x19f30

----------------
IN: strlen
0x00019eb2:  02071793          slli                    a5,a4,32
0x00019eb6:  0807c263          bltz                    a5,132                  # 0x19f3a

----------------
IN: strlen
0x00019eba:  01871793          slli                    a5,a4,24
0x00019ebe:  0807c363          bltz                    a5,134                  # 0x19f44

----------------
IN: strlen
0x00019ec2:  01071793          slli                    a5,a4,16
0x00019ec6:  0807c463          bltz                    a5,136                  # 0x19f4e

----------------
IN: strlen
0x00019eca:  4785              addi                    a5,zero,1
0x00019ecc:  17de              slli                    a5,a5,55
0x00019ece:  8f7d              and                     a4,a4,a5
0x00019ed0:  00173793          seqz                    a5,a4
0x00019ed4:  97c2              add                     a5,a5,a6
0x00019ed6:  07b9              addi                    a5,a5,14
0x00019ed8:  40a78533          sub                     a0,a5,a0
0x00019edc:  8082              ret                     

----------------
IN: strncmp
0x00033160:  82be              mv                      t0,a5
0x00033162:  a00d              j                       34                      # 0x33184

----------------
IN: strncmp
0x00033184:  fff74e13          not                     t3,a4
0x00033188:  01e707b3          add                     a5,a4,t5
0x0003318c:  01c7f7b3          and                     a5,a5,t3
0x00033190:  05a1              addi                    a1,a1,8
0x00033192:  8ff5              and                     a5,a5,a3
0x00033194:  01f75e33          srl                     t3,a4,t6
0x00033198:  fd0306e3          beq                     t1,a6,-52               # 0x33164

----------------
IN: _dl_non_dynamic_init
0x0001cb2e:  4681              mv                      a3,zero
0x0001cb30:  4601              mv                      a2,zero
0x0001cb32:  00034597          auipc                   a1,52                   # 0x50b32
0x0001cb36:  e8e58593          addi                    a1,a1,-370
0x0001cb3a:  5d3190ef          jal                     ra,105938               # 0x3690c

----------------
IN: _dl_init_paths
0x0003690c:  7139              addi                    sp,sp,-64
0x0003690e:  f822              sd                      s0,48(sp)
0x00036910:  ec4e              sd                      s3,24(sp)
0x00036912:  e852              sd                      s4,16(sp)
0x00036914:  e456              sd                      s5,8(sp)
0x00036916:  fc06              sd                      ra,56(sp)
0x00036918:  f426              sd                      s1,40(sp)
0x0003691a:  f04a              sd                      s2,32(sp)
0x0003691c:  0080              addi                    s0,sp,64
0x0003691e:  89aa              mv                      s3,a0
0x00036920:  4561              addi                    a0,zero,24
0x00036922:  8a2e              mv                      s4,a1
0x00036924:  00044a97          auipc                   s5,68                   # 0x7a924
0x00036928:  18ca8a93          addi                    s5,s5,396
0x0003692c:  b27e10ef          jal                     ra,-124122              # 0x18452

----------------
IN: __libc_malloc
0x00018466:  0c04c263          bltz                    s1,196                  # 0x1852a

----------------
IN: __libc_malloc
0x00018488:  00063717          auipc                   a4,99                   # 0x7b488
0x0001848c:  c1073703          ld                      a4,-1008(a4)
0x00018490:  0ce96863          bgtu                    a4,s2,208               # 0x18560

----------------
IN: _dl_init_paths
0x00036930:  00aab023          sd                      a0,0(s5)
0x00036934:  1a050663          beqz                    a0,428                  # 0x36ae0

----------------
IN: _dl_init_paths
0x00036938:  892a              mv                      s2,a0
0x0003693a:  0a000513          addi                    a0,zero,160
0x0003693e:  b15e10ef          jal                     ra,-124140              # 0x18452

----------------
IN: _dl_init_paths
0x00036942:  00a93023          sd                      a0,0(s2)
0x00036946:  872a              mv                      a4,a0
0x00036948:  1c050563          beqz                    a0,458                  # 0x36b12

----------------
IN: _dl_init_paths
0x0003694c:  00044797          auipc                   a5,68                   # 0x7a94c
0x00036950:  69c7b783          ld                      a5,1692(a5)
0x00036954:  6384              ld                      s1,0(a5)
0x00036956:  05050593          addi                    a1,a0,80
0x0003695a:  00093823          sd                      zero,16(s2)
0x0003695e:  00b93423          sd                      a1,8(s2)
0x00036962:  3344d783          lhu                     a5,820(s1)
0x00036966:  0001c617          auipc                   a2,28                   # 0x52966
0x0003696a:  4e260613          addi                    a2,a2,1250
0x0003696e:  46a5              addi                    a3,zero,9
0x00036970:  00044317          auipc                   t1,68                   # 0x7a970
0x00036974:  62033303          ld                      t1,1568(t1)
0x00036978:  00020897          auipc                   a7,32                   # 0x56978
0x0003697c:  78088893          addi                    a7,a7,1920
0x00036980:  4815              addi                    a6,zero,5
0x00036982:  00020517          auipc                   a0,32                   # 0x56982
0x00036986:  77c50513          addi                    a0,a0,1916
0x0003698a:  00073823          sd                      zero,16(a4)
0x0003698e:  02072423          sw                      zero,40(a4)
0x00036992:  06073023          sd                      zero,96(a4)
0x00036996:  06072c23          sw                      zero,120(a4)
0x0003699a:  04073823          sd                      zero,80(a4)
0x0003699e:  e30c              sd                      a1,0(a4)
0x000369a0:  00e33023          sd                      a4,0(t1)
0x000369a4:  e710              sd                      a2,8(a4)
0x000369a6:  ef30              sd                      a2,88(a4)
0x000369a8:  01173c23          sd                      a7,24(a4)
0x000369ac:  03073023          sd                      a6,32(a4)
0x000369b0:  f728              sd                      a0,104(a4)
0x000369b2:  fb34              sd                      a3,112(a4)
0x000369b4:  0007b717          auipc                   a4,123                  # 0xb19b4
0x000369b8:  06d73623          sd                      a3,108(a4)
0x000369bc:  00044e17          auipc                   t3,68                   # 0x7a9bc
0x000369c0:  0e0e2e23          sw                      zero,252(t3)
0x000369c4:  8b8d              andi                    a5,a5,3
0x000369c6:  4709              addi                    a4,zero,2
0x000369c8:  12e78563          beq                     a5,a4,298               # 0x36af2

----------------
IN: _dl_init_paths
0x000369cc:  1284b783          ld                      a5,296(s1)
0x000369d0:  c7f1              beqz                    a5,204                  # 0x36a9c

----------------
IN: _dl_init_paths
0x00036a9c:  7cdc              ld                      a5,184(s1)
0x00036a9e:  577d              addi                    a4,zero,-1
0x00036aa0:  3ce4b423          sd                      a4,968(s1)
0x00036aa4:  c39d              beqz                    a5,38                   # 0x36aca

----------------
IN: _dl_init_paths
0x00036aca:  34e4b023          sd                      a4,832(s1)
0x00036ace:  b735              j                       -212                    # 0x369fa

----------------
IN: _dl_init_paths
0x000369fa:  00098563          beqz                    s3,10                   # 0x36a04

----------------
IN: _dl_init_paths
0x00036a04:  57fd              addi                    a5,zero,-1
0x00036a06:  00fab823          sd                      a5,16(s5)
0x00036a0a:  fc040113          addi                    sp,s0,-64
0x00036a0e:  70e2              ld                      ra,56(sp)
0x00036a10:  7442              ld                      s0,48(sp)
0x00036a12:  74a2              ld                      s1,40(sp)
0x00036a14:  7902              ld                      s2,32(sp)
0x00036a16:  69e2              ld                      s3,24(sp)
0x00036a18:  6a42              ld                      s4,16(sp)
0x00036a1a:  6aa2              ld                      s5,8(sp)
0x00036a1c:  6121              addi                    sp,sp,64
0x00036a1e:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001cb3e:  070ab783          ld                      a5,112(s5)
0x0001cb42:  00034517          auipc                   a0,52                   # 0x50b42
0x0001cb46:  e8e50513          addi                    a0,a0,-370
0x0001cb4a:  06fab423          sd                      a5,104(s5)
0x0001cb4e:  6910a0ef          jal                     ra,44688                # 0x279de

----------------
IN: strlen
0x00019f3a:  00b80793          addi                    a5,a6,11
0x00019f3e:  40a78533          sub                     a0,a5,a0
0x00019f42:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001cb52:  4785              addi                    a5,zero,1
0x0001cb54:  c509              beqz                    a0,10                   # 0x1cb5e

----------------
IN: _dl_non_dynamic_init
0x0001cb5e:  00034517          auipc                   a0,52                   # 0x50b5e
0x0001cb62:  e8250513          addi                    a0,a0,-382
0x0001cb66:  06faac23          sw                      a5,120(s5)
0x0001cb6a:  6750a0ef          jal                     ra,44660                # 0x279de

----------------
IN: _dl_non_dynamic_init
0x0001cb6e:  4781              mv                      a5,zero
0x0001cb70:  c509              beqz                    a0,10                   # 0x1cb7a

----------------
IN: _dl_non_dynamic_init
0x0001cb7a:  00034517          auipc                   a0,52                   # 0x50b7a
0x0001cb7e:  e7650513          addi                    a0,a0,-394
0x0001cb82:  06faae23          sw                      a5,124(s5)
0x0001cb86:  6590a0ef          jal                     ra,44632                # 0x279de

----------------
IN: _dl_non_dynamic_init
0x0001cb8a:  4785              addi                    a5,zero,1
0x0001cb8c:  c509              beqz                    a0,10                   # 0x1cb96

----------------
IN: _dl_non_dynamic_init
0x0001cb96:  008ab503          ld                      a0,8(s5)
0x0001cb9a:  08faa023          sw                      a5,128(s5)
0x0001cb9e:  c509              beqz                    a0,10                   # 0x1cba8

----------------
IN: _dl_non_dynamic_init
0x0001cba8:  048ab703          ld                      a4,72(s5)
0x0001cbac:  040ab783          ld                      a5,64(s5)
0x0001cbb0:  6474e637          lui                     a2,411470
0x0001cbb4:  00371693          slli                    a3,a4,3
0x0001cbb8:  8e99              sub                     a3,a3,a4
0x0001cbba:  068e              slli                    a3,a3,3
0x0001cbbc:  85b2              mv                      a1,a2
0x0001cbbe:  96be              add                     a3,a3,a5
0x0001cbc0:  55160613          addi                    a2,a2,1361
0x0001cbc4:  55258593          addi                    a1,a1,1362
0x0001cbc8:  4801              mv                      a6,zero
0x0001cbca:  4501              mv                      a0,zero
0x0001cbcc:  04d7f763          bleu                    a3,a5,78                # 0x1cc1a

----------------
IN: _dl_non_dynamic_init
0x0001cbd0:  e4ce              sd                      s3,72(sp)
0x0001cbd2:  e0d2              sd                      s4,64(sp)
0x0001cbd4:  a821              j                       24                      # 0x1cbec

----------------
IN: _dl_non_dynamic_init
0x0001cbec:  4398              lw                      a4,0(a5)
0x0001cbee:  fec714e3          bne                     a4,a2,-24               # 0x1cbd6

----------------
IN: _dl_non_dynamic_init
0x0001cbd6:  00b71763          bne                     a4,a1,14                # 0x1cbe4

----------------
IN: _dl_non_dynamic_init
0x0001cbe4:  03878793          addi                    a5,a5,56
0x0001cbe8:  00d7fc63          bleu                    a3,a5,24                # 0x1cc00

----------------
IN: _dl_non_dynamic_init
0x0001cbf2:  0047a903          lw                      s2,4(a5)
0x0001cbf6:  03878793          addi                    a5,a5,56
0x0001cbfa:  4505              addi                    a0,zero,1
0x0001cbfc:  fed7e8e3          bgtu                    a3,a5,-16               # 0x1cbec

----------------
IN: _dl_non_dynamic_init
0x0001cbda:  0107b983          ld                      s3,16(a5)
0x0001cbde:  0287ba03          ld                      s4,40(a5)
0x0001cbe2:  4805              addi                    a6,zero,1
0x0001cbe4:  03878793          addi                    a5,a5,56
0x0001cbe8:  00d7fc63          bleu                    a3,a5,24                # 0x1cc00

----------------
IN: _dl_non_dynamic_init
0x0001cc00:  00080663          beqz                    a6,12                   # 0x1cc0c

----------------
IN: _dl_non_dynamic_init
0x0001cc04:  4744b823          sd                      s4,1136(s1)
0x0001cc08:  4734b423          sd                      s3,1128(s1)
0x0001cc0c:  c169              beqz                    a0,194                  # 0x1ccce

----------------
IN: _dl_non_dynamic_init
0x0001cc0e:  69a6              ld                      s3,72(sp)
0x0001cc10:  6a06              ld                      s4,64(sp)
0x0001cc12:  0005f797          auipc                   a5,95                   # 0x7bc12
0x0001cc16:  d727a723          sw                      s2,-658(a5)
0x0001cc1a:  0005e797          auipc                   a5,94                   # 0x7ac1a
0x0001cc1e:  1e67b783          ld                      a5,486(a5)
0x0001cc22:  c391              beqz                    a5,4                    # 0x1cc26

----------------
IN: _dl_non_dynamic_init
0x0001cc24:  9782              jalr                    ra,a5,0

----------------
IN: _dl_find_object_init
0x00044b60:  00036797          auipc                   a5,54                   # 0x7ab60
0x00044b64:  4887b783          ld                      a5,1160(a5)
0x00044b68:  6388              ld                      a0,0(a5)
0x00044b6a:  7179              addi                    sp,sp,-48
0x00044b6c:  f406              sd                      ra,40(sp)
0x00044b6e:  33654783          lbu                     a5,822(a0)
0x00044b72:  f022              sd                      s0,32(sp)
0x00044b74:  ec26              sd                      s1,24(sp)
0x00044b76:  e84a              sd                      s2,16(sp)
0x00044b78:  8ba1              andi                    a5,a5,8
0x00044b7a:  0e079363          bnez                    a5,230                  # 0x44c60

----------------
IN: _dl_find_object_init
0x00044b7e:  00036917          auipc                   s2,54                   # 0x7ab7e
0x00044b82:  fba90913          addi                    s2,s2,-70
0x00044b86:  57fd              addi                    a5,zero,-1
0x00044b88:  00f93823          sd                      a5,16(s2)
0x00044b8c:  00f93c23          sd                      a5,24(s2)
0x00044b90:  b99ff0ef          jal                     ra,-1128                # 0x44728

----------------
IN: _dlfo_process_initial
0x00044728:  711d              addi                    sp,sp,-96
0x0004472a:  e8a2              sd                      s0,80(sp)
0x0004472c:  00037417          auipc                   s0,55                   # 0x7b72c
0x00044730:  8bc43403          ld                      s0,-1860(s0)
0x00044734:  e4a6              sd                      s1,72(sp)
0x00044736:  6004              ld                      s1,0(s0)
0x00044738:  ec86              sd                      ra,88(sp)
0x0004473a:  e0ca              sd                      s2,64(sp)
0x0004473c:  3364c783          lbu                     a5,822(s1)
0x00044740:  fc4e              sd                      s3,56(sp)
0x00044742:  f852              sd                      s4,48(sp)
0x00044744:  8ba1              andi                    a5,a5,8
0x00044746:  cfd1              beqz                    a5,156                  # 0x447e2

----------------
IN: _dlfo_process_initial
0x000447e2:  858a              mv                      a1,sp
0x000447e4:  8526              mv                      a0,s1
0x000447e6:  ee7ff0ef          jal                     ra,-282                 # 0x446cc

----------------
IN: _dl_find_object_from_map
0x000446cc:  36853783          ld                      a5,872(a0)
0x000446d0:  e19c              sd                      a5,0(a1)
0x000446d2:  37053783          ld                      a5,880(a0)
0x000446d6:  00858713          addi                    a4,a1,8
0x000446da:  e31c              sd                      a5,0(a4)
0x000446dc:  01058793          addi                    a5,a1,16
0x000446e0:  e388              sd                      a0,0(a5)
0x000446e2:  2d055703          lhu                     a4,720(a0)
0x000446e6:  2c053783          ld                      a5,704(a0)
0x000446ea:  00371693          slli                    a3,a4,3
0x000446ee:  8e99              sub                     a3,a3,a4
0x000446f0:  068e              slli                    a3,a3,3
0x000446f2:  96be              add                     a3,a3,a5
0x000446f4:  02d7f563          bleu                    a3,a5,42                # 0x4471e

----------------
IN: _dl_find_object_from_map
0x000446f8:  6474e637          lui                     a2,411470
0x000446fc:  55060613          addi                    a2,a2,1360
0x00044700:  a029              j                       10                      # 0x4470a

----------------
IN: _dl_find_object_from_map
0x0004470a:  4398              lw                      a4,0(a5)
0x0004470c:  fec71be3          bne                     a4,a2,-10               # 0x44702

----------------
IN: _dl_find_object_from_map
0x00044702:  03878793          addi                    a5,a5,56
0x00044706:  00d7fc63          bleu                    a3,a5,24                # 0x4471e

----------------
IN: _dl_find_object_from_map
0x0004471e:  01858793          addi                    a5,a1,24
0x00044722:  0007b023          sd                      zero,0(a5)
0x00044726:  8082              ret                     

----------------
IN: _dlfo_process_initial
0x000447ea:  2d04d703          lhu                     a4,720(s1)
0x000447ee:  2c04b783          ld                      a5,704(s1)
0x000447f2:  00371693          slli                    a3,a4,3
0x000447f6:  8e99              sub                     a3,a3,a4
0x000447f8:  068e              slli                    a3,a3,3
0x000447fa:  96be              add                     a3,a3,a5
0x000447fc:  08d7f663          bleu                    a3,a5,140               # 0x44888

----------------
IN: _dlfo_process_initial
0x00044800:  00036997          auipc                   s3,54                   # 0x7a800
0x00044804:  33898993          addi                    s3,s3,824
0x00044808:  0009b803          ld                      a6,0(s3)
0x0004480c:  4901              mv                      s2,zero
0x0004480e:  4585              addi                    a1,zero,1
0x00044810:  a029              j                       10                      # 0x4481a

----------------
IN: _dlfo_process_initial
0x0004481a:  4398              lw                      a4,0(a5)
0x0004481c:  feb71be3          bne                     a4,a1,-10               # 0x44812

----------------
IN: _dlfo_process_initial
0x00044812:  03878793          addi                    a5,a5,56
0x00044816:  04d7f963          bleu                    a3,a5,82                # 0x44868

----------------
IN: _dlfo_process_initial
0x00044820:  06080263          beqz                    a6,100                  # 0x44884

----------------
IN: _dlfo_process_initial
0x00044884:  0905              addi                    s2,s2,1
0x00044886:  b771              j                       -116                    # 0x44812

----------------
IN: _dlfo_process_initial
0x00044868:  00036797          auipc                   a5,54                   # 0x7a868
0x0004486c:  5f07b783          ld                      a5,1520(a5)
0x00044870:  0007ba03          ld                      s4,0(a5)
0x00044874:  f00a09e3          beqz                    s4,-238                 # 0x44786

----------------
IN: _dlfo_process_initial
0x00044878:  6000              ld                      s0,0(s0)
0x0004487a:  4a01              mv                      s4,zero
0x0004487c:  f00405e3          beqz                    s0,-246                 # 0x44786

----------------
IN: _dlfo_process_initial
0x00044880:  f456              sd                      s5,40(sp)
0x00044882:  b5d5              j                       -284                    # 0x44766

----------------
IN: _dlfo_process_initial
0x00044766:  4a01              mv                      s4,zero
0x00044768:  4a85              addi                    s5,zero,1
0x0004476a:  00848563          beq                     s1,s0,10                # 0x44774

----------------
IN: _dlfo_process_initial
0x00044774:  6c00              ld                      s0,24(s0)
0x00044776:  f875              bnez                    s0,-12                  # 0x4476a

----------------
IN: _dlfo_process_initial
0x0004476a:  00848563          beq                     s1,s0,10                # 0x44774

----------------
IN: _dlfo_process_initial
0x0004476e:  741c              ld                      a5,40(s0)
0x00044770:  02878663          beq                     a5,s0,44                # 0x4479c

----------------
IN: _dlfo_process_initial
0x0004479c:  33445783          lhu                     a5,820(s0)
0x000447a0:  8b8d              andi                    a5,a5,3
0x000447a2:  03578563          beq                     a5,s5,42                # 0x447cc

----------------
IN: _dlfo_process_initial
0x000447cc:  0009b783          ld                      a5,0(s3)
0x000447d0:  c799              beqz                    a5,14                   # 0x447de

----------------
IN: _dlfo_process_initial
0x000447de:  0905              addi                    s2,s2,1
0x000447e0:  bf51              j                       -108                    # 0x44774

----------------
IN: _dlfo_process_initial
0x00044778:  7aa2              ld                      s5,40(sp)
0x0004477a:  a031              j                       12                      # 0x44786

----------------
IN: _dlfo_process_initial
0x00044786:  60e6              ld                      ra,88(sp)
0x00044788:  6446              ld                      s0,80(sp)
0x0004478a:  0129b423          sd                      s2,8(s3)
0x0004478e:  64a6              ld                      s1,72(sp)
0x00044790:  6906              ld                      s2,64(sp)
0x00044792:  79e2              ld                      s3,56(sp)
0x00044794:  8552              mv                      a0,s4
0x00044796:  7a42              ld                      s4,48(sp)
0x00044798:  6125              addi                    sp,sp,96
0x0004479a:  8082              ret                     

----------------
IN: _dl_find_object_init
0x00044b94:  00893783          ld                      a5,8(s2)
0x00044b98:  84aa              mv                      s1,a0
0x00044b9a:  00579513          slli                    a0,a5,5
0x00044b9e:  8b5d30ef          jal                     ra,-182092              # 0x18452

----------------
IN: _dl_find_object_init
0x00044ba2:  00a93023          sd                      a0,0(s2)
0x00044ba6:  842a              mv                      s0,a0
0x00044ba8:  ec95              bnez                    s1,60                   # 0x44be4

----------------
IN: _dl_find_object_init
0x00044baa:  cd79              beqz                    a0,222                  # 0x44c88

----------------
IN: _dl_find_object_init
0x00044bac:  00036797          auipc                   a5,54                   # 0x7abac
0x00044bb0:  f807ba23          sd                      zero,-108(a5)
0x00044bb4:  b75ff0ef          jal                     ra,-1164                # 0x44728

----------------
IN: _dlfo_process_initial
0x00044824:  0004be03          ld                      t3,0(s1)
0x00044828:  6542              ld                      a0,16(sp)
0x0004482a:  6662              ld                      a2,24(sp)
0x0004482c:  6302              ld                      t1,0(sp)
0x0004482e:  68a2              ld                      a7,8(sp)
0x00044830:  00591713          slli                    a4,s2,5
0x00044834:  9742              add                     a4,a4,a6
0x00044836:  00673023          sd                      t1,0(a4)
0x0004483a:  01173423          sd                      a7,8(a4)
0x0004483e:  eb08              sd                      a0,16(a4)
0x00044840:  ef10              sd                      a2,24(a4)
0x00044842:  6b90              ld                      a2,16(a5)
0x00044844:  03878793          addi                    a5,a5,56
0x00044848:  0905              addi                    s2,s2,1
0x0004484a:  9672              add                     a2,a2,t3
0x0004484c:  e310              sd                      a2,0(a4)
0x0004484e:  ff07b503          ld                      a0,-16(a5)
0x00044852:  962a              add                     a2,a2,a0
0x00044854:  e710              sd                      a2,8(a4)
0x00044856:  00d7f963          bleu                    a3,a5,18                # 0x44868

----------------
IN: _dlfo_process_initial
0x0004485a:  4398              lw                      a4,0(a5)
0x0004485c:  fcb706e3          beq                     a4,a1,-52               # 0x44828

----------------
IN: _dlfo_process_initial
0x00044828:  6542              ld                      a0,16(sp)
0x0004482a:  6662              ld                      a2,24(sp)
0x0004482c:  6302              ld                      t1,0(sp)
0x0004482e:  68a2              ld                      a7,8(sp)
0x00044830:  00591713          slli                    a4,s2,5
0x00044834:  9742              add                     a4,a4,a6
0x00044836:  00673023          sd                      t1,0(a4)
0x0004483a:  01173423          sd                      a7,8(a4)
0x0004483e:  eb08              sd                      a0,16(a4)
0x00044840:  ef10              sd                      a2,24(a4)
0x00044842:  6b90              ld                      a2,16(a5)
0x00044844:  03878793          addi                    a5,a5,56
0x00044848:  0905              addi                    s2,s2,1
0x0004484a:  9672              add                     a2,a2,t3
0x0004484c:  e310              sd                      a2,0(a4)
0x0004484e:  ff07b503          ld                      a0,-16(a5)
0x00044852:  962a              add                     a2,a2,a0
0x00044854:  e710              sd                      a2,8(a4)
0x00044856:  00d7f963          bleu                    a3,a5,18                # 0x44868

----------------
IN: _dlfo_process_initial
0x00044860:  03878793          addi                    a5,a5,56
0x00044864:  fad7ebe3          bgtu                    a3,a5,-74               # 0x4481a

----------------
IN: _dlfo_process_initial
0x000447d2:  00591593          slli                    a1,s2,5
0x000447d6:  95be              add                     a1,a1,a5
0x000447d8:  8522              mv                      a0,s0
0x000447da:  ef3ff0ef          jal                     ra,-270                 # 0x446cc

----------------
IN: _dl_find_object_from_map
0x00044710:  6118              ld                      a4,0(a0)
0x00044712:  6b9c              ld                      a5,16(a5)
0x00044714:  97ba              add                     a5,a5,a4
0x00044716:  01858713          addi                    a4,a1,24
0x0004471a:  e31c              sd                      a5,0(a4)
0x0004471c:  8082              ret                     

----------------
IN: _dl_find_object_init
0x00044bb8:  00893483          ld                      s1,8(s2)
0x00044bbc:  cc91              beqz                    s1,28                   # 0x44bd8

----------------
IN: _dl_find_object_init
0x00044bbe:  4785              addi                    a5,zero,1
0x00044bc0:  00f48963          beq                     s1,a5,18                # 0x44bd2

----------------
IN: _dl_find_object_init
0x00044bc4:  85a6              mv                      a1,s1
0x00044bc6:  14fd              addi                    s1,s1,-1
0x00044bc8:  8522              mv                      a0,s0
0x00044bca:  0496              slli                    s1,s1,5
0x00044bcc:  cc9ff0ef          jal                     ra,-824                 # 0x44894

----------------
IN: _dlfo_sort_mappings.part.0
0x00044894:  fff58293          addi                    t0,a1,-1
0x00044898:  88aa              mv                      a7,a0
0x0004489a:  4301              mv                      t1,zero
0x0004489c:  861a              mv                      a2,t1
0x0004489e:  0305              addi                    t1,t1,1
0x000448a0:  0008b803          ld                      a6,0(a7)
0x000448a4:  06b37363          bleu                    a1,t1,102               # 0x4490a

----------------
IN: _dlfo_sort_mappings.part.0
0x000448a8:  8746              mv                      a4,a7
0x000448aa:  879a              mv                      a5,t1
0x000448ac:  7314              ld                      a3,32(a4)
0x000448ae:  02070713          addi                    a4,a4,32
0x000448b2:  0106f463          bleu                    a6,a3,8                 # 0x448ba

----------------
IN: _dlfo_sort_mappings.part.0
0x000448ba:  0785              addi                    a5,a5,1
0x000448bc:  fef598e3          bne                     a1,a5,-16               # 0x448ac

----------------
IN: _dlfo_sort_mappings.part.0
0x000448ac:  7314              ld                      a3,32(a4)
0x000448ae:  02070713          addi                    a4,a4,32
0x000448b2:  0106f463          bleu                    a6,a3,8                 # 0x448ba

----------------
IN: _dlfo_sort_mappings.part.0
0x000448c0:  00561793          slli                    a5,a2,5
0x000448c4:  97aa              add                     a5,a5,a0
0x000448c6:  0007b803          ld                      a6,0(a5)
0x000448ca:  0008bf83          ld                      t6,0(a7)
0x000448ce:  0088bf03          ld                      t5,8(a7)
0x000448d2:  0108be83          ld                      t4,16(a7)
0x000448d6:  0188be03          ld                      t3,24(a7)
0x000448da:  6790              ld                      a2,8(a5)
0x000448dc:  6b94              ld                      a3,16(a5)
0x000448de:  6f98              ld                      a4,24(a5)
0x000448e0:  01f7b023          sd                      t6,0(a5)
0x000448e4:  01e7b423          sd                      t5,8(a5)
0x000448e8:  01d7b823          sd                      t4,16(a5)
0x000448ec:  01c7bc23          sd                      t3,24(a5)
0x000448f0:  00c8b423          sd                      a2,8(a7)
0x000448f4:  00d8b823          sd                      a3,16(a7)
0x000448f8:  00e8bc23          sd                      a4,24(a7)
0x000448fc:  0108b023          sd                      a6,0(a7)
0x00044900:  02088893          addi                    a7,a7,32
0x00044904:  f8536ce3          bgtu                    t0,t1,-104              # 0x4489c

----------------
IN: _dlfo_sort_mappings.part.0
0x0004489c:  861a              mv                      a2,t1
0x0004489e:  0305              addi                    t1,t1,1
0x000448a0:  0008b803          ld                      a6,0(a7)
0x000448a4:  06b37363          bleu                    a1,t1,102               # 0x4490a

----------------
IN: _dlfo_sort_mappings.part.0
0x00044908:  8082              ret                     

----------------
IN: _dl_find_object_init
0x00044bd0:  9426              add                     s0,s0,s1
0x00044bd2:  641c              ld                      a5,8(s0)
0x00044bd4:  02f93823          sd                      a5,48(s2)
0x00044bd8:  70a2              ld                      ra,40(sp)
0x00044bda:  7402              ld                      s0,32(sp)
0x00044bdc:  64e2              ld                      s1,24(sp)
0x00044bde:  6942              ld                      s2,16(sp)
0x00044be0:  6145              addi                    sp,sp,48
0x00044be2:  8082              ret                     

----------------
IN: _dl_non_dynamic_init
0x0001cc26:  4704b783          ld                      a5,1136(s1)
0x0001cc2a:  e7c9              bnez                    a5,138                  # 0x1ccb4

----------------
IN: _dl_non_dynamic_init
0x0001ccb4:  7406              ld                      s0,96(sp)
0x0001ccb6:  70a6              ld                      ra,104(sp)
0x0001ccb8:  64e6              ld                      s1,88(sp)
0x0001ccba:  6946              ld                      s2,80(sp)
0x0001ccbc:  7ae2              ld                      s5,56(sp)
0x0001ccbe:  7b42              ld                      s6,48(sp)
0x0001ccc0:  0005f517          auipc                   a0,95                   # 0x7bcc0
0x0001ccc4:  d5050513          addi                    a0,a0,-688
0x0001ccc8:  6165              addi                    sp,sp,112
0x0001ccca:  41e1d06f          j                       119838                  # 0x3a0e8

----------------
IN: _dl_protect_relro
0x0003a0e8:  611c              ld                      a5,0(a0)
0x0003a0ea:  46853683          ld                      a3,1128(a0)
0x0003a0ee:  00041717          auipc                   a4,65                   # 0x7b0ee
0x0003a0f2:  ed273703          ld                      a4,-302(a4)
0x0003a0f6:  47053583          ld                      a1,1136(a0)
0x0003a0fa:  6318              ld                      a4,0(a4)
0x0003a0fc:  97b6              add                     a5,a5,a3
0x0003a0fe:  1141              addi                    sp,sp,-16
0x0003a100:  40e00733          neg                     a4,a4
0x0003a104:  95be              add                     a1,a1,a5
0x0003a106:  e022              sd                      s0,0(sp)
0x0003a108:  e406              sd                      ra,8(sp)
0x0003a10a:  842a              mv                      s0,a0
0x0003a10c:  8df9              and                     a1,a1,a4
0x0003a10e:  00e7f533          and                     a0,a5,a4
0x0003a112:  00b51663          bne                     a0,a1,12                # 0x3a11e

----------------
IN: _dl_protect_relro
0x0003a11e:  8d89              sub                     a1,a1,a0
0x0003a120:  4605              addi                    a2,zero,1
0x0003a122:  dcbe00ef          jal                     ra,-127542              # 0x1aeec

----------------
IN: __mprotect
0x0001aeec:  0e200893          addi                    a7,zero,226
0x0001aef0:  00000073          ecall                   

----------------
IN: __mprotect
0x0001aef4:  78fd              lui                     a7,-1
0x0001aef6:  00a8e363          bgtu                    a0,a7,6                 # 0x1aefc

----------------
IN: __mprotect
0x0001aefa:  8082              ret                     

----------------
IN: _dl_protect_relro
0x0003a126:  fe0558e3          bgez                    a0,-16                  # 0x3a116

----------------
IN: _dl_protect_relro
0x0003a116:  60a2              ld                      ra,8(sp)
0x0003a118:  6402              ld                      s0,0(sp)
0x0003a11a:  0141              addi                    sp,sp,16
0x0003a11c:  8082              ret                     

----------------
IN: __libc_init_first
0x0001cf92:  8522              mv                      a0,s0
0x0001cf94:  6442              ld                      s0,16(sp)
0x0001cf96:  60e2              ld                      ra,24(sp)
0x0001cf98:  864a              mv                      a2,s2
0x0001cf9a:  85a6              mv                      a1,s1
0x0001cf9c:  6902              ld                      s2,0(sp)
0x0001cf9e:  64a2              ld                      s1,8(sp)
0x0001cfa0:  6105              addi                    sp,sp,32
0x0001cfa2:  4e61806f          j                       99558                   # 0x35488

----------------
IN: __init_misc
0x00035488:  cd85              beqz                    a1,56                   # 0x354c0

----------------
IN: __init_misc
0x0003548a:  1101              addi                    sp,sp,-32
0x0003548c:  e426              sd                      s1,8(sp)
0x0003548e:  6184              ld                      s1,0(a1)
0x00035490:  e822              sd                      s0,16(sp)
0x00035492:  ec06              sd                      ra,24(sp)
0x00035494:  842e              mv                      s0,a1
0x00035496:  c085              beqz                    s1,32                   # 0x354b6

----------------
IN: __init_misc
0x00035498:  02f00593          addi                    a1,zero,47
0x0003549c:  8526              mv                      a0,s1
0x0003549e:  800fe0ef          jal                     ra,-8192                # 0x3349e

----------------
IN: strrchr
0x0003349e:  1101              addi                    sp,sp,-32
0x000334a0:  e822              sd                      s0,16(sp)
0x000334a2:  e426              sd                      s1,8(sp)
0x000334a4:  ec06              sd                      ra,24(sp)
0x000334a6:  84ae              mv                      s1,a1
0x000334a8:  842a              mv                      s0,a0
0x000334aa:  98be60ef          jal                     ra,-104054              # 0x19e34

----------------
IN: strlen
0x00019e86:  883e              mv                      a6,a5
0x00019e88:  6798              ld                      a4,8(a5)
0x00019e8a:  07a1              addi                    a5,a5,8
0x00019e8c:  00b706b3          add                     a3,a4,a1
0x00019e90:  fff74713          not                     a4,a4
0x00019e94:  8f75              and                     a4,a4,a3
0x00019e96:  00c776b3          and                     a3,a4,a2
0x00019e9a:  d6f5              beqz                    a3,-20                  # 0x19e86

----------------
IN: strrchr
0x000334ae:  00150613          addi                    a2,a0,1
0x000334b2:  8522              mv                      a0,s0
0x000334b4:  6442              ld                      s0,16(sp)
0x000334b6:  60e2              ld                      ra,24(sp)
0x000334b8:  85a6              mv                      a1,s1
0x000334ba:  64a2              ld                      s1,8(sp)
0x000334bc:  6105              addi                    sp,sp,32
0x000334be:  6e50d06f          j                       57060                   # 0x413a2

----------------
IN: memrchr
0x000413a2:  88aa              mv                      a7,a0
0x000413a4:  1e060263          beqz                    a2,484                  # 0x41588

----------------
IN: memrchr
0x000413a8:  010107b7          lui                     a5,4112
0x000413ac:  10178793          addi                    a5,a5,257
0x000413b0:  02079713          slli                    a4,a5,32
0x000413b4:  97ba              add                     a5,a5,a4
0x000413b6:  0ff5f593          andi                    a1,a1,255
0x000413ba:  02f585b3          mul                     a1,a1,a5
0x000413be:  962a              add                     a2,a2,a0
0x000413c0:  00760513          addi                    a0,a2,7
0x000413c4:  9961              andi                    a0,a0,-8
0x000413c6:  ff853683          ld                      a3,-8(a0)
0x000413ca:  7f7f87b7          lui                     a5,522232
0x000413ce:  f7f78793          addi                    a5,a5,-129
0x000413d2:  02079713          slli                    a4,a5,32
0x000413d6:  973e              add                     a4,a4,a5
0x000413d8:  8a1d              andi                    a2,a2,7
0x000413da:  8ead              xor                     a3,a3,a1
0x000413dc:  00e6f7b3          and                     a5,a3,a4
0x000413e0:  97ba              add                     a5,a5,a4
0x000413e2:  8fd5              or                      a5,a5,a3
0x000413e4:  8fd9              or                      a5,a5,a4
0x000413e6:  ff850713          addi                    a4,a0,-8
0x000413ea:  c269              beqz                    a2,194                  # 0x414ac

----------------
IN: memrchr
0x000413ec:  0036161b          slliw                   a2,a2,3
0x000413f0:  56fd              addi                    a3,zero,-1
0x000413f2:  00c696b3          sll                     a3,a3,a2
0x000413f6:  8fd5              or                      a5,a5,a3
0x000413f8:  fff7c793          not                     a5,a5
0x000413fc:  efd5              bnez                    a5,188                  # 0x414b8

----------------
IN: memrchr
0x000413fe:  ff88f313          andi                    t1,a7,-8
0x00041402:  18670363          beq                     a4,t1,390               # 0x41588

----------------
IN: memrchr
0x00041406:  ff050693          addi                    a3,a0,-16
0x0004140a:  ff053703          ld                      a4,-16(a0)
0x0004140e:  0ed30663          beq                     t1,a3,236               # 0x414fa

----------------
IN: memrchr
0x00041412:  feff07b7          lui                     a5,-4112
0x00041416:  80808837          lui                     a6,-522232
0x0004141a:  eff78793          addi                    a5,a5,-257
0x0004141e:  08180813          addi                    a6,a6,129
0x00041422:  80808637          lui                     a2,-522232
0x00041426:  02079513          slli                    a0,a5,32
0x0004142a:  1802              slli                    a6,a6,32
0x0004142c:  08060613          addi                    a2,a2,128
0x00041430:  953e              add                     a0,a0,a5
0x00041432:  9832              add                     a6,a6,a2
0x00041434:  a029              j                       10                      # 0x4143e

----------------
IN: memrchr
0x0004143e:  8f2d              xor                     a4,a4,a1
0x00041440:  00a707b3          add                     a5,a4,a0
0x00041444:  fff74613          not                     a2,a4
0x00041448:  8ff1              and                     a5,a5,a2
0x0004144a:  0107f7b3          and                     a5,a5,a6
0x0004144e:  d7e5              beqz                    a5,-24                  # 0x41436

----------------
IN: memrchr
0x00041450:  7f7f87b7          lui                     a5,522232
0x00041454:  f7f78793          addi                    a5,a5,-129
0x00041458:  02079613          slli                    a2,a5,32
0x0004145c:  963e              add                     a2,a2,a5
0x0004145e:  00c777b3          and                     a5,a4,a2
0x00041462:  97b2              add                     a5,a5,a2
0x00041464:  8fd9              or                      a5,a5,a4
0x00041466:  8fd1              or                      a5,a5,a2
0x00041468:  fff7c713          not                     a4,a5
0x0004146c:  1207d063          bgez                    a5,288                  # 0x4158c

----------------
IN: memrchr
0x00041470:  00871793          slli                    a5,a4,8
0x00041474:  4519              addi                    a0,zero,6
0x00041476:  0207c963          bltz                    a5,50                   # 0x414a8

----------------
IN: memrchr
0x0004147a:  01071793          slli                    a5,a4,16
0x0004147e:  4515              addi                    a0,zero,5
0x00041480:  0207c463          bltz                    a5,40                   # 0x414a8

----------------
IN: memrchr
0x00041484:  01871793          slli                    a5,a4,24
0x00041488:  4511              addi                    a0,zero,4
0x0004148a:  0007cf63          bltz                    a5,30                   # 0x414a8

----------------
IN: memrchr
0x0004148e:  02071793          slli                    a5,a4,32
0x00041492:  450d              addi                    a0,zero,3
0x00041494:  0007ca63          bltz                    a5,20                   # 0x414a8

----------------
IN: memrchr
0x00041498:  02871793          slli                    a5,a4,40
0x0004149c:  4509              addi                    a0,zero,2
0x0004149e:  0007c563          bltz                    a5,10                   # 0x414a8

----------------
IN: memrchr
0x000414a2:  833d              srli                    a4,a4,15
0x000414a4:  00177513          andi                    a0,a4,1
0x000414a8:  9536              add                     a0,a0,a3
0x000414aa:  8082              ret                     

----------------
IN: __init_misc
0x000354a2:  c119              beqz                    a0,6                    # 0x354a8

----------------
IN: __init_misc
0x000354a4:  00150493          addi                    s1,a0,1
0x000354a8:  00047797          auipc                   a5,71                   # 0x7c4a8
0x000354ac:  3d878793          addi                    a5,a5,984
0x000354b0:  e384              sd                      s1,0(a5)
0x000354b2:  6018              ld                      a4,0(s0)
0x000354b4:  e798              sd                      a4,8(a5)
0x000354b6:  60e2              ld                      ra,24(sp)
0x000354b8:  6442              ld                      s0,16(sp)
0x000354ba:  64a2              ld                      s1,8(sp)
0x000354bc:  6105              addi                    sp,sp,32
0x000354be:  8082              ret                     

----------------
IN: __libc_start_main
0x00010832:  4601              mv                      a2,zero
0x00010834:  4581              mv                      a1,zero
0x00010836:  00000517          auipc                   a0,0                    # 0x10836
0x0001083a:  de850513          addi                    a0,a0,-536
0x0001083e:  4d0000ef          jal                     ra,1232                 # 0x10d0e

----------------
IN: __cxa_atexit
0x00010d0e:  0006a697          auipc                   a3,106                  # 0x7ad0e
0x00010d12:  2fa68693          addi                    a3,a3,762
0x00010d16:  b73d              j                       -210                    # 0x10c44

----------------
IN: __internal_atexit
0x00010c44:  7139              addi                    sp,sp,-64
0x00010c46:  fc06              sd                      ra,56(sp)
0x00010c48:  f822              sd                      s0,48(sp)
0x00010c4a:  f426              sd                      s1,40(sp)
0x00010c4c:  f04a              sd                      s2,32(sp)
0x00010c4e:  ec4e              sd                      s3,24(sp)
0x00010c50:  cd59              beqz                    a0,158                  # 0x10cee

----------------
IN: __internal_atexit
0x00010c52:  0009c417          auipc                   s0,156                  # 0xacc52
0x00010c56:  4ee40413          addi                    s0,s0,1262
0x00010c5a:  89ae              mv                      s3,a1
0x00010c5c:  84aa              mv                      s1,a0
0x00010c5e:  8932              mv                      s2,a2
0x00010c60:  4705              addi                    a4,zero,1
0x00010c62:  00840593          addi                    a1,s0,8
0x00010c66:  1405a7af          lr.w.aq                 a5,(a1)
0x00010c6a:  e781              bnez                    a5,8                    # 0x10c72

----------------
IN: __internal_atexit
0x00010c6c:  18e5a62f          sc.w                    a2,a4,(a1)
0x00010c70:  fa7d              bnez                    a2,-10                  # 0x10c66

----------------
IN: __internal_atexit
0x00010c72:  2781              sext.w                  a5,a5
0x00010c74:  e7a1              bnez                    a5,72                   # 0x10cbc

----------------
IN: __internal_atexit
0x00010c76:  8536              mv                      a0,a3
0x00010c78:  f07ff0ef          jal                     ra,-250                 # 0x10b7e

----------------
IN: __new_exitfn
0x00010b7e:  0009d797          auipc                   a5,157                  # 0xadb7e
0x00010b82:  9e27c783          lbu                     a5,-1566(a5)
0x00010b86:  efcd              bnez                    a5,186                  # 0x10c40

----------------
IN: __new_exitfn
0x00010b88:  1101              addi                    sp,sp,-32
0x00010b8a:  e426              sd                      s1,8(sp)
0x00010b8c:  6104              ld                      s1,0(a0)
0x00010b8e:  e822              sd                      s0,16(sp)
0x00010b90:  ec06              sd                      ra,24(sp)
0x00010b92:  842a              mv                      s0,a0
0x00010b94:  c4d1              beqz                    s1,140                  # 0x10c20

----------------
IN: __new_exitfn
0x00010b96:  85a6              mv                      a1,s1
0x00010b98:  4801              mv                      a6,zero
0x00010b9a:  6598              ld                      a4,8(a1)
0x00010b9c:  00571793          slli                    a5,a4,5
0x00010ba0:  97ae              add                     a5,a5,a1
0x00010ba2:  cb09              beqz                    a4,18                   # 0x10bb4

----------------
IN: __new_exitfn
0x00010bb4:  619c              ld                      a5,0(a1)
0x00010bb6:  0005b423          sd                      zero,8(a1)
0x00010bba:  882e              mv                      a6,a1
0x00010bbc:  c7b9              beqz                    a5,78                   # 0x10c0a

----------------
IN: __new_exitfn
0x00010c0a:  4785              addi                    a5,zero,1
0x00010c0c:  e59c              sd                      a5,8(a1)
0x00010c0e:  01058513          addi                    a0,a1,16
0x00010c12:  b7d1              j                       -60                     # 0x10bd6

----------------
IN: __new_exitfn
0x00010bd6:  0009c717          auipc                   a4,156                  # 0xacbd6
0x00010bda:  56a70713          addi                    a4,a4,1386
0x00010bde:  631c              ld                      a5,0(a4)
0x00010be0:  60e2              ld                      ra,24(sp)
0x00010be2:  6442              ld                      s0,16(sp)
0x00010be4:  4685              addi                    a3,zero,1
0x00010be6:  e114              sd                      a3,0(a0)
0x00010be8:  97b6              add                     a5,a5,a3
0x00010bea:  e31c              sd                      a5,0(a4)
0x00010bec:  64a2              ld                      s1,8(sp)
0x00010bee:  6105              addi                    sp,sp,32
0x00010bf0:  8082              ret                     

----------------
IN: __internal_atexit
0x00010c7c:  c531              beqz                    a0,76                   # 0x10cc8

----------------
IN: __internal_atexit
0x00010c7e:  4791              addi                    a5,zero,4
0x00010c80:  e11c              sd                      a5,0(a0)
0x00010c82:  e504              sd                      s1,8(a0)
0x00010c84:  01353823          sd                      s3,16(a0)
0x00010c88:  01253c23          sd                      s2,24(a0)
0x00010c8c:  4781              mv                      a5,zero
0x00010c8e:  00840713          addi                    a4,s0,8
0x00010c92:  0af727af          amoswap.w.rl            a5,a5,(a4)
0x00010c96:  2781              sext.w                  a5,a5
0x00010c98:  4705              addi                    a4,zero,1
0x00010c9a:  00f74a63          bgt                     a5,a4,20                # 0x10cae

----------------
IN: __internal_atexit
0x00010c9e:  4501              mv                      a0,zero
0x00010ca0:  70e2              ld                      ra,56(sp)
0x00010ca2:  7442              ld                      s0,48(sp)
0x00010ca4:  74a2              ld                      s1,40(sp)
0x00010ca6:  7902              ld                      s2,32(sp)
0x00010ca8:  69e2              ld                      s3,24(sp)
0x00010caa:  6121              addi                    sp,sp,64
0x00010cac:  8082              ret                     

----------------
IN: __libc_start_main
0x00010842:  0006b797          auipc                   a5,107                  # 0x7b842
0x00010846:  7267a783          lw                      a5,1830(a5)
0x0001084a:  efa5              bnez                    a5,120                  # 0x108c2

----------------
IN: __libc_start_main
0x0001084c:  00067797          auipc                   a5,103                  # 0x7784c
0x00010850:  b7c78793          addi                    a5,a5,-1156
0x00010854:  00067417          auipc                   s0,103                  # 0x77854
0x00010858:  b6c40413          addi                    s0,s0,-1172
0x0001085c:  40878ab3          sub                     s5,a5,s0
0x00010860:  000a3a03          ld                      s4,0(s4)
0x00010864:  403ada93          srai                    s5,s5,3
0x00010868:  00878c63          beq                     a5,s0,24                # 0x10880

----------------
IN: __libc_start_main
0x0001086c:  4481              mv                      s1,zero
0x0001086e:  601c              ld                      a5,0(s0)
0x00010870:  8652              mv                      a2,s4
0x00010872:  85ce              mv                      a1,s3
0x00010874:  854a              mv                      a0,s2
0x00010876:  0485              addi                    s1,s1,1
0x00010878:  9782              jalr                    ra,a5,0

----------------
IN: __libc_start_main
0x0001087a:  0421              addi                    s0,s0,8
0x0001087c:  ff54e9e3          bgtu                    s5,s1,-14               # 0x1086e

----------------
IN: __libc_start_main
0x00010880:  00067797          auipc                   a5,103                  # 0x77880
0x00010884:  b5878793          addi                    a5,a5,-1192
0x00010888:  00067417          auipc                   s0,103                  # 0x77888
0x0001088c:  b4040413          addi                    s0,s0,-1216
0x00010890:  40878ab3          sub                     s5,a5,s0
0x00010894:  403ada93          srai                    s5,s5,3
0x00010898:  00878c63          beq                     a5,s0,24                # 0x108b0

----------------
IN: __libc_start_main
0x0001089c:  4481              mv                      s1,zero
0x0001089e:  601c              ld                      a5,0(s0)
0x000108a0:  8652              mv                      a2,s4
0x000108a2:  85ce              mv                      a1,s3
0x000108a4:  854a              mv                      a0,s2
0x000108a6:  0485              addi                    s1,s1,1
0x000108a8:  9782              jalr                    ra,a5,0

----------------
IN: 
0x000105f4:  0004c7b7          lui                     a5,76
0x000105f8:  53078793          addi                    a5,a5,1328
0x000105fc:  c385              beqz                    a5,32                   # 0x1061c

----------------
IN: 
0x000105fe:  0007d5b7          lui                     a1,125
0x00010602:  0006a537          lui                     a0,106
0x00010606:  1141              addi                    sp,sp,-16
0x00010608:  8b058593          addi                    a1,a1,-1872
0x0001060c:  c1050513          addi                    a0,a0,-1008
0x00010610:  e406              sd                      ra,8(sp)
0x00010612:  71f3b0ef          jal                     ra,245534               # 0x4c530

----------------
IN: __register_frame_info
0x0004c530:  c119              beqz                    a0,6                    # 0x4c536

----------------
IN: __register_frame_info
0x0004c532:  411c              lw                      a5,0(a0)
0x0004c534:  e391              bnez                    a5,4                    # 0x4c538

----------------
IN: __register_frame_info
0x0004c538:  1101              addi                    sp,sp,-32
0x0004c53a:  ec06              sd                      ra,24(sp)
0x0004c53c:  e822              sd                      s0,16(sp)
0x0004c53e:  ed88              sd                      a0,24(a1)
0x0004c540:  842e              mv                      s0,a1
0x0004c542:  0005b423          sd                      zero,8(a1)
0x0004c546:  0005b823          sd                      zero,16(a1)
0x0004c54a:  577d              addi                    a4,zero,-1
0x0004c54c:  7f800793          addi                    a5,zero,2040
0x0004c550:  86a2              mv                      a3,s0
0x0004c552:  85aa              mv                      a1,a0
0x0004c554:  e018              sd                      a4,0(s0)
0x0004c556:  f01c              sd                      a5,32(s0)
0x0004c558:  4605              addi                    a2,zero,1
0x0004c55a:  00065517          auipc                   a0,101                  # 0xb155a
0x0004c55e:  6f650513          addi                    a0,a0,1782
0x0004c562:  ba3fe0ef          jal                     ra,-5214                # 0x4b104

----------------
IN: btree_insert.isra.0
0x0004b104:  e211              bnez                    a2,4                    # 0x4b108

----------------
IN: btree_insert.isra.0
0x0004b108:  7159              addi                    sp,sp,-112
0x0004b10a:  f0a2              sd                      s0,96(sp)
0x0004b10c:  01050413          addi                    s0,a0,16
0x0004b110:  eca6              sd                      s1,88(sp)
0x0004b112:  84aa              mv                      s1,a0
0x0004b114:  8522              mv                      a0,s0
0x0004b116:  e8ca              sd                      s2,80(sp)
0x0004b118:  e0d2              sd                      s4,64(sp)
0x0004b11a:  fc56              sd                      s5,56(sp)
0x0004b11c:  f85a              sd                      s6,48(sp)
0x0004b11e:  f486              sd                      ra,104(sp)
0x0004b120:  f45e              sd                      s7,40(sp)
0x0004b122:  8932              mv                      s2,a2
0x0004b124:  8aae              mv                      s5,a1
0x0004b126:  8a36              mv                      s4,a3
0x0004b128:  e402              sd                      zero,8(sp)
0x0004b12a:  941ff0ef          jal                     ra,-1728                # 0x4aa6a

----------------
IN: version_lock_lock_exclusive
0x0004aa6a:  1141              addi                    sp,sp,-16
0x0004aa6c:  e022              sd                      s0,0(sp)
0x0004aa6e:  e406              sd                      ra,8(sp)
0x0004aa70:  842a              mv                      s0,a0
0x0004aa72:  0330000f          fence                   rw,rw
0x0004aa76:  611c              ld                      a5,0(a0)
0x0004aa78:  0230000f          fence                   r,rw
0x0004aa7c:  0017f713          andi                    a4,a5,1
0x0004aa80:  e305              bnez                    a4,32                   # 0x4aaa0

----------------
IN: version_lock_lock_exclusive
0x0004aa82:  0017e693          ori                     a3,a5,1
0x0004aa86:  1605372f          lr.d.aq.rl              a4,(a0)
0x0004aa8a:  00f71563          bne                     a4,a5,10                # 0x4aa94

----------------
IN: version_lock_lock_exclusive
0x0004aa8e:  1ad5362f          sc.d.rl                 a2,a3,(a0)
0x0004aa92:  fa75              bnez                    a2,-12                  # 0x4aa86

----------------
IN: version_lock_lock_exclusive
0x0004aa94:  00f71663          bne                     a4,a5,12                # 0x4aaa0

----------------
IN: version_lock_lock_exclusive
0x0004aa98:  60a2              ld                      ra,8(sp)
0x0004aa9a:  6402              ld                      s0,0(sp)
0x0004aa9c:  0141              addi                    sp,sp,16
0x0004aa9e:  8082              ret                     

----------------
IN: btree_insert.isra.0
0x0004b12e:  0004bb03          ld                      s6,0(s1)
0x0004b132:  e05a              sd                      s6,0(sp)
0x0004b134:  1e0b0363          beqz                    s6,486                  # 0x4b31a

----------------
IN: btree_insert.isra.0
0x0004b31a:  4581              mv                      a1,zero
0x0004b31c:  8526              mv                      a0,s1
0x0004b31e:  ccdff0ef          jal                     ra,-820                 # 0x4afea

----------------
IN: btree_allocate_node
0x0004afea:  1101              addi                    sp,sp,-32
0x0004afec:  e822              sd                      s0,16(sp)
0x0004afee:  e426              sd                      s1,8(sp)
0x0004aff0:  e04a              sd                      s2,0(sp)
0x0004aff2:  ec06              sd                      ra,24(sp)
0x0004aff4:  00850413          addi                    s0,a0,8
0x0004aff8:  84ae              mv                      s1,a1
0x0004affa:  4909              addi                    s2,zero,2
0x0004affc:  0330000f          fence                   rw,rw

----------------
IN: btree_allocate_node
0x0004b000:  601c              ld                      a5,0(s0)
0x0004b002:  0230000f          fence                   r,rw
0x0004b006:  853e              mv                      a0,a5
0x0004b008:  c7b5              beqz                    a5,108                  # 0x4b074

----------------
IN: btree_allocate_node
0x0004b074:  10000513          addi                    a0,zero,256
0x0004b078:  bdacd0ef          jal                     ra,-207910              # 0x18452

----------------
IN: btree_allocate_node
0x0004b07c:  60e2              ld                      ra,24(sp)
0x0004b07e:  6442              ld                      s0,16(sp)
0x0004b080:  0014c493          xori                    s1,s1,1
0x0004b084:  4785              addi                    a5,zero,1
0x0004b086:  c544              sw                      s1,12(a0)
0x0004b088:  00052423          sw                      zero,8(a0)
0x0004b08c:  e11c              sd                      a5,0(a0)
0x0004b08e:  64a2              ld                      s1,8(sp)
0x0004b090:  6902              ld                      s2,0(sp)
0x0004b092:  6105              addi                    sp,sp,32
0x0004b094:  8082              ret                     

----------------
IN: btree_insert.isra.0
0x0004b322:  8b2a              mv                      s6,a0
0x0004b324:  e02a              sd                      a0,0(sp)
0x0004b326:  e088              sd                      a0,0(s1)
0x0004b328:  bd19              j                       -490                    # 0x4b13e

----------------
IN: btree_insert.isra.0
0x0004b13e:  8522              mv                      a0,s0
0x0004b140:  e67ff0ef          jal                     ra,-410                 # 0x4afa6

----------------
IN: version_lock_unlock_exclusive
0x0004afa6:  0330000f          fence                   rw,rw
0x0004afaa:  611c              ld                      a5,0(a0)
0x0004afac:  0230000f          fence                   r,rw
0x0004afb0:  0791              addi                    a5,a5,4
0x0004afb2:  9bf1              andi                    a5,a5,-4
0x0004afb4:  0ef537af          amoswap.d.aq.rl         a5,a5,(a0)
0x0004afb8:  8b89              andi                    a5,a5,2
0x0004afba:  e391              bnez                    a5,4                    # 0x4afbe

----------------
IN: version_lock_unlock_exclusive
0x0004afbc:  8082              ret                     

----------------
IN: btree_insert.isra.0
0x0004b144:  00cb2783          lw                      a5,12(s6)
0x0004b148:  1e079863          bnez                    a5,496                  # 0x4b338

----------------
IN: btree_insert.isra.0
0x0004b338:  008b2703          lw                      a4,8(s6)
0x0004b33c:  47a9              addi                    a5,zero,10
0x0004b33e:  e8f710e3          bne                     a4,a5,-384              # 0x4b1be

----------------
IN: btree_insert.isra.0
0x0004b1be:  008b2403          lw                      s0,8(s6)
0x0004b1c2:  20040863          beqz                    s0,528                  # 0x4b3d2

----------------
IN: btree_insert.isra.0
0x0004b3d2:  4481              mv                      s1,zero
0x0004b3d4:  bd9d              j                       -394                    # 0x4b24a

----------------
IN: btree_insert.isra.0
0x0004b24a:  00149793          slli                    a5,s1,1
0x0004b24e:  97a6              add                     a5,a5,s1
0x0004b250:  078e              slli                    a5,a5,3
0x0004b252:  97da              add                     a5,a5,s6
0x0004b254:  2405              addiw                   s0,s0,1
0x0004b256:  0157b823          sd                      s5,16(a5)
0x0004b25a:  0127bc23          sd                      s2,24(a5)
0x0004b25e:  0347b023          sd                      s4,32(a5)
0x0004b262:  008b2423          sw                      s0,8(s6)
0x0004b266:  7406              ld                      s0,96(sp)
0x0004b268:  70a6              ld                      ra,104(sp)
0x0004b26a:  64e6              ld                      s1,88(sp)
0x0004b26c:  6946              ld                      s2,80(sp)
0x0004b26e:  6a06              ld                      s4,64(sp)
0x0004b270:  7ae2              ld                      s5,56(sp)
0x0004b272:  7ba2              ld                      s7,40(sp)
0x0004b274:  855a              mv                      a0,s6
0x0004b276:  7b42              ld                      s6,48(sp)
0x0004b278:  6165              addi                    sp,sp,112
0x0004b27a:  b335              j                       -724                    # 0x4afa6

----------------
IN: __register_frame_info
0x0004c566:  858a              mv                      a1,sp
0x0004c568:  8522              mv                      a0,s0
0x0004c56a:  8a3ff0ef          jal                     ra,-1886                # 0x4be0c

----------------
IN: get_pc_range
0x0004be0c:  1101              addi                    sp,sp,-32
0x0004be0e:  e822              sd                      s0,16(sp)
0x0004be10:  e426              sd                      s1,8(sp)
0x0004be12:  ec06              sd                      ra,24(sp)
0x0004be14:  0005b423          sd                      zero,8(a1)
0x0004be18:  0005b023          sd                      zero,0(a1)
0x0004be1c:  511c              lw                      a5,32(a0)
0x0004be1e:  6d00              ld                      s0,24(a0)
0x0004be20:  84ae              mv                      s1,a1
0x0004be22:  0017f713          andi                    a4,a5,1
0x0004be26:  eb1d              bnez                    a4,54                   # 0x4be5c

----------------
IN: get_pc_range
0x0004be28:  8b89              andi                    a5,a5,2
0x0004be2a:  c395              beqz                    a5,36                   # 0x4be4e

----------------
IN: get_pc_range
0x0004be4e:  862e              mv                      a2,a1
0x0004be50:  85a2              mv                      a1,s0
0x0004be52:  6442              ld                      s0,16(sp)
0x0004be54:  60e2              ld                      ra,24(sp)
0x0004be56:  64a2              ld                      s1,8(sp)
0x0004be58:  6105              addi                    sp,sp,32
0x0004be5a:  b509              j                       -510                    # 0x4bc5c

----------------
IN: classify_object_over_fdes
0x0004bc5c:  7135              addi                    sp,sp,-160
0x0004bc5e:  e922              sd                      s0,144(sp)
0x0004bc60:  4180              lw                      s0,0(a1)
0x0004bc62:  ed06              sd                      ra,152(sp)
0x0004bc64:  f8d2              sd                      s4,112(sp)
0x0004bc66:  1a040163          beqz                    s0,418                  # 0x4be08

----------------
IN: classify_object_over_fdes
0x0004bc6a:  f0da              sd                      s6,96(sp)
0x0004bc6c:  ecde              sd                      s7,88(sp)
0x0004bc6e:  5b7d              addi                    s6,zero,-1
0x0004bc70:  6bc1              lui                     s7,16
0x0004bc72:  016b87b3          add                     a5,s7,s6
0x0004bc76:  ec3e              sd                      a5,24(sp)
0x0004bc78:  020b5793          srli                    a5,s6,32
0x0004bc7c:  e43e              sd                      a5,8(sp)
0x0004bc7e:  103c              addi                    a5,sp,40
0x0004bc80:  e526              sd                      s1,136(sp)
0x0004bc82:  e14a              sd                      s2,128(sp)
0x0004bc84:  fcce              sd                      s3,120(sp)
0x0004bc86:  f4d6              sd                      s5,104(sp)
0x0004bc88:  e8e2              sd                      s8,80(sp)
0x0004bc8a:  e0ea              sd                      s10,64(sp)
0x0004bc8c:  e4e6              sd                      s9,72(sp)
0x0004bc8e:  fc6e              sd                      s11,56(sp)
0x0004bc90:  8d2e              mv                      s10,a1
0x0004bc92:  892a              mv                      s2,a0
0x0004bc94:  84b2              mv                      s1,a2
0x0004bc96:  4981              mv                      s3,zero
0x0004bc98:  4c01              mv                      s8,zero
0x0004bc9a:  4a01              mv                      s4,zero
0x0004bc9c:  4b81              mv                      s7,zero
0x0004bc9e:  4a89              addi                    s5,zero,2
0x0004bca0:  e83e              sd                      a5,16(sp)
0x0004bca2:  004d2703          lw                      a4,4(s10)
0x0004bca6:  cb49              beqz                    a4,146                  # 0x4bd38

----------------
IN: classify_object_over_fdes
0x0004bca8:  004d0d93          addi                    s11,s10,4
0x0004bcac:  40ed8db3          sub                     s11,s11,a4
0x0004bcb0:  0b7d8b63          beq                     s11,s7,182              # 0x4bd66

----------------
IN: classify_object_over_fdes
0x0004bcb4:  856e              mv                      a0,s11
0x0004bcb6:  f20ff0ef          jal                     ra,-2272                # 0x4b3d6

----------------
IN: get_cie_encoding
0x0004b3d6:  715d              addi                    sp,sp,-80
0x0004b3d8:  e0a2              sd                      s0,64(sp)
0x0004b3da:  00950413          addi                    s0,a0,9
0x0004b3de:  fc26              sd                      s1,56(sp)
0x0004b3e0:  84aa              mv                      s1,a0
0x0004b3e2:  8522              mv                      a0,s0
0x0004b3e4:  e486              sd                      ra,72(sp)
0x0004b3e6:  a4fce0ef          jal                     ra,-202162              # 0x19e34

----------------
IN: get_cie_encoding
0x0004b3ea:  0084c683          lbu                     a3,8(s1)
0x0004b3ee:  0505              addi                    a0,a0,1
0x0004b3f0:  478d              addi                    a5,zero,3
0x0004b3f2:  00a40633          add                     a2,s0,a0
0x0004b3f6:  0cd7e463          bgtu                    a3,a5,200               # 0x4b4be

----------------
IN: get_cie_encoding
0x0004b3fa:  0094c703          lbu                     a4,9(s1)
0x0004b3fe:  07a00793          addi                    a5,zero,122
0x0004b402:  00f70863          beq                     a4,a5,16                # 0x4b412

----------------
IN: get_cie_encoding
0x0004b412:  00060783          lb                      a5,0(a2)
0x0004b416:  0605              addi                    a2,a2,1
0x0004b418:  fe07cde3          bltz                    a5,-6                   # 0x4b412

----------------
IN: get_cie_encoding
0x0004b41c:  8732              mv                      a4,a2
0x0004b41e:  00060783          lb                      a5,0(a2)
0x0004b422:  0605              addi                    a2,a2,1
0x0004b424:  fe07cce3          bltz                    a5,-8                   # 0x4b41c

----------------
IN: get_cie_encoding
0x0004b428:  4785              addi                    a5,zero,1
0x0004b42a:  08f68763          beq                     a3,a5,142               # 0x4b4b8

----------------
IN: get_cie_encoding
0x0004b42e:  00060783          lb                      a5,0(a2)
0x0004b432:  0605              addi                    a2,a2,1
0x0004b434:  fe07cde3          bltz                    a5,-6                   # 0x4b42e

----------------
IN: get_cie_encoding
0x0004b438:  00a48413          addi                    s0,s1,10
0x0004b43c:  00060783          lb                      a5,0(a2)
0x0004b440:  0605              addi                    a2,a2,1
0x0004b442:  fe07cde3          bltz                    a5,-6                   # 0x4b43c

----------------
IN: get_cie_encoding
0x0004b446:  00a4c783          lbu                     a5,10(s1)
0x0004b44a:  05200493          addi                    s1,zero,82
0x0004b44e:  02978e63          beq                     a5,s1,60                # 0x4b48a

----------------
IN: get_cie_encoding
0x0004b48a:  60a6              ld                      ra,72(sp)
0x0004b48c:  6406              ld                      s0,64(sp)
0x0004b48e:  00064503          lbu                     a0,0(a2)
0x0004b492:  74e2              ld                      s1,56(sp)
0x0004b494:  6161              addi                    sp,sp,80
0x0004b496:  8082              ret                     

----------------
IN: classify_object_over_fdes
0x0004bcba:  0ff00713          addi                    a4,zero,255
0x0004bcbe:  8c2a              mv                      s8,a0
0x0004bcc0:  14e50263          beq                     a0,a4,324               # 0x4be04

----------------
IN: classify_object_over_fdes
0x0004bcc4:  07057693          andi                    a3,a0,112
0x0004bcc8:  02000613          addi                    a2,zero,32
0x0004bccc:  0ff57c93          andi                    s9,a0,255
0x0004bcd0:  10c68763          beq                     a3,a2,270               # 0x4bdde

----------------
IN: classify_object_over_fdes
0x0004bcd4:  0cd67f63          bleu                    a3,a2,222               # 0x4bdb2

----------------
IN: classify_object_over_fdes
0x0004bdb2:  4981              mv                      s3,zero
0x0004bdb4:  f88d              bnez                    s1,-206                 # 0x4bce6

----------------
IN: classify_object_over_fdes
0x0004bce6:  85ce              mv                      a1,s3
0x0004bce8:  1014              addi                    a3,sp,32
0x0004bcea:  008d0613          addi                    a2,s10,8
0x0004bcee:  8566              mv                      a0,s9
0x0004bcf0:  e39fe0ef          jal                     ra,-4552                # 0x4ab28

----------------
IN: read_encoded_value_with_base
0x0004ab28:  05000793          addi                    a5,zero,80
0x0004ab2c:  08f50663          beq                     a0,a5,140               # 0x4abb8

----------------
IN: read_encoded_value_with_base
0x0004ab30:  872a              mv                      a4,a0
0x0004ab32:  00f57793          andi                    a5,a0,15
0x0004ab36:  4531              addi                    a0,zero,12
0x0004ab38:  16f56e63          bgtu                    a5,a0,380               # 0x4acb4

----------------
IN: read_encoded_value_with_base
0x0004ab3c:  0001f517          auipc                   a0,31                   # 0x69b3c
0x0004ab40:  01c50513          addi                    a0,a0,28
0x0004ab44:  078a              slli                    a5,a5,2
0x0004ab46:  97aa              add                     a5,a5,a0
0x0004ab48:  439c              lw                      a5,0(a5)
0x0004ab4a:  97aa              add                     a5,a5,a0
0x0004ab4c:  8782              jr                      a5

----------------
IN: read_encoded_value_with_base
0x0004ac06:  00164803          lbu                     a6,1(a2)
0x0004ac0a:  00064883          lbu                     a7,0(a2)
0x0004ac0e:  00264503          lbu                     a0,2(a2)
0x0004ac12:  00364783          lbu                     a5,3(a2)
0x0004ac16:  0822              slli                    a6,a6,8
0x0004ac18:  01186833          or                      a6,a6,a7
0x0004ac1c:  0542              slli                    a0,a0,16
0x0004ac1e:  01056533          or                      a0,a0,a6
0x0004ac22:  07e2              slli                    a5,a5,24
0x0004ac24:  8fc9              or                      a5,a5,a0
0x0004ac26:  2781              sext.w                  a5,a5
0x0004ac28:  00460513          addi                    a0,a2,4
0x0004ac2c:  b7b5              j                       -148                    # 0x4ab98

----------------
IN: read_encoded_value_with_base
0x0004ab98:  cf91              beqz                    a5,28                   # 0x4abb4

----------------
IN: read_encoded_value_with_base
0x0004ab9a:  07077813          andi                    a6,a4,112
0x0004ab9e:  48c1              addi                    a7,zero,16
0x0004aba0:  01181363          bne                     a6,a7,6                 # 0x4aba6

----------------
IN: read_encoded_value_with_base
0x0004aba4:  85b2              mv                      a1,a2
0x0004aba6:  0187171b          slliw                   a4,a4,24
0x0004abaa:  4187571b          sraiw                   a4,a4,24
0x0004abae:  97ae              add                     a5,a5,a1
0x0004abb0:  00074b63          bltz                    a4,22                   # 0x4abc6

----------------
IN: read_encoded_value_with_base
0x0004abb4:  e29c              sd                      a5,0(a3)
0x0004abb6:  8082              ret                     

----------------
IN: classify_object_over_fdes
0x0004bcf4:  007cf593          andi                    a1,s9,7
0x0004bcf8:  09558863          beq                     a1,s5,144               # 0x4bd88

----------------
IN: classify_object_over_fdes
0x0004bcfc:  0ebaf963          bleu                    a1,s5,242               # 0x4bdee

----------------
IN: classify_object_over_fdes
0x0004bd00:  478d              addi                    a5,zero,3
0x0004bd02:  66a2              ld                      a3,8(sp)
0x0004bd04:  0ef59063          bne                     a1,a5,224               # 0x4bde4

----------------
IN: classify_object_over_fdes
0x0004bd08:  7b02              ld                      s6,32(sp)
0x0004bd0a:  8bee              mv                      s7,s11
0x0004bd0c:  00db76b3          and                     a3,s6,a3
0x0004bd10:  c685              beqz                    a3,40                   # 0x4bd38

----------------
IN: classify_object_over_fdes
0x0004bd12:  0a05              addi                    s4,s4,1
0x0004bd14:  cca5              beqz                    s1,120                  # 0x4bd8c

----------------
IN: classify_object_over_fdes
0x0004bd16:  66c2              ld                      a3,16(sp)
0x0004bd18:  862a              mv                      a2,a0
0x0004bd1a:  4581              mv                      a1,zero
0x0004bd1c:  00fcf513          andi                    a0,s9,15
0x0004bd20:  e09fe0ef          jal                     ra,-4600                # 0x4ab28

----------------
IN: read_encoded_value_with_base
0x0004aba6:  0187171b          slliw                   a4,a4,24
0x0004abaa:  4187571b          sraiw                   a4,a4,24
0x0004abae:  97ae              add                     a5,a5,a1
0x0004abb0:  00074b63          bltz                    a4,22                   # 0x4abc6

----------------
IN: classify_object_over_fdes
0x0004bd24:  7722              ld                      a4,40(sp)
0x0004bd26:  6094              ld                      a3,0(s1)
0x0004bd28:  6490              ld                      a2,8(s1)
0x0004bd2a:  975a              add                     a4,a4,s6
0x0004bd2c:  e6bd              bnez                    a3,110                  # 0x4bd9a

----------------
IN: classify_object_over_fdes
0x0004bd2e:  ea35              bnez                    a2,116                  # 0x4bda2

----------------
IN: classify_object_over_fdes
0x0004bd30:  0164b023          sd                      s6,0(s1)
0x0004bd34:  e498              sd                      a4,8(s1)
0x0004bd36:  8bee              mv                      s7,s11
0x0004bd38:  1402              slli                    s0,s0,32
0x0004bd3a:  9001              srli                    s0,s0,32
0x0004bd3c:  0411              addi                    s0,s0,4
0x0004bd3e:  9d22              add                     s10,s10,s0
0x0004bd40:  000d2403          lw                      s0,0(s10)
0x0004bd44:  fc39              bnez                    s0,-162                 # 0x4bca2

----------------
IN: classify_object_over_fdes
0x0004bca2:  004d2703          lw                      a4,4(s10)
0x0004bca6:  cb49              beqz                    a4,146                  # 0x4bd38

----------------
IN: classify_object_over_fdes
0x0004bd66:  0ffc7c93          andi                    s9,s8,255
0x0004bd6a:  1014              addi                    a3,sp,32
0x0004bd6c:  8566              mv                      a0,s9
0x0004bd6e:  008d0613          addi                    a2,s10,8
0x0004bd72:  85ce              mv                      a1,s3
0x0004bd74:  db5fe0ef          jal                     ra,-4684                # 0x4ab28

----------------
IN: classify_object_over_fdes
0x0004bd78:  0ff00693          addi                    a3,zero,255
0x0004bd7c:  fadc8ee3          beq                     s9,a3,-68               # 0x4bd38

----------------
IN: classify_object_over_fdes
0x0004bd80:  007cf593          andi                    a1,s9,7
0x0004bd84:  f7559ce3          bne                     a1,s5,-136              # 0x4bcfc

----------------
IN: classify_object_over_fdes
0x0004bd9a:  00db7463          bleu                    a3,s6,8                 # 0x4bda2

----------------
IN: classify_object_over_fdes
0x0004bda2:  f8e67ae3          bleu                    a4,a2,-108              # 0x4bd36

----------------
IN: classify_object_over_fdes
0x0004bda6:  e498              sd                      a4,8(s1)
0x0004bda8:  b779              j                       -114                    # 0x4bd36

----------------
IN: classify_object_over_fdes
0x0004bd36:  8bee              mv                      s7,s11
0x0004bd38:  1402              slli                    s0,s0,32
0x0004bd3a:  9001              srli                    s0,s0,32
0x0004bd3c:  0411              addi                    s0,s0,4
0x0004bd3e:  9d22              add                     s10,s10,s0
0x0004bd40:  000d2403          lw                      s0,0(s10)
0x0004bd44:  fc39              bnez                    s0,-162                 # 0x4bca2

----------------
IN: classify_object_over_fdes
0x0004bd9e:  0164b023          sd                      s6,0(s1)
0x0004bda2:  f8e67ae3          bleu                    a4,a2,-108              # 0x4bd36

----------------
IN: classify_object_over_fdes
0x0004bd38:  1402              slli                    s0,s0,32
0x0004bd3a:  9001              srli                    s0,s0,32
0x0004bd3c:  0411              addi                    s0,s0,4
0x0004bd3e:  9d22              add                     s10,s10,s0
0x0004bd40:  000d2403          lw                      s0,0(s10)
0x0004bd44:  fc39              bnez                    s0,-162                 # 0x4bca2

----------------
IN: get_cie_encoding
0x0004b452:  f84a              sd                      s2,48(sp)
0x0004b454:  f44e              sd                      s3,40(sp)
0x0004b456:  f052              sd                      s4,32(sp)
0x0004b458:  ec56              sd                      s5,24(sp)
0x0004b45a:  05000913          addi                    s2,zero,80
0x0004b45e:  04c00993          addi                    s3,zero,76
0x0004b462:  04200a13          addi                    s4,zero,66
0x0004b466:  00810a93          addi                    s5,sp,8
0x0004b46a:  03278763          beq                     a5,s2,46                # 0x4b498

----------------
IN: get_cie_encoding
0x0004b498:  00064503          lbu                     a0,0(a2)
0x0004b49c:  86d6              mv                      a3,s5
0x0004b49e:  0605              addi                    a2,a2,1
0x0004b4a0:  07f57513          andi                    a0,a0,127
0x0004b4a4:  4581              mv                      a1,zero
0x0004b4a6:  e82ff0ef          jal                     ra,-2430                # 0x4ab28

----------------
IN: get_cie_encoding
0x0004b4aa:  862a              mv                      a2,a0
0x0004b4ac:  b7f1              j                       -52                     # 0x4b478

----------------
IN: get_cie_encoding
0x0004b478:  00144783          lbu                     a5,1(s0)
0x0004b47c:  0405              addi                    s0,s0,1
0x0004b47e:  fe9796e3          bne                     a5,s1,-20               # 0x4b46a

----------------
IN: get_cie_encoding
0x0004b46a:  03278763          beq                     a5,s2,46                # 0x4b498

----------------
IN: get_cie_encoding
0x0004b46e:  01378463          beq                     a5,s3,8                 # 0x4b476

----------------
IN: get_cie_encoding
0x0004b476:  0605              addi                    a2,a2,1
0x0004b478:  00144783          lbu                     a5,1(s0)
0x0004b47c:  0405              addi                    s0,s0,1
0x0004b47e:  fe9796e3          bne                     a5,s1,-20               # 0x4b46a

----------------
IN: get_cie_encoding
0x0004b482:  7942              ld                      s2,48(sp)
0x0004b484:  79a2              ld                      s3,40(sp)
0x0004b486:  7a02              ld                      s4,32(sp)
0x0004b488:  6ae2              ld                      s5,24(sp)
0x0004b48a:  60a6              ld                      ra,72(sp)
0x0004b48c:  6406              ld                      s0,64(sp)
0x0004b48e:  00064503          lbu                     a0,0(a2)
0x0004b492:  74e2              ld                      s1,56(sp)
0x0004b494:  6161              addi                    sp,sp,80
0x0004b496:  8082              ret                     

----------------
IN: classify_object_over_fdes
0x0004bd46:  64aa              ld                      s1,136(sp)
0x0004bd48:  690a              ld                      s2,128(sp)
0x0004bd4a:  79e6              ld                      s3,120(sp)
0x0004bd4c:  7aa6              ld                      s5,104(sp)
0x0004bd4e:  7b06              ld                      s6,96(sp)
0x0004bd50:  6be6              ld                      s7,88(sp)
0x0004bd52:  6c46              ld                      s8,80(sp)
0x0004bd54:  6ca6              ld                      s9,72(sp)
0x0004bd56:  6d06              ld                      s10,64(sp)
0x0004bd58:  7de2              ld                      s11,56(sp)
0x0004bd5a:  60ea              ld                      ra,152(sp)
0x0004bd5c:  644a              ld                      s0,144(sp)
0x0004bd5e:  8552              mv                      a0,s4
0x0004bd60:  7a46              ld                      s4,112(sp)
0x0004bd62:  610d              addi                    sp,sp,160
0x0004bd64:  8082              ret                     

----------------
IN: __register_frame_info
0x0004c56e:  6582              ld                      a1,0(sp)
0x0004c570:  6622              ld                      a2,8(sp)
0x0004c572:  86a2              mv                      a3,s0
0x0004c574:  6442              ld                      s0,16(sp)
0x0004c576:  60e2              ld                      ra,24(sp)
0x0004c578:  8e0d              sub                     a2,a2,a1
0x0004c57a:  00065517          auipc                   a0,101                  # 0xb157a
0x0004c57e:  6ee50513          addi                    a0,a0,1774
0x0004c582:  6105              addi                    sp,sp,32
0x0004c584:  b81fe06f          j                       -5248                   # 0x4b104

----------------
IN: 
0x00010616:  60a2              ld                      ra,8(sp)
0x00010618:  0141              addi                    sp,sp,16
0x0001061a:  bf9d              j                       -138                    # 0x10590

----------------
IN: 
0x00010590:  0007d537          lui                     a0,125
0x00010594:  8a050793          addi                    a5,a0,-1888
0x00010598:  0007d737          lui                     a4,125
0x0001059c:  8a070593          addi                    a1,a4,-1888
0x000105a0:  8d9d              sub                     a1,a1,a5
0x000105a2:  4035d793          srai                    a5,a1,3
0x000105a6:  91fd              srli                    a1,a1,63
0x000105a8:  95be              add                     a1,a1,a5
0x000105aa:  8585              srai                    a1,a1,1
0x000105ac:  c599              beqz                    a1,14                   # 0x105ba

----------------
IN: 
0x000105ba:  8082              ret                     

----------------
IN: __libc_start_main
0x000108aa:  0421              addi                    s0,s0,8
0x000108ac:  ff54e9e3          bgtu                    s5,s1,-14               # 0x1089e

----------------
IN: __libc_start_main
0x0001089e:  601c              ld                      a5,0(s0)
0x000108a0:  8652              mv                      a2,s4
0x000108a2:  85ce              mv                      a1,s3
0x000108a4:  854a              mv                      a0,s2
0x000108a6:  0485              addi                    s1,s1,1
0x000108a8:  9782              jalr                    ra,a5,0

----------------
IN: _IO_stdfiles_init
0x00010524:  0006c717          auipc                   a4,108                  # 0x7c524
0x00010528:  dec70713          addi                    a4,a4,-532
0x0001052c:  631c              ld                      a5,0(a4)
0x0001052e:  c791              beqz                    a5,12                   # 0x1053a

----------------
IN: _IO_stdfiles_init
0x00010530:  ffd8              sd                      a4,184(a5)
0x00010532:  06878713          addi                    a4,a5,104
0x00010536:  77bc              ld                      a5,104(a5)
0x00010538:  ffe5              bnez                    a5,-8                   # 0x10530

----------------
IN: _IO_stdfiles_init
0x0001053a:  8082              ret                     

----------------
IN: __libc_start_main
0x000108b0:  4581              mv                      a1,zero
0x000108b2:  4501              mv                      a0,zero
0x000108b4:  5d10a0ef          jal                     ra,44496                # 0x1b684

----------------
IN: _dl_debug_initialize
0x0001b684:  00096797          auipc                   a5,150                  # 0xb1684
0x0001b688:  f4c78793          addi                    a5,a5,-180
0x0001b68c:  e591              bnez                    a1,12                   # 0x1b698

----------------
IN: _dl_debug_initialize
0x0001b68e:  00096717          auipc                   a4,150                  # 0xb168e
0x0001b692:  f4272703          lw                      a4,-190(a4)
0x0001b696:  c71d              beqz                    a4,46                   # 0x1b6c4

----------------
IN: _dl_debug_initialize
0x0001b6c4:  4705              addi                    a4,zero,1
0x0001b6c6:  c398              sw                      a4,0(a5)
0x0001b6c8:  bfc1              j                       -48                     # 0x1b698

----------------
IN: _dl_debug_initialize
0x0001b698:  6b98              ld                      a4,16(a5)
0x0001b69a:  ef01              bnez                    a4,24                   # 0x1b6b2

----------------
IN: _dl_debug_initialize
0x0001b69c:  c115              beqz                    a0,36                   # 0x1b6c0

----------------
IN: _dl_debug_initialize
0x0001b6c0:  7388              ld                      a0,32(a5)
0x0001b6c2:  bff1              j                       -36                     # 0x1b69e

----------------
IN: _dl_debug_initialize
0x0001b69e:  00000717          auipc                   a4,0                    # 0x1b69e
0x0001b6a2:  f9a70713          addi                    a4,a4,-102
0x0001b6a6:  f388              sd                      a0,32(a5)
0x0001b6a8:  00096697          auipc                   a3,150                  # 0xb16a8
0x0001b6ac:  f406b823          sd                      zero,-176(a3)
0x0001b6b0:  eb98              sd                      a4,16(a5)
0x0001b6b2:  679c              ld                      a5,8(a5)
0x0001b6b4:  cb99              beqz                    a5,22                   # 0x1b6ca

----------------
IN: _dl_debug_initialize
0x0001b6ca:  00259793          slli                    a5,a1,2
0x0001b6ce:  97ae              add                     a5,a5,a1
0x0001b6d0:  00060717          auipc                   a4,96                   # 0x7b6d0
0x0001b6d4:  91873703          ld                      a4,-1768(a4)
0x0001b6d8:  0796              slli                    a5,a5,5
0x0001b6da:  97ba              add                     a5,a5,a4
0x0001b6dc:  00096717          auipc                   a4,150                  # 0xb16dc
0x0001b6e0:  efc70713          addi                    a4,a4,-260
0x0001b6e4:  639c              ld                      a5,0(a5)
0x0001b6e6:  0310000f          fence                   rw,w
0x0001b6ea:  e31c              sd                      a5,0(a4)
0x0001b6ec:  00096517          auipc                   a0,150                  # 0xb16ec
0x0001b6f0:  ee450513          addi                    a0,a0,-284
0x0001b6f4:  8082              ret                     

----------------
IN: __libc_start_main
0x000108b8:  864e              mv                      a2,s3
0x000108ba:  85ca              mv                      a1,s2
0x000108bc:  855a              mv                      a0,s6
0x000108be:  d99ff0ef          jal                     ra,-616                 # 0x10656

----------------
IN: __libc_start_call_main
0x00010656:  7169              addi                    sp,sp,-304
0x00010658:  87aa              mv                      a5,a0
0x0001065a:  1028              addi                    a0,sp,40
0x0001065c:  f606              sd                      ra,296(sp)
0x0001065e:  e43e              sd                      a5,8(sp)
0x00010660:  e82e              sd                      a1,16(sp)
0x00010662:  ec32              sd                      a2,24(sp)
0x00010664:  458000ef          jal                     ra,1112                 # 0x10abc

----------------
IN: __GI__setjmp
0x00010abc:  4581              mv                      a1,zero
0x00010abe:  a019              j                       6                       # 0x10ac4

----------------
IN: __sigsetjmp
0x00010ac4:  00153023          sd                      ra,0(a0)
0x00010ac8:  e500              sd                      s0,8(a0)
0x00010aca:  e904              sd                      s1,16(a0)
0x00010acc:  01253c23          sd                      s2,24(a0)
0x00010ad0:  03353023          sd                      s3,32(a0)
0x00010ad4:  03453423          sd                      s4,40(a0)
0x00010ad8:  03553823          sd                      s5,48(a0)
0x00010adc:  03653c23          sd                      s6,56(a0)
0x00010ae0:  05753023          sd                      s7,64(a0)
0x00010ae4:  05853423          sd                      s8,72(a0)
0x00010ae8:  05953823          sd                      s9,80(a0)
0x00010aec:  05a53c23          sd                      s10,88(a0)
0x00010af0:  07b53023          sd                      s11,96(a0)
0x00010af4:  06253423          sd                      sp,104(a0)
0x00010af8:  b920              fsd                     fs0,112(a0)
0x00010afa:  bd24              fsd                     fs1,120(a0)
0x00010afc:  09253027          fsd                     fs2,128(a0)
0x00010b00:  09353427          fsd                     fs3,136(a0)
0x00010b04:  09453827          fsd                     fs4,144(a0)
0x00010b08:  09553c27          fsd                     fs5,152(a0)
0x00010b0c:  0b653027          fsd                     fs6,160(a0)
0x00010b10:  0b753427          fsd                     fs7,168(a0)
0x00010b14:  0b853827          fsd                     fs8,176(a0)
0x00010b18:  0b953c27          fsd                     fs9,184(a0)
0x00010b1c:  0da53027          fsd                     fs10,192(a0)
0x00010b20:  0db53427          fsd                     fs11,200(a0)
0x00010b24:  0040006f          j                       4                       # 0x10b28

----------------
IN: __sigjmp_save
0x00010b28:  1141              addi                    sp,sp,-16
0x00010b2a:  e022              sd                      s0,0(sp)
0x00010b2c:  e406              sd                      ra,8(sp)
0x00010b2e:  842a              mv                      s0,a0
0x00010b30:  e981              bnez                    a1,16                   # 0x10b40

----------------
IN: __sigjmp_save
0x00010b32:  60a2              ld                      ra,8(sp)
0x00010b34:  0cb42823          sw                      a1,208(s0)
0x00010b38:  6402              ld                      s0,0(sp)
0x00010b3a:  4501              mv                      a0,zero
0x00010b3c:  0141              addi                    sp,sp,16
0x00010b3e:  8082              ret                     

----------------
IN: __libc_start_call_main
0x00010668:  e505              bnez                    a0,40                   # 0x10690

----------------
IN: __libc_start_call_main
0x0001066a:  9a023703          ld                      a4,-1632(tp)
0x0001066e:  99823683          ld                      a3,-1640(tp)
0x00010672:  000a1617          auipc                   a2,161                  # 0xb1672
0x00010676:  f4e63603          ld                      a2,-178(a2)
0x0001067a:  65e2              ld                      a1,24(sp)
0x0001067c:  6542              ld                      a0,16(sp)
0x0001067e:  67a2              ld                      a5,8(sp)
0x00010680:  e23a              sd                      a4,256(sp)
0x00010682:  e636              sd                      a3,264(sp)
0x00010684:  1038              addi                    a4,sp,40
0x00010686:  9ae23023          sd                      a4,-1632(tp)
0x0001068a:  9782              jalr                    ra,a5,0

----------------
IN: 
0x0001055e:  b729              j                       -246                    # 0x10468

----------------
IN: main
0x00010468:  1141              addi                    sp,sp,-16
0x0001046a:  0008c517          auipc                   a0,140                  # 0x9c46a
0x0001046e:  67650513          addi                    a0,a0,1654
0x00010472:  e406              sd                      ra,8(sp)
0x00010474:  882a              mv                      a6,a0
0x00010476:  0007c317          auipc                   t1,124                  # 0x8c476
0x0001047a:  46a30313          addi                    t1,t1,1130
0x0001047e:  4581              mv                      a1,zero
0x00010480:  4881              mv                      a7,zero
0x00010482:  08000e13          addi                    t3,zero,128
0x00010486:  e0080793          addi                    a5,a6,-512
0x0001048a:  8746              mv                      a4,a7
0x0001048c:  869a              mv                      a3,t1
0x0001048e:  40e5863b          subw                    a2,a1,a4
0x00010492:  c298              sw                      a4,0(a3)
0x00010494:  c390              sw                      a2,0(a5)
0x00010496:  0791              addi                    a5,a5,4
0x00010498:  0691              addi                    a3,a3,4
0x0001049a:  377d              addiw                   a4,a4,-1
0x0001049c:  ff0799e3          bne                     a5,a6,-14               # 0x1048e

----------------
IN: main
0x0001048e:  40e5863b          subw                    a2,a1,a4
0x00010492:  c298              sw                      a4,0(a3)
0x00010494:  c390              sw                      a2,0(a5)
0x00010496:  0791              addi                    a5,a5,4
0x00010498:  0691              addi                    a3,a3,4
0x0001049a:  377d              addiw                   a4,a4,-1
0x0001049c:  ff0799e3          bne                     a5,a6,-14               # 0x1048e

----------------
IN: main
0x000104a0:  2885              addiw                   a7,a7,1
0x000104a2:  20030313          addi                    t1,t1,512
0x000104a6:  2589              addiw                   a1,a1,2
0x000104a8:  20078813          addi                    a6,a5,512
0x000104ac:  fdc89de3          bne                     a7,t3,-38               # 0x10486

----------------
IN: main
0x00010486:  e0080793          addi                    a5,a6,-512
0x0001048a:  8746              mv                      a4,a7
0x0001048c:  869a              mv                      a3,t1
0x0001048e:  40e5863b          subw                    a2,a1,a4
0x00010492:  c298              sw                      a4,0(a3)
0x00010494:  c390              sw                      a2,0(a5)
0x00010496:  0791              addi                    a5,a5,4
0x00010498:  0691              addi                    a3,a3,4
0x0001049a:  377d              addiw                   a4,a4,-1
0x0001049c:  ff0799e3          bne                     a5,a6,-14               # 0x1048e

----------------
IN: main
0x000104b0:  0006ce97          auipc                   t4,108                  # 0x7c4b0
0x000104b4:  430e8e93          addi                    t4,t4,1072
0x000104b8:  0009cf17          auipc                   t5,156                  # 0xac4b8
0x000104bc:  628f0f13          addi                    t5,t5,1576
0x000104c0:  0007c317          auipc                   t1,124                  # 0x8c4c0
0x000104c4:  62030313          addi                    t1,t1,1568
0x000104c8:  0007c817          auipc                   a6,124                  # 0x8c4c8
0x000104cc:  41880813          addi                    a6,a6,1048
0x000104d0:  88f6              mv                      a7,t4
0x000104d2:  e0050e13          addi                    t3,a0,-512
0x000104d6:  87f2              mv                      a5,t3
0x000104d8:  86c2              mv                      a3,a6
0x000104da:  4601              mv                      a2,zero
0x000104dc:  438c              lw                      a1,0(a5)
0x000104de:  4298              lw                      a4,0(a3)
0x000104e0:  0791              addi                    a5,a5,4
0x000104e2:  20068693          addi                    a3,a3,512
0x000104e6:  02b7073b          mulw                    a4,a4,a1
0x000104ea:  9e39              addw                    a2,a2,a4
0x000104ec:  fea798e3          bne                     a5,a0,-16               # 0x104dc

----------------
IN: main
0x000104dc:  438c              lw                      a1,0(a5)
0x000104de:  4298              lw                      a4,0(a3)
0x000104e0:  0791              addi                    a5,a5,4
0x000104e2:  20068693          addi                    a3,a3,512
0x000104e6:  02b7073b          mulw                    a4,a4,a1
0x000104ea:  9e39              addw                    a2,a2,a4
0x000104ec:  fea798e3          bne                     a5,a0,-16               # 0x104dc

----------------
IN: main
0x000104f0:  00c8a023          sw                      a2,0(a7)
0x000104f4:  0811              addi                    a6,a6,4
0x000104f6:  0891              addi                    a7,a7,4
0x000104f8:  fd031fe3          bne                     t1,a6,-34               # 0x104d6

----------------
IN: main
0x000104d6:  87f2              mv                      a5,t3
0x000104d8:  86c2              mv                      a3,a6
0x000104da:  4601              mv                      a2,zero
0x000104dc:  438c              lw                      a1,0(a5)
0x000104de:  4298              lw                      a4,0(a3)
0x000104e0:  0791              addi                    a5,a5,4
0x000104e2:  20068693          addi                    a3,a3,512
0x000104e6:  02b7073b          mulw                    a4,a4,a1
0x000104ea:  9e39              addw                    a2,a2,a4
0x000104ec:  fea798e3          bne                     a5,a0,-16               # 0x104dc

----------------
IN: main
0x000104fc:  20078513          addi                    a0,a5,512
0x00010500:  200e8e93          addi                    t4,t4,512
0x00010504:  fde512e3          bne                     a0,t5,-60               # 0x104c8

----------------
IN: main
0x000104c8:  0007c817          auipc                   a6,124                  # 0x8c4c8
0x000104cc:  41880813          addi                    a6,a6,1048
0x000104d0:  88f6              mv                      a7,t4
0x000104d2:  e0050e13          addi                    t3,a0,-512
0x000104d6:  87f2              mv                      a5,t3
0x000104d8:  86c2              mv                      a3,a6
0x000104da:  4601              mv                      a2,zero
0x000104dc:  438c              lw                      a1,0(a5)
0x000104de:  4298              lw                      a4,0(a3)
0x000104e0:  0791              addi                    a5,a5,4
0x000104e2:  20068693          addi                    a3,a3,512
0x000104e6:  02b7073b          mulw                    a4,a4,a1
0x000104ea:  9e39              addw                    a2,a2,a4
0x000104ec:  fea798e3          bne                     a5,a0,-16               # 0x104dc

----------------
IN: main
0x00010508:  0006c597          auipc                   a1,108                  # 0x7c508
0x0001050c:  3d85a583          lw                      a1,984(a1)
0x00010510:  0003e517          auipc                   a0,62                   # 0x4e510
0x00010514:  60850513          addi                    a0,a0,1544
0x00010518:  1cd000ef          jal                     ra,2508                 # 0x10ee4

----------------
IN: _IO_printf
0x00010ee4:  0006a317          auipc                   t1,106                  # 0x7aee4
0x00010ee8:  d3433303          ld                      t1,-716(t1)
0x00010eec:  711d              addi                    sp,sp,-96
0x00010eee:  8e2a              mv                      t3,a0
0x00010ef0:  00033503          ld                      a0,0(t1)
0x00010ef4:  02810313          addi                    t1,sp,40
0x00010ef8:  f42e              sd                      a1,40(sp)
0x00010efa:  f832              sd                      a2,48(sp)
0x00010efc:  fc36              sd                      a3,56(sp)
0x00010efe:  85f2              mv                      a1,t3
0x00010f00:  861a              mv                      a2,t1
0x00010f02:  4681              mv                      a3,zero
0x00010f04:  ec06              sd                      ra,24(sp)
0x00010f06:  e0ba              sd                      a4,64(sp)
0x00010f08:  e4be              sd                      a5,72(sp)
0x00010f0a:  e8c2              sd                      a6,80(sp)
0x00010f0c:  ecc6              sd                      a7,88(sp)
0x00010f0e:  e41a              sd                      t1,8(sp)
0x00010f10:  22a030ef          jal                     ra,12842                # 0x1413a

----------------
IN: __vfprintf_internal
0x0001413a:  0c052783          lw                      a5,192(a0)
0x0001413e:  716d              addi                    sp,sp,-272
0x00014140:  e222              sd                      s0,256(sp)
0x00014142:  f9ca              sd                      s2,240(sp)
0x00014144:  f5ce              sd                      s3,232(sp)
0x00014146:  f1d2              sd                      s4,224(sp)
0x00014148:  e606              sd                      ra,264(sp)
0x0001414a:  fda6              sd                      s1,248(sp)
0x0001414c:  842a              mv                      s0,a0
0x0001414e:  892e              mv                      s2,a1
0x00014150:  89b2              mv                      s3,a2
0x00014152:  8a36              mv                      s4,a3
0x00014154:  eba5              bnez                    a5,112                  # 0x141c4

----------------
IN: __vfprintf_internal
0x00014156:  57fd              addi                    a5,zero,-1
0x00014158:  0cf52023          sw                      a5,192(a0)
0x0001415c:  4018              lw                      a4,0(s0)
0x0001415e:  00877793          andi                    a5,a4,8
0x00014162:  12079763          bnez                    a5,302                  # 0x14290

----------------
IN: __vfprintf_internal
0x00014166:  14090163          beqz                    s2,322                  # 0x142a8

----------------
IN: __vfprintf_internal
0x0001416a:  587c              lw                      a5,116(s0)
0x0001416c:  0807f793          andi                    a5,a5,128
0x00014170:  0e078463          beqz                    a5,232                  # 0x14258

----------------
IN: __vfprintf_internal
0x00014258:  85a2              mv                      a1,s0
0x0001425a:  1000              addi                    s0,sp,32
0x0001425c:  8522              mv                      a0,s0
0x0001425e:  32e150ef          jal                     ra,86830                # 0x2958c

----------------
IN: __printf_buffer_to_file_init
0x0002958c:  759c              ld                      a5,40(a1)
0x0002958e:  7998              ld                      a4,48(a1)
0x00029590:  4691              addi                    a3,zero,4
0x00029592:  00053c23          sd                      zero,24(a0)
0x00029596:  f50c              sd                      a1,40(a0)
0x00029598:  d114              sw                      a3,32(a0)
0x0002959a:  00e7e663          bgtu                    a4,a5,12                # 0x295a6

----------------
IN: __printf_buffer_to_file_init
0x0002959e:  03050793          addi                    a5,a0,48
0x000295a2:  0b050713          addi                    a4,a0,176
0x000295a6:  e918              sd                      a4,16(a0)
0x000295a8:  e51c              sd                      a5,8(a0)
0x000295aa:  e11c              sd                      a5,0(a0)
0x000295ac:  8082              ret                     

----------------
IN: __vfprintf_internal
0x00014262:  86d2              mv                      a3,s4
0x00014264:  864e              mv                      a2,s3
0x00014266:  85ca              mv                      a1,s2
0x00014268:  8522              mv                      a0,s0
0x0001426a:  d96fe0ef          jal                     ra,-6762                # 0x12800

----------------
IN: __printf_buffer
0x00012800:  00068797          auipc                   a5,104                  # 0x7a800
0x00012804:  5e07b783          ld                      a5,1504(a5)
0x00012808:  ab010113          addi                    sp,sp,-1360
0x0001280c:  54813023          sd                      s0,1344(sp)
0x00012810:  ed3e              sd                      a5,152(sp)
0x00012812:  9792              add                     a5,a5,tp
0x00012814:  439c              lw                      a5,0(a5)
0x00012816:  842a              mv                      s0,a0
0x00012818:  53213823          sd                      s2,1328(sp)
0x0001281c:  e52e              sd                      a1,136(sp)
0x0001281e:  892e              mv                      s2,a1
0x00012820:  852e              mv                      a0,a1
0x00012822:  02500593          addi                    a1,zero,37
0x00012826:  fcbe              sd                      a5,120(sp)
0x00012828:  54113423          sd                      ra,1352(sp)
0x0001282c:  52913c23          sd                      s1,1336(sp)
0x00012830:  53313423          sd                      s3,1320(sp)
0x00012834:  53413023          sd                      s4,1312(sp)
0x00012838:  84b2              mv                      s1,a2
0x0001283a:  e1b2              sd                      a2,192(sp)
0x0001283c:  8a36              mv                      s4,a3
0x0001283e:  e136              sd                      a3,128(sp)
0x00012840:  49c070ef          jal                     ra,29852                # 0x19cdc

----------------
IN: __strchrnul
0x00019cdc:  010107b7          lui                     a5,4112
0x00019ce0:  10178793          addi                    a5,a5,257
0x00019ce4:  02079713          slli                    a4,a5,32
0x00019ce8:  973e              add                     a4,a4,a5
0x00019cea:  0ff5f813          andi                    a6,a1,255
0x00019cee:  02e80833          mul                     a6,a6,a4
0x00019cf2:  862a              mv                      a2,a0
0x00019cf4:  9961              andi                    a0,a0,-8
0x00019cf6:  610c              ld                      a1,0(a0)
0x00019cf8:  7f7f87b7          lui                     a5,522232
0x00019cfc:  f7f78793          addi                    a5,a5,-129
0x00019d00:  02079713          slli                    a4,a5,32
0x00019d04:  973e              add                     a4,a4,a5
0x00019d06:  00e5f7b3          and                     a5,a1,a4
0x00019d0a:  97ba              add                     a5,a5,a4
0x00019d0c:  0105c8b3          xor                     a7,a1,a6
0x00019d10:  00e8f6b3          and                     a3,a7,a4
0x00019d14:  96ba              add                     a3,a3,a4
0x00019d16:  0116e6b3          or                      a3,a3,a7
0x00019d1a:  8fcd              or                      a5,a5,a1
0x00019d1c:  8ff5              and                     a5,a5,a3
0x00019d1e:  8fd9              or                      a5,a5,a4
0x00019d20:  00767713          andi                    a4,a2,7
0x00019d24:  fff7c793          not                     a5,a5
0x00019d28:  0037171b          slliw                   a4,a4,3
0x00019d2c:  00e7d7b3          srl                     a5,a5,a4
0x00019d30:  e7c1              bnez                    a5,136                  # 0x19db8

----------------
IN: __strchrnul
0x00019d32:  feff07b7          lui                     a5,-4112
0x00019d36:  808088b7          lui                     a7,-522232
0x00019d3a:  eff78793          addi                    a5,a5,-257
0x00019d3e:  08188893          addi                    a7,a7,129
0x00019d42:  80808737          lui                     a4,-522232
0x00019d46:  02079593          slli                    a1,a5,32
0x00019d4a:  1882              slli                    a7,a7,32
0x00019d4c:  08070713          addi                    a4,a4,128
0x00019d50:  95be              add                     a1,a1,a5
0x00019d52:  98ba              add                     a7,a7,a4
0x00019d54:  832a              mv                      t1,a0
0x00019d56:  6518              ld                      a4,8(a0)
0x00019d58:  0521              addi                    a0,a0,8
0x00019d5a:  010747b3          xor                     a5,a4,a6
0x00019d5e:  00b78633          add                     a2,a5,a1
0x00019d62:  fff7c693          not                     a3,a5
0x00019d66:  00b707b3          add                     a5,a4,a1
0x00019d6a:  fff74713          not                     a4,a4
0x00019d6e:  8ff9              and                     a5,a5,a4
0x00019d70:  8ef1              and                     a3,a3,a2
0x00019d72:  8fd5              or                      a5,a5,a3
0x00019d74:  0117f733          and                     a4,a5,a7
0x00019d78:  df71              beqz                    a4,-36                  # 0x19d54

----------------
IN: __strchrnul
0x00019d7a:  0807f713          andi                    a4,a5,128
0x00019d7e:  ef05              bnez                    a4,56                   # 0x19db6

----------------
IN: __strchrnul
0x00019d80:  03079713          slli                    a4,a5,48
0x00019d84:  06074d63          bltz                    a4,122                  # 0x19dfe

----------------
IN: __strchrnul
0x00019d88:  02879713          slli                    a4,a5,40
0x00019d8c:  06074c63          bltz                    a4,120                  # 0x19e04

----------------
IN: __strchrnul
0x00019e04:  00a30513          addi                    a0,t1,10
0x00019e08:  8082              ret                     

----------------
IN: __printf_buffer
0x00012844:  e92a              sd                      a0,144(sp)
0x00012846:  41250633          sub                     a2,a0,s2
0x0001284a:  89aa              mv                      s3,a0
0x0001284c:  85ca              mv                      a1,s2
0x0001284e:  8522              mv                      a0,s0
0x00012850:  57f160ef          jal                     ra,93566                # 0x295ce

----------------
IN: __printf_buffer_write
0x000295ce:  511c              lw                      a5,32(a0)
0x000295d0:  c7c1              beqz                    a5,136                  # 0x29658

----------------
IN: __printf_buffer_write
0x000295d2:  7179              addi                    sp,sp,-48
0x000295d4:  ec26              sd                      s1,24(sp)
0x000295d6:  f406              sd                      ra,40(sp)
0x000295d8:  84b2              mv                      s1,a2
0x000295da:  ca3d              beqz                    a2,118                  # 0x29650

----------------
IN: __printf_buffer_write
0x000295dc:  e84a              sd                      s2,16(sp)
0x000295de:  e44e              sd                      s3,8(sp)
0x000295e0:  892a              mv                      s2,a0
0x000295e2:  f022              sd                      s0,32(sp)
0x000295e4:  6508              ld                      a0,8(a0)
0x000295e6:  89ae              mv                      s3,a1
0x000295e8:  a01d              j                       38                      # 0x2960e

----------------
IN: __printf_buffer_write
0x0002960e:  01093403          ld                      s0,16(s2)
0x00029612:  fca41ce3          bne                     s0,a0,-40               # 0x295ea

----------------
IN: __printf_buffer_write
0x000295ea:  8c09              sub                     s0,s0,a0
0x000295ec:  0084f363          bleu                    s0,s1,6                 # 0x295f2

----------------
IN: __printf_buffer_write
0x000295f0:  8426              mv                      s0,s1
0x000295f2:  85ce              mv                      a1,s3
0x000295f4:  8622              mv                      a2,s0
0x000295f6:  fffe7097          auipc                   ra,-25                  # 0x105f6
0x000295fa:  c3a080e7          jalr                    ra,ra,-966

----------------
IN: __memcpy_noalignment
0x0001a16a:  8836              mv                      a6,a3
0x0001a16c:  bf65              j                       -72                     # 0x1a124

----------------
IN: __printf_buffer_write
0x000295fe:  00893503          ld                      a0,8(s2)
0x00029602:  8c81              sub                     s1,s1,s0
0x00029604:  99a2              add                     s3,s3,s0
0x00029606:  9522              add                     a0,a0,s0
0x00029608:  00a93423          sd                      a0,8(s2)
0x0002960c:  cc9d              beqz                    s1,62                   # 0x2964a

----------------
IN: __printf_buffer_write
0x0002964a:  7402              ld                      s0,32(sp)
0x0002964c:  6942              ld                      s2,16(sp)
0x0002964e:  69a2              ld                      s3,8(sp)
0x00029650:  70a2              ld                      ra,40(sp)
0x00029652:  64e2              ld                      s1,24(sp)
0x00029654:  6145              addi                    sp,sp,48
0x00029656:  8082              ret                     

----------------
IN: __printf_buffer
0x00012854:  501c              lw                      a5,32(s0)
0x00012856:  cbdd              beqz                    a5,182                  # 0x1290c

----------------
IN: __printf_buffer
0x00012858:  0009c783          lbu                     a5,0(s3)
0x0001285c:  894e              mv                      s2,s3
0x0001285e:  c7dd              beqz                    a5,174                  # 0x1290c

----------------
IN: __printf_buffer
0x00012860:  0009f797          auipc                   a5,159                  # 0xb1860
0x00012864:  1007b783          ld                      a5,256(a5)
0x00012868:  51513c23          sd                      s5,1304(sp)
0x0001286c:  e8be              sd                      a5,80(sp)
0x0001286e:  c399              beqz                    a5,6                    # 0x12874

----------------
IN: __printf_buffer
0x00012874:  0009f797          auipc                   a5,159                  # 0xb1874
0x00012878:  0dc7b783          ld                      a5,220(a5)
0x0001287c:  6a0792e3          bnez                    a5,3748                 # 0x13720

----------------
IN: __printf_buffer
0x00012880:  0009f797          auipc                   a5,159                  # 0xb1880
0x00012884:  0f87b783          ld                      a5,248(a5)
0x00012888:  68079ce3          bnez                    a5,3736                 # 0x13720

----------------
IN: __printf_buffer
0x0001288c:  57fd              addi                    a5,zero,-1
0x0001288e:  f53e              sd                      a5,168(sp)
0x00012890:  001a7793          andi                    a5,s4,1
0x00012894:  51613823          sd                      s6,1296(sp)
0x00012898:  51713423          sd                      s7,1288(sp)
0x0001289c:  51813023          sd                      s8,1280(sp)
0x000128a0:  4f913c23          sd                      s9,1272(sp)
0x000128a4:  4fa13823          sd                      s10,1264(sp)
0x000128a8:  4fb13423          sd                      s11,1256(sp)
0x000128ac:  f102              sd                      zero,160(sp)
0x000128ae:  4a81              mv                      s5,zero
0x000128b0:  fd3e              sd                      a5,184(sp)
0x000128b2:  00194783          lbu                     a5,1(s2)
0x000128b6:  05a00613          addi                    a2,zero,90
0x000128ba:  fe07871b          addiw                   a4,a5,-32
0x000128be:  0ff77693          andi                    a3,a4,255
0x000128c2:  06d67463          bleu                    a3,a2,104               # 0x1292a

----------------
IN: __printf_buffer
0x0001292a:  00043697          auipc                   a3,67                   # 0x5592a
0x0001292e:  e3e68693          addi                    a3,a3,-450
0x00012932:  9736              add                     a4,a4,a3
0x00012934:  00074703          lbu                     a4,0(a4)
0x00012938:  02000693          addi                    a3,zero,32
0x0001293c:  e0b6              sd                      a3,64(sp)
0x0001293e:  070e              slli                    a4,a4,3
0x00012940:  00065697          auipc                   a3,101                  # 0x77940
0x00012944:  aa868693          addi                    a3,a3,-1368
0x00012948:  9736              add                     a4,a4,a3
0x0001294a:  10073703          ld                      a4,256(a4)
0x0001294e:  0905              addi                    s2,s2,1
0x00012950:  4c81              mv                      s9,zero
0x00012952:  59fd              addi                    s3,zero,-1
0x00012954:  4d01              mv                      s10,zero
0x00012956:  4d81              mv                      s11,zero
0x00012958:  4b01              mv                      s6,zero
0x0001295a:  4c01              mv                      s8,zero
0x0001295c:  4681              mv                      a3,zero
0x0001295e:  4e01              mv                      t3,zero
0x00012960:  f402              sd                      zero,40(sp)
0x00012962:  4a01              mv                      s4,zero
0x00012964:  4b81              mv                      s7,zero
0x00012966:  fc02              sd                      zero,56(sp)
0x00012968:  8702              jr                      a4

----------------
IN: __printf_buffer
0x00013090:  00848713          addi                    a4,s1,8
0x00013094:  ecba              sd                      a4,88(sp)
0x00013096:  640b0263          beqz                    s6,1604                 # 0x136da

----------------
IN: __printf_buffer
0x000136da:  0004ae83          lw                      t4,0(s1)
0x000136de:  320d9263          bnez                    s11,804                 # 0x13a02

----------------
IN: __printf_buffer
0x000136e2:  8b76              mv                      s6,t4
0x000136e4:  9a0c0de3          beqz                    s8,-1606                # 0x1309e

----------------
IN: __printf_buffer
0x0001309e:  43fb5713          srai                    a4,s6,63
0x000130a2:  01674c33          xor                     s8,a4,s6
0x000130a6:  40ec0c33          sub                     s8,s8,a4
0x000130aa:  03fb5d93          srli                    s11,s6,63
0x000130ae:  2e09cae3          bltz                    s3,2804                 # 0x13ba2

----------------
IN: __printf_buffer
0x00013ba2:  4705              addi                    a4,zero,1
0x00013ba4:  4629              addi                    a2,zero,10
0x00013ba6:  89ba              mv                      s3,a4
0x00013ba8:  f832              sd                      a2,48(sp)
0x00013baa:  b0cff06f          j                       -3316                   # 0x12eb6

----------------
IN: __printf_buffer
0x00012eb6:  fa878693          addi                    a3,a5,-88
0x00012eba:  0016b693          seqz                    a3,a3
0x00012ebe:  4e010593          addi                    a1,sp,1248
0x00012ec2:  8562              mv                      a0,s8
0x00012ec4:  f8ba              sd                      a4,112(sp)
0x00012ec6:  f4f2              sd                      t3,104(sp)
0x00012ec8:  f0be              sd                      a5,96(sp)
0x00012eca:  116160ef          jal                     ra,90390                # 0x28fe0

----------------
IN: _itoa_word
0x00028fe0:  87aa              mv                      a5,a0
0x00028fe2:  00028817          auipc                   a6,40                   # 0x50fe2
0x00028fe6:  45680813          addi                    a6,a6,1110
0x00028fea:  c689              beqz                    a3,10                   # 0x28ff4

----------------
IN: _itoa_word
0x00028ff4:  4729              addi                    a4,zero,10
0x00028ff6:  06e60763          beq                     a2,a4,110               # 0x29064

----------------
IN: _itoa_word
0x00029064:  ccccd6b7          lui                     a3,-209715
0x00029068:  ccd68693          addi                    a3,a3,-819
0x0002906c:  02069713          slli                    a4,a3,32
0x00029070:  852e              mv                      a0,a1
0x00029072:  48a5              addi                    a7,zero,9
0x00029074:  00d705b3          add                     a1,a4,a3
0x00029078:  02b7b6b3          mulhu                   a3,a5,a1
0x0002907c:  863e              mv                      a2,a5
0x0002907e:  157d              addi                    a0,a0,-1
0x00029080:  828d              srli                    a3,a3,3
0x00029082:  00269713          slli                    a4,a3,2
0x00029086:  9736              add                     a4,a4,a3
0x00029088:  0706              slli                    a4,a4,1
0x0002908a:  8f99              sub                     a5,a5,a4
0x0002908c:  97c2              add                     a5,a5,a6
0x0002908e:  0007c703          lbu                     a4,0(a5)
0x00029092:  87b6              mv                      a5,a3
0x00029094:  00e50023          sb                      a4,0(a0)
0x00029098:  fec8e0e3          bgtu                    a2,a7,-32               # 0x29078

----------------
IN: _itoa_word
0x00029078:  02b7b6b3          mulhu                   a3,a5,a1
0x0002907c:  863e              mv                      a2,a5
0x0002907e:  157d              addi                    a0,a0,-1
0x00029080:  828d              srli                    a3,a3,3
0x00029082:  00269713          slli                    a4,a3,2
0x00029086:  9736              add                     a4,a4,a3
0x00029088:  0706              slli                    a4,a4,1
0x0002908a:  8f99              sub                     a5,a5,a4
0x0002908c:  97c2              add                     a5,a5,a6
0x0002908e:  0007c703          lbu                     a4,0(a5)
0x00029092:  87b6              mv                      a5,a3
0x00029094:  00e50023          sb                      a4,0(a0)
0x00029098:  fec8e0e3          bgtu                    a2,a7,-32               # 0x29078

----------------
IN: _itoa_word
0x0002909c:  8082              ret                     

----------------
IN: __printf_buffer
0x00012ece:  7e26              ld                      t3,104(sp)
0x00012ed0:  e4aa              sd                      a0,72(sp)
0x00012ed2:  7786              ld                      a5,96(sp)
0x00012ed4:  7746              ld                      a4,112(sp)
0x00012ed6:  4e010693          addi                    a3,sp,1248
0x00012eda:  520e1263          bnez                    t3,1316                 # 0x133fe

----------------
IN: __printf_buffer
0x00012ede:  6626              ld                      a2,72(sp)
0x00012ee0:  40c68b33          sub                     s6,a3,a2
0x00012ee4:  000c8663          beqz                    s9,12                   # 0x12ef0

----------------
IN: __printf_buffer
0x00012ef0:  41670733          sub                     a4,a4,s6
0x00012ef4:  fff74693          not                     a3,a4
0x00012ef8:  96fd              srai                    a3,a3,63
0x00012efa:  8f75              and                     a4,a4,a3
0x00012efc:  000b061b          sext.w                  a2,s6
0x00012f00:  00070e1b          sext.w                  t3,a4
0x00012f04:  84b2              mv                      s1,a2
0x00012f06:  4681              mv                      a3,zero
0x00012f08:  cd3647e3          bgt                     s3,a2,-818              # 0x12bd6

----------------
IN: __printf_buffer
0x00012f0c:  080c0063          beqz                    s8,128                  # 0x12f8c

----------------
IN: __printf_buffer
0x00012f10:  7662              ld                      a2,56(sp)
0x00012f12:  0e061863          bnez                    a2,240                  # 0x13002

----------------
IN: __printf_buffer
0x00012f16:  020a1ee3          bnez                    s4,2108                 # 0x13752

----------------
IN: __printf_buffer
0x00012f1a:  409d04bb          subw                    s1,s10,s1
0x00012f1e:  41c4863b          subw                    a2,s1,t3
0x00012f22:  64e6              ld                      s1,88(sp)
0x00012f24:  fc02              sd                      zero,56(sp)
0x00012f26:  75a2              ld                      a1,40(sp)
0x00012f28:  017de733          or                      a4,s11,s7
0x00012f2c:  8f4d              or                      a4,a4,a1
0x00012f2e:  2701              sext.w                  a4,a4
0x00012f30:  54071063          bnez                    a4,1344                 # 0x13470

----------------
IN: __printf_buffer
0x00012f34:  6586              ld                      a1,64(sp)
0x00012f36:  02000713          addi                    a4,zero,32
0x00012f3a:  46e58ae3          beq                     a1,a4,3188              # 0x13bae

----------------
IN: __printf_buffer
0x00013bae:  b8c05a63          blez                    a2,-3180                # 0x12f42

----------------
IN: __printf_buffer
0x00012f42:  7762              ld                      a4,56(sp)
0x00012f44:  cb09              beqz                    a4,18                   # 0x12f56

----------------
IN: __printf_buffer
0x00012f56:  13c04063          bgtz                    t3,288                  # 0x13076

----------------
IN: __printf_buffer
0x00012f5a:  ca0a05e3          beqz                    s4,-854                 # 0x12c04

----------------
IN: __printf_buffer
0x00012c04:  36068a63          beqz                    a3,884                  # 0x12f78

----------------
IN: __printf_buffer
0x00012f78:  65a6              ld                      a1,72(sp)
0x00012f7a:  865a              mv                      a2,s6
0x00012f7c:  8522              mv                      a0,s0
0x00012f7e:  650160ef          jal                     ra,91728                # 0x295ce

----------------
IN: __memcpy_noalignment
0x0001a132:  0005a283          lw                      t0,0(a1)
0x0001a136:  ffc6a303          lw                      t1,-4(a3)
0x0001a13a:  00582023          sw                      t0,0(a6)
0x0001a13e:  fe672e23          sw                      t1,-4(a4)
0x0001a142:  8082              ret                     

----------------
IN: __printf_buffer
0x00012f82:  bc65              j                       -1352                   # 0x12a3a

----------------
IN: __printf_buffer
0x00012a3a:  00190a13          addi                    s4,s2,1
0x00012a3e:  02500593          addi                    a1,zero,37
0x00012a42:  8552              mv                      a0,s4
0x00012a44:  298070ef          jal                     ra,29336                # 0x19cdc

----------------
IN: __strchrnul
0x00019db8:  0807f713          andi                    a4,a5,128
0x00019dbc:  8532              mv                      a0,a2
0x00019dbe:  ff65              bnez                    a4,-8                   # 0x19db6

----------------
IN: __strchrnul
0x00019dc0:  03079713          slli                    a4,a5,48
0x00019dc4:  02074a63          bltz                    a4,52                   # 0x19df8

----------------
IN: __strchrnul
0x00019df8:  00160513          addi                    a0,a2,1
0x00019dfc:  8082              ret                     

----------------
IN: __printf_buffer
0x00012a48:  892a              mv                      s2,a0
0x00012a4a:  41450633          sub                     a2,a0,s4
0x00012a4e:  85d2              mv                      a1,s4
0x00012a50:  8522              mv                      a0,s0
0x00012a52:  37d160ef          jal                     ra,93052                # 0x295ce

----------------
IN: __printf_buffer
0x00012a56:  00094783          lbu                     a5,0(s2)
0x00012a5a:  2a85              addiw                   s5,s5,1
0x00012a5c:  c781              beqz                    a5,8                    # 0x12a64

----------------
IN: __printf_buffer
0x00012a64:  51813a83          ld                      s5,1304(sp)
0x00012a68:  51013b03          ld                      s6,1296(sp)
0x00012a6c:  50813b83          ld                      s7,1288(sp)
0x00012a70:  50013c03          ld                      s8,1280(sp)
0x00012a74:  4f813c83          ld                      s9,1272(sp)
0x00012a78:  4f013d03          ld                      s10,1264(sp)
0x00012a7c:  4e813d83          ld                      s11,1256(sp)
0x00012a80:  54813083          ld                      ra,1352(sp)
0x00012a84:  54013403          ld                      s0,1344(sp)
0x00012a88:  53813483          ld                      s1,1336(sp)
0x00012a8c:  53013903          ld                      s2,1328(sp)
0x00012a90:  52813983          ld                      s3,1320(sp)
0x00012a94:  52013a03          ld                      s4,1312(sp)
0x00012a98:  55010113          addi                    sp,sp,1360
0x00012a9c:  8082              ret                     

----------------
IN: __vfprintf_internal
0x0001426e:  8522              mv                      a0,s0
0x00014270:  33e150ef          jal                     ra,86846                # 0x295ae

----------------
IN: __printf_buffer_to_file_done
0x000295ae:  511c              lw                      a5,32(a0)
0x000295b0:  cf89              beqz                    a5,26                   # 0x295ca

----------------
IN: __printf_buffer_to_file_done
0x000295b2:  1141              addi                    sp,sp,-16
0x000295b4:  e022              sd                      s0,0(sp)
0x000295b6:  e406              sd                      ra,8(sp)
0x000295b8:  842a              mv                      s0,a0
0x000295ba:  eb5ff0ef          jal                     ra,-332                 # 0x2946e

----------------
IN: __printf_buffer_flush_to_file
0x0002946e:  6510              ld                      a2,8(a0)
0x00029470:  6118              ld                      a4,0(a0)
0x00029472:  6d1c              ld                      a5,24(a0)
0x00029474:  7179              addi                    sp,sp,-48
0x00029476:  40e60733          sub                     a4,a2,a4
0x0002947a:  6914              ld                      a3,16(a0)
0x0002947c:  f022              sd                      s0,32(sp)
0x0002947e:  e84a              sd                      s2,16(sp)
0x00029480:  f406              sd                      ra,40(sp)
0x00029482:  97ba              add                     a5,a5,a4
0x00029484:  ed1c              sd                      a5,24(a0)
0x00029486:  0b050913          addi                    s2,a0,176
0x0002948a:  842a              mv                      s0,a0
0x0002948c:  05268963          beq                     a3,s2,82                # 0x294de

----------------
IN: __printf_buffer_flush_to_file
0x000294de:  7508              ld                      a0,40(a0)
0x000294e0:  e052              sd                      s4,0(sp)
0x000294e2:  00051717          auipc                   a4,81                   # 0x7a4e2
0x000294e6:  c9e70713          addi                    a4,a4,-866
0x000294ea:  0d853a03          ld                      s4,216(a0)
0x000294ee:  6785              lui                     a5,1
0x000294f0:  ec26              sd                      s1,24(sp)
0x000294f2:  e44e              sd                      s3,8(sp)
0x000294f4:  92f78793          addi                    a5,a5,-1745
0x000294f8:  03040993          addi                    s3,s0,48
0x000294fc:  40ea0733          sub                     a4,s4,a4
0x00029500:  413604b3          sub                     s1,a2,s3
0x00029504:  04e7ed63          bgtu                    a4,a5,90                # 0x2955e

----------------
IN: __printf_buffer_flush_to_file
0x00029508:  038a3783          ld                      a5,56(s4)
0x0002950c:  8626              mv                      a2,s1
0x0002950e:  85ce              mv                      a1,s3
0x00029510:  9782              jalr                    ra,a5,0

----------------
IN: _IO_new_file_xsputn
0x0002e3e8:  ca41              beqz                    a2,144                  # 0x2e478

----------------
IN: _IO_new_file_xsputn
0x0002e3ea:  6118              ld                      a4,0(a0)
0x0002e3ec:  6785              lui                     a5,1
0x0002e3ee:  7179              addi                    sp,sp,-48
0x0002e3f0:  a0078793          addi                    a5,a5,-1536
0x0002e3f4:  f022              sd                      s0,32(sp)
0x0002e3f6:  ec26              sd                      s1,24(sp)
0x0002e3f8:  e44e              sd                      s3,8(sp)
0x0002e3fa:  f406              sd                      ra,40(sp)
0x0002e3fc:  e84a              sd                      s2,16(sp)
0x0002e3fe:  e052              sd                      s4,0(sp)
0x0002e400:  8f7d              and                     a4,a4,a5
0x0002e402:  842a              mv                      s0,a0
0x0002e404:  89b2              mv                      s3,a2
0x0002e406:  7508              ld                      a0,40(a0)
0x0002e408:  84ae              mv                      s1,a1
0x0002e40a:  04f70263          beq                     a4,a5,68                # 0x2e44e

----------------
IN: _IO_new_file_xsputn
0x0002e40e:  7818              ld                      a4,48(s0)
0x0002e410:  06e57663          bleu                    a4,a0,108               # 0x2e47c

----------------
IN: _IO_new_file_xsputn
0x0002e47c:  8932              mv                      s2,a2
0x0002e47e:  0d843a03          ld                      s4,216(s0)
0x0002e482:  0004c717          auipc                   a4,76                   # 0x7a482
0x0002e486:  cfe70713          addi                    a4,a4,-770
0x0002e48a:  6785              lui                     a5,1
0x0002e48c:  40ea0733          sub                     a4,s4,a4
0x0002e490:  92f78793          addi                    a5,a5,-1745
0x0002e494:  08e7e363          bgtu                    a4,a5,134               # 0x2e51a

----------------
IN: _IO_new_file_xsputn
0x0002e498:  018a3783          ld                      a5,24(s4)
0x0002e49c:  55fd              addi                    a1,zero,-1
0x0002e49e:  8522              mv                      a0,s0
0x0002e4a0:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_overflow
0x0002dc5e:  411c              lw                      a5,0(a0)
0x0002dc60:  1101              addi                    sp,sp,-32
0x0002dc62:  e822              sd                      s0,16(sp)
0x0002dc64:  ec06              sd                      ra,24(sp)
0x0002dc66:  0087f713          andi                    a4,a5,8
0x0002dc6a:  842a              mv                      s0,a0
0x0002dc6c:  12071663          bnez                    a4,300                  # 0x2dd98

----------------
IN: _IO_file_overflow
0x0002dc70:  e426              sd                      s1,8(sp)
0x0002dc72:  e04a              sd                      s2,0(sp)
0x0002dc74:  03479693          slli                    a3,a5,52
0x0002dc78:  7118              ld                      a4,32(a0)
0x0002dc7a:  84ae              mv                      s1,a1
0x0002dc7c:  0406d163          bgez                    a3,66                   # 0x2dcbe

----------------
IN: _IO_file_overflow
0x0002dcbe:  c355              beqz                    a4,164                  # 0x2dd62

----------------
IN: _IO_file_overflow
0x0002dd62:  8522              mv                      a0,s0
0x0002dd64:  4a8010ef          jal                     ra,5288                 # 0x2f20c

----------------
IN: _IO_doallocbuf
0x0002f20c:  7d1c              ld                      a5,56(a0)
0x0002f20e:  c391              beqz                    a5,4                    # 0x2f212

----------------
IN: _IO_doallocbuf
0x0002f212:  411c              lw                      a5,0(a0)
0x0002f214:  1101              addi                    sp,sp,-32
0x0002f216:  e822              sd                      s0,16(sp)
0x0002f218:  ec06              sd                      ra,24(sp)
0x0002f21a:  e426              sd                      s1,8(sp)
0x0002f21c:  e04a              sd                      s2,0(sp)
0x0002f21e:  0027f713          andi                    a4,a5,2
0x0002f222:  842a              mv                      s0,a0
0x0002f224:  c709              beqz                    a4,10                   # 0x2f22e

----------------
IN: _IO_doallocbuf
0x0002f22e:  6c64              ld                      s1,216(s0)
0x0002f230:  0004b717          auipc                   a4,75                   # 0x7a230
0x0002f234:  f5070713          addi                    a4,a4,-176
0x0002f238:  6785              lui                     a5,1
0x0002f23a:  40e48733          sub                     a4,s1,a4
0x0002f23e:  92f78793          addi                    a5,a5,-1745
0x0002f242:  04e7e763          bgtu                    a4,a5,78                # 0x2f290

----------------
IN: _IO_doallocbuf
0x0002f246:  74bc              ld                      a5,104(s1)
0x0002f248:  8522              mv                      a0,s0
0x0002f24a:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_doallocate
0x0002c222:  593c              lw                      a5,112(a0)
0x0002c224:  7135              addi                    sp,sp,-160
0x0002c226:  e922              sd                      s0,144(sp)
0x0002c228:  ed06              sd                      ra,152(sp)
0x0002c22a:  e526              sd                      s1,136(sp)
0x0002c22c:  842a              mv                      s0,a0
0x0002c22e:  0607c263          bltz                    a5,100                  # 0x2c292

----------------
IN: _IO_file_doallocate
0x0002c232:  6d64              ld                      s1,216(a0)
0x0002c234:  0004e717          auipc                   a4,78                   # 0x7a234
0x0002c238:  f4c70713          addi                    a4,a4,-180
0x0002c23c:  6785              lui                     a5,1
0x0002c23e:  40e48733          sub                     a4,s1,a4
0x0002c242:  92f78793          addi                    a5,a5,-1745
0x0002c246:  0ae7ed63          bgtu                    a4,a5,186               # 0x2c300

----------------
IN: _IO_file_doallocate
0x0002c24a:  68dc              ld                      a5,144(s1)
0x0002c24c:  858a              mv                      a1,sp
0x0002c24e:  8522              mv                      a0,s0
0x0002c250:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_stat
0x0002e33a:  5928              lw                      a0,112(a0)
0x0002e33c:  66d0506f          j                       24172                   # 0x341a8

----------------
IN: fstat64
0x000341a8:  05000893          addi                    a7,zero,80
0x000341ac:  00000073          ecall                   

----------------
IN: fstat64
0x000341b0:  77fd              lui                     a5,-1
0x000341b2:  00a7e463          bgtu                    a0,a5,8                 # 0x341ba

----------------
IN: fstat64
0x000341b6:  2501              sext.w                  a0,a0
0x000341b8:  8082              ret                     

----------------
IN: _IO_file_doallocate
0x0002c252:  04054063          bltz                    a0,64                   # 0x2c292

----------------
IN: _IO_file_doallocate
0x0002c256:  47c2              lw                      a5,16(sp)
0x0002c258:  66bd              lui                     a3,15
0x0002c25a:  6709              lui                     a4,2
0x0002c25c:  8ff5              and                     a5,a5,a3
0x0002c25e:  04e78663          beq                     a5,a4,76                # 0x2c2aa

----------------
IN: _IO_file_doallocate
0x0002c2aa:  7782              ld                      a5,32(sp)
0x0002c2ac:  767d              lui                     a2,-1
0x0002c2ae:  469d              addi                    a3,zero,7
0x0002c2b0:  02c79713          slli                    a4,a5,44
0x0002c2b4:  9381              srli                    a5,a5,32
0x0002c2b6:  9351              srli                    a4,a4,52
0x0002c2b8:  8ff1              and                     a5,a5,a2
0x0002c2ba:  8fd9              or                      a5,a5,a4
0x0002c2bc:  f787879b          addiw                   a5,a5,-136
0x0002c2c0:  00f6ee63          bgtu                    a5,a3,28                # 0x2c2dc

----------------
IN: _IO_file_doallocate
0x0002c2c4:  401c              lw                      a5,0(s0)
0x0002c2c6:  54e2              lw                      s1,56(sp)
0x0002c2c8:  2007e793          ori                     a5,a5,512
0x0002c2cc:  c01c              sw                      a5,0(s0)
0x0002c2ce:  6789              lui                     a5,2
0x0002c2d0:  17f9              addi                    a5,a5,-2
0x0002c2d2:  fff4871b          addiw                   a4,s1,-1
0x0002c2d6:  fae7eee3          bgtu                    a4,a5,-68               # 0x2c292

----------------
IN: _IO_file_doallocate
0x0002c2da:  bf59              j                       -106                    # 0x2c270

----------------
IN: _IO_file_doallocate
0x0002c270:  8526              mv                      a0,s1
0x0002c272:  9e0ec0ef          jal                     ra,-81440               # 0x18452

----------------
IN: _IO_file_doallocate
0x0002c276:  85aa              mv                      a1,a0
0x0002c278:  c11d              beqz                    a0,38                   # 0x2c29e

----------------
IN: _IO_file_doallocate
0x0002c27a:  00950633          add                     a2,a0,s1
0x0002c27e:  4685              addi                    a3,zero,1
0x0002c280:  8522              mv                      a0,s0
0x0002c282:  749020ef          jal                     ra,12104                # 0x2f1ca

----------------
IN: _IO_setb
0x0002f1ca:  7179              addi                    sp,sp,-48
0x0002f1cc:  f022              sd                      s0,32(sp)
0x0002f1ce:  842a              mv                      s0,a0
0x0002f1d0:  7d08              ld                      a0,56(a0)
0x0002f1d2:  ec26              sd                      s1,24(sp)
0x0002f1d4:  f406              sd                      ra,40(sp)
0x0002f1d6:  401c              lw                      a5,0(s0)
0x0002f1d8:  84b6              mv                      s1,a3
0x0002f1da:  c501              beqz                    a0,8                    # 0x2f1e2

----------------
IN: _IO_setb
0x0002f1e2:  fc0c              sd                      a1,56(s0)
0x0002f1e4:  e030              sd                      a2,64(s0)
0x0002f1e6:  0017e713          ori                     a4,a5,1
0x0002f1ea:  c099              beqz                    s1,6                    # 0x2f1f0

----------------
IN: _IO_setb
0x0002f1ec:  ffe7f713          andi                    a4,a5,-2
0x0002f1f0:  70a2              ld                      ra,40(sp)
0x0002f1f2:  c018              sw                      a4,0(s0)
0x0002f1f4:  7402              ld                      s0,32(sp)
0x0002f1f6:  64e2              ld                      s1,24(sp)
0x0002f1f8:  6145              addi                    sp,sp,48
0x0002f1fa:  8082              ret                     

----------------
IN: _IO_file_doallocate
0x0002c286:  60ea              ld                      ra,152(sp)
0x0002c288:  644a              ld                      s0,144(sp)
0x0002c28a:  64aa              ld                      s1,136(sp)
0x0002c28c:  4505              addi                    a0,zero,1
0x0002c28e:  610d              addi                    sp,sp,160
0x0002c290:  8082              ret                     

----------------
IN: _IO_doallocbuf
0x0002f24c:  57fd              addi                    a5,zero,-1
0x0002f24e:  02f51263          bne                     a0,a5,36                # 0x2f272

----------------
IN: _IO_doallocbuf
0x0002f272:  60e2              ld                      ra,24(sp)
0x0002f274:  6442              ld                      s0,16(sp)
0x0002f276:  64a2              ld                      s1,8(sp)
0x0002f278:  6902              ld                      s2,0(sp)
0x0002f27a:  6105              addi                    sp,sp,32
0x0002f27c:  8082              ret                     

----------------
IN: _IO_file_overflow
0x0002dd68:  7c10              ld                      a2,56(s0)
0x0002dd6a:  401c              lw                      a5,0(s0)
0x0002dd6c:  ec10              sd                      a2,24(s0)
0x0002dd6e:  e410              sd                      a2,8(s0)
0x0002dd70:  e810              sd                      a2,16(s0)
0x0002dd72:  bf81              j                       -176                    # 0x2dcc2

----------------
IN: _IO_file_overflow
0x0002dcc2:  1007f713          andi                    a4,a5,256
0x0002dcc6:  e75d              bnez                    a4,174                  # 0x2dd74

----------------
IN: _IO_file_overflow
0x0002dcc8:  602c              ld                      a1,64(s0)
0x0002dcca:  06c58f63          beq                     a1,a2,126               # 0x2dd48

----------------
IN: _IO_file_overflow
0x0002dcce:  6814              ld                      a3,16(s0)
0x0002dcd0:  6705              lui                     a4,1
0x0002dcd2:  80070713          addi                    a4,a4,-2048
0x0002dcd6:  0c042503          lw                      a0,192(s0)
0x0002dcda:  8f5d              or                      a4,a4,a5
0x0002dcdc:  f410              sd                      a2,40(s0)
0x0002dcde:  f010              sd                      a2,32(s0)
0x0002dce0:  f80c              sd                      a1,48(s0)
0x0002dce2:  e414              sd                      a3,8(s0)
0x0002dce4:  ec14              sd                      a3,24(s0)
0x0002dce6:  c018              sw                      a4,0(s0)
0x0002dce8:  f8a04ee3          bgtz                    a0,-100                 # 0x2dc84

----------------
IN: _IO_file_overflow
0x0002dcec:  2027f793          andi                    a5,a5,514
0x0002dcf0:  dbd1              beqz                    a5,-108                 # 0x2dc84

----------------
IN: _IO_file_overflow
0x0002dcf2:  f810              sd                      a2,48(s0)
0x0002dcf4:  597d              addi                    s2,zero,-1
0x0002dcf6:  f9249ae3          bne                     s1,s2,-108              # 0x2dc8a

----------------
IN: _IO_file_overflow
0x0002dcfa:  700c              ld                      a1,32(s0)
0x0002dcfc:  8522              mv                      a0,s0
0x0002dcfe:  6442              ld                      s0,16(sp)
0x0002dd00:  64a2              ld                      s1,8(sp)
0x0002dd02:  6902              ld                      s2,0(sp)
0x0002dd04:  60e2              ld                      ra,24(sp)
0x0002dd06:  8e0d              sub                     a2,a2,a1
0x0002dd08:  6105              addi                    sp,sp,32
0x0002dd0a:  ef0ff06f          j                       -2320                   # 0x2d3fa

----------------
IN: _IO_do_write
0x0002d3fa:  e219              bnez                    a2,6                    # 0x2d400

----------------
IN: _IO_do_write
0x0002d3fc:  4501              mv                      a0,zero
0x0002d3fe:  8082              ret                     

----------------
IN: _IO_new_file_xsputn
0x0002e4a2:  57fd              addi                    a5,zero,-1
0x0002e4a4:  06f50663          beq                     a0,a5,108               # 0x2e510

----------------
IN: _IO_new_file_xsputn
0x0002e4a8:  603c              ld                      a5,64(s0)
0x0002e4aa:  7c14              ld                      a3,56(s0)
0x0002e4ac:  07f00713          addi                    a4,zero,127
0x0002e4b0:  8f95              sub                     a5,a5,a3
0x0002e4b2:  02f77463          bleu                    a5,a4,40                # 0x2e4da

----------------
IN: _IO_new_file_xsputn
0x0002e4b6:  02f977b3          remu                    a5,s2,a5
0x0002e4ba:  40f90a33          sub                     s4,s2,a5
0x0002e4be:  02f91f63          bne                     s2,a5,62                # 0x2e4fc

----------------
IN: _IO_new_file_xsputn
0x0002e4c2:  00090e63          beqz                    s2,28                   # 0x2e4de

----------------
IN: _IO_new_file_xsputn
0x0002e4c6:  014485b3          add                     a1,s1,s4
0x0002e4ca:  8522              mv                      a0,s0
0x0002e4cc:  864a              mv                      a2,s2
0x0002e4ce:  617000ef          jal                     ra,3606                 # 0x2f2e4

----------------
IN: _IO_default_xsputn
0x0002f2e4:  ca71              beqz                    a2,212                  # 0x2f3b8

----------------
IN: _IO_default_xsputn
0x0002f2e6:  715d              addi                    sp,sp,-80
0x0002f2e8:  ec56              sd                      s5,24(sp)
0x0002f2ea:  6a85              lui                     s5,1
0x0002f2ec:  e0a2              sd                      s0,64(sp)
0x0002f2ee:  f84a              sd                      s2,48(sp)
0x0002f2f0:  f44e              sd                      s3,40(sp)
0x0002f2f2:  f052              sd                      s4,32(sp)
0x0002f2f4:  e85a              sd                      s6,16(sp)
0x0002f2f6:  e45e              sd                      s7,8(sp)
0x0002f2f8:  e062              sd                      s8,0(sp)
0x0002f2fa:  e486              sd                      ra,72(sp)
0x0002f2fc:  fc26              sd                      s1,56(sp)
0x0002f2fe:  8a32              mv                      s4,a2
0x0002f300:  89aa              mv                      s3,a0
0x0002f302:  842e              mv                      s0,a1
0x0002f304:  92fa8a93          addi                    s5,s5,-1745
0x0002f308:  8932              mv                      s2,a2
0x0002f30a:  4c51              addi                    s8,zero,20
0x0002f30c:  0004bb97          auipc                   s7,75                   # 0x7a30c
0x0002f310:  e74b8b93          addi                    s7,s7,-396
0x0002f314:  5b7d              addi                    s6,zero,-1
0x0002f316:  0289b503          ld                      a0,40(s3)
0x0002f31a:  0309b483          ld                      s1,48(s3)
0x0002f31e:  00957b63          bleu                    s1,a0,22                # 0x2f334

----------------
IN: _IO_default_xsputn
0x0002f334:  06090263          beqz                    s2,100                  # 0x2f398

----------------
IN: _IO_default_xsputn
0x0002f338:  0d89b483          ld                      s1,216(s3)
0x0002f33c:  417487b3          sub                     a5,s1,s7
0x0002f340:  06fae963          bgtu                    a5,s5,114               # 0x2f3b2

----------------
IN: _IO_default_xsputn
0x0002f344:  00044583          lbu                     a1,0(s0)
0x0002f348:  6c9c              ld                      a5,24(s1)
0x0002f34a:  854e              mv                      a0,s3
0x0002f34c:  0405              addi                    s0,s0,1
0x0002f34e:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_overflow
0x0002dc80:  c36d              beqz                    a4,226                  # 0x2dd62

----------------
IN: _IO_file_overflow
0x0002dc82:  7510              ld                      a2,40(a0)
0x0002dc84:  597d              addi                    s2,zero,-1
0x0002dc86:  07248a63          beq                     s1,s2,116               # 0x2dcfa

----------------
IN: _IO_file_overflow
0x0002dc8a:  603c              ld                      a5,64(s0)
0x0002dc8c:  08c78e63          beq                     a5,a2,156               # 0x2dd28

----------------
IN: _IO_file_overflow
0x0002dc90:  00160793          addi                    a5,a2,1
0x0002dc94:  f41c              sd                      a5,40(s0)
0x0002dc96:  00960023          sb                      s1,0(a2)
0x0002dc9a:  401c              lw                      a5,0(s0)
0x0002dc9c:  0027f713          andi                    a4,a5,2
0x0002dca0:  e73d              bnez                    a4,110                  # 0x2dd0e

----------------
IN: _IO_file_overflow
0x0002dca2:  2007f793          andi                    a5,a5,512
0x0002dca6:  c781              beqz                    a5,8                    # 0x2dcae

----------------
IN: _IO_file_overflow
0x0002dca8:  47a9              addi                    a5,zero,10
0x0002dcaa:  06f48263          beq                     s1,a5,100               # 0x2dd0e

----------------
IN: _IO_file_overflow
0x0002dcae:  0ff4f513          andi                    a0,s1,255
0x0002dcb2:  6902              ld                      s2,0(sp)
0x0002dcb4:  64a2              ld                      s1,8(sp)
0x0002dcb6:  60e2              ld                      ra,24(sp)
0x0002dcb8:  6442              ld                      s0,16(sp)
0x0002dcba:  6105              addi                    sp,sp,32
0x0002dcbc:  8082              ret                     

----------------
IN: _IO_default_xsputn
0x0002f350:  05650263          beq                     a0,s6,68                # 0x2f394

----------------
IN: _IO_default_xsputn
0x0002f354:  197d              addi                    s2,s2,-1
0x0002f356:  b7c1              j                       -64                     # 0x2f316

----------------
IN: _IO_default_xsputn
0x0002f316:  0289b503          ld                      a0,40(s3)
0x0002f31a:  0309b483          ld                      s1,48(s3)
0x0002f31e:  00957b63          bleu                    s1,a0,22                # 0x2f334

----------------
IN: _IO_file_overflow
0x0002dd0e:  700c              ld                      a1,32(s0)
0x0002dd10:  7410              ld                      a2,40(s0)
0x0002dd12:  8522              mv                      a0,s0
0x0002dd14:  8e0d              sub                     a2,a2,a1
0x0002dd16:  ee4ff0ef          jal                     ra,-2332                # 0x2d3fa

----------------
IN: _IO_do_write
0x0002d400:  1141              addi                    sp,sp,-16
0x0002d402:  e022              sd                      s0,0(sp)
0x0002d404:  e406              sd                      ra,8(sp)
0x0002d406:  8432              mv                      s0,a2
0x0002d408:  a9fff0ef          jal                     ra,-1378                # 0x2cea6

----------------
IN: new_do_write
0x0002cea6:  411c              lw                      a5,0(a0)
0x0002cea8:  7179              addi                    sp,sp,-48
0x0002ceaa:  f022              sd                      s0,32(sp)
0x0002ceac:  e84a              sd                      s2,16(sp)
0x0002ceae:  e44e              sd                      s3,8(sp)
0x0002ceb0:  e052              sd                      s4,0(sp)
0x0002ceb2:  f406              sd                      ra,40(sp)
0x0002ceb4:  ec26              sd                      s1,24(sp)
0x0002ceb6:  03379713          slli                    a4,a5,51
0x0002ceba:  842a              mv                      s0,a0
0x0002cebc:  89ae              mv                      s3,a1
0x0002cebe:  8a32              mv                      s4,a2
0x0002cec0:  0004d917          auipc                   s2,77                   # 0x79ec0
0x0002cec4:  2c090913          addi                    s2,s2,704
0x0002cec8:  04075b63          bgez                    a4,86                   # 0x2cf1e

----------------
IN: new_do_write
0x0002cf1e:  6918              ld                      a4,16(a0)
0x0002cf20:  710c              ld                      a1,32(a0)
0x0002cf22:  fab707e3          beq                     a4,a1,-82               # 0x2ced0

----------------
IN: new_do_write
0x0002ced0:  6c64              ld                      s1,216(s0)
0x0002ced2:  6785              lui                     a5,1
0x0002ced4:  92f78793          addi                    a5,a5,-1745
0x0002ced8:  41248933          sub                     s2,s1,s2
0x0002cedc:  0b27e363          bgtu                    s2,a5,166               # 0x2cf82

----------------
IN: new_do_write
0x0002cee0:  7cbc              ld                      a5,120(s1)
0x0002cee2:  8652              mv                      a2,s4
0x0002cee4:  85ce              mv                      a1,s3
0x0002cee6:  8522              mv                      a0,s0
0x0002cee8:  9782              jalr                    ra,a5,0

----------------
IN: _IO_new_file_write
0x0002e36c:  7179              addi                    sp,sp,-48
0x0002e36e:  e84a              sd                      s2,16(sp)
0x0002e370:  f406              sd                      ra,40(sp)
0x0002e372:  892a              mv                      s2,a0
0x0002e374:  06c05863          blez                    a2,112                  # 0x2e3e4

----------------
IN: _IO_new_file_write
0x0002e378:  f022              sd                      s0,32(sp)
0x0002e37a:  ec26              sd                      s1,24(sp)
0x0002e37c:  e44e              sd                      s3,8(sp)
0x0002e37e:  84ae              mv                      s1,a1
0x0002e380:  89b2              mv                      s3,a2
0x0002e382:  8432              mv                      s0,a2
0x0002e384:  07492783          lw                      a5,116(s2)
0x0002e388:  07092503          lw                      a0,112(s2)
0x0002e38c:  8622              mv                      a2,s0
0x0002e38e:  8b89              andi                    a5,a5,2
0x0002e390:  85a6              mv                      a1,s1
0x0002e392:  eb8d              bnez                    a5,50                   # 0x2e3c4

----------------
IN: _IO_new_file_write
0x0002e394:  608060ef          jal                     ra,26120                # 0x3499c

----------------
IN: __write
0x0003499c:  8a022783          lw                      a5,-1888(tp)
0x000349a0:  1101              addi                    sp,sp,-32
0x000349a2:  ec06              sd                      ra,24(sp)
0x000349a4:  e822              sd                      s0,16(sp)
0x000349a6:  ef91              bnez                    a5,28                   # 0x349c2

----------------
IN: __write
0x000349a8:  04000893          addi                    a7,zero,64
0x000349ac:  00000073          ecall                   

----------------
IN: __write
0x000349b0:  77fd              lui                     a5,-1
0x000349b2:  842a              mv                      s0,a0
0x000349b4:  04a7e463          bgtu                    a0,a5,72                # 0x349fc

----------------
IN: __write
0x000349b8:  60e2              ld                      ra,24(sp)
0x000349ba:  8522              mv                      a0,s0
0x000349bc:  6442              ld                      s0,16(sp)
0x000349be:  6105              addi                    sp,sp,32
0x000349c0:  8082              ret                     

----------------
IN: _IO_new_file_write
0x0002e398:  02054a63          bltz                    a0,52                   # 0x2e3cc

----------------
IN: _IO_new_file_write
0x0002e39c:  8c09              sub                     s0,s0,a0
0x0002e39e:  94aa              add                     s1,s1,a0
0x0002e3a0:  fe8042e3          bgtz                    s0,-28                  # 0x2e384

----------------
IN: _IO_new_file_write
0x0002e3a4:  40898533          sub                     a0,s3,s0
0x0002e3a8:  64e2              ld                      s1,24(sp)
0x0002e3aa:  7402              ld                      s0,32(sp)
0x0002e3ac:  69a2              ld                      s3,8(sp)
0x0002e3ae:  09093783          ld                      a5,144(s2)
0x0002e3b2:  0007c563          bltz                    a5,10                   # 0x2e3bc

----------------
IN: _IO_new_file_write
0x0002e3bc:  70a2              ld                      ra,40(sp)
0x0002e3be:  6942              ld                      s2,16(sp)
0x0002e3c0:  6145              addi                    sp,sp,48
0x0002e3c2:  8082              ret                     

----------------
IN: new_do_write
0x0002ceea:  08045783          lhu                     a5,128(s0)
0x0002ceee:  84aa              mv                      s1,a0
0x0002cef0:  c391              beqz                    a5,4                    # 0x2cef4

----------------
IN: new_do_write
0x0002cef4:  7c1c              ld                      a5,56(s0)
0x0002cef6:  0c042703          lw                      a4,192(s0)
0x0002cefa:  ec1c              sd                      a5,24(s0)
0x0002cefc:  e41c              sd                      a5,8(s0)
0x0002cefe:  e81c              sd                      a5,16(s0)
0x0002cf00:  f41c              sd                      a5,40(s0)
0x0002cf02:  f01c              sd                      a5,32(s0)
0x0002cf04:  04e05463          blez                    a4,72                   # 0x2cf4c

----------------
IN: new_do_write
0x0002cf4c:  4018              lw                      a4,0(s0)
0x0002cf4e:  20277713          andi                    a4,a4,514
0x0002cf52:  ff45              bnez                    a4,-72                  # 0x2cf0a

----------------
IN: new_do_write
0x0002cf0a:  f81c              sd                      a5,48(s0)
0x0002cf0c:  70a2              ld                      ra,40(sp)
0x0002cf0e:  7402              ld                      s0,32(sp)
0x0002cf10:  6942              ld                      s2,16(sp)
0x0002cf12:  69a2              ld                      s3,8(sp)
0x0002cf14:  6a02              ld                      s4,0(sp)
0x0002cf16:  8526              mv                      a0,s1
0x0002cf18:  64e2              ld                      s1,24(sp)
0x0002cf1a:  6145              addi                    sp,sp,48
0x0002cf1c:  8082              ret                     

----------------
IN: _IO_do_write
0x0002d40c:  60a2              ld                      ra,8(sp)
0x0002d40e:  40a40533          sub                     a0,s0,a0
0x0002d412:  6402              ld                      s0,0(sp)
0x0002d414:  00a03533          snez                    a0,a0
0x0002d418:  40a0053b          negw                    a0,a0
0x0002d41c:  0141              addi                    sp,sp,16
0x0002d41e:  8082              ret                     

----------------
IN: _IO_file_overflow
0x0002dd1a:  57fd              addi                    a5,zero,-1
0x0002dd1c:  f8f519e3          bne                     a0,a5,-110              # 0x2dcae

----------------
IN: _IO_default_xsputn
0x0002f398:  60a6              ld                      ra,72(sp)
0x0002f39a:  6406              ld                      s0,64(sp)
0x0002f39c:  74e2              ld                      s1,56(sp)
0x0002f39e:  7942              ld                      s2,48(sp)
0x0002f3a0:  79a2              ld                      s3,40(sp)
0x0002f3a2:  6ae2              ld                      s5,24(sp)
0x0002f3a4:  6b42              ld                      s6,16(sp)
0x0002f3a6:  6ba2              ld                      s7,8(sp)
0x0002f3a8:  6c02              ld                      s8,0(sp)
0x0002f3aa:  8552              mv                      a0,s4
0x0002f3ac:  7a02              ld                      s4,32(sp)
0x0002f3ae:  6161              addi                    sp,sp,80
0x0002f3b0:  8082              ret                     

----------------
IN: _IO_new_file_xsputn
0x0002e4d2:  41250533          sub                     a0,a0,s2
0x0002e4d6:  954e              add                     a0,a0,s3
0x0002e4d8:  a021              j                       8                       # 0x2e4e0

----------------
IN: _IO_new_file_xsputn
0x0002e4e0:  70a2              ld                      ra,40(sp)
0x0002e4e2:  7402              ld                      s0,32(sp)
0x0002e4e4:  64e2              ld                      s1,24(sp)
0x0002e4e6:  6942              ld                      s2,16(sp)
0x0002e4e8:  69a2              ld                      s3,8(sp)
0x0002e4ea:  6a02              ld                      s4,0(sp)
0x0002e4ec:  6145              addi                    sp,sp,48
0x0002e4ee:  8082              ret                     

----------------
IN: __printf_buffer_flush_to_file
0x00029512:  02950163          beq                     a0,s1,34                # 0x29534

----------------
IN: __printf_buffer_flush_to_file
0x00029534:  741c              ld                      a5,40(s0)
0x00029536:  7798              ld                      a4,40(a5)
0x00029538:  7b9c              ld                      a5,48(a5)
0x0002953a:  00f77463          bleu                    a5,a4,8                 # 0x29542

----------------
IN: __printf_buffer_flush_to_file
0x00029542:  01243823          sd                      s2,16(s0)
0x00029546:  01343423          sd                      s3,8(s0)
0x0002954a:  01343023          sd                      s3,0(s0)
0x0002954e:  70a2              ld                      ra,40(sp)
0x00029550:  7402              ld                      s0,32(sp)
0x00029552:  64e2              ld                      s1,24(sp)
0x00029554:  69a2              ld                      s3,8(sp)
0x00029556:  6a02              ld                      s4,0(sp)
0x00029558:  6942              ld                      s2,16(sp)
0x0002955a:  6145              addi                    sp,sp,48
0x0002955c:  8082              ret                     

----------------
IN: __printf_buffer_to_file_done
0x000295be:  8522              mv                      a0,s0
0x000295c0:  6402              ld                      s0,0(sp)
0x000295c2:  60a2              ld                      ra,8(sp)
0x000295c4:  0141              addi                    sp,sp,16
0x000295c6:  ce1ff06f          j                       -800                    # 0x292a6

----------------
IN: __printf_buffer_done
0x000292a6:  511c              lw                      a5,32(a0)
0x000292a8:  cb8d              beqz                    a5,50                   # 0x292da

----------------
IN: __printf_buffer_done
0x000292aa:  6518              ld                      a4,8(a0)
0x000292ac:  6110              ld                      a2,0(a0)
0x000292ae:  6d1c              ld                      a5,24(a0)
0x000292b0:  4681              mv                      a3,zero
0x000292b2:  8f11              sub                     a4,a4,a2
0x000292b4:  97ba              add                     a5,a5,a4
0x000292b6:  0207c763          bltz                    a5,46                   # 0x292e4

----------------
IN: __printf_buffer_done
0x000292ba:  02e7e563          bgtu                    a4,a5,42                # 0x292e4

----------------
IN: __printf_buffer_done
0x000292be:  0007851b          sext.w                  a0,a5
0x000292c2:  00a79e63          bne                     a5,a0,28                # 0x292de

----------------
IN: __printf_buffer_done
0x000292c6:  e291              bnez                    a3,4                    # 0x292ca

----------------
IN: __printf_buffer_done
0x000292c8:  8082              ret                     

----------------
IN: __vfprintf_internal
0x00014274:  84aa              mv                      s1,a0
0x00014276:  bf35              j                       -196                    # 0x141b2

----------------
IN: __vfprintf_internal
0x000141b2:  60b2              ld                      ra,264(sp)
0x000141b4:  6412              ld                      s0,256(sp)
0x000141b6:  794e              ld                      s2,240(sp)
0x000141b8:  79ae              ld                      s3,232(sp)
0x000141ba:  7a0e              ld                      s4,224(sp)
0x000141bc:  8526              mv                      a0,s1
0x000141be:  74ee              ld                      s1,248(sp)
0x000141c0:  6151              addi                    sp,sp,272
0x000141c2:  8082              ret                     

----------------
IN: _IO_printf
0x00010f14:  60e2              ld                      ra,24(sp)
0x00010f16:  6125              addi                    sp,sp,96
0x00010f18:  8082              ret                     

----------------
IN: main
0x0001051c:  60a2              ld                      ra,8(sp)
0x0001051e:  4501              mv                      a0,zero
0x00010520:  0141              addi                    sp,sp,16
0x00010522:  8082              ret                     

----------------
IN: __libc_start_call_main
0x0001068c:  045000ef          jal                     ra,2116                 # 0x10ed0

----------------
IN: exit
0x00010ed0:  4685              addi                    a3,zero,1
0x00010ed2:  1141              addi                    sp,sp,-16
0x00010ed4:  8636              mv                      a2,a3
0x00010ed6:  0006a597          auipc                   a1,106                  # 0x7aed6
0x00010eda:  13258593          addi                    a1,a1,306
0x00010ede:  e406              sd                      ra,8(sp)
0x00010ee0:  e39ff0ef          jal                     ra,-456                 # 0x10d18

----------------
IN: __run_exit_handlers
0x00010d18:  7119              addi                    sp,sp,-128
0x00010d1a:  fc5e              sd                      s7,56(sp)
0x00010d1c:  f862              sd                      s8,48(sp)
0x00010d1e:  fc86              sd                      ra,120(sp)
0x00010d20:  f8a2              sd                      s0,112(sp)
0x00010d22:  f4a6              sd                      s1,104(sp)
0x00010d24:  f0ca              sd                      s2,96(sp)
0x00010d26:  ecce              sd                      s3,88(sp)
0x00010d28:  e8d2              sd                      s4,80(sp)
0x00010d2a:  e4d6              sd                      s5,72(sp)
0x00010d2c:  e0da              sd                      s6,64(sp)
0x00010d2e:  f466              sd                      s9,40(sp)
0x00010d30:  f06a              sd                      s10,32(sp)
0x00010d32:  ec6e              sd                      s11,24(sp)
0x00010d34:  e432              sd                      a2,8(sp)
0x00010d36:  8baa              mv                      s7,a0
0x00010d38:  8c2e              mv                      s8,a1
0x00010d3a:  c699              beqz                    a3,14                   # 0x10d48

----------------
IN: __run_exit_handlers
0x00010d3c:  0006a797          auipc                   a5,106                  # 0x7ad3c
0x00010d40:  2647b783          ld                      a5,612(a5)
0x00010d44:  c391              beqz                    a5,4                    # 0x10d48

----------------
IN: __run_exit_handlers
0x00010d48:  0006a417          auipc                   s0,106                  # 0x7ad48
0x00010d4c:  fc843403          ld                      s0,-56(s0)
0x00010d50:  4705              addi                    a4,zero,1
0x00010d52:  140427af          lr.w.aq                 a5,(s0)
0x00010d56:  e781              bnez                    a5,8                    # 0x10d5e

----------------
IN: __run_exit_handlers
0x00010d58:  18e426af          sc.w                    a3,a4,(s0)
0x00010d5c:  fafd              bnez                    a3,-10                  # 0x10d52

----------------
IN: __run_exit_handlers
0x00010d5e:  2781              sext.w                  a5,a5
0x00010d60:  16079463          bnez                    a5,360                  # 0x10ec8

----------------
IN: __run_exit_handlers
0x00010d64:  000c3d83          ld                      s11,0(s8)
0x00010d68:  060d8863          beqz                    s11,112                 # 0x10dd8

----------------
IN: __run_exit_handlers
0x00010d6c:  4a05              addi                    s4,zero,1
0x00010d6e:  8ad2              mv                      s5,s4
0x00010d70:  0009c497          auipc                   s1,156                  # 0xacd70
0x00010d74:  3d048493          addi                    s1,s1,976
0x00010d78:  490d              addi                    s2,zero,3
0x00010d7a:  4991              addi                    s3,zero,4
0x00010d7c:  4b09              addi                    s6,zero,2
0x00010d7e:  008db783          ld                      a5,8(s11)
0x00010d82:  c7f5              beqz                    a5,236                  # 0x10e6e

----------------
IN: __run_exit_handlers
0x00010d84:  17fd              addi                    a5,a5,-1
0x00010d86:  00579713          slli                    a4,a5,5
0x00010d8a:  00fdb423          sd                      a5,8(s11)
0x00010d8e:  00ed87b3          add                     a5,s11,a4
0x00010d92:  6b98              ld                      a4,16(a5)
0x00010d94:  0004bd03          ld                      s10,0(s1)
0x00010d98:  0b270363          beq                     a4,s2,166               # 0x10e3e

----------------
IN: __run_exit_handlers
0x00010d9c:  07370463          beq                     a4,s3,104               # 0x10e04

----------------
IN: __run_exit_handlers
0x00010e04:  0187bc83          ld                      s9,24(a5)
0x00010e08:  7394              ld                      a3,32(a5)
0x00010e0a:  0007b823          sd                      zero,16(a5)
0x00010e0e:  4781              mv                      a5,zero
0x00010e10:  0af427af          amoswap.w.rl            a5,a5,(s0)
0x00010e14:  2781              sext.w                  a5,a5
0x00010e16:  08fa4963          bgt                     a5,s4,146               # 0x10ea8

----------------
IN: __run_exit_handlers
0x00010e1a:  8536              mv                      a0,a3
0x00010e1c:  85de              mv                      a1,s7
0x00010e1e:  9c82              jalr                    ra,s9,0

----------------
IN: call_fini
0x0001061e:  1101              addi                    sp,sp,-32
0x00010620:  e822              sd                      s0,16(sp)
0x00010622:  00067797          auipc                   a5,103                  # 0x77622
0x00010626:  db678793          addi                    a5,a5,-586
0x0001062a:  00067417          auipc                   s0,103                  # 0x7762a
0x0001062e:  dbe40413          addi                    s0,s0,-578
0x00010632:  8c1d              sub                     s0,s0,a5
0x00010634:  e426              sd                      s1,8(sp)
0x00010636:  ec06              sd                      ra,24(sp)
0x00010638:  40345493          srai                    s1,s0,3
0x0001063c:  c881              beqz                    s1,16                   # 0x1064c

----------------
IN: call_fini
0x0001063e:  1461              addi                    s0,s0,-8
0x00010640:  943e              add                     s0,s0,a5
0x00010642:  601c              ld                      a5,0(s0)
0x00010644:  14fd              addi                    s1,s1,-1
0x00010646:  1461              addi                    s0,s0,-8
0x00010648:  9782              jalr                    ra,a5,0

----------------
IN: release_registered_frames
0x0001043c:  1141              addi                    sp,sp,-16
0x0001043e:  000a2517          auipc                   a0,162                  # 0xb243e
0x00010442:  82a50513          addi                    a0,a0,-2006
0x00010446:  e406              sd                      ra,8(sp)
0x00010448:  fc3ff0ef          jal                     ra,-62                  # 0x1040a

----------------
IN: btree_destroy
0x0001040a:  1101              addi                    sp,sp,-32
0x0001040c:  e426              sd                      s1,8(sp)
0x0001040e:  ec06              sd                      ra,24(sp)
0x00010410:  e822              sd                      s0,16(sp)
0x00010412:  84aa              mv                      s1,a0
0x00010414:  4581              mv                      a1,zero
0x00010416:  0eb535af          amoswap.d.aq.rl         a1,a1,(a0)
0x0001041a:  ed91              bnez                    a1,28                   # 0x10436

----------------
IN: btree_destroy
0x00010436:  f65ff0ef          jal                     ra,-156                 # 0x1039a

----------------
IN: btree_release_tree_recursively
0x0001039a:  1101              addi                    sp,sp,-32
0x0001039c:  e822              sd                      s0,16(sp)
0x0001039e:  e04a              sd                      s2,0(sp)
0x000103a0:  842e              mv                      s0,a1
0x000103a2:  892a              mv                      s2,a0
0x000103a4:  852e              mv                      a0,a1
0x000103a6:  e426              sd                      s1,8(sp)
0x000103a8:  ec06              sd                      ra,24(sp)
0x000103aa:  6c03a0ef          jal                     ra,239296               # 0x4aa6a

----------------
IN: btree_release_tree_recursively
0x000103ae:  4444              lw                      s1,12(s0)
0x000103b0:  e085              bnez                    s1,32                   # 0x103d0

----------------
IN: btree_release_tree_recursively
0x000103d0:  4789              addi                    a5,zero,2
0x000103d2:  c45c              sw                      a5,12(s0)
0x000103d4:  00890713          addi                    a4,s2,8
0x000103d8:  0330000f          fence                   rw,rw
0x000103dc:  631c              ld                      a5,0(a4)
0x000103de:  0230000f          fence                   r,rw
0x000103e2:  ec1c              sd                      a5,24(s0)
0x000103e4:  160736af          lr.d.aq.rl              a3,(a4)
0x000103e8:  00f69563          bne                     a3,a5,10                # 0x103f2

----------------
IN: btree_release_tree_recursively
0x000103ec:  1a87362f          sc.d.rl                 a2,s0,(a4)
0x000103f0:  fa75              bnez                    a2,-12                  # 0x103e4

----------------
IN: btree_release_tree_recursively
0x000103f2:  40f68633          sub                     a2,a3,a5
0x000103f6:  87b6              mv                      a5,a3
0x000103f8:  f66d              bnez                    a2,-22                  # 0x103e2

----------------
IN: btree_release_tree_recursively
0x000103fa:  8522              mv                      a0,s0
0x000103fc:  6442              ld                      s0,16(sp)
0x000103fe:  60e2              ld                      ra,24(sp)
0x00010400:  64a2              ld                      s1,8(sp)
0x00010402:  6902              ld                      s2,0(sp)
0x00010404:  6105              addi                    sp,sp,32
0x00010406:  3a13a06f          j                       240544                  # 0x4afa6

----------------
IN: btree_destroy
0x0001043a:  b7cd              j                       -30                     # 0x1041c

----------------
IN: btree_destroy
0x0001041c:  6480              ld                      s0,8(s1)
0x0001041e:  c419              beqz                    s0,14                   # 0x1042c

----------------
IN: btree_destroy
0x00010420:  8522              mv                      a0,s0
0x00010422:  6c00              ld                      s0,24(s0)
0x00010424:  56c080ef          jal                     ra,34156                # 0x18990

----------------
IN: free
0x00018990:  c54d              beqz                    a0,170                  # 0x18a3a

----------------
IN: free
0x00018992:  7179              addi                    sp,sp,-48
0x00018994:  ff853783          ld                      a5,-8(a0)
0x00018998:  f026              sd                      s1,32(sp)
0x0001899a:  00062497          auipc                   s1,98                   # 0x7a99a
0x0001899e:  4464b483          ld                      s1,1094(s1)
0x000189a2:  ec4a              sd                      s2,24(sp)
0x000189a4:  f406              sd                      ra,40(sp)
0x000189a6:  004486b3          add                     a3,s1,tp
0x000189aa:  0027f713          andi                    a4,a5,2
0x000189ae:  0006a903          lw                      s2,0(a3)
0x000189b2:  ff050593          addi                    a1,a0,-16
0x000189b6:  e331              bnez                    a4,68                   # 0x189fa

----------------
IN: free
0x000189b8:  01820713          addi                    a4,tp,24
0x000189bc:  6714              ld                      a3,8(a4)
0x000189be:  cebd              beqz                    a3,126                  # 0x18a3c

----------------
IN: free
0x000189c0:  8b91              andi                    a5,a5,4
0x000189c2:  00062517          auipc                   a0,98                   # 0x7a9c2
0x000189c6:  70650513          addi                    a0,a0,1798
0x000189ca:  cf89              beqz                    a5,26                   # 0x189e4

----------------
IN: free
0x000189e4:  4601              mv                      a2,zero
0x000189e6:  f1dfd0ef          jal                     ra,-8420                # 0x16902

----------------
IN: _int_free
0x00016902:  6598              ld                      a4,8(a1)
0x00016904:  7139              addi                    sp,sp,-64
0x00016906:  f426              sd                      s1,40(sp)
0x00016908:  ff877493          andi                    s1,a4,-8
0x0001690c:  fc06              sd                      ra,56(sp)
0x0001690e:  f822              sd                      s0,48(sp)
0x00016910:  409007b3          neg                     a5,s1
0x00016914:  1ab7ea63          bgtu                    a1,a5,436               # 0x16ac8

----------------
IN: _int_free
0x00016918:  00f5f793          andi                    a5,a1,15
0x0001691c:  842e              mv                      s0,a1
0x0001691e:  1a079563          bnez                    a5,426                  # 0x16ac8

----------------
IN: _int_free
0x00016922:  47fd              addi                    a5,zero,31
0x00016924:  f04a              sd                      s2,32(sp)
0x00016926:  ec4e              sd                      s3,24(sp)
0x00016928:  1a97fa63          bleu                    s1,a5,436               # 0x16adc

----------------
IN: _int_free
0x0001692c:  00877693          andi                    a3,a4,8
0x00016930:  1a069663          bnez                    a3,428                  # 0x16adc

----------------
IN: _int_free
0x00016934:  01820793          addi                    a5,tp,24
0x00016938:  89b2              mv                      s3,a2
0x0001693a:  6790              ld                      a2,8(a5)
0x0001693c:  892a              mv                      s2,a0
0x0001693e:  ce0d              beqz                    a2,58                   # 0x16978

----------------
IN: _int_free
0x00016940:  00064597          auipc                   a1,100                  # 0x7a940
0x00016944:  6f058593          addi                    a1,a1,1776
0x00016948:  75a8              ld                      a0,104(a1)
0x0001694a:  fef48793          addi                    a5,s1,-17
0x0001694e:  8391              srli                    a5,a5,4
0x00016950:  02a7f463          bleu                    a0,a5,40                # 0x16978

----------------
IN: _int_free
0x00016954:  0009b897          auipc                   a7,155                  # 0xb1954
0x00016958:  c1c8b883          ld                      a7,-996(a7)
0x0001695c:  01843303          ld                      t1,24(s0)
0x00016960:  7da8              ld                      a0,120(a1)
0x00016962:  01040813          addi                    a6,s0,16
0x00016966:  21130f63          beq                     t1,a7,542               # 0x16b84

----------------
IN: _int_free
0x0001696a:  00179693          slli                    a3,a5,1
0x0001696e:  96b2              add                     a3,a3,a2
0x00016970:  0006d583          lhu                     a1,0(a3)
0x00016974:  10a5eb63          bgtu                    a0,a1,278               # 0x16a8a

----------------
IN: _int_free
0x00016a8a:  078e              slli                    a5,a5,3
0x00016a8c:  963e              add                     a2,a2,a5
0x00016a8e:  625c              ld                      a5,128(a2)
0x00016a90:  00c85713          srli                    a4,a6,12
0x00016a94:  01143c23          sd                      a7,24(s0)
0x00016a98:  8fb9              xor                     a5,a5,a4
0x00016a9a:  e81c              sd                      a5,16(s0)
0x00016a9c:  2585              addiw                   a1,a1,1
0x00016a9e:  09063023          sd                      a6,128(a2)
0x00016aa2:  00b69023          sh                      a1,0(a3)
0x00016aa6:  70e2              ld                      ra,56(sp)
0x00016aa8:  7442              ld                      s0,48(sp)
0x00016aaa:  7902              ld                      s2,32(sp)
0x00016aac:  69e2              ld                      s3,24(sp)
0x00016aae:  74a2              ld                      s1,40(sp)
0x00016ab0:  6121              addi                    sp,sp,64
0x00016ab2:  8082              ret                     

----------------
IN: free
0x000189ea:  70a2              ld                      ra,40(sp)
0x000189ec:  9492              add                     s1,s1,tp
0x000189ee:  0124a023          sw                      s2,0(s1)
0x000189f2:  7482              ld                      s1,32(sp)
0x000189f4:  6962              ld                      s2,24(sp)
0x000189f6:  6145              addi                    sp,sp,48
0x000189f8:  8082              ret                     

----------------
IN: btree_destroy
0x00010428:  e480              sd                      s0,8(s1)
0x0001042a:  f87d              bnez                    s0,-10                  # 0x10420

----------------
IN: btree_destroy
0x0001042c:  60e2              ld                      ra,24(sp)
0x0001042e:  6442              ld                      s0,16(sp)
0x00010430:  64a2              ld                      s1,8(sp)
0x00010432:  6105              addi                    sp,sp,32
0x00010434:  8082              ret                     

----------------
IN: release_registered_frames
0x0001044c:  000a2517          auipc                   a0,162                  # 0xb244c
0x00010450:  80450513          addi                    a0,a0,-2044
0x00010454:  fb7ff0ef          jal                     ra,-74                  # 0x1040a

----------------
IN: release_registered_frames
0x00010458:  60a2              ld                      ra,8(sp)
0x0001045a:  4785              addi                    a5,zero,1
0x0001045c:  000a2717          auipc                   a4,162                  # 0xb245c
0x00010460:  82f70223          sb                      a5,-2012(a4)
0x00010464:  0141              addi                    sp,sp,16
0x00010466:  8082              ret                     

----------------
IN: call_fini
0x0001064a:  fce5              bnez                    s1,-8                   # 0x10642

----------------
IN: call_fini
0x00010642:  601c              ld                      a5,0(s0)
0x00010644:  14fd              addi                    s1,s1,-1
0x00010646:  1461              addi                    s0,s0,-8
0x00010648:  9782              jalr                    ra,a5,0

----------------
IN: 
0x000105bc:  1141              addi                    sp,sp,-16
0x000105be:  e022              sd                      s0,0(sp)
0x000105c0:  0007d437          lui                     s0,125
0x000105c4:  8a844783          lbu                     a5,-1880(s0)
0x000105c8:  e406              sd                      ra,8(sp)
0x000105ca:  e38d              bnez                    a5,34                   # 0x105ec

----------------
IN: 
0x000105cc:  fa3ff0ef          jal                     ra,-94                  # 0x1056e

----------------
IN: 
0x0001056e:  0007d537          lui                     a0,125
0x00010572:  0007d737          lui                     a4,125
0x00010576:  8a050793          addi                    a5,a0,-1888
0x0001057a:  8a070713          addi                    a4,a4,-1888
0x0001057e:  00f70863          beq                     a4,a5,16                # 0x1058e

----------------
IN: 
0x0001058e:  8082              ret                     

----------------
IN: 
0x000105d0:  0004c7b7          lui                     a5,76
0x000105d4:  6f478793          addi                    a5,a5,1780
0x000105d8:  c799              beqz                    a5,14                   # 0x105e6

----------------
IN: 
0x000105da:  0006a537          lui                     a0,106
0x000105de:  c1050513          addi                    a0,a0,-1008
0x000105e2:  1123c0ef          jal                     ra,246034               # 0x4c6f4

----------------
IN: __deregister_frame_info
0x0004c6f4:  c509              beqz                    a0,10                   # 0x4c6fe

----------------
IN: __deregister_frame_info
0x0004c6f6:  411c              lw                      a5,0(a0)
0x0004c6f8:  c399              beqz                    a5,6                    # 0x4c6fe

----------------
IN: __deregister_frame_info
0x0004c6fa:  f70ff06f          j                       -2192                   # 0x4be6a

----------------
IN: __deregister_frame_info_bases.part.0
0x0004be6a:  1101              addi                    sp,sp,-32
0x0004be6c:  85aa              mv                      a1,a0
0x0004be6e:  00066517          auipc                   a0,102                  # 0xb1e6e
0x0004be72:  de250513          addi                    a0,a0,-542
0x0004be76:  e822              sd                      s0,16(sp)
0x0004be78:  ec06              sd                      ra,24(sp)
0x0004be7a:  e5cff0ef          jal                     ra,-2468                # 0x4b4d6

----------------
IN: btree_remove
0x0004b4d6:  7159              addi                    sp,sp,-112
0x0004b4d8:  f0a2              sd                      s0,96(sp)
0x0004b4da:  01050413          addi                    s0,a0,16
0x0004b4de:  eca6              sd                      s1,88(sp)
0x0004b4e0:  84aa              mv                      s1,a0
0x0004b4e2:  8522              mv                      a0,s0
0x0004b4e4:  f85a              sd                      s6,48(sp)
0x0004b4e6:  f45e              sd                      s7,40(sp)
0x0004b4e8:  f486              sd                      ra,104(sp)
0x0004b4ea:  8bae              mv                      s7,a1
0x0004b4ec:  d7eff0ef          jal                     ra,-2690                # 0x4aa6a

----------------
IN: btree_remove
0x0004b4f0:  0004bb03          ld                      s6,0(s1)
0x0004b4f4:  540b0e63          beqz                    s6,1372                 # 0x4ba50

----------------
IN: btree_remove
0x0004ba50:  8522              mv                      a0,s0
0x0004ba52:  d54ff0ef          jal                     ra,-2732                # 0x4afa6

----------------
IN: btree_remove
0x0004ba56:  4401              mv                      s0,zero
0x0004ba58:  70a6              ld                      ra,104(sp)
0x0004ba5a:  8522              mv                      a0,s0
0x0004ba5c:  7406              ld                      s0,96(sp)
0x0004ba5e:  64e6              ld                      s1,88(sp)
0x0004ba60:  7b42              ld                      s6,48(sp)
0x0004ba62:  7ba2              ld                      s7,40(sp)
0x0004ba64:  6165              addi                    sp,sp,112
0x0004ba66:  8082              ret                     

----------------
IN: __deregister_frame_info_bases.part.0
0x0004be7e:  842a              mv                      s0,a0
0x0004be80:  c915              beqz                    a0,52                   # 0x4beb4

----------------
IN: __deregister_frame_info_bases.part.0
0x0004beb4:  00066797          auipc                   a5,102                  # 0xb1eb4
0x0004beb8:  dcc7c783          lbu                     a5,-564(a5)
0x0004bebc:  ffe9              bnez                    a5,-38                  # 0x4be96

----------------
IN: __deregister_frame_info_bases.part.0
0x0004be96:  60e2              ld                      ra,24(sp)
0x0004be98:  8522              mv                      a0,s0
0x0004be9a:  6442              ld                      s0,16(sp)
0x0004be9c:  6105              addi                    sp,sp,32
0x0004be9e:  8082              ret                     

----------------
IN: 
0x000105e6:  4785              addi                    a5,zero,1
0x000105e8:  8af40423          sb                      a5,-1880(s0)
0x000105ec:  60a2              ld                      ra,8(sp)
0x000105ee:  6402              ld                      s0,0(sp)
0x000105f0:  0141              addi                    sp,sp,16
0x000105f2:  8082              ret                     

----------------
IN: call_fini
0x0001064c:  60e2              ld                      ra,24(sp)
0x0001064e:  6442              ld                      s0,16(sp)
0x00010650:  64a2              ld                      s1,8(sp)
0x00010652:  6105              addi                    sp,sp,32
0x00010654:  8082              ret                     

----------------
IN: __run_exit_handlers
0x00010e20:  140427af          lr.w.aq                 a5,(s0)
0x00010e24:  e781              bnez                    a5,8                    # 0x10e2c

----------------
IN: __run_exit_handlers
0x00010e26:  1954272f          sc.w                    a4,s5,(s0)
0x00010e2a:  fb7d              bnez                    a4,-10                  # 0x10e20

----------------
IN: __run_exit_handlers
0x00010e2c:  2781              sext.w                  a5,a5
0x00010e2e:  dfd1              beqz                    a5,-100                 # 0x10dca

----------------
IN: __run_exit_handlers
0x00010dca:  609c              ld                      a5,0(s1)
0x00010dcc:  fba789e3          beq                     a5,s10,-78              # 0x10d7e

----------------
IN: __run_exit_handlers
0x00010d7e:  008db783          ld                      a5,8(s11)
0x00010d82:  c7f5              beqz                    a5,236                  # 0x10e6e

----------------
IN: __run_exit_handlers
0x00010e6e:  000db783          ld                      a5,0(s11)
0x00010e72:  00fc3023          sd                      a5,0(s8)
0x00010e76:  d3ad              beqz                    a5,-158                 # 0x10dd8

----------------
IN: __run_exit_handlers
0x00010dd8:  4705              addi                    a4,zero,1
0x00010dda:  0009c797          auipc                   a5,156                  # 0xacdda
0x00010dde:  78e78323          sb                      a4,1926(a5)
0x00010de2:  4781              mv                      a5,zero
0x00010de4:  0af427af          amoswap.w.rl            a5,a5,(s0)
0x00010de8:  2781              sext.w                  a5,a5
0x00010dea:  0cf74863          bgt                     a5,a4,208               # 0x10eba

----------------
IN: __run_exit_handlers
0x00010dee:  67a2              ld                      a5,8(sp)
0x00010df0:  c799              beqz                    a5,14                   # 0x10dfe

----------------
IN: __run_exit_handlers
0x00010df2:  0006a797          auipc                   a5,106                  # 0x7adf2
0x00010df6:  fae7b783          ld                      a5,-82(a5)
0x00010dfa:  c391              beqz                    a5,4                    # 0x10dfe

----------------
IN: __run_exit_handlers
0x00010dfc:  9782              jalr                    ra,a5,0

----------------
IN: _IO_cleanup
0x0002fdca:  7119              addi                    sp,sp,-128
0x0002fdcc:  fc86              sd                      ra,120(sp)
0x0002fdce:  f4a6              sd                      s1,104(sp)
0x0002fdd0:  ecce              sd                      s3,88(sp)
0x0002fdd2:  e4d6              sd                      s5,72(sp)
0x0002fdd4:  f466              sd                      s9,40(sp)
0x0002fdd6:  f8a2              sd                      s0,112(sp)
0x0002fdd8:  b7bff0ef          jal                     ra,-1158                # 0x2f952

----------------
IN: _IO_flush_all
0x0002f952:  7119              addi                    sp,sp,-128
0x0002f954:  fffff797          auipc                   a5,-1                   # 0x2e954
0x0002f958:  ea478793          addi                    a5,a5,-348
0x0002f95c:  850a              mv                      a0,sp
0x0002f95e:  f4a6              sd                      s1,104(sp)
0x0002f960:  ecce              sd                      s3,88(sp)
0x0002f962:  e0da              sd                      s6,64(sp)
0x0002f964:  f06a              sd                      s10,32(sp)
0x0002f966:  e03e              sd                      a5,0(sp)
0x0002f968:  fc86              sd                      ra,120(sp)
0x0002f96a:  f8a2              sd                      s0,112(sp)
0x0002f96c:  e402              sd                      zero,8(sp)
0x0002f96e:  c3ce50ef          jal                     ra,-109508              # 0x14daa

----------------
IN: __libc_cleanup_push_defer
0x00014daa:  99823783          ld                      a5,-1640(tp)
0x00014dae:  8712              mv                      a4,tp
0x00014db0:  9a820613          addi                    a2,tp,-1624
0x00014db4:  ed1c              sd                      a5,24(a0)
0x00014db6:  421c              lw                      a5,0(a2)
0x00014db8:  0027f693          andi                    a3,a5,2
0x00014dbc:  2781              sext.w                  a5,a5
0x00014dbe:  ea81              bnez                    a3,16                   # 0x14dce

----------------
IN: __libc_cleanup_push_defer
0x00014dc0:  4017d79b          sraiw                   a5,a5,1
0x00014dc4:  8b85              andi                    a5,a5,1
0x00014dc6:  c91c              sw                      a5,16(a0)
0x00014dc8:  98a73c23          sd                      a0,-1640(a4)
0x00014dcc:  8082              ret                     

----------------
IN: _IO_flush_all
0x0002f972:  8a022983          lw                      s3,-1888(tp)
0x0002f976:  00082d17          auipc                   s10,130                 # 0xb1976
0x0002f97a:  00ad0d13          addi                    s10,s10,10
0x0002f97e:  010d3783          ld                      a5,16(s10)
0x0002f982:  8b0a              mv                      s6,sp
0x0002f984:  8a020493          addi                    s1,tp,-1888
0x0002f988:  00099463          bnez                    s3,8                    # 0x2f990

----------------
IN: _IO_flush_all
0x0002f98c:  16078863          beqz                    a5,368                  # 0x2fafc

----------------
IN: _IO_flush_all
0x0002fafc:  0004d417          auipc                   s0,77                   # 0x7cafc
0x0002fb00:  81443403          ld                      s0,-2028(s0)
0x0002fb04:  4785              addi                    a5,zero,1
0x0002fb06:  009d3823          sd                      s1,16(s10)
0x0002fb0a:  00fd2423          sw                      a5,8(s10)
0x0002fb0e:  ea0417e3          bnez                    s0,-338                 # 0x2f9bc

----------------
IN: _IO_flush_all
0x0002f9bc:  6485              lui                     s1,1
0x0002f9be:  f0ca              sd                      s2,96(sp)
0x0002f9c0:  e8d2              sd                      s4,80(sp)
0x0002f9c2:  e4d6              sd                      s5,72(sp)
0x0002f9c4:  fc5e              sd                      s7,56(sp)
0x0002f9c6:  f466              sd                      s9,40(sp)
0x0002f9c8:  f862              sd                      s8,48(sp)
0x0002f9ca:  92f48493          addi                    s1,s1,-1745
0x0002f9ce:  4981              mv                      s3,zero
0x0002f9d0:  6ca1              lui                     s9,8
0x0002f9d2:  4a85              addi                    s5,zero,1
0x0002f9d4:  0004aa17          auipc                   s4,74                   # 0x799d4
0x0002f9d8:  7aca0a13          addi                    s4,s4,1964
0x0002f9dc:  597d              addi                    s2,zero,-1
0x0002f9de:  4b85              addi                    s7,zero,1
0x0002f9e0:  401c              lw                      a5,0(s0)
0x0002f9e2:  008d3023          sd                      s0,0(s10)
0x0002f9e6:  0197f7b3          and                     a5,a5,s9
0x0002f9ea:  e79d              bnez                    a5,46                   # 0x2fa18

----------------
IN: _IO_flush_all
0x0002f9ec:  6448              ld                      a0,136(s0)
0x0002f9ee:  8a022703          lw                      a4,-1888(tp)
0x0002f9f2:  8a020c13          addi                    s8,tp,-1888
0x0002f9f6:  651c              ld                      a5,8(a0)
0x0002f9f8:  e311              bnez                    a4,4                    # 0x2f9fc

----------------
IN: _IO_flush_all
0x0002f9fa:  cbc5              beqz                    a5,176                  # 0x2faaa

----------------
IN: _IO_flush_all
0x0002faaa:  4785              addi                    a5,zero,1
0x0002faac:  c11c              sw                      a5,0(a0)
0x0002faae:  0c042783          lw                      a5,192(s0)
0x0002fab2:  01853423          sd                      s8,8(a0)
0x0002fab6:  f6f045e3          bgtz                    a5,-150                 # 0x2fa20

----------------
IN: _IO_flush_all
0x0002faba:  7418              ld                      a4,40(s0)
0x0002fabc:  701c              ld                      a5,32(s0)
0x0002fabe:  f8e7f4e3          bleu                    a4,a5,-120              # 0x2fa46

----------------
IN: _IO_flush_all
0x0002fa46:  401c              lw                      a5,0(s0)
0x0002fa48:  0197f7b3          and                     a5,a5,s9
0x0002fa4c:  eb99              bnez                    a5,22                   # 0x2fa62

----------------
IN: _IO_flush_all
0x0002fa4e:  6448              ld                      a0,136(s0)
0x0002fa50:  8a022703          lw                      a4,-1888(tp)
0x0002fa54:  4154              lw                      a3,4(a0)
0x0002fa56:  e359              bnez                    a4,134                  # 0x2fadc

----------------
IN: _IO_flush_all
0x0002fa58:  eeb5              bnez                    a3,124                  # 0x2fad4

----------------
IN: _IO_flush_all
0x0002fa5a:  00053423          sd                      zero,8(a0)
0x0002fa5e:  00052023          sw                      zero,0(a0)
0x0002fa62:  7420              ld                      s0,104(s0)
0x0002fa64:  00082797          auipc                   a5,130                  # 0xb1a64
0x0002fa68:  f007be23          sd                      zero,-228(a5)
0x0002fa6c:  f835              bnez                    s0,-140                 # 0x2f9e0

----------------
IN: _IO_flush_all
0x0002f9e0:  401c              lw                      a5,0(s0)
0x0002f9e2:  008d3023          sd                      s0,0(s10)
0x0002f9e6:  0197f7b3          and                     a5,a5,s9
0x0002f9ea:  e79d              bnez                    a5,46                   # 0x2fa18

----------------
IN: _IO_flush_all
0x0002fa6e:  7906              ld                      s2,96(sp)
0x0002fa70:  6a46              ld                      s4,80(sp)
0x0002fa72:  6aa6              ld                      s5,72(sp)
0x0002fa74:  7be2              ld                      s7,56(sp)
0x0002fa76:  7c42              ld                      s8,48(sp)
0x0002fa78:  7ca2              ld                      s9,40(sp)
0x0002fa7a:  8a022783          lw                      a5,-1888(tp)
0x0002fa7e:  cbd1              beqz                    a5,148                  # 0x2fb12

----------------
IN: _IO_flush_all
0x0002fb12:  00082697          auipc                   a3,130                  # 0xb1b12
0x0002fb16:  e7a6a683          lw                      a3,-390(a3)
0x0002fb1a:  faa5              bnez                    a3,-144                 # 0x2fa8a

----------------
IN: _IO_flush_all
0x0002fb1c:  00082797          auipc                   a5,130                  # 0xb1b1c
0x0002fb20:  e607ba23          sd                      zero,-396(a5)
0x0002fb24:  00082797          auipc                   a5,130                  # 0xb1b24
0x0002fb28:  e607a223          sw                      zero,-412(a5)
0x0002fb2c:  b79d              j                       -154                    # 0x2fa92

----------------
IN: _IO_flush_all
0x0002fa92:  855a              mv                      a0,s6
0x0002fa94:  b66e50ef          jal                     ra,-109722              # 0x14dfa

----------------
IN: __libc_cleanup_pop_restore
0x00014dfa:  6d18              ld                      a4,24(a0)
0x00014dfc:  9a820593          addi                    a1,tp,-1624
0x00014e00:  98e23c23          sd                      a4,-1640(tp)
0x00014e04:  4198              lw                      a4,0(a1)
0x00014e06:  4910              lw                      a2,16(a0)
0x00014e08:  ca15              beqz                    a2,52                   # 0x14e3c

----------------
IN: __libc_cleanup_pop_restore
0x00014e3c:  8082              ret                     

----------------
IN: _IO_flush_all
0x0002fa98:  70e6              ld                      ra,120(sp)
0x0002fa9a:  7446              ld                      s0,112(sp)
0x0002fa9c:  74a6              ld                      s1,104(sp)
0x0002fa9e:  6b06              ld                      s6,64(sp)
0x0002faa0:  7d02              ld                      s10,32(sp)
0x0002faa2:  854e              mv                      a0,s3
0x0002faa4:  69e6              ld                      s3,88(sp)
0x0002faa6:  6109              addi                    sp,sp,128
0x0002faa8:  8082              ret                     

----------------
IN: _IO_cleanup
0x0002fddc:  fffff797          auipc                   a5,-1                   # 0x2eddc
0x0002fde0:  a1c78793          addi                    a5,a5,-1508
0x0002fde4:  89aa              mv                      s3,a0
0x0002fde6:  850a              mv                      a0,sp
0x0002fde8:  e03e              sd                      a5,0(sp)
0x0002fdea:  e402              sd                      zero,8(sp)
0x0002fdec:  fbfe40ef          jal                     ra,-110658              # 0x14daa

----------------
IN: _IO_cleanup
0x0002fdf0:  8a022703          lw                      a4,-1888(tp)
0x0002fdf4:  00082c97          auipc                   s9,130                  # 0xb1df4
0x0002fdf8:  b8cc8c93          addi                    s9,s9,-1140
0x0002fdfc:  010cb783          ld                      a5,16(s9)
0x0002fe00:  8a8a              mv                      s5,sp
0x0002fe02:  8a020493          addi                    s1,tp,-1888
0x0002fe06:  e319              bnez                    a4,6                    # 0x2fe0c

----------------
IN: _IO_cleanup
0x0002fe08:  18078d63          beqz                    a5,410                  # 0x2ffa2

----------------
IN: _IO_cleanup
0x0002ffa2:  0004c417          auipc                   s0,76                   # 0x7bfa2
0x0002ffa6:  36e43403          ld                      s0,878(s0)
0x0002ffaa:  4785              addi                    a5,zero,1
0x0002ffac:  009cb823          sd                      s1,16(s9)
0x0002ffb0:  00fca423          sw                      a5,8(s9)
0x0002ffb4:  e80411e3          bnez                    s0,-382                 # 0x2fe36

----------------
IN: _IO_cleanup
0x0002fe36:  f0ca              sd                      s2,96(sp)
0x0002fe38:  fc5e              sd                      s7,56(sp)
0x0002fe3a:  6905              lui                     s2,1
0x0002fe3c:  4b85              addi                    s7,zero,1
0x0002fe3e:  e8d2              sd                      s4,80(sp)
0x0002fe40:  e0da              sd                      s6,64(sp)
0x0002fe42:  f862              sd                      s8,48(sp)
0x0002fe44:  f06a              sd                      s10,32(sp)
0x0002fe46:  8a5e              mv                      s4,s7
0x0002fe48:  92f90913          addi                    s2,s2,-1745
0x0002fe4c:  6c21              lui                     s8,8
0x0002fe4e:  5d7d              addi                    s10,zero,-1
0x0002fe50:  0004ab17          auipc                   s6,74                   # 0x79e50
0x0002fe54:  330b0b13          addi                    s6,s6,816
0x0002fe58:  401c              lw                      a5,0(s0)
0x0002fe5a:  008cb023          sd                      s0,0(s9)
0x0002fe5e:  0187f733          and                     a4,a5,s8
0x0002fe62:  c771              beqz                    a4,204                  # 0x2ff2e

----------------
IN: _IO_cleanup
0x0002ff2e:  6448              ld                      a0,136(s0)
0x0002ff30:  8a022683          lw                      a3,-1888(tp)
0x0002ff34:  8a020493          addi                    s1,tp,-1888
0x0002ff38:  6518              ld                      a4,8(a0)
0x0002ff3a:  e291              bnez                    a3,4                    # 0x2ff3e

----------------
IN: _IO_cleanup
0x0002ff3c:  c70d              beqz                    a4,42                   # 0x2ff66

----------------
IN: _IO_cleanup
0x0002ff66:  4705              addi                    a4,zero,1
0x0002ff68:  e504              sd                      s1,8(a0)
0x0002ff6a:  c118              sw                      a4,0(a0)
0x0002ff6c:  0027f713          andi                    a4,a5,2
0x0002ff70:  d77d              beqz                    a4,-18                  # 0x2ff5e

----------------
IN: _IO_cleanup
0x0002ff72:  57fd              addi                    a5,zero,-1
0x0002ff74:  0cf42023          sw                      a5,192(s0)
0x0002ff78:  b799              j                       -186                    # 0x2febe

----------------
IN: _IO_cleanup
0x0002febe:  8a022703          lw                      a4,-1888(tp)
0x0002fec2:  4154              lw                      a3,4(a0)
0x0002fec4:  ef5d              bnez                    a4,190                  # 0x2ff82

----------------
IN: _IO_cleanup
0x0002fec6:  ead5              bnez                    a3,180                  # 0x2ff7a

----------------
IN: _IO_cleanup
0x0002fec8:  00053423          sd                      zero,8(a0)
0x0002fecc:  00052023          sw                      zero,0(a0)
0x0002fed0:  7420              ld                      s0,104(s0)
0x0002fed2:  00082797          auipc                   a5,130                  # 0xb1ed2
0x0002fed6:  aa07b723          sd                      zero,-1362(a5)
0x0002feda:  fc3d              bnez                    s0,-130                 # 0x2fe58

----------------
IN: _IO_cleanup
0x0002fe58:  401c              lw                      a5,0(s0)
0x0002fe5a:  008cb023          sd                      s0,0(s9)
0x0002fe5e:  0187f733          and                     a4,a5,s8
0x0002fe62:  c771              beqz                    a4,204                  # 0x2ff2e

----------------
IN: _IO_cleanup
0x0002ff5e:  0c042703          lw                      a4,192(s0)
0x0002ff62:  db21              beqz                    a4,-176                 # 0x2feb2

----------------
IN: _IO_cleanup
0x0002ff64:  b731              j                       -244                    # 0x2fe70

----------------
IN: _IO_cleanup
0x0002fe70:  00082717          auipc                   a4,130                  # 0xb1e70
0x0002fe74:  b2c74703          lbu                     a4,-1236(a4)
0x0002fe78:  ef11              bnez                    a4,28                   # 0x2fe94

----------------
IN: _IO_cleanup
0x0002fe7a:  0017f713          andi                    a4,a5,1
0x0002fe7e:  eb19              bnez                    a4,22                   # 0x2fe94

----------------
IN: _IO_cleanup
0x0002fe80:  020cb683          ld                      a3,32(s9)
0x0002fe84:  7c18              ld                      a4,56(s0)
0x0002fe86:  0017e793          ori                     a5,a5,1
0x0002fe8a:  c01c              sw                      a5,0(s0)
0x0002fe8c:  f454              sd                      a3,168(s0)
0x0002fe8e:  028cb023          sd                      s0,32(s9)
0x0002fe92:  f858              sd                      a4,176(s0)
0x0002fe94:  6c64              ld                      s1,216(s0)
0x0002fe96:  416487b3          sub                     a5,s1,s6
0x0002fe9a:  16f96c63          bgtu                    a5,s2,376               # 0x30012

----------------
IN: _IO_cleanup
0x0002fe9e:  6cbc              ld                      a5,88(s1)
0x0002fea0:  4601              mv                      a2,zero
0x0002fea2:  4581              mv                      a1,zero
0x0002fea4:  8522              mv                      a0,s0
0x0002fea6:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_setbuf
0x0002d37a:  1141              addi                    sp,sp,-16
0x0002d37c:  e022              sd                      s0,0(sp)
0x0002d37e:  e406              sd                      ra,8(sp)
0x0002d380:  842a              mv                      s0,a0
0x0002d382:  13c020ef          jal                     ra,8508                 # 0x2f4be

----------------
IN: _IO_default_setbuf
0x0002f4be:  7179              addi                    sp,sp,-48
0x0002f4c0:  e44e              sd                      s3,8(sp)
0x0002f4c2:  0d853983          ld                      s3,216(a0)
0x0002f4c6:  0004b717          auipc                   a4,75                   # 0x7a4c6
0x0002f4ca:  cba70713          addi                    a4,a4,-838
0x0002f4ce:  6785              lui                     a5,1
0x0002f4d0:  f022              sd                      s0,32(sp)
0x0002f4d2:  ec26              sd                      s1,24(sp)
0x0002f4d4:  e84a              sd                      s2,16(sp)
0x0002f4d6:  f406              sd                      ra,40(sp)
0x0002f4d8:  40e98733          sub                     a4,s3,a4
0x0002f4dc:  92f78793          addi                    a5,a5,-1745
0x0002f4e0:  842a              mv                      s0,a0
0x0002f4e2:  892e              mv                      s2,a1
0x0002f4e4:  84b2              mv                      s1,a2
0x0002f4e6:  06e7ed63          bgtu                    a4,a5,122               # 0x2f560

----------------
IN: _IO_default_setbuf
0x0002f4ea:  0609b783          ld                      a5,96(s3)
0x0002f4ee:  8522              mv                      a0,s0
0x0002f4f0:  9782              jalr                    ra,a5,0

----------------
IN: _IO_file_sync
0x0002ddb2:  7510              ld                      a2,40(a0)
0x0002ddb4:  710c              ld                      a1,32(a0)
0x0002ddb6:  7179              addi                    sp,sp,-48
0x0002ddb8:  f022              sd                      s0,32(sp)
0x0002ddba:  f406              sd                      ra,40(sp)
0x0002ddbc:  842a              mv                      s0,a0
0x0002ddbe:  00c5fe63          bleu                    a2,a1,28                # 0x2ddda

----------------
IN: _IO_file_sync
0x0002ddda:  6418              ld                      a4,8(s0)
0x0002dddc:  681c              ld                      a5,16(s0)
0x0002ddde:  40f705b3          sub                     a1,a4,a5
0x0002dde2:  02f70963          beq                     a4,a5,50                # 0x2de14

----------------
IN: _IO_file_sync
0x0002de14:  57fd              addi                    a5,zero,-1
0x0002de16:  e85c              sd                      a5,144(s0)
0x0002de18:  4501              mv                      a0,zero
0x0002de1a:  70a2              ld                      ra,40(sp)
0x0002de1c:  7402              ld                      s0,32(sp)
0x0002de1e:  6145              addi                    sp,sp,48
0x0002de20:  8082              ret                     

----------------
IN: _IO_default_setbuf
0x0002f4f2:  57fd              addi                    a5,zero,-1
0x0002f4f4:  06f50963          beq                     a0,a5,114               # 0x2f566

----------------
IN: _IO_default_setbuf
0x0002f4f8:  4018              lw                      a4,0(s0)
0x0002f4fa:  7c08              ld                      a0,56(s0)
0x0002f4fc:  00090363          beqz                    s2,6                    # 0x2f502

----------------
IN: _IO_default_setbuf
0x0002f502:  00276793          ori                     a5,a4,2
0x0002f506:  c01c              sw                      a5,0(s0)
0x0002f508:  08340913          addi                    s2,s0,131
0x0002f50c:  08440493          addi                    s1,s0,132
0x0002f510:  c119              beqz                    a0,6                    # 0x2f516

----------------
IN: _IO_default_setbuf
0x0002f512:  8b05              andi                    a4,a4,1
0x0002f514:  c331              beqz                    a4,68                   # 0x2f558

----------------
IN: _IO_default_setbuf
0x0002f516:  0017e793          ori                     a5,a5,1
0x0002f51a:  03243c23          sd                      s2,56(s0)
0x0002f51e:  e024              sd                      s1,64(s0)
0x0002f520:  c01c              sw                      a5,0(s0)
0x0002f522:  02043823          sd                      zero,48(s0)
0x0002f526:  02043423          sd                      zero,40(s0)
0x0002f52a:  02043023          sd                      zero,32(s0)
0x0002f52e:  00043823          sd                      zero,16(s0)
0x0002f532:  00043423          sd                      zero,8(s0)
0x0002f536:  00043c23          sd                      zero,24(s0)
0x0002f53a:  8522              mv                      a0,s0
0x0002f53c:  70a2              ld                      ra,40(sp)
0x0002f53e:  7402              ld                      s0,32(sp)
0x0002f540:  64e2              ld                      s1,24(sp)
0x0002f542:  6942              ld                      s2,16(sp)
0x0002f544:  69a2              ld                      s3,8(sp)
0x0002f546:  6145              addi                    sp,sp,48
0x0002f548:  8082              ret                     

----------------
IN: _IO_file_setbuf
0x0002d386:  c909              beqz                    a0,18                   # 0x2d398

----------------
IN: _IO_file_setbuf
0x0002d388:  7c1c              ld                      a5,56(s0)
0x0002d38a:  8522              mv                      a0,s0
0x0002d38c:  f81c              sd                      a5,48(s0)
0x0002d38e:  f41c              sd                      a5,40(s0)
0x0002d390:  f01c              sd                      a5,32(s0)
0x0002d392:  ec1c              sd                      a5,24(s0)
0x0002d394:  e41c              sd                      a5,8(s0)
0x0002d396:  e81c              sd                      a5,16(s0)
0x0002d398:  60a2              ld                      ra,8(sp)
0x0002d39a:  6402              ld                      s0,0(sp)
0x0002d39c:  0141              addi                    sp,sp,16
0x0002d39e:  8082              ret                     

----------------
IN: _IO_cleanup
0x0002fea8:  0c042783          lw                      a5,192(s0)
0x0002feac:  06f04663          bgtz                    a5,108                  # 0x2ff18

----------------
IN: _IO_cleanup
0x0002feb0:  401c              lw                      a5,0(s0)
0x0002feb2:  0da42023          sw                      s10,192(s0)
0x0002feb6:  0187f7b3          and                     a5,a5,s8
0x0002feba:  eb99              bnez                    a5,22                   # 0x2fed0

----------------
IN: _IO_cleanup
0x0002febc:  6448              ld                      a0,136(s0)
0x0002febe:  8a022703          lw                      a4,-1888(tp)
0x0002fec2:  4154              lw                      a3,4(a0)
0x0002fec4:  ef5d              bnez                    a4,190                  # 0x2ff82

----------------
IN: _IO_cleanup
0x0002feb2:  0da42023          sw                      s10,192(s0)
0x0002feb6:  0187f7b3          and                     a5,a5,s8
0x0002feba:  eb99              bnez                    a5,22                   # 0x2fed0

----------------
IN: _IO_cleanup
0x0002fedc:  7906              ld                      s2,96(sp)
0x0002fede:  6a46              ld                      s4,80(sp)
0x0002fee0:  6b06              ld                      s6,64(sp)
0x0002fee2:  7be2              ld                      s7,56(sp)
0x0002fee4:  7c42              ld                      s8,48(sp)
0x0002fee6:  7d02              ld                      s10,32(sp)
0x0002fee8:  8a022783          lw                      a5,-1888(tp)
0x0002feec:  c7f1              beqz                    a5,204                  # 0x2ffb8

----------------
IN: _IO_cleanup
0x0002ffb8:  00082697          auipc                   a3,130                  # 0xb1fb8
0x0002ffbc:  9d46a683          lw                      a3,-1580(a3)
0x0002ffc0:  fe85              bnez                    a3,-200                 # 0x2fef8

----------------
IN: _IO_cleanup
0x0002ffc2:  00082797          auipc                   a5,130                  # 0xb1fc2
0x0002ffc6:  9c07b723          sd                      zero,-1586(a5)
0x0002ffca:  00082797          auipc                   a5,130                  # 0xb1fca
0x0002ffce:  9a07af23          sw                      zero,-1602(a5)
0x0002ffd2:  b73d              j                       -210                    # 0x2ff00

----------------
IN: _IO_cleanup
0x0002ff00:  8556              mv                      a0,s5
0x0002ff02:  ef9e40ef          jal                     ra,-110856              # 0x14dfa

----------------
IN: _IO_cleanup
0x0002ff06:  70e6              ld                      ra,120(sp)
0x0002ff08:  7446              ld                      s0,112(sp)
0x0002ff0a:  74a6              ld                      s1,104(sp)
0x0002ff0c:  6aa6              ld                      s5,72(sp)
0x0002ff0e:  7ca2              ld                      s9,40(sp)
0x0002ff10:  854e              mv                      a0,s3
0x0002ff12:  69e6              ld                      s3,88(sp)
0x0002ff14:  6109              addi                    sp,sp,128
0x0002ff16:  8082              ret                     

----------------
IN: __run_exit_handlers
0x00010dfe:  855e              mv                      a0,s7
0x00010e00:  2f7090ef          jal                     ra,39670                # 0x1a8f6

----------------
IN: _exit
0x0001a8f6:  05e00893          addi                    a7,zero,94
0x0001a8fa:  00000073          ecall                   

