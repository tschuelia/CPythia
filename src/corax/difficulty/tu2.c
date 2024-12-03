
#include "prediction.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9613228062833077958) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.459748843357567827) ) ) {
              result[0] += -0.011854948876753786;
            } else {
              result[0] += -0.004286172644619493;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.093171296296296724) ) ) {
                result[0] += 0.007249205601458884;
              } else {
                result[0] += -0.002366681260628962;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
                result[0] += -0.012053973026556898;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
                  result[0] += -0.007208304399766261;
                } else {
                  result[0] += 2.805589763880504e-05;
                }
              }
            }
          }
        } else {
          result[0] += 0.008648919146017623;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4995331520331520725) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2473743189393666497) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                    result[0] += 0.005690674752856725;
                  } else {
                    result[0] += -0.0033232574427838175;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                    result[0] += -0.006875090185046912;
                  } else {
                    result[0] += 0.0027355073130287655;
                  }
                }
              } else {
                result[0] += 0.013853008551079246;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2151073141463651639) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)486.3463921815647382) ) ) {
                    result[0] += -0.002064197585483949;
                  } else {
                    result[0] += 0.0067197855324164476;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1072.091074890846585) ) ) {
                    result[0] += 0.014065446270852705;
                  } else {
                    result[0] += 0.005162100912106518;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                  result[0] += 0.019624362868905624;
                } else {
                  result[0] += 0.008042265381086326;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1296327801091326226) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1522.038109468082666) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09005480525100587053) ) ) {
                  result[0] += -0.00846450731888912;
                } else {
                  result[0] += 0.0029900344346419036;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006750000000000001658) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.581742450538008438) ) ) {
                    result[0] += 0.005985311865510625;
                  } else {
                    result[0] += 0.013349464445429901;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                    result[0] += 0.005924687845627604;
                  } else {
                    result[0] += 0.0017119396374042895;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                    result[0] += -0.00110426767782731;
                  } else {
                    result[0] += 0.0035451640887520087;
                  }
                } else {
                  result[0] += -0.007111154881146756;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0650402493301361212) ) ) {
                    result[0] += 0.0008356674652815608;
                  } else {
                    result[0] += 0.003521800852256272;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
                    result[0] += 0.00679976429634416;
                  } else {
                    result[0] += -0.002426560015566191;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03025000000000000258) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-166.7621230192216899) ) ) {
                    result[0] += 0.003294715809205161;
                  } else {
                    result[0] += 0.010094095765985541;
                  }
                } else {
                  result[0] += -0.007259906166008962;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.87522710460594944) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
                    result[0] += 0.0034475910968705323;
                  } else {
                    result[0] += 0.01277868689044042;
                  }
                } else {
                  result[0] += 0.016648513376177752;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04265000000000000041) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6307015360864961506) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)682.5859171509390535) ) ) {
                    result[0] += 0.005374084290311233;
                  } else {
                    result[0] += -0.0022323603419704104;
                  }
                } else {
                  result[0] += -0.018516377686801304;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)486.3463921815647382) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841668807075014236) ) ) {
                    result[0] += 0.010808699967762002;
                  } else {
                    result[0] += 0.003067065103776581;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1991.193003236733603) ) ) {
                    result[0] += 0.0017296112566075432;
                  } else {
                    result[0] += -0.012083912058507488;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.274781071744195637) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8006849315068494954) ) ) {
                  result[0] += 0.0025230510747155815;
                } else {
                  result[0] += -0.0002764370415486155;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
                  result[0] += -0.00022892865988885129;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.868199541507911343) ) ) {
                    result[0] += -0.006931495598579325;
                  } else {
                    result[0] += -0.01655625765484221;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.004475300714343433) ) ) {
                result[0] += 0.011272203104127979;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4862500000000000155) ) ) {
                  result[0] += -0.0024546345466846843;
                } else {
                  result[0] += 0.004842919972738448;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2065.691826137578119) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)377.2502328799494649) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              result[0] += -0.011199450754084114;
            } else {
              result[0] += -0.01680038645608023;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
                result[0] += -0.012532963265032674;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                    result[0] += 0.008872117628454875;
                  } else {
                    result[0] += -0.002246175954509658;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2437.218419692248972) ) ) {
                    result[0] += -0.011450953875663042;
                  } else {
                    result[0] += -0.0033956933855599637;
                  }
                }
              }
            } else {
              result[0] += 0.0067987310417220795;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.33589743589743826) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
                    result[0] += 0.004593753494563455;
                  } else {
                    result[0] += 0.01756836307094386;
                  }
                } else {
                  result[0] += -0.0036892936916797145;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1234.374879497081338) ) ) {
                  result[0] += -0.025543813085578584;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1637025017206097666) ) ) {
                    result[0] += -0.0174248868773299;
                  } else {
                    result[0] += -0.0007871581104725948;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500000000000096) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02825000000000000427) ) ) {
                  result[0] += 0.0029178851260514356;
                } else {
                  result[0] += 0.016494644109098285;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
                    result[0] += -0.004005871378705117;
                  } else {
                    result[0] += 0.003793455396279821;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4564.612143258819742) ) ) {
                    result[0] += 0.0005321133897260829;
                  } else {
                    result[0] += 0.005537287187714701;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5556.93894018442279) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.50233644859813609) ) ) {
                    result[0] += 0.0014557333142551537;
                  } else {
                    result[0] += 0.006240471159419722;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                    result[0] += 0.013628929205009356;
                  } else {
                    result[0] += 0.0006725838627367022;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04411284851513137123) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.68044077134987191) ) ) {
                    result[0] += 0.00577764114451358;
                  } else {
                    result[0] += -0.015044706931212926;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.507575757575758679) ) ) {
                    result[0] += 0.0062260619187907845;
                  } else {
                    result[0] += -0.004128298174746871;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54904306220096188) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.67567084078712192) ) ) {
                  result[0] += 0.019925392781367637;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276582891195849945) ) ) {
                    result[0] += 0.002135997306447133;
                  } else {
                    result[0] += 0.010849908542471455;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2021500000000000241) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.005000000000000782) ) ) {
                    result[0] += 0.02405291137335388;
                  } else {
                    result[0] += 0.008454723529317656;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2483430065359477357) ) ) {
                    result[0] += 0.0104075417327693;
                  } else {
                    result[0] += 0.0008431771169761529;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74737090866123346) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
              result[0] += -0.02771085996347766;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.794786096256686392) ) ) {
                result[0] += -0.004243724084474245;
              } else {
                result[0] += -0.015670462660958163;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.68465909090909705) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1578.099938315956024) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
                    result[0] += 0.01080903581247321;
                  } else {
                    result[0] += -0.01704938966574962;
                  }
                } else {
                  result[0] += 0.014641257139788711;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)632.5242242904586192) ) ) {
                  result[0] += -0.0048401391810790045;
                } else {
                  result[0] += -0.011600796358321501;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.93844696969697239) ) ) {
                result[0] += -0.02396249126450485;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1736.121756519464043) ) ) {
                  result[0] += 0.003131248170766542;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.005362229997505021;
                  } else {
                    result[0] += -0.01589946859883453;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08950345372645202024) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1558403046997211827) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05545000000000000623) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.50925925925926663) ) ) {
                    result[0] += 0.014767761832321145;
                  } else {
                    result[0] += -0.0019820611181218142;
                  }
                } else {
                  result[0] += -0.009251698613097353;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05815000000000000724) ) ) {
                  result[0] += -0.03007432553253803;
                } else {
                  result[0] += -0.010715502879660383;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1850.585799025786173) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
                    result[0] += 0.0010572591909693777;
                  } else {
                    result[0] += 0.010635895629306091;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
                    result[0] += -0.009013802379360525;
                  } else {
                    result[0] += 0.001483357039817423;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1158373283388909464) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1747936067630936063) ) ) {
                    result[0] += 0.014983498410632989;
                  } else {
                    result[0] += -0.0046882762555343505;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2113.689413772091484) ) ) {
                    result[0] += 0.029918116267505606;
                  } else {
                    result[0] += 0.013020311389122708;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.881080907396698088) ) ) {
                result[0] += 0.0005674985276180145;
              } else {
                result[0] += -0.012414867114299146;
              }
            } else {
              result[0] += -0.019420923967223475;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
        result[0] += -0.011757419152963711;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3161.371852426907026) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                    result[0] += -0.004720214927491357;
                  } else {
                    result[0] += -0.002970844103684055;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2553.815469141473386) ) ) {
                    result[0] += 0.0013212407294518076;
                  } else {
                    result[0] += -0.0025719483315156015;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1875000000000000278) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.15892857142858219) ) ) {
                    result[0] += -0.003040780678967045;
                  } else {
                    result[0] += -0.005299752610709796;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.259810052584194151) ) ) {
                    result[0] += -0.005978156483802315;
                  } else {
                    result[0] += -0.009160158423948406;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
                result[0] += -0.011986851823552658;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5486.447841096402954) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
                    result[0] += -0.006033744805194282;
                  } else {
                    result[0] += -0.009673408098215163;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2577141792102714546) ) ) {
                    result[0] += -0.005493345293061067;
                  } else {
                    result[0] += -0.0029065804140030386;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9430194805194805907) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
                    result[0] += -0.0010754974709560763;
                  } else {
                    result[0] += -0.004155491165563306;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14721.55785436291444) ) ) {
                    result[0] += -0.002701863834628952;
                  } else {
                    result[0] += -0.007765603460043366;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3002208421277365313) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                    result[0] += -0.0020325027988221047;
                  } else {
                    result[0] += 0.0072069439973285075;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.56776556776557285) ) ) {
                    result[0] += -0.0008530820918354775;
                  } else {
                    result[0] += -0.004522057602962389;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.55548780487805161) ) ) {
                result[0] += -0.006998787040858174;
              } else {
                result[0] += -0.010594287277464082;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.48863636363636687) ) ) {
            result[0] += -0.00846041589711285;
          } else {
            result[0] += 0.009089390795078773;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098096607971473931) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
            result[0] += -0.025712365292779378;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5712.899764193519331) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533779707363225178) ) ) {
                    result[0] += -0.005615644902087811;
                  } else {
                    result[0] += 0.009039725106992393;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                    result[0] += -0.01623819206825149;
                  } else {
                    result[0] += 0.011779061308071938;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19208.54084854814937) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.35571587125416571) ) ) {
                    result[0] += 0.005085212203364806;
                  } else {
                    result[0] += -0.008655669065247666;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.67142857142858503) ) ) {
                    result[0] += 0.0010015654653095893;
                  } else {
                    result[0] += -0.007829214702545459;
                  }
                }
              }
            } else {
              result[0] += 0.02198714693851249;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.67543859649123306) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
              result[0] += 0.0037574326957535258;
            } else {
              result[0] += -0.013801799365114432;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5807.741032024249762) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                result[0] += -0.006517453833369161;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.04880952380953119) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                    result[0] += 0.0354501895432611;
                  } else {
                    result[0] += 0.016958295311747903;
                  }
                } else {
                  result[0] += 0.003751026868547865;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5273.494216348623922) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3209000000000000186) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
                    result[0] += 0.016504767190436472;
                  } else {
                    result[0] += 0.006629099510068814;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279657701681118087) ) ) {
                    result[0] += 0.006872593512586143;
                  } else {
                    result[0] += -0.003545113066884414;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.945195195195196902) ) ) {
                  result[0] += -0.006646259839810634;
                } else {
                  result[0] += -0.01598758785837368;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06455000000000001015) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
                result[0] += 0.016832169908739526;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.23919669735304952) ) ) {
                    result[0] += -0.0033986095182292567;
                  } else {
                    result[0] += 0.014596352907893724;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
                    result[0] += -0.009304055363109165;
                  } else {
                    result[0] += -0.0026729235022388965;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2803536647300774454) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                    result[0] += -0.006753010285667229;
                  } else {
                    result[0] += 0.005932450699708523;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)104.0477272727272862) ) ) {
                    result[0] += -0.01739989066162038;
                  } else {
                    result[0] += -0.0025371620945253237;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
                    result[0] += -0.00801082577287288;
                  } else {
                    result[0] += 0.0003466966938463184;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9044.257124938287234) ) ) {
                    result[0] += -0.005337404325905378;
                  } else {
                    result[0] += -0.0005656822969636622;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9345935333859788363) ) ) {
                result[0] += 0.011534903181381074;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
                    result[0] += -0.0018182093996321426;
                  } else {
                    result[0] += -0.016151912445720548;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.312966417910450545) ) ) {
                    result[0] += 0.006928901369429353;
                  } else {
                    result[0] += -0.0076460325732128406;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
                result[0] += 0.02968865189799512;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.18333333333335133) ) ) {
                    result[0] += 0.015847340956780375;
                  } else {
                    result[0] += 3.8287241532920496e-05;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                    result[0] += -0.004681462836833963;
                  } else {
                    result[0] += -0.011872046435387057;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.343954916307972258) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8870229725046551161) ) ) {
              result[0] += -0.0019222395878715887;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.36507936507936734) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15759905381431238) ) ) {
                  result[0] += -0.009861745012324858;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.95672478206724954) ) ) {
                    result[0] += -0.01989638965992254;
                  } else {
                    result[0] += -0.01333141245896143;
                  }
                }
              } else {
                result[0] += -0.007120867873870994;
              }
            }
          } else {
            result[0] += 0.0023225835777656405;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.15064935064935181) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
                result[0] += 0.005724140593415009;
              } else {
                result[0] += -0.006193201477975688;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5469.088584656095009) ) ) {
                result[0] += 0.0013743136248901909;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3256400000000000405) ) ) {
                  result[0] += 0.018165779631376434;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
                    result[0] += 0.012735126386423707;
                  } else {
                    result[0] += 0.002063898533773505;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3526540000000000785) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1803500000000000381) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
                    result[0] += 0.005655379323547803;
                  } else {
                    result[0] += -0.00343343524302983;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
                    result[0] += -0.009447897507891375;
                  } else {
                    result[0] += 0.0002552028701054532;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3048330000000000761) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
                    result[0] += 0.015465804084469691;
                  } else {
                    result[0] += -0.000699768168033482;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9262105936708032727) ) ) {
                    result[0] += 0.0022638461874695207;
                  } else {
                    result[0] += -0.013116377224130542;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3616605000000000514) ) ) {
                result[0] += 0.017820073796101715;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733500000000000318) ) ) {
                  result[0] += 0.005347778942842382;
                } else {
                  result[0] += -0.008313830587987556;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107361159622773816) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1840640000000000331) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.18820315011250699) ) ) {
                    result[0] += 0.007183868938703807;
                  } else {
                    result[0] += -0.0026747424920588146;
                  }
                } else {
                  result[0] += -0.010854347451723806;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                    result[0] += 0.006506370568232758;
                  } else {
                    result[0] += 0.028554324025831322;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.99292452830189148) ) ) {
                    result[0] += 0.006541239211243664;
                  } else {
                    result[0] += -0.0049499847744369635;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3256400000000000405) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2642978763556740884) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                    result[0] += -0.0022499852629739455;
                  } else {
                    result[0] += -0.005217650565308622;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                    result[0] += 0.00237905537600105;
                  } else {
                    result[0] += -0.004157817833612658;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.03333333333334565) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                    result[0] += -0.004610783953752954;
                  } else {
                    result[0] += 0.0023445408022571535;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02708747139162712148) ) ) {
                    result[0] += -0.01788811694128591;
                  } else {
                    result[0] += -0.004483438747261556;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3397795000000000676) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22828.66277171849651) ) ) {
                    result[0] += -0.004781199775355039;
                  } else {
                    result[0] += 0.010842701406654904;
                  }
                } else {
                  result[0] += 0.032332316761249244;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
                    result[0] += 0.008002003064585473;
                  } else {
                    result[0] += -0.00346040825864471;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                    result[0] += -0.0034245261949990987;
                  } else {
                    result[0] += 0.001299651724596616;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3118835000000000357) ) ) {
                    result[0] += -0.008873988580544136;
                  } else {
                    result[0] += 0.01519054356333052;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3668185000000000473) ) ) {
                    result[0] += -0.02439429334798841;
                  } else {
                    result[0] += -0.009839415779882647;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6852500000000000258) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
                    result[0] += -0.012798212721184749;
                  } else {
                    result[0] += -0.002157956073789502;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.436750302971882165) ) ) {
                    result[0] += 0.0016630430427232803;
                  } else {
                    result[0] += 0.014994267164578946;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2762500000000000511) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.74434389140271584) ) ) {
                result[0] += -0.005698108218731288;
              } else {
                result[0] += -0.0038326028136380767;
              }
            } else {
              result[0] += 0.00176175350576066;
            }
          } else {
            result[0] += -0.009942938102742938;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2762.179861479253759) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)59.79870609904083523) ) ) {
              result[0] += -0.0024241270030357495;
            } else {
              result[0] += -0.010176778732994458;
            }
          } else {
            result[0] += -0.01367391573595641;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5191497654354458868) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4432530062202834631) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08575000000000000677) ) ) {
              result[0] += 0.00017703840747301819;
            } else {
              result[0] += 0.0082293090551532;
            }
          } else {
            result[0] += 0.021037873569473422;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3879375000000001017) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5891.981688076555656) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19615.56936635864986) ) ) {
                result[0] += 0.010481013230248208;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3632.223837678870041) ) ) {
                  result[0] += -0.010226178148333813;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248500000000000165) ) ) {
                    result[0] += 0.008642738914590317;
                  } else {
                    result[0] += -0.009533957187739446;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4664.784318267557865) ) ) {
                  result[0] += 0.01067792379574744;
                } else {
                  result[0] += 0.034948031152260486;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.79239388062918081) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                    result[0] += 0.005923631590867526;
                  } else {
                    result[0] += 0.016502691219543793;
                  }
                } else {
                  result[0] += -0.011634184147956979;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)657.9858817255186523) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.90384615384615508) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5508500000000001728) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4285545000000000604) ) ) {
                    result[0] += -0.014210166660321268;
                  } else {
                    result[0] += -0.0020180677411665935;
                  }
                } else {
                  result[0] += 0.00958355446315851;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.611458188829374) ) ) {
                  result[0] += -0.02078477671726037;
                } else {
                  result[0] += -0.008253042484418525;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.8486111111111132) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
                    result[0] += 0.002061451450829191;
                  } else {
                    result[0] += -0.009134217268096628;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
                    result[0] += 0.01942212740245616;
                  } else {
                    result[0] += 0.0028626292972651624;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4346740216305434168) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                    result[0] += 0.00894029461486727;
                  } else {
                    result[0] += -0.00043600851479107396;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1674644430706538067) ) ) {
                    result[0] += 0.009512218803796909;
                  } else {
                    result[0] += -0.004038861474394018;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
                  result[0] += -0.0073406483932202055;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
                    result[0] += 0.017087765268401108;
                  } else {
                    result[0] += 0.0020834749706160026;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2494.752674487995591) ) ) {
                    result[0] += -0.002289183129260724;
                  } else {
                    result[0] += -0.022907581572900775;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.245196219089809153) ) ) {
                    result[0] += 0.00321608060652171;
                  } else {
                    result[0] += -0.003786547241493995;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5306308187652577502) ) ) {
                  result[0] += -0.010132478179694211;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    result[0] += -0.007052212074629676;
                  } else {
                    result[0] += 0.015488798251301512;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4030330000000000301) ) ) {
                  result[0] += -0.0063538149355517855;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += -0.021721284602524305;
                  } else {
                    result[0] += -0.012874739897991653;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4396.181289187711627) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4375050000000000883) ) ) {
                  result[0] += 0.022781354389606257;
                } else {
                  result[0] += 0.003931825873049843;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.47809523809523924) ) ) {
                  result[0] += 0.007756204425590579;
                } else {
                  result[0] += -0.0041978625246723794;
                }
              }
            } else {
              result[0] += -0.005257508266071429;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.05561224489796146) ) ) {
            result[0] += -0.016695027405187735;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
              result[0] += -0.012033781190947938;
            } else {
              result[0] += 0.003467380749894304;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6600000000000001421) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2066.294548621133345) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441305798344751421) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05290970539545401113) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                  result[0] += -0.008823296655731682;
                } else {
                  result[0] += 0.004000618120045268;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1931.502833784104268) ) ) {
                  result[0] += 0.01649298053301006;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                    result[0] += -0.0033657779831653203;
                  } else {
                    result[0] += 0.007362530164076599;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.772150000000000003) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2899.923639043688581) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5191497654354458868) ) ) {
                    result[0] += 0.0026935440197594176;
                  } else {
                    result[0] += 0.012574353429434687;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2702195988975289453) ) ) {
                    result[0] += 0.003379417624509367;
                  } else {
                    result[0] += -0.0017082118485701326;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
                  result[0] += 0.0007719150114033126;
                } else {
                  result[0] += -0.01654590483222844;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8194500000000001227) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3188465325964183195) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
                    result[0] += 0.0063113512875777895;
                  } else {
                    result[0] += 0.015804958761860704;
                  }
                } else {
                  result[0] += 0.0017728925538779403;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6111500000000000821) ) ) {
                    result[0] += -0.008292716383053853;
                  } else {
                    result[0] += -0.025904620384088653;
                  }
                } else {
                  result[0] += 0.005068445380925127;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5833650000000001334) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879495013645960666) ) ) {
                  result[0] += -0.006948325942221736;
                } else {
                  result[0] += -0.023575093480132113;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6381740000000001301) ) ) {
                  result[0] += 0.010356465786761469;
                } else {
                  result[0] += -0.008475717018495659;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.12245989304813776) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1810809162147536122) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.504385964912282603) ) ) {
                    result[0] += -0.0013339965787175002;
                  } else {
                    result[0] += 0.005775358677786714;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                    result[0] += -0.0026400845370365385;
                  } else {
                    result[0] += 0.012207298692088187;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5576.569694912017439) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
                    result[0] += 0.0028626704203948247;
                  } else {
                    result[0] += 0.014915333926476001;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                    result[0] += 0.008608575056173715;
                  } else {
                    result[0] += 0.0006161034116446918;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4955405000000000504) ) ) {
                result[0] += 0.02755527431516253;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.205913324303087758) ) ) {
                  result[0] += 0.019155671555493897;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                    result[0] += 0.004706044792979104;
                  } else {
                    result[0] += 0.01448319343521333;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2582.414350298407498) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5078910000000002034) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)15948.65509046770603) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                    result[0] += -0.017074150681324278;
                  } else {
                    result[0] += 0.0006510885762802417;
                  }
                } else {
                  result[0] += 0.007901978316409819;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2347000000000000475) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.08391608391609395) ) ) {
                    result[0] += 0.008489130677672908;
                  } else {
                    result[0] += 0.0013473815279081305;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1058592616225647598) ) ) {
                    result[0] += 0.0068522270905689965;
                  } else {
                    result[0] += -0.01274700269658092;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004550000000000001092) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04126507918390250051) ) ) {
                  result[0] += -0.0034205137391213436;
                } else {
                  result[0] += -0.01896598553749353;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02880243203506518621) ) ) {
                  result[0] += -0.01323412908580549;
                } else {
                  result[0] += 0.010933342245613317;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5998.889972827267229) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.08391608391609395) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2685307668603297282) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                  result[0] += 0.01447880934767975;
                } else {
                  result[0] += 0.0028792068160520025;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4498083214434980825) ) ) {
                    result[0] += 0.004429955955738795;
                  } else {
                    result[0] += -0.004433463110034672;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14444.10811475239643) ) ) {
                    result[0] += 0.0012152020514063875;
                  } else {
                    result[0] += -0.02000838667331598;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)20233.89840428002572) ) ) {
                result[0] += -0.014480991023305093;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-39813.79238308515778) ) ) {
                  result[0] += -0.010316870409620147;
                } else {
                  result[0] += 0.008030568714474001;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3738.915938311806258) ) ) {
              result[0] += -0.022849045470552054;
            } else {
              result[0] += -0.002496072202902501;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6675000000000000933) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180500000000000993) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.288941480206541534) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += -0.0031133900785526194;
                  } else {
                    result[0] += 0.0044700589748481005;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
                    result[0] += -0.003841198540743487;
                  } else {
                    result[0] += 0.005272703389846792;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.69345238095239381) ) ) {
                    result[0] += 0.004405904053032612;
                  } else {
                    result[0] += -0.008887649951478702;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
                    result[0] += 0.007755743195123915;
                  } else {
                    result[0] += 0.015244828843265458;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4729000000000000425) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
                  result[0] += -0.01930434073329416;
                } else {
                  result[0] += -0.006155223568563473;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2619963990829793921) ) ) {
                  result[0] += -0.000615686220219605;
                } else {
                  result[0] += 0.0030375822615289314;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3901314090609130369) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7043500000000001426) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
                  result[0] += -8.237004880608923e-05;
                } else {
                  result[0] += 0.0176348112931733;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
                  result[0] += 0.00795792435265442;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5340500000000001357) ) ) {
                    result[0] += -0.011032406469938489;
                  } else {
                    result[0] += 0.0016207277722139922;
                  }
                }
              }
            } else {
              result[0] += 0.017033746461431756;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8014155000000001694) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3506500000000000727) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1456569483578152857) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.048500881834215637) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                    result[0] += -0.0058178854309648125;
                  } else {
                    result[0] += -0.00023231349454726067;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4652.199036657647412) ) ) {
                    result[0] += 0.00334293718798543;
                  } else {
                    result[0] += -0.002801919244291488;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4574500000000000788) ) ) {
                    result[0] += 0.010139255231103223;
                  } else {
                    result[0] += 0.004858888928900608;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5644020255061351632) ) ) {
                    result[0] += 0.0063501391579949135;
                  } else {
                    result[0] += 0.0005447442555248294;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.801515151515151736) ) ) {
                    result[0] += 0.00510995088212302;
                  } else {
                    result[0] += -0.0035012812865916516;
                  }
                } else {
                  result[0] += -0.007272471533987931;
                }
              } else {
                result[0] += 0.00896771727689981;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7219650000000000789) ) ) {
              result[0] += -0.009940632112395566;
            } else {
              result[0] += 0.0044194857153285845;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01285000000000000205) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116920601014284448) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03027359610555290306) ) ) {
                  result[0] += 0.008786655911809743;
                } else {
                  result[0] += 0.002958979060679172;
                }
              } else {
                result[0] += -0.0020877872124038166;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7144390000000001573) ) ) {
                    result[0] += -0.002712064991361017;
                  } else {
                    result[0] += 0.007383257060596165;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                    result[0] += 0.010936613400848262;
                  } else {
                    result[0] += 0.005029353760666986;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2803536647300774454) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05995000000000001023) ) ) {
                    result[0] += 0.010719199238849283;
                  } else {
                    result[0] += 0.0027543056653680036;
                  }
                } else {
                  result[0] += 0.019443254059124553;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1852970055032208962) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7596500000000001585) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
                  result[0] += 0.005731264609565294;
                } else {
                  result[0] += 0.01744532773864875;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67375886524823159) ) ) {
                    result[0] += 0.0035426549936148056;
                  } else {
                    result[0] += -0.004820748536759477;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)153.3133971291866544) ) ) {
                    result[0] += 0.00579559496062799;
                  } else {
                    result[0] += 0.01352482652142577;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5544758402383391793) ) ) {
                    result[0] += -0.0135965807772057;
                  } else {
                    result[0] += 0.001805762397425234;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6012500000000001732) ) ) {
                    result[0] += 0.014468470367370227;
                  } else {
                    result[0] += -0.0007625619581672344;
                  }
                }
              } else {
                result[0] += -0.012187177538151439;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.431414373846337) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9003500000000000947) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.288941480206541534) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8746480000000000921) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4315500000000000447) ) ) {
                  result[0] += 0.009160838127278591;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
                    result[0] += 0.003792690881367206;
                  } else {
                    result[0] += -0.0030204500013343524;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                  result[0] += 0.004029885737265156;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9018205000000001359) ) ) {
                    result[0] += 0.008267059531038219;
                  } else {
                    result[0] += 0.012307089992585006;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2131075953897917097) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3738.915938311806258) ) ) {
                  result[0] += 0.013562138620396185;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.48914488258751021) ) ) {
                    result[0] += 0.007377895931255425;
                  } else {
                    result[0] += 0.012574927311283703;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8283110000000001305) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704818006003851749) ) ) {
                    result[0] += 0.006643516527274386;
                  } else {
                    result[0] += 0.01476473887646652;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.862805500000000114) ) ) {
                    result[0] += -0.0004754085613563573;
                  } else {
                    result[0] += 0.0072318925455408176;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.63927801724138078) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1578.099938315956024) ) ) {
                result[0] += 0.005375926905719045;
              } else {
                result[0] += 0.013621589903320793;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9731500000000000705) ) ) {
                    result[0] += 0.004302386598813975;
                  } else {
                    result[0] += 0.011082854652323467;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8380205000000001681) ) ) {
                    result[0] += 0.004991496269324925;
                  } else {
                    result[0] += -0.004173257498164433;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5146500000000001629) ) ) {
                  result[0] += -0.007006297103531818;
                } else {
                  result[0] += 0.004740466181267904;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9826500000000001345) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.8486111111111132) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2163.442343789042752) ) ) {
                    result[0] += 0.005060095199697722;
                  } else {
                    result[0] += 0.013652278833567183;
                  }
                } else {
                  result[0] += -0.00011700344914907619;
                }
              } else {
                result[0] += 0.011599722048342993;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1968.533804460251531) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-213.4350721623848131) ) ) {
                  result[0] += -0.002699614616172418;
                } else {
                  result[0] += -0.000681259217652515;
                }
              } else {
                result[0] += 0.005103110332370735;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              result[0] += -0.009875962190598149;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8283110000000001305) ) ) {
                result[0] += -0.005291729771167466;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-451.2355754647197159) ) ) {
                  result[0] += 0.009855048846418451;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
                    result[0] += 0.0007125812225096293;
                  } else {
                    result[0] += 0.006200344780929536;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4048600000000000532) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7123.512048179920384) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714418462289422185) ) ) {
              result[0] += -0.015953761084223795;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6615500000000001934) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
                    result[0] += -0.0005450136353138287;
                  } else {
                    result[0] += -0.0165567348974963;
                  }
                } else {
                  result[0] += 0.00978296889334806;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                    result[0] += 0.003748035217220589;
                  } else {
                    result[0] += 0.022552406019158415;
                  }
                } else {
                  result[0] += -0.004642588439975651;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1018125874525257907) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                result[0] += -0.015688250680049535;
              } else {
                result[0] += 0.01249696984503807;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2099405000000000299) ) ) {
                result[0] += -0.004190521440185169;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                    result[0] += 0.013408160598705773;
                  } else {
                    result[0] += 0.005535618523029505;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
                    result[0] += 0.009177148282882472;
                  } else {
                    result[0] += 0.023677581865768852;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3738.915938311806258) ) ) {
            result[0] += 0.018413012136442093;
          } else {
            result[0] += 0.0070374525745828444;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2903305000000001024) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.856934660369398804) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3913.110212643198338) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2219470000000000331) ) ) {
                    result[0] += 0.006326308032159403;
                  } else {
                    result[0] += -0.0027938698868113327;
                  }
                } else {
                  result[0] += 0.014172596370917011;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
                    result[0] += -0.003430393027787766;
                  } else {
                    result[0] += 0.0035892292571330915;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2522.832375365074313) ) ) {
                    result[0] += -0.009514775493845981;
                  } else {
                    result[0] += -0.0018071391864741063;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1217.027986566412437) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4570251993391531431) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5415710447289395768) ) ) {
                    result[0] += 0.015369373479604622;
                  } else {
                    result[0] += 0.0019811022215151107;
                  }
                } else {
                  result[0] += -0.009992231656051117;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
                  result[0] += -0.01669032002711783;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2725118062635197291) ) ) {
                    result[0] += -0.006037321176883454;
                  } else {
                    result[0] += 0.009089781749431702;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
              result[0] += 0.0011250340326337566;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.390774125132556271) ) ) {
                  result[0] += -0.017486015295651792;
                } else {
                  result[0] += -0.011257184548486879;
                }
              } else {
                result[0] += -0.005764344477154179;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2996690000000000187) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.018205892088713149) ) ) {
                  result[0] += 0.006077154092740523;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
                    result[0] += -0.010438616761665343;
                  } else {
                    result[0] += -0.01792623678579124;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
                  result[0] += 0.007733219245541541;
                } else {
                  result[0] += 0.0034979493276215677;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.985550935550937091) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2582.414350298407498) ) ) {
                  result[0] += 0.0026516979859826607;
                } else {
                  result[0] += 0.01577158702811611;
                }
              } else {
                result[0] += 0.024670182989255385;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
                result[0] += -0.02522720541271364;
              } else {
                result[0] += -0.004353441351418343;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                    result[0] += 0.0004175795663791101;
                  } else {
                    result[0] += -0.010407205615471347;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3346595000000000542) ) ) {
                    result[0] += 0.006499375097632068;
                  } else {
                    result[0] += 8.920988388510314e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3256400000000000405) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
                    result[0] += -6.207394600340835e-05;
                  } else {
                    result[0] += -0.01246116394154634;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                    result[0] += 0.0017560162345478876;
                  } else {
                    result[0] += -0.0037825814665534414;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4030330000000000301) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02708747139162712148) ) ) {
              result[0] += 0.013375753208969493;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497000000000001441) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
                    result[0] += 0.0008275092739232151;
                  } else {
                    result[0] += 0.01877502606341283;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += 0.0006179917863488792;
                  } else {
                    result[0] += -0.002306522869412768;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1962199642500267183) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7645500000000001739) ) ) {
                    result[0] += 0.012735410213131633;
                  } else {
                    result[0] += -0.002450917470619395;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3526540000000000785) ) ) {
                    result[0] += -0.006618820875722195;
                  } else {
                    result[0] += 0.004614065955446966;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
              result[0] += -0.0026418200259458384;
            } else {
              result[0] += -0.014205335881797464;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.9710504549214285) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2642978763556740884) ) ) {
              result[0] += -0.007224374645562501;
            } else {
              result[0] += 0.0017366915255002074;
            }
          } else {
            result[0] += 0.01738462618498163;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
          result[0] += -0.003788590168518597;
        } else {
          result[0] += -0.019242315645999892;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.586265500000000106) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)59.95123152709360426) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-87920.40362345064932) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
            result[0] += 0.007077722110732788;
          } else {
            result[0] += 0.01661922827465632;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7434000000000000608) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2497314722202963466) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444444444445352) ) ) {
                    result[0] += 0.011634125282616361;
                  } else {
                    result[0] += 0.003395865345477664;
                  }
                } else {
                  result[0] += 0.026315768496216696;
                }
              } else {
                result[0] += -0.0028180915819091034;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8538500000000001089) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1656810466657925307) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
                    result[0] += 0.01419720714180518;
                  } else {
                    result[0] += 0.005577670044044691;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2134.80121387119334) ) ) {
                    result[0] += 0.005044077131952351;
                  } else {
                    result[0] += -0.0006800327138873661;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2364.153332471118119) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                    result[0] += -0.012694921913938997;
                  } else {
                    result[0] += 0.010385362998711704;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
                    result[0] += 0.002791656202183835;
                  } else {
                    result[0] += -0.0039159006031325985;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7242500000000001714) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917500000000001981) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.665550000000000086) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.344454208162468356) ) ) {
                    result[0] += 0.009296072888056691;
                  } else {
                    result[0] += 0.00045159018530772617;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
                    result[0] += -0.0014840192612053358;
                  } else {
                    result[0] += -0.012364118582970908;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4470.737490760877336) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                    result[0] += 0.004092524494607933;
                  } else {
                    result[0] += 0.017495495829638115;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
                    result[0] += -0.013574642543543205;
                  } else {
                    result[0] += 0.003308684685597754;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5136625000000001329) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7792500000000001092) ) ) {
                    result[0] += 0.008658976107096003;
                  } else {
                    result[0] += -0.000926650246997353;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
                    result[0] += 0.0009341076834804915;
                  } else {
                    result[0] += -0.008142785088435339;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.222539682539683703) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
                    result[0] += -0.000959034302727713;
                  } else {
                    result[0] += 0.008359427561631204;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                    result[0] += -0.012621054588407784;
                  } else {
                    result[0] += 0.009213238754037595;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7238223757163882999) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)70.93703703703705798) ) ) {
              result[0] += -0.00690572722598451;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
                result[0] += -0.004394088924850817;
              } else {
                result[0] += 0.0017897420342661426;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5136625000000001329) ) ) {
              result[0] += -0.007450311854742761;
            } else {
              result[0] += -0.010203602497395043;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
            result[0] += 0.0023104601565441816;
          } else {
            result[0] += -0.0038315566672963257;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
        result[0] += -0.011936966386266103;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.12251407129456027) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.297352577637783666) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5508500000000001728) ) ) {
                    result[0] += 0.0041707233261231;
                  } else {
                    result[0] += -0.0013544729823765768;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5266.471447463914046) ) ) {
                    result[0] += -0.002267812878148379;
                  } else {
                    result[0] += 0.004821574879249887;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.369694397283531817) ) ) {
                    result[0] += 0.0030094491006617415;
                  } else {
                    result[0] += 0.004656133053228756;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3632.223837678870041) ) ) {
                    result[0] += 0.00523579761436286;
                  } else {
                    result[0] += -0.015389017730058518;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319805194805195203) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                  result[0] += 0.0015680400855828992;
                } else {
                  result[0] += 0.0052609518116778576;
                }
              } else {
                result[0] += -0.01306134328188577;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1366.16280735785358) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
                result[0] += 0.02497015764691194;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
                  result[0] += 0.0006440985708745959;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.744974379188017899) ) ) {
                    result[0] += 0.007562805553059517;
                  } else {
                    result[0] += 0.012751094736589986;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4609.951933392212595) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5374500000000000943) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11538.33154189746892) ) ) {
                    result[0] += -0.0034298398056432974;
                  } else {
                    result[0] += 0.0022217533387540664;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
                    result[0] += 0.015332477332348368;
                  } else {
                    result[0] += 0.006859968432707755;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1941.045842846070173) ) ) {
                  result[0] += 0.0020708342154225805;
                } else {
                  result[0] += -0.017156373350587197;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6920.679669433080562) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
              result[0] += -0.008489875948116132;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.5128949065119297) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92450142450142714) ) ) {
                  result[0] += -0.001877980753521204;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16737.80440239057862) ) ) {
                    result[0] += 0.0034287831992891845;
                  } else {
                    result[0] += 0.017561655805211827;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18722.62916807730289) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
                    result[0] += -0.0005758767124962459;
                  } else {
                    result[0] += 0.005712996155676899;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8459.777222184691709) ) ) {
                    result[0] += -0.006776165902720841;
                  } else {
                    result[0] += 0.0030166918816886394;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7107537360355972167) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1349.650058195245947) ) ) {
                result[0] += -0.027117864077447734;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                  result[0] += 0.00539364157665007;
                } else {
                  result[0] += -0.008533988121990833;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
                result[0] += -0.008098384710837871;
              } else {
                result[0] += 0.011234072957899247;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4871705000000000618) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3792435000000000112) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.1695402298850599) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7419.454310499565509) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                  result[0] += -0.016248030858737352;
                } else {
                  result[0] += -0.0058974741720278934;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745321869304507056) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
                    result[0] += -0.003421761765182671;
                  } else {
                    result[0] += 0.00035571920864138087;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
                    result[0] += -0.010565195028119256;
                  } else {
                    result[0] += -0.002602310001793273;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4586000000000000631) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67117117117117253) ) ) {
                  result[0] += 0.0025362966136624064;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2068500000000000061) ) ) {
                    result[0] += -0.002499275101470588;
                  } else {
                    result[0] += -0.00020599038662848874;
                  }
                }
              } else {
                result[0] += -0.007005173509500632;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
              result[0] += 0.008739127531759882;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1647.715800020721645) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9426.060830791375338) ) ) {
                  result[0] += -0.006899503361699593;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
                    result[0] += 0.0009898695787820498;
                  } else {
                    result[0] += -0.0030644791525468755;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)338.6168375607124403) ) ) {
                  result[0] += 0.007520325209767814;
                } else {
                  result[0] += -0.0017314745528579823;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8560500000000000886) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05405589284754743623) ) ) {
                result[0] += 0.020327843428747737;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                    result[0] += 0.001607113070087182;
                  } else {
                    result[0] += 0.010344123529705325;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08054401739085483014) ) ) {
                    result[0] += 0.011462595074324695;
                  } else {
                    result[0] += -0.0050328617149588434;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1327859648471575726) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)22454.51531968933341) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06334929332387927159) ) ) {
                    result[0] += -0.004541914343772492;
                  } else {
                    result[0] += 0.0024410580370872515;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0480211614051639854) ) ) {
                    result[0] += 0.0011669531461368946;
                  } else {
                    result[0] += 0.016324765966157076;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.61911487758945682) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
                    result[0] += -0.006936748430195413;
                  } else {
                    result[0] += -0.013895591658073485;
                  }
                } else {
                  result[0] += -0.002136259628413688;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7574500000000000677) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08727941730769819828) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
                  result[0] += -0.0007152252465779333;
                } else {
                  result[0] += 0.019810380020790948;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3770898412903186947) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.178976624942160184) ) ) {
                    result[0] += -0.002644901152214547;
                  } else {
                    result[0] += 0.0016937228915910644;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    result[0] += -0.0009547754097727567;
                  } else {
                    result[0] += -0.0046091743125909876;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8018000000000000682) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3002208421277365313) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2483430065359477357) ) ) {
                    result[0] += -0.0063968556177192125;
                  } else {
                    result[0] += -0.015591688841683526;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
                    result[0] += -0.014432846693269049;
                  } else {
                    result[0] += 0.0032707069985426383;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09483558412827299) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
                    result[0] += -0.002634318716502807;
                  } else {
                    result[0] += -0.01158173847287687;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2577141792102714546) ) ) {
                    result[0] += -0.001142241942490424;
                  } else {
                    result[0] += 0.017930870067164595;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5712.899764193519331) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6094.863866320612033) ) ) {
            result[0] += -0.0014252592015412359;
          } else {
            result[0] += 0.006498193905453978;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
            result[0] += -0.010125314164087103;
          } else {
            result[0] += -0.019015263047160044;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15564516129032668) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6405977316080030404) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.731662826420891754) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.49501992031872577) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04648741551741662065) ) ) {
                    result[0] += 0.009094609222194442;
                  } else {
                    result[0] += 0.0006986206255656316;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8442000000000001725) ) ) {
                    result[0] += 0.0017670770153500642;
                  } else {
                    result[0] += -0.012147842628667381;
                  }
                }
              } else {
                result[0] += 0.02331201199200897;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3747.556396330042844) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
                    result[0] += 0.014920426655901257;
                  } else {
                    result[0] += 0.003438687232703067;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5644.507670862270061) ) ) {
                    result[0] += 0.0035290757454358385;
                  } else {
                    result[0] += -0.015420782875159631;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1356382126079153372) ) ) {
                    result[0] += 0.008352531522964038;
                  } else {
                    result[0] += -0.007139080466590193;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2805.314543835761469) ) ) {
                    result[0] += -0.03193792986024826;
                  } else {
                    result[0] += -0.018386204449876417;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
                result[0] += 0.017287338023011408;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1110.752112162190087) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3879375000000001017) ) ) {
                    result[0] += 0.005684124754959872;
                  } else {
                    result[0] += 0.001121697583589678;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                    result[0] += 0.00619358493579302;
                  } else {
                    result[0] += 0.014777760792588215;
                  }
                }
              }
            } else {
              result[0] += -0.014920374849839746;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4503745000000000664) ) ) {
              result[0] += 0.010779034421717489;
            } else {
              result[0] += 0.003105780230078278;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)609.6317085093859305) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08295000000000000984) ) ) {
                  result[0] += 0.006258573024378145;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += -0.025664236825703936;
                  } else {
                    result[0] += -0.01014039604075679;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3980730000000000657) ) ) {
                    result[0] += 0.010929262118499393;
                  } else {
                    result[0] += -0.0011630956079658737;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
                    result[0] += -0.002730753520916562;
                  } else {
                    result[0] += -0.01757849327632034;
                  }
                }
              }
            } else {
              result[0] += -0.02035953077900454;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680724160323877725) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
            result[0] += 0.014322928260348405;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-41588.36410045643424) ) ) {
              result[0] += 0.01155838478270573;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16548.22517367959881) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
                  result[0] += -0.0101193458106508;
                } else {
                  result[0] += 0.01902720753382071;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
                  result[0] += -0.006915607229569645;
                } else {
                  result[0] += -0.0164869775186706;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2681861478904534191) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5075500000000000567) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.6113130395274915) ) ) {
                result[0] += -0.01962911733281367;
              } else {
                result[0] += -0.01317250475681785;
              }
            } else {
              result[0] += -0.00044789576230194007;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.9710504549214285) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3779.661346627155126) ) ) {
                result[0] += -0.00621264512952695;
              } else {
                result[0] += -0.017607071242503082;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.460458988432354499) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4423005565862709321) ) ) {
                  result[0] += 0.0017541760521664117;
                } else {
                  result[0] += 0.024020605227682876;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9605980159284618347) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1807.764080503680134) ) ) {
                    result[0] += -0.009061238599931212;
                  } else {
                    result[0] += -0.002186566569838507;
                  }
                } else {
                  result[0] += 0.011240237128225137;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6913850000000000273) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5034195000000000197) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.20633533276206828) ) ) {
                    result[0] += -0.001053235797312846;
                  } else {
                    result[0] += 0.0060275588428330236;
                  }
                } else {
                  result[0] += -0.003197459495196163;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
                  result[0] += 0.007095708937537728;
                } else {
                  result[0] += 0.018747138264250823;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01205000000000000168) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
                    result[0] += 0.008802283095442313;
                  } else {
                    result[0] += 0.00029995687637678157;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)131.9669371389429671) ) ) {
                    result[0] += -0.002160919606651142;
                  } else {
                    result[0] += 0.002304883566186294;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1039.769997802646685) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7155500000000001304) ) ) {
                    result[0] += 0.0032026107580515805;
                  } else {
                    result[0] += -0.006539640523291984;
                  }
                } else {
                  result[0] += -0.018509563002609076;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1200000000000000094) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5006170000000000897) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1017.140349237611076) ) ) {
                  result[0] += -0.01035747718987814;
                } else {
                  result[0] += -0.027784799751137183;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.178368028279654922) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5438275000000001302) ) ) {
                    result[0] += -0.002469621879105849;
                  } else {
                    result[0] += -0.019857175247027944;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.608901515151517359) ) ) {
                    result[0] += 0.01069467558512194;
                  } else {
                    result[0] += -0.0018224014731149584;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239250000000000046) ) ) {
                    result[0] += -0.003167818525051441;
                  } else {
                    result[0] += 0.020057599662295818;
                  }
                } else {
                  result[0] += 0.02476316800996118;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                  result[0] += 0.009439247728555285;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.46385017421602903) ) ) {
                    result[0] += -0.014988404565652057;
                  } else {
                    result[0] += 0.004515552448793781;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)87.98928571428572809) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.450900000000000023) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                  result[0] += 0.025431683879038654;
                } else {
                  result[0] += 0.007561934276442265;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-39813.79238308515778) ) ) {
                  result[0] += 0.015866411688634095;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.22020202020202362) ) ) {
                    result[0] += 0.0036406954521410392;
                  } else {
                    result[0] += -0.0065103030044779105;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                result[0] += 0.00023909026093759807;
              } else {
                result[0] += -0.007822503332338738;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.13135000000000005) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07464056384323641824) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.923563777994157897) ) ) {
                    result[0] += 0.00019915106253042157;
                  } else {
                    result[0] += -0.01752167595401301;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                    result[0] += 0.00011214251508408451;
                  } else {
                    result[0] += 0.008426539710101452;
                  }
                }
              } else {
                result[0] += 0.011080446433416925;
              }
            } else {
              result[0] += -0.012932768950758037;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6721.244372388178817) ) ) {
              result[0] += -0.024652378720644578;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
                result[0] += 0.0013565419908215832;
              } else {
                result[0] += -0.0074628074409948475;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0419270344431006553) ) ) {
              result[0] += 0.006577040961241539;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37025703794369846) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                  result[0] += 0.006465825499696504;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
                    result[0] += 4.229807319517065e-05;
                  } else {
                    result[0] += -0.005304676171186588;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
                  result[0] += -0.014758021863924315;
                } else {
                  result[0] += -0.0015423820431409304;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += -0.009416210198269229;
                  } else {
                    result[0] += 1.7253263636289783e-05;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                    result[0] += 0.01063954770569594;
                  } else {
                    result[0] += -0.0024758528919485295;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5882500000000000506) ) ) {
                  result[0] += 0.01025850562067349;
                } else {
                  result[0] += 0.021854062446791202;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4929566561779720746) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3506500000000000727) ) ) {
                  result[0] += -0.0084415853420326;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5136625000000001329) ) ) {
                    result[0] += 0.008552216446393547;
                  } else {
                    result[0] += -0.002269305758377678;
                  }
                }
              } else {
                result[0] += -0.012776659751377598;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3828.868654278664962) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.517100660707347615) ) ) {
                  result[0] += 0.00890670380878589;
                } else {
                  result[0] += 0.02498003274339025;
                }
              } else {
                result[0] += -0.0007922253090529771;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5901.553629380664461) ) ) {
                result[0] += -0.010490545650144222;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                  result[0] += -0.002664456521294189;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7387500000000001288) ) ) {
                    result[0] += 0.0036294626185443928;
                  } else {
                    result[0] += 0.013847776915205678;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.126292728868830112) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
              result[0] += 0.011990994359885853;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
                result[0] += -0.0029182210147650086;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.207614942528735691) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                    result[0] += 0.0070832857215619004;
                  } else {
                    result[0] += -0.0006374076945856574;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05120002174489756558) ) ) {
                    result[0] += 0.0037825560257229974;
                  } else {
                    result[0] += 0.010226548127813234;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
              result[0] += 0.004631744232624366;
            } else {
              result[0] += -0.0038867346766997923;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009650000000000000591) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2468.165232770545572) ) ) {
              result[0] += 0.008370654368141828;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3913979746246071811) ) ) {
                result[0] += 0.002589442629007249;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257330354602715417) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1236753014373960652) ) ) {
                    result[0] += -0.004091180172154156;
                  } else {
                    result[0] += 0.004353414067925832;
                  }
                } else {
                  result[0] += -0.008468181439287943;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3590000000000000413) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8383500000000000396) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.486201871006190167) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                    result[0] += 0.003873325451692616;
                  } else {
                    result[0] += 0.00712651127835677;
                  }
                } else {
                  result[0] += -0.002062312180297166;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04411284851513137123) ) ) {
                  result[0] += 0.006336636948219477;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8014155000000001694) ) ) {
                    result[0] += -0.005717628442992641;
                  } else {
                    result[0] += 0.0008620017437247149;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.36507936507936734) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
                    result[0] += 0.0044576770365281305;
                  } else {
                    result[0] += -0.0005184319462917117;
                  }
                } else {
                  result[0] += -0.0044211595565722865;
                }
              } else {
                result[0] += 0.009911030595811698;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1541.330699544382924) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07055048397203854404) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05152776681168800416) ) ) {
                    result[0] += -0.00040526898914476644;
                  } else {
                    result[0] += -0.0036945602204237543;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                    result[0] += 0.006062121838460149;
                  } else {
                    result[0] += -0.002283613858740346;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007850000000000002809) ) ) {
                    result[0] += 0.0042440989205013106;
                  } else {
                    result[0] += 0.0012591647514213402;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
                    result[0] += 0.00509339475369956;
                  } else {
                    result[0] += 0.009704773490011852;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1807.764080503680134) ) ) {
                result[0] += 0.0051272168697898395;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9150000000000001465) ) ) {
                    result[0] += 0.003510194868176355;
                  } else {
                    result[0] += -0.00580738651040458;
                  }
                } else {
                  result[0] += -0.009981186331266769;
                }
              }
            }
          } else {
            result[0] += 0.010661175019965935;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09832385137914774476) ) ) {
            result[0] += -0.013691233731200176;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
              result[0] += 0.002621042643022535;
            } else {
              result[0] += 0.01014576292049128;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.178368028279654922) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3056000000000000383) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8717500000000001359) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.06527693244066057) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8655379161261905763) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2021500000000000241) ) ) {
                    result[0] += -0.0015915446474105137;
                  } else {
                    result[0] += 0.005841182911270584;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
                    result[0] += -0.001528315079512362;
                  } else {
                    result[0] += -0.014624166883263214;
                  }
                }
              } else {
                result[0] += -0.00914624526325748;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03255000000000000254) ) ) {
                result[0] += 0.00963400049968754;
              } else {
                result[0] += -0.00558731364576127;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
              result[0] += -0.014212121272815757;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06981312588668585339) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007150000000000000973) ) ) {
                    result[0] += 0.0019775153353806243;
                  } else {
                    result[0] += -0.002942889213849751;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3958333333333334259) ) ) {
                    result[0] += -0.002527512849943158;
                  } else {
                    result[0] += -0.00927068724009;
                  }
                }
              } else {
                result[0] += -0.008728136989543674;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += 0.0014515074703400873;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
                result[0] += -0.009531257621389256;
              } else {
                result[0] += -0.001709846903190196;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
              result[0] += 0.001555893326682058;
            } else {
              result[0] += 0.015772623894715027;
            }
          }
        }
      } else {
        result[0] += 0.007221397388498873;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7619500000000001272) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.203448275862069927) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1606500000000000428) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.810660377358491058) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1447.830190585607625) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2395.919566910411959) ) ) {
                    result[0] += 0.0030831245501027294;
                  } else {
                    result[0] += 0.007065945468952265;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
                    result[0] += -0.005225257179406382;
                  } else {
                    result[0] += 0.003209582232724089;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.27922077922078259) ) ) {
                    result[0] += 0.016296818098672207;
                  } else {
                    result[0] += 0.008291342973708832;
                  }
                } else {
                  result[0] += 0.0020063894429197954;
                }
              }
            } else {
              result[0] += -0.002257883846771142;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.912662090007628102) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3346.223713336835317) ) ) {
                result[0] += 0.009486752211865594;
              } else {
                result[0] += 0.024828823953057994;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03115000000000000407) ) ) {
                  result[0] += 0.014470256778966897;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1442533596541300533) ) ) {
                    result[0] += 0.009313662888173644;
                  } else {
                    result[0] += 0.0038444835193423713;
                  }
                }
              } else {
                result[0] += 0.0005488441766945339;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1412378932181409807) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1558403046997211827) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8285500000000000087) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.61404815090593701) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1459325396825397192) ) ) {
                    result[0] += 0.00398100456898064;
                  } else {
                    result[0] += 0.010056857064683334;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
                    result[0] += 0.0024761476970318573;
                  } else {
                    result[0] += 0.026836736892549017;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.06528046421667) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.810660377358491058) ) ) {
                    result[0] += 0.002039449301139134;
                  } else {
                    result[0] += -0.0009142850690462016;
                  }
                } else {
                  result[0] += 0.011276773899294225;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05115000000000000796) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0487500000000000086) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.799613899613900614) ) ) {
                    result[0] += 9.029934520297788e-05;
                  } else {
                    result[0] += -0.007118059326899787;
                  }
                } else {
                  result[0] += -0.018828746072324758;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.772150000000000003) ) ) {
                  result[0] += -0.017005747792420898;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8671500000000000874) ) ) {
                    result[0] += 0.004597043911697107;
                  } else {
                    result[0] += -0.00281596445588513;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2181446333714152641) ) ) {
                result[0] += 0.008317621133809997;
              } else {
                result[0] += -0.010937957180864199;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09255000000000000726) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.68465909090909705) ) ) {
                  result[0] += 0.014670070457429121;
                } else {
                  result[0] += 0.023981132689481276;
                }
              } else {
                result[0] += 0.0017707677563260336;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.05561224489796146) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.5141620771046469) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500000000000456) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01205000000000000168) ) ) {
                    result[0] += 0.003820989465477838;
                  } else {
                    result[0] += -0.0004618821374981763;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5024443287353715926) ) ) {
                    result[0] += 0.0020885550781330753;
                  } else {
                    result[0] += -0.0005553222844190557;
                  }
                }
              } else {
                result[0] += 0.012627980334130809;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6804500000000001103) ) ) {
                result[0] += 0.013590161129787738;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
                  result[0] += 0.0042818216040029855;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7767500000000001625) ) ) {
                    result[0] += -0.007550985372723009;
                  } else {
                    result[0] += -0.0280055160478183;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.178976624942160184) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7155500000000001304) ) ) {
                result[0] += 0.00987265419734786;
              } else {
                result[0] += 0.019024806079399246;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                  result[0] += -0.0037683876055242004;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.462163846551056412) ) ) {
                    result[0] += 0.017946875062108694;
                  } else {
                    result[0] += 0.005119593900435865;
                  }
                }
              } else {
                result[0] += -0.01946032296235306;
              }
            }
          }
        } else {
          result[0] += -0.01956291928398456;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
        result[0] += -0.016169767507899523;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1380701.700019875308) ) ) {
          result[0] += 0.007349761153130887;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669540229885059901) ) ) {
            result[0] += 0.004445405073312394;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
                result[0] += -0.0022927459356524185;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4332407390653168489) ) ) {
                    result[0] += -0.016241960154655236;
                  } else {
                    result[0] += -0.00962553448817556;
                  }
                } else {
                  result[0] += -0.003040277534898174;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                result[0] += 0.009155196349801241;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03798846128036145048) ) ) {
                  result[0] += -0.009095611395506985;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
                    result[0] += 0.0027414148221692417;
                  } else {
                    result[0] += -0.0033175955522887135;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9107236455282137211) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383500000000000285) ) ) {
            result[0] += 0.01036171861297285;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
              result[0] += -0.011759324418955363;
            } else {
              result[0] += -0.0003435977687622654;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16406.66212384711616) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
              result[0] += -0.0023906318267404737;
            } else {
              result[0] += 0.0023226399712315054;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
              result[0] += 0.026925815500719312;
            } else {
              result[0] += 0.007690454654985967;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.02459016393443392) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03446328318850828271) ) ) {
              result[0] += 0.016722931867847728;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.87750000000000483) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3579500000000000459) ) ) {
                    result[0] += 0.016750219605485294;
                  } else {
                    result[0] += 0.00043434800009515504;
                  }
                } else {
                  result[0] += 0.023209144806766654;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193950000000000039) ) ) {
                    result[0] += 0.009932841849847962;
                  } else {
                    result[0] += -0.004593439045536659;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
                    result[0] += 8.874187296924954e-05;
                  } else {
                    result[0] += 0.010881724463148236;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5031527682228830178) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.436750302971882165) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                    result[0] += -0.001395627406697611;
                  } else {
                    result[0] += 0.011657776563128225;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396500000000000741) ) ) {
                    result[0] += 0.007089934541263071;
                  } else {
                    result[0] += -0.002114391134780231;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959959919839679876) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                    result[0] += 0.0145178964753703;
                  } else {
                    result[0] += -0.0010748368774547374;
                  }
                } else {
                  result[0] += 0.018713255478480375;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5093795867771410135) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4462.713921450710586) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15791.59976423629087) ) ) {
                    result[0] += -0.005256361913859136;
                  } else {
                    result[0] += -0.015545125370733362;
                  }
                } else {
                  result[0] += 0.004929614211809117;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2797500000000000542) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1852970055032208962) ) ) {
                    result[0] += 0.00796352606397426;
                  } else {
                    result[0] += -0.0027470555744333936;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += 0.011562392339147763;
                  } else {
                    result[0] += -0.0003823783790531879;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.171550000000000008) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279657701681118087) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7520000000000001128) ) ) {
                  result[0] += 0.009634138582722197;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03324520994880592051) ) ) {
                    result[0] += 0.0016331999294056472;
                  } else {
                    result[0] += -0.003126532907684701;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                    result[0] += -0.002463664778676542;
                  } else {
                    result[0] += -0.005461783613660337;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28064.69142083861152) ) ) {
                    result[0] += 0.010806384545228495;
                  } else {
                    result[0] += -0.0024304881914562946;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-202581.8869749966834) ) ) {
                result[0] += 0.008291050482565829;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.5009469696969973) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)113.4891304347826235) ) ) {
                    result[0] += 9.039716581292893e-05;
                  } else {
                    result[0] += 0.014899073663260478;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                    result[0] += 0.0007859058627650983;
                  } else {
                    result[0] += -0.006048276019259;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19954.67408175594392) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24674.59819322649491) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1903887996092470669) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.9270833333333428) ) ) {
                    result[0] += 0.008049441779618928;
                  } else {
                    result[0] += -0.003975745548094142;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-114816.4915942720399) ) ) {
                    result[0] += -0.0016321610148913152;
                  } else {
                    result[0] += -0.004876602074912286;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  result[0] += -0.0025304444738968902;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                    result[0] += -0.0058234702432577385;
                  } else {
                    result[0] += -0.01302600853130405;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.91836734693879407) ) ) {
                    result[0] += 0.006274174407864382;
                  } else {
                    result[0] += -0.0021158409079803236;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
                    result[0] += 0.017599691023189874;
                  } else {
                    result[0] += -8.055733731384682e-07;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
                    result[0] += -0.002691708415826014;
                  } else {
                    result[0] += -0.004641870051365782;
                  }
                } else {
                  result[0] += -0.009491071049070357;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6558.077194235647767) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02925000000000000516) ) ) {
              result[0] += -0.0030181635581171397;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
                result[0] += 0.0038135708697396636;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
                  result[0] += -0.0024764945729202825;
                } else {
                  result[0] += 0.00014775820848343874;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
                result[0] += -0.0034321602557635094;
              } else {
                result[0] += -0.00776671966759593;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6252724869141016439) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6675000000000000933) ) ) {
                  result[0] += 0.0023202873234392796;
                } else {
                  result[0] += -0.0015613689941432454;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
                  result[0] += -0.006753252391819233;
                } else {
                  result[0] += 0.0004966578206556363;
                }
              }
            }
          }
        } else {
          result[0] += 0.0021475072510357164;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9308500000000000663) ) ) {
          result[0] += 0.006533166918526076;
        } else {
          result[0] += -0.0009251817904147615;
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4717290968772051563) ) ) {
          result[0] += -0.007349458037580384;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7371304289733293658) ) ) {
            result[0] += 0.0013023448554433576;
          } else {
            result[0] += -0.0050069375426992895;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.004475300714343433) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05152776681168800416) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
                  result[0] += 0.010552524864242106;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                    result[0] += -0.00451616850987277;
                  } else {
                    result[0] += 0.00791030738062119;
                  }
                }
              } else {
                result[0] += 0.014013531619059659;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404130762682907936) ) ) {
                  result[0] += 0.008917311812932248;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9175500000000001988) ) ) {
                    result[0] += 0.00175908282065555;
                  } else {
                    result[0] += -0.0006923404280266589;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                  result[0] += 0.011759123995734042;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0182500000000000058) ) ) {
                    result[0] += -0.005451843501152779;
                  } else {
                    result[0] += 0.005104253319832952;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.093171296296296724) ) ) {
                result[0] += -0.0019352504444893042;
              } else {
                result[0] += -0.01429840096943403;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5215.036723069660184) ) ) {
                result[0] += 0.007803244544486876;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.828427249789739584) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1080.464987976296243) ) ) {
                    result[0] += 0.0034598332561646696;
                  } else {
                    result[0] += -0.0004888170667037169;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01763478653336062602) ) ) {
                    result[0] += 0.001481623391308856;
                  } else {
                    result[0] += -0.00864922898913034;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1503.749159866045829) ) ) {
              result[0] += 0.006417099693440552;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.274781071744195637) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
                  result[0] += 0.0021547670740267623;
                } else {
                  result[0] += -0.0014671994436340654;
                }
              } else {
                result[0] += -0.008433688608221942;
              }
            }
          } else {
            result[0] += -0.008472463984270158;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01885000000000000217) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-798.0159720737170801) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01054285335689046123) ) ) {
                  result[0] += -0.005314543222449416;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
                    result[0] += -0.00043432559485677473;
                  } else {
                    result[0] += -0.00240546781663814;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2103829836027978628) ) ) {
                  result[0] += -0.006748194122731092;
                } else {
                  result[0] += -0.0024909091609176936;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4183000000000000607) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                  result[0] += -0.0008546181671512066;
                } else {
                  result[0] += 0.0033198509725749386;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04950512002784904914) ) ) {
                  result[0] += 0.001982647381226051;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06624646256753281837) ) ) {
                    result[0] += -0.003707657215256932;
                  } else {
                    result[0] += -0.0014665721948110629;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0475712373302734845) ) ) {
              result[0] += -0.009210122981868029;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4096.398333074744187) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.85329985652797902) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
                    result[0] += -0.0013298735332598955;
                  } else {
                    result[0] += 0.00462534498546256;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2702195988975289453) ) ) {
                    result[0] += -0.0019757009458504214;
                  } else {
                    result[0] += -0.005165573827764191;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2468.165232770545572) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.014709063378759879) ) ) {
                    result[0] += -0.013546521528257248;
                  } else {
                    result[0] += -0.006094164773295549;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                    result[0] += -0.004973451502459552;
                  } else {
                    result[0] += 0.002174002607593473;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
            result[0] += -0.003892970852730703;
          } else {
            result[0] += -0.011670947178441155;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-524.3174548467219438) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
              result[0] += -0.0016681978142363038;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.450900000000000023) ) ) {
                  result[0] += -0.0023747989072591316;
                } else {
                  result[0] += -0.007125063498940162;
                }
              } else {
                result[0] += -0.008325876640131414;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4096.398333074744187) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4791666666666666852) ) ) {
                    result[0] += -0.0018182657375433841;
                  } else {
                    result[0] += 0.0030605563780898696;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)124.738425925925938) ) ) {
                    result[0] += -0.003512121515048233;
                  } else {
                    result[0] += -0.008280391411855227;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.10363247863248048) ) ) {
                    result[0] += 0.011087405170463735;
                  } else {
                    result[0] += -0.002072309728286027;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9345935333859788363) ) ) {
                    result[0] += -0.0017386477733953233;
                  } else {
                    result[0] += 0.0033053726571253867;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704818006003851749) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05424999999999999961) ) ) {
                    result[0] += -0.0001885070118430586;
                  } else {
                    result[0] += -0.005294676648728296;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.7639318885448958) ) ) {
                    result[0] += 0.0025340187614042516;
                  } else {
                    result[0] += -0.0018970492650811643;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08575000000000000677) ) ) {
                    result[0] += -0.009808325261298058;
                  } else {
                    result[0] += -0.0004738407534669748;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                    result[0] += 0.01820196981565302;
                  } else {
                    result[0] += 0.0007867099354386992;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
            result[0] += 0.009284067120847445;
          } else {
            result[0] += -0.0010480214662831873;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1187711505358662739) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03748475326359510668) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                  result[0] += 0.019524018575957917;
                } else {
                  result[0] += 0.0048308275614194806;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.968950000000000089) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1327859648471575726) ) ) {
                    result[0] += 0.003633547481665782;
                  } else {
                    result[0] += -0.0004941365312258204;
                  }
                } else {
                  result[0] += -0.019094401942595946;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04411284851513137123) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                  result[0] += -0.030113046436335247;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05815000000000000724) ) ) {
                    result[0] += 0.005191723685096585;
                  } else {
                    result[0] += -0.01976699936705166;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1521960466719389227) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8538500000000001089) ) ) {
                    result[0] += 0.012975232943408578;
                  } else {
                    result[0] += -0.002626527529322365;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.3783980078854583) ) ) {
                    result[0] += -0.0016849225631669126;
                  } else {
                    result[0] += -0.01733448378392437;
                  }
                }
              }
            }
          } else {
            result[0] += 0.016208798931949726;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7434000000000000608) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2021500000000000241) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7172500000000000542) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
                    result[0] += 0.011263291982747831;
                  } else {
                    result[0] += 0.0024174771070097937;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01995000000000000592) ) ) {
                    result[0] += 0.011055903168843773;
                  } else {
                    result[0] += 0.022695607996299882;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
                  result[0] += 0.03177941043923507;
                } else {
                  result[0] += 0.01395298505888896;
                }
              }
            } else {
              result[0] += -0.004069000994806032;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.011669935085872829;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7574500000000000677) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1491111991420308314) ) ) {
                  result[0] += 0.004236821450516695;
                } else {
                  result[0] += -0.012941241203425734;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7673500000000000876) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1691505514173692326) ) ) {
                    result[0] += 0.03077610375423305;
                  } else {
                    result[0] += 0.002197603540826571;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
                    result[0] += -0.010848757370155167;
                  } else {
                    result[0] += 0.006332666504052658;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714418462289422185) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2232000000000000095) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                    result[0] += 0.016295537871699465;
                  } else {
                    result[0] += -0.0026178954215097974;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
                    result[0] += 0.002343342730803012;
                  } else {
                    result[0] += 0.014208509096910925;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                    result[0] += 9.569439472163653e-06;
                  } else {
                    result[0] += -0.019529686395674387;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.344454208162468356) ) ) {
                    result[0] += -0.0036060367812690572;
                  } else {
                    result[0] += 0.004411132861799899;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4423005565862709321) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
                    result[0] += -0.008306904496177636;
                  } else {
                    result[0] += 0.007943160023185994;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.205913324303087758) ) ) {
                    result[0] += 0.004803980616513479;
                  } else {
                    result[0] += -0.0007296949732841949;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1626000000000000223) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3071499552684361367) ) ) {
                    result[0] += -0.005908911285688481;
                  } else {
                    result[0] += 0.00801888323074792;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
                    result[0] += -0.0014158526403612265;
                  } else {
                    result[0] += 0.010402066404103526;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3630166700826673032) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8823.72194961022069) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.67543859649123306) ) ) {
                    result[0] += 0.003354481022059094;
                  } else {
                    result[0] += -0.0036819946735987775;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.77783929136349528) ) ) {
                    result[0] += -0.0028213265680614506;
                  } else {
                    result[0] += -0.010303538143083147;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14109.36047608618719) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3012500000000000733) ) ) {
                    result[0] += -0.0006781292788693638;
                  } else {
                    result[0] += -0.010906599532246153;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.417288557213931988) ) ) {
                    result[0] += -0.003232277174561038;
                  } else {
                    result[0] += 0.009485165542042064;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27090.89082285294353) ) ) {
                result[0] += 0.015546825280199185;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.90736842105263804) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                    result[0] += 0.0011119531230458298;
                  } else {
                    result[0] += 0.010434752714297866;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16737.80440239057862) ) ) {
                    result[0] += 0.0002313487605342768;
                  } else {
                    result[0] += -0.014503990570070933;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.343954916307972258) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1381500000000000228) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04770000000000000628) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06675000000000001765) ) ) {
                    result[0] += -0.0038292812147252236;
                  } else {
                    result[0] += -0.009919313666887804;
                  }
                } else {
                  result[0] += 0.007482236037212569;
                }
              } else {
                result[0] += -0.01193084076855308;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15759905381431238) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3590000000000000413) ) ) {
                    result[0] += -0.0028812140082810616;
                  } else {
                    result[0] += -0.011379047894654028;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9826836581709146312) ) ) {
                    result[0] += -0.010819988388470434;
                  } else {
                    result[0] += -0.01698754666038892;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6558.077194235647767) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
                    result[0] += -0.009015295388042927;
                  } else {
                    result[0] += -0.0018564856304006832;
                  }
                } else {
                  result[0] += 0.0027472786194941033;
                }
              }
            }
          } else {
            result[0] += 0.0030603778681647016;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.12251407129456027) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5469.088584656095009) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4929566561779720746) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7323500000000001675) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02825000000000000427) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4058348495350315166) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359500000000001263) ) ) {
                  result[0] += 0.020764402547908633;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                    result[0] += 0.009322833265183322;
                  } else {
                    result[0] += -0.006495767251468805;
                  }
                }
              } else {
                result[0] += -0.0024989934162829085;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.390774125132556271) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1317028901634673399) ) ) {
                  result[0] += 0.0028328607710831036;
                } else {
                  result[0] += 0.010019550355467125;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
                  result[0] += 0.01636326714321969;
                } else {
                  result[0] += 0.027888553803065687;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1474839081354617498) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09483558412827299) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02475000000000000464) ) ) {
                    result[0] += 0.0024087996218481677;
                  } else {
                    result[0] += 0.011650665336632417;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1018125874525257907) ) ) {
                    result[0] += -0.011785199612550036;
                  } else {
                    result[0] += 0.0004454339295490347;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.93844696969697239) ) ) {
                  result[0] += 0.0010867087676427268;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
                    result[0] += 0.007218677875015477;
                  } else {
                    result[0] += 0.021670115301917578;
                  }
                }
              }
            } else {
              result[0] += -0.0131781387012387;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.33589743589743826) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.58506108848574634) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476566175261612823) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2002349158630263581) ) ) {
                    result[0] += 0.003400181259596709;
                  } else {
                    result[0] += -0.007830648609039653;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
                    result[0] += 0.009693474318731136;
                  } else {
                    result[0] += 0.002915589504437858;
                  }
                }
              } else {
                result[0] += -0.016999914085780988;
              }
            } else {
              result[0] += 0.020290794097218994;
            }
          } else {
            result[0] += -0.013882349158584953;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)107.3130671506352201) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8691500000000000892) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31307.28118192806505) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.401950000000000085) ) ) {
                  result[0] += 0.0008987602739245098;
                } else {
                  result[0] += -0.012791338494484139;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1773584761031476165) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.335416666666668029) ) ) {
                    result[0] += 0.0013689514659647965;
                  } else {
                    result[0] += 0.014762339763046806;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.54692082111437301) ) ) {
                    result[0] += 0.0009868388175847728;
                  } else {
                    result[0] += 0.009861512090913689;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                    result[0] += -0.001100881422096268;
                  } else {
                    result[0] += 0.012942985635117041;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
                    result[0] += -0.001783985854569544;
                  } else {
                    result[0] += 0.003943788691145305;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1508500000000000119) ) ) {
                  result[0] += -0.024313703176624096;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                    result[0] += 0.003537349665036851;
                  } else {
                    result[0] += -0.004155253197672559;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.10978638847492306) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                  result[0] += -0.007519830949548416;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3241500000000000492) ) ) {
                    result[0] += 0.0033956152760281216;
                  } else {
                    result[0] += -0.002563306436775162;
                  }
                }
              } else {
                result[0] += 0.007206473798804262;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9308500000000000663) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4214500000000000468) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9003500000000000947) ) ) {
                    result[0] += 0.01042678925182604;
                  } else {
                    result[0] += 0.02098971409221174;
                  }
                } else {
                  result[0] += 0.006036214444187241;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
                  result[0] += -0.00212756442223175;
                } else {
                  result[0] += 0.00846294291132756;
                }
              }
            }
          }
        } else {
          result[0] += -0.00853865784113574;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594010800196367761) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08575000000000000677) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.222539682539683703) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.040661157024794115) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.528116531165311986) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.60769230769231797) ) ) {
                    result[0] += 0.0010931531533668777;
                  } else {
                    result[0] += 0.007277040010832998;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1039.769997802646685) ) ) {
                    result[0] += 0.0006361449303449654;
                  } else {
                    result[0] += -0.007641067655346969;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2936787115246400348) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
                    result[0] += 0.0041941068093080775;
                  } else {
                    result[0] += 0.0143668965167166;
                  }
                } else {
                  result[0] += -0.0026264979314824513;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03835000000000000214) ) ) {
                    result[0] += -0.00229758227096497;
                  } else {
                    result[0] += 0.009632677205715822;
                  }
                } else {
                  result[0] += -0.01166757248599068;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
                  result[0] += -0.004057413754369405;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500000000000721) ) ) {
                    result[0] += -0.009276318730215928;
                  } else {
                    result[0] += -0.02261443893578995;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1195.496933691951881) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3868846981858549694) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331044782851160402) ) ) {
                    result[0] += 0.0023387374459671664;
                  } else {
                    result[0] += 0.00761262317691885;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5273.494216348623922) ) ) {
                    result[0] += -0.00754114272146465;
                  } else {
                    result[0] += 0.0009307316516135991;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
                    result[0] += 0.006538557213437497;
                  } else {
                    result[0] += 0.016729848944002944;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2068500000000000061) ) ) {
                    result[0] += 0.00523137629061949;
                  } else {
                    result[0] += -0.002847181069361848;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                  result[0] += -0.006229122003877749;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430457737088246306) ) ) {
                    result[0] += -0.0012411422715124763;
                  } else {
                    result[0] += 0.00878664230675386;
                  }
                }
              } else {
                result[0] += -0.01367192184674726;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
              result[0] += 0.007029029966386818;
            } else {
              result[0] += 0.014785046948024311;
            }
          } else {
            result[0] += 0.0014404189446181933;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09084425789999171774) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
              result[0] += 0.012986542418276579;
            } else {
              result[0] += -7.750213203544588e-06;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
              result[0] += 0.011946682905855505;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2775211666417710665) ) ) {
                    result[0] += 0.01296989152537256;
                  } else {
                    result[0] += -0.0011854107875641049;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                    result[0] += -0.004102213956385667;
                  } else {
                    result[0] += -0.015972121133224798;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.504385964912282603) ) ) {
                  result[0] += -0.0013415227541400203;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                    result[0] += -0.0061503386825216355;
                  } else {
                    result[0] += -0.02387638279810576;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1200000000000000094) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.79239388062918081) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1674644430706538067) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7217500000000002247) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += -0.018112299010015875;
                  } else {
                    result[0] += 0.005908379093862852;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362500000000001821) ) ) {
                    result[0] += -0.026651925437420454;
                  } else {
                    result[0] += -0.0099198759579978;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.5141620771046469) ) ) {
                    result[0] += 0.016956414654648148;
                  } else {
                    result[0] += -0.0009260937557621099;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758534714230918006) ) ) {
                    result[0] += 0.0007372930654320911;
                  } else {
                    result[0] += -0.00425535181803895;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.436608844527655) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7907500000000000639) ) ) {
                  result[0] += 0.022249135597241107;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1356382126079153372) ) ) {
                    result[0] += 0.00835603529964461;
                  } else {
                    result[0] += -0.010509827949215478;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += 0.0006650437176354989;
                  } else {
                    result[0] += -0.014558816875736453;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2934.007013777737939) ) ) {
                    result[0] += 0.01676913937154099;
                  } else {
                    result[0] += 0.0011830619972961992;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2242439134084858454) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935119961629459817) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.60769230769231797) ) ) {
                    result[0] += -0.013736841952793769;
                  } else {
                    result[0] += 0.0027798261800385977;
                  }
                } else {
                  result[0] += 0.012844698069790186;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279657701681118087) ) ) {
                  result[0] += -0.02134182208733574;
                } else {
                  result[0] += -0.009135538718010346;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3259297052268694261) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5415710447289395768) ) ) {
                    result[0] += 0.004310704073881739;
                  } else {
                    result[0] += -0.007408964330476134;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3428.95033302068623) ) ) {
                    result[0] += 0.017686585991441062;
                  } else {
                    result[0] += 0.003745065529051377;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1416500000000000259) ) ) {
                  result[0] += 0.012721297139255041;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
                    result[0] += -0.0035717612344128235;
                  } else {
                    result[0] += 0.0039392132173434145;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.023612328920421536) ) ) {
        result[0] += 0.011009878107812543;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1380701.700019875308) ) ) {
            result[0] += 0.006458743254761136;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.005850000000000000165) ) ) {
              result[0] += -0.012221559059908382;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5891.981688076555656) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.11050566695728747) ) ) {
                  result[0] += 0.010003158855637705;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.39402985074629271) ) ) {
                    result[0] += -0.008801893184527402;
                  } else {
                    result[0] += -0.001953278131024392;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6041666666666668517) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
                    result[0] += -0.0005304183359338637;
                  } else {
                    result[0] += -0.0029275646319911032;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
                    result[0] += -0.013145520736589813;
                  } else {
                    result[0] += -0.0037800386564313124;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0166500000000000016) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1670000000000000373) ) ) {
                result[0] += 0.00920004595611416;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                  result[0] += -0.008333373704273304;
                } else {
                  result[0] += -6.191475321098123e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.3440978838632134) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.3881086142322161) ) ) {
                  result[0] += 0.006500555584433151;
                } else {
                  result[0] += 0.02467014834211202;
                }
              } else {
                result[0] += -0.0009233426504350413;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                  result[0] += 0.013805972953683712;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5025500000000000522) ) ) {
                    result[0] += 0.007072757352507608;
                  } else {
                    result[0] += 0.0003016171590018957;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.67136150234741976) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
                    result[0] += -0.01143778903339566;
                  } else {
                    result[0] += -0.0032029096893865347;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86811594202898767) ) ) {
                    result[0] += 0.005342471346172676;
                  } else {
                    result[0] += -0.0005699334395545835;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733500000000000318) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)217.929861111111137) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)104.7575757575757649) ) ) {
                    result[0] += -0.0028692178508864623;
                  } else {
                    result[0] += 0.010187477084099575;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.741000000000000103) ) ) {
                    result[0] += -0.003361761887303103;
                  } else {
                    result[0] += 0.0005067405535794273;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-87920.40362345064932) ) ) {
                    result[0] += -0.0005277184345995194;
                  } else {
                    result[0] += -0.002912583108917768;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
                    result[0] += -0.0027661289462355626;
                  } else {
                    result[0] += -0.005374547485074569;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
        result[0] += -0.0011529660792854576;
      } else {
        result[0] += -0.012440554694553074;
      }
    }
  }
}

