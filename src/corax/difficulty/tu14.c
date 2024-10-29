#include "prediction.h"
double predict_margin_unit14(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
            sum += (double)0.003401572848591504199;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
              sum += (double)-0.005096016118698144283;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
                sum += (double)-0.003290916509924593936;
              } else {
                sum += (double)0.0003916148825473864982;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9631328576282706111) ) ) {
                    sum += (double)0.006331910567610336826;
                  } else {
                    sum += (double)0.001653548144829892997;
                  }
                } else {
                  sum += (double)-0.0006111867628257672876;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                  sum += (double)-0.00430840916739785515;
                } else {
                  sum += (double)-0.0007261827491032383369;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                sum += (double)0.005380125714020492396;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3211.649567834616846) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)237.3704492435913664) ) ) {
                      sum += (double)0.004827555362500859926;
                    } else {
                      sum += (double)0.001323382954450073347;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3332.614804015349819) ) ) {
                      sum += (double)0.002392375320349603585;
                    } else {
                      sum += (double)3.433319252962530396e-05;
                    }
                  }
                } else {
                  sum += (double)-0.002239432637676723892;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8662560233874664339) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1698.023085430723995) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
                      sum += (double)-0.00129282979244556024;
                    } else {
                      sum += (double)-6.369221756309360656e-07;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                      sum += (double)-0.001537319606121322719;
                    } else {
                      sum += (double)-0.006555659992676123732;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000000000000611) ) ) {
                      sum += (double)0.005798653056663819437;
                    } else {
                      sum += (double)-0.0002574723756746500431;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                      sum += (double)0.001778634067185282368;
                    } else {
                      sum += (double)1.331965479855537268e-05;
                    }
                  }
                }
              } else {
                sum += (double)0.003515272928497419416;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                  sum += (double)0.0002413117213793784539;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
                      sum += (double)-0.003917719849080828279;
                    } else {
                      sum += (double)0.0002044319384980916674;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                      sum += (double)-0.008653460434303778676;
                    } else {
                      sum += (double)-0.002501572162388690686;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
                  sum += (double)-0.001010185164208955277;
                } else {
                  sum += (double)0.003022858299678446783;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
          sum += (double)-0.003872381131052177183;
        } else {
          sum += (double)-0.0002427515900804620664;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.756425009589567043) ) ) {
              sum += (double)0.002163690626590618164;
            } else {
              sum += (double)-0.001853705658088468248;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                sum += (double)0.003449025960195297932;
              } else {
                sum += (double)-0.001860004791868951875;
              }
            } else {
              sum += (double)0.007123193636252325017;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.275716440422323128) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3.295836866004294041) ) ) {
                sum += (double)0.0005397969545457150875;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                  sum += (double)0.009491060254423346054;
                } else {
                  sum += (double)0.00146393197653613789;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2556.820004021212753) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2168.319171519228803) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1079.931960267036857) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)187.8653910326616767) ) ) {
                      sum += (double)-0.001081539164718533152;
                    } else {
                      sum += (double)0.002177604575973273934;
                    }
                  } else {
                    sum += (double)-0.001051368623531912742;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                    sum += (double)0.004192054265619748164;
                  } else {
                    sum += (double)3.341578959464905471e-05;
                  }
                }
              } else {
                sum += (double)-0.003460605544053487869;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.179108910891089934) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
                sum += (double)-0.001735764251147886876;
              } else {
                sum += (double)-0.008223269708274961315;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.376459500000000058) ) ) {
                  sum += (double)-0.000366404519420938143;
                } else {
                  sum += (double)-0.006389559499834611585;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                    sum += (double)-0.003406132261589850559;
                  } else {
                    sum += (double)0.0003502765438080285071;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                      sum += (double)0.003042716932395412178;
                    } else {
                      sum += (double)0.0003943377867654538683;
                    }
                  } else {
                    sum += (double)-0.001898442757893921201;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4033000000000000473) ) ) {
          sum += (double)0.005695342428750910582;
        } else {
          sum += (double)0.0008735534765753626184;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.996815286624204155) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
        sum += (double)0.003364567735791645225;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                sum += (double)0.003012768659240781625;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
                  sum += (double)0.0007451492621440118647;
                } else {
                  sum += (double)-0.003225937452716738131;
                }
              }
            } else {
              sum += (double)0.003611090534849949445;
            }
          } else {
            sum += (double)-0.001539269082446039806;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
              sum += (double)-0.001707509958596099484;
            } else {
              sum += (double)-0.006227646160785955606;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              sum += (double)0.003788808089781664588;
            } else {
              sum += (double)-0.003131046160043247061;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35.22489294336831023) ) ) {
        sum += (double)-0.004799925544033425973;
      } else {
        sum += (double)-0.001322114632848724698;
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4204754184957832375) ) ) {
                sum += (double)0.001017749909318393887;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3010418023613812832) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2868203899923389977) ) ) {
                    sum += (double)-0.0009733364790035033045;
                  } else {
                    sum += (double)0.004341688577937644587;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                    sum += (double)-0.008145423716252738269;
                  } else {
                    sum += (double)-0.00186651570321218316;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05855000000000001176) ) ) {
                sum += (double)0.005071975574121269023;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                      sum += (double)0.0006859152995005729373;
                    } else {
                      sum += (double)0.006093173099026051587;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                      sum += (double)-0.006686082333749191788;
                    } else {
                      sum += (double)0.00209334470139115698;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                    sum += (double)0.005412411859973658909;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
                      sum += (double)-0.003888589977020270264;
                    } else {
                      sum += (double)0.001878668620900887784;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.00146031609591904107;
          }
        } else {
          sum += (double)-3.703930942681313353e-05;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1448.773443424887091) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.53228021978022078) ) ) {
                sum += (double)0.000404399125578554881;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
                  sum += (double)0.004050947215732096304;
                } else {
                  sum += (double)0.008446484541512807448;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3107.181136317587516) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2060232146152657651) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5365353407474883207) ) ) {
                    sum += (double)-0.002514589953746758887;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                      sum += (double)-0.0004549486124053842657;
                    } else {
                      sum += (double)0.004536379180916733957;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                    sum += (double)-0.001805812231683791682;
                  } else {
                    sum += (double)-0.006329018902497287463;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                      sum += (double)0.003171340088005085347;
                    } else {
                      sum += (double)-0.001292022929948191245;
                    }
                  } else {
                    sum += (double)0.009286767481122585807;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5289000000000001478) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
                      sum += (double)0.002340289740554186287;
                    } else {
                      sum += (double)-0.001990620084256680862;
                    }
                  } else {
                    sum += (double)-0.003619712982415780426;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.59053651266766316) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1490519239829231901) ) ) {
                sum += (double)-0.002884840897909070508;
              } else {
                sum += (double)0.001713033416753822298;
              }
            } else {
              sum += (double)-0.004995712219250220652;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5381500000000001283) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5033500000000000751) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)642.537947836085209) ) ) {
                    sum += (double)0.001141776968866392876;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                      sum += (double)-0.001573753865397709006;
                    } else {
                      sum += (double)-0.00483111916072508172;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                      sum += (double)-0.001592747285832781532;
                    } else {
                      sum += (double)0.002093891375645203379;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
                      sum += (double)0.006655541964632122505;
                    } else {
                      sum += (double)0.001226286298691071268;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                    sum += (double)-0.001117290094852932316;
                  } else {
                    sum += (double)-0.006489018278927101945;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5988367574978012975) ) ) {
                      sum += (double)0.00157723634645361285;
                    } else {
                      sum += (double)-0.003580014478467940468;
                    }
                  } else {
                    sum += (double)-0.004143203794029530311;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
                sum += (double)-0.001723946397136642654;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                  sum += (double)0.001100590887482793233;
                } else {
                  sum += (double)0.005970889763704195427;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4206000000000000294) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5430163914776303669) ) ) {
                  sum += (double)-0.0116061721406319901;
                } else {
                  sum += (double)-0.004494530234576093845;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1366.16280735785358) ) ) {
                  sum += (double)0.001070701841216288976;
                } else {
                  sum += (double)-0.004626557841187095566;
                }
              }
            } else {
              sum += (double)0.002152057128248672721;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5258.869399769443589) ) ) {
            sum += (double)-0.0009486272132936824763;
          } else {
            sum += (double)0.006223866617757273928;
          }
        } else {
          sum += (double)0.006116710308160017498;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.14908063427800311) ) ) {
          sum += (double)0.00131627649150872013;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
            sum += (double)-0.003421693427573983554;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
              sum += (double)5.61431892946984677e-05;
            } else {
              sum += (double)0.003373469509449468755;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.996815286624204155) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
              sum += (double)0.0002516167544805022419;
            } else {
              sum += (double)0.004169481314515806683;
            }
          } else {
            sum += (double)-0.001380758390494023343;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
              sum += (double)0.0002254453203083334396;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                sum += (double)-0.002273513297825594057;
              } else {
                sum += (double)-0.008188107209303758377;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.100981848184818812) ) ) {
              sum += (double)-0.001885714642671966782;
            } else {
              sum += (double)0.004096540564982585966;
            }
          }
        }
      } else {
        sum += (double)0.002956925020555594124;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35.22489294336831023) ) ) {
        sum += (double)-0.004408935211087180832;
      } else {
        sum += (double)-0.001214418355994009539;
      }
    }
  }
  return sum;
}
