#include "prediction.h"
double predict_margin_unit10(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2461167842040226927) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
              sum += (double)-0.0005230026817499611224;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)24506.24669275645647) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.69615384615386233) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.26872082166200784) ) ) {
                      sum += (double)0.002251427205623617814;
                    } else {
                      sum += (double)-0.00361367830552275851;
                    }
                  } else {
                    sum += (double)0.00870874510564131378;
                  }
                } else {
                  sum += (double)-0.003892515994737826002;
                }
              } else {
                sum += (double)0.008011024955189439967;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.180896918882973573) ) ) {
              sum += (double)0.0006980009772978276782;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                sum += (double)0.004280768523478590236;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6257.283101614548286) ) ) {
                  sum += (double)-0.001650139500350658378;
                } else {
                  sum += (double)-0.008109265934571407292;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
            sum += (double)-1.469629927515743063e-05;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8135000000000001119) ) ) {
                      sum += (double)0.002272199258194545091;
                    } else {
                      sum += (double)-0.004770877064899597605;
                    }
                  } else {
                    sum += (double)0.00286528800110414511;
                  }
                } else {
                  sum += (double)0.004669431031591806357;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                  sum += (double)0.001670180264012603288;
                } else {
                  sum += (double)-0.009674445708259994323;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7916000000000001924) ) ) {
                  sum += (double)0.009479125063603368803;
                } else {
                  sum += (double)0.002146885631365587268;
                }
              } else {
                sum += (double)0.002251435053343630709;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7159045000000000547) ) ) {
            sum += (double)-0.002791869607627760815;
          } else {
            sum += (double)0.002599659881674426434;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
            sum += (double)-0.0001590768871222215139;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
              sum += (double)0.001214541143674349949;
            } else {
              sum += (double)0.006769783993141187048;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              sum += (double)-0.001491121633043056109;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)195.4405187835420463) ) ) {
                  sum += (double)0.01026472221172736871;
                } else {
                  sum += (double)-0.001395644088090350473;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
                    sum += (double)0.00694531683770296341;
                  } else {
                    sum += (double)0.001679995873360695929;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
                      sum += (double)-0.0001618474511972073739;
                    } else {
                      sum += (double)0.003560435791687776349;
                    }
                  } else {
                    sum += (double)-0.004655789144770928339;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                sum += (double)-0.004530563289994489831;
              } else {
                sum += (double)0.002200784678698600692;
              }
            } else {
              sum += (double)0.001728802952632443185;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.831026909314261597) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                    sum += (double)0.006436322089633936087;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6903684837426190546) ) ) {
                      sum += (double)0.002870564353619308676;
                    } else {
                      sum += (double)-0.002219935335956106388;
                    }
                  }
                } else {
                  sum += (double)-0.001988080972840471083;
                }
              } else {
                sum += (double)-0.0004761168235984191799;
              }
            } else {
              sum += (double)-0.0009352033539516184596;
            }
          } else {
            sum += (double)7.201517228660035837e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1264500000000000346) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
              sum += (double)0.003189661671995872028;
            } else {
              sum += (double)-0.0006325723561637975386;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
              sum += (double)0.001890133670301390569;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
                  sum += (double)-0.01209695988084381196;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
                    sum += (double)-0.003257977456611788752;
                  } else {
                    sum += (double)-0.00914162909877767535;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                  sum += (double)-0.003315752882025930093;
                } else {
                  sum += (double)0.0006749398593441917771;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1885.524186461903128) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
              sum += (double)0.01103047447271624133;
            } else {
              sum += (double)0.0008717374645424572684;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2924659694118884601) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
                sum += (double)0.001914540646408289474;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4231.908399006179934) ) ) {
                  sum += (double)-0.007830303200742230393;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                    sum += (double)-0.002609730850409852122;
                  } else {
                    sum += (double)0.001008147207021236127;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
                sum += (double)-0.005635608060131132996;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                      sum += (double)0.003639333794485626831;
                    } else {
                      sum += (double)-0.0005114375386325972946;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                      sum += (double)-0.00835370838245667359;
                    } else {
                      sum += (double)-0.0003224223604156748412;
                    }
                  }
                } else {
                  sum += (double)0.003831203851842343664;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2225.774828494720623) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.028991596638655803) ) ) {
        sum += (double)-0.0002392181692085202141;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
              sum += (double)-0.004515985338450192489;
            } else {
              sum += (double)-0.01174398811709653247;
            }
          } else {
            sum += (double)-0.001074742474622607767;
          }
        } else {
          sum += (double)2.512523536648119537e-05;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
        sum += (double)0.003727003084649949376;
      } else {
        sum += (double)-0.0001669497842203094358;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
            sum += (double)0.001550586708147997771;
          } else {
            sum += (double)-0.003572306868537715192;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7246031178489703573) ) ) {
            sum += (double)0.01121034607055020234;
          } else {
            sum += (double)0.003644805385895236432;
          }
        }
      } else {
        sum += (double)-2.943527305408256785e-05;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4236293998663874238) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08188154061328727085) ) ) {
                sum += (double)0.003025704258039902967;
              } else {
                sum += (double)0.0003903305276565051168;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1037995575841958729) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
                    sum += (double)0.004956939329790018695;
                  } else {
                    sum += (double)0.0003935765640082739231;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2956.070258926816678) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
                      sum += (double)-0.0003735139741223327241;
                    } else {
                      sum += (double)-0.004207425935741570047;
                    }
                  } else {
                    sum += (double)-0.008723137281858505884;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                  sum += (double)-0.0007159502582411732654;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                    sum += (double)-0.01128242360275966832;
                  } else {
                    sum += (double)-0.001348774730639999307;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2556.820004021212753) ) ) {
              sum += (double)-0.001329041450188400003;
            } else {
              sum += (double)-0.009420003506859470771;
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
              sum += (double)0.006559766382591594551;
            } else {
              sum += (double)0.001646545548496589203;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35052.81431451296521) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8745500000000000496) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                      sum += (double)-0.0003144488284537323686;
                    } else {
                      sum += (double)0.002075060263166347754;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                      sum += (double)0.0005308583029308768268;
                    } else {
                      sum += (double)-0.002236224016017885133;
                    }
                  }
                } else {
                  sum += (double)0.004486147564497424724;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                    sum += (double)-0.004806263136346355068;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                      sum += (double)0.004645785300813110898;
                    } else {
                      sum += (double)-0.0003716246622633547565;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                      sum += (double)-0.0004960480848257534277;
                    } else {
                      sum += (double)-0.005174967466356048332;
                    }
                  } else {
                    sum += (double)-0.008335012741086838747;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.00378787878788067) ) ) {
                  sum += (double)0.01187104212598328462;
                } else {
                  sum += (double)0.001305929371729920661;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000000000000244) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                    sum += (double)-0.003561310659634334824;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                      sum += (double)0.006615875815727781557;
                    } else {
                      sum += (double)-0.0002233851683406463983;
                    }
                  }
                } else {
                  sum += (double)0.005204873006239651642;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
              sum += (double)-0.00118290267408365608;
            } else {
              sum += (double)0.004027705866515053634;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2571.528544352357585) ) ) {
              sum += (double)0.0006053368952302680015;
            } else {
              sum += (double)-0.005851845110419713787;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5500179611347216779) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                sum += (double)-0.004470584772069371646;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
                    sum += (double)0.003774911926266312067;
                  } else {
                    sum += (double)-0.0002669906558188472434;
                  }
                } else {
                  sum += (double)-0.004640302707680411462;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                sum += (double)-0.008002684970865798705;
              } else {
                sum += (double)-0.002775934561472934853;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
              sum += (double)-0.01081439745444613514;
            } else {
              sum += (double)-0.00271565461860947795;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1994245490579544811) ) ) {
        sum += (double)0.001274413008851380848;
      } else {
        sum += (double)0.00659821871540595354;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1624179537353906966) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
                  sum += (double)0.0002201415398894038592;
                } else {
                  sum += (double)0.005338632645266909622;
                }
              } else {
                sum += (double)-0.004901105727502527189;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                sum += (double)-0.00123405397408800745;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.291787790697677352) ) ) {
                  sum += (double)-0.000296466620249493263;
                } else {
                  sum += (double)0.004221523520687941143;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1887915000000000287) ) ) {
              sum += (double)0.001257720201527251849;
            } else {
              sum += (double)0.009814777313685974988;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2237958198855495573) ) ) {
                  sum += (double)-0.0003796131915809161151;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
                    sum += (double)0.009396477563301038061;
                  } else {
                    sum += (double)5.32145340401639936e-07;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                  sum += (double)-0.005865822234014801163;
                } else {
                  sum += (double)-0.0006462904135848137428;
                }
              }
            } else {
              sum += (double)0.009222038166123028638;
            }
          } else {
            sum += (double)-0.001481734677741346077;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5257804178184334321) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                sum += (double)-0.001757143700598615436;
              } else {
                sum += (double)-0.008416329631720237056;
              }
            } else {
              sum += (double)0.0004527532747109069291;
            }
          } else {
            sum += (double)0.001352677530338164489;
          }
        } else {
          sum += (double)1.676704327076949914e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000000000000333) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
              sum += (double)2.392060230484075562e-05;
            } else {
              sum += (double)0.01077115620291304622;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
                  sum += (double)0.004620195030065965894;
                } else {
                  sum += (double)-0.0004145684504294181892;
                }
              } else {
                sum += (double)-0.003443115593537575923;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
                sum += (double)0.004420089310995771112;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790963257199603031) ) ) {
                  sum += (double)-0.003828124303865831825;
                } else {
                  sum += (double)0.002008171301671925289;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3166171325058890207) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1018.758829443079094) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.78019323671498242) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                      sum += (double)0.005828872059893287945;
                    } else {
                      sum += (double)0.0003037365631140342775;
                    }
                  } else {
                    sum += (double)-0.003723161789832381795;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                    sum += (double)0.007754742203340064637;
                  } else {
                    sum += (double)0.00130240156609858263;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                  sum += (double)-0.005699456898544207235;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    sum += (double)0.004146975951593403695;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01242517226504776494) ) ) {
                      sum += (double)0.001498228038330512695;
                    } else {
                      sum += (double)-0.000834447457852003369;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2592.581278167002438) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                  sum += (double)-0.0005946952943825563201;
                } else {
                  sum += (double)-0.004270404383875932124;
                }
              } else {
                sum += (double)-0.006416808023863058638;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
                  sum += (double)-0.007486785061239877026;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
                    sum += (double)0.002195796138013980745;
                  } else {
                    sum += (double)-0.004404790070137920219;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1860.099431670796776) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
                    sum += (double)-0.001064161125008986986;
                  } else {
                    sum += (double)-0.008747649267041347071;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
                    sum += (double)0.00372609192814781897;
                  } else {
                    sum += (double)-0.002073764887287076353;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558350000000000124) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                  sum += (double)-0.005862466656397708961;
                } else {
                  sum += (double)-0.000538012440685721135;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                  sum += (double)5.357494050529153858e-05;
                } else {
                  sum += (double)0.006068915008909082053;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.46790123456790411) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
                sum += (double)-0.001966691799605971291;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3312.681485277902539) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                    sum += (double)0.00240417851717829572;
                  } else {
                    sum += (double)0.007435358831649657545;
                  }
                } else {
                  sum += (double)-0.0004952281943783760345;
                }
              }
            } else {
              sum += (double)0.0066527358428742564;
            }
          } else {
            sum += (double)-0.002520442574675197094;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)856.1902646574352502) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
              sum += (double)0.0009012327888561166801;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                sum += (double)-0.0021450703936986182;
              } else {
                sum += (double)-0.00639679455916644657;
              }
            }
          } else {
            sum += (double)0.0007009031658443750246;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
              sum += (double)-0.003682458412886229111;
            } else {
              sum += (double)0.003110379042121259961;
            }
          } else {
            sum += (double)0.005540996345681590413;
          }
        } else {
          sum += (double)-0.001782904777443229888;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.7630769230769658) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
              sum += (double)0.003463925482596163195;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6836000000000000965) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                      sum += (double)0.0007446276938135913074;
                    } else {
                      sum += (double)-0.000446612238305545855;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                      sum += (double)-0.004253280843786262123;
                    } else {
                      sum += (double)-0.0005048654439063663757;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                      sum += (double)0.006031096163969567638;
                    } else {
                      sum += (double)-0.0005251363895458868074;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                      sum += (double)0.0003072558442464985414;
                    } else {
                      sum += (double)-0.0001366012166665345965;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                      sum += (double)-0.00279219292845423123;
                    } else {
                      sum += (double)0.001924987322694646794;
                    }
                  } else {
                    sum += (double)-0.005845648628670284397;
                  }
                } else {
                  sum += (double)0.0006054014716996049261;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
              sum += (double)-0.0001341891361041195371;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  sum += (double)0.0008395053334465818083;
                } else {
                  sum += (double)-0.002545110537041980498;
                }
              } else {
                sum += (double)0.001821759369329466584;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                sum += (double)0.000625025529921383982;
              } else {
                sum += (double)0.008109751425221542118;
              }
            } else {
              sum += (double)0.0007499511228507433616;
            }
          } else {
            sum += (double)-0.0004071819306490933829;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.48596938775510345) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
        sum += (double)0.004166170843702674854;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3192380828539810866) ) ) {
          sum += (double)-0.002911984146421701426;
        } else {
          sum += (double)0.003007458495341798141;
        }
      }
    } else {
      sum += (double)-0.001331612946753875197;
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2461167842040226927) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                sum += (double)-0.0003830702336205861502;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)24506.24669275645647) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.69615384615386233) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
                      sum += (double)0.001169402547823261522;
                    } else {
                      sum += (double)0.007791270233768131902;
                    }
                  } else {
                    sum += (double)-0.003548085347034262305;
                  }
                } else {
                  sum += (double)0.006979732918860358237;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1784550515539286286) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                  sum += (double)-0.0003634284113338883955;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                    sum += (double)0.005160353052973600668;
                  } else {
                    sum += (double)0.000941427331195602516;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                  sum += (double)0.003629339676997459917;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
                      sum += (double)-0.003496690540972139261;
                    } else {
                      sum += (double)-0.01009023899807240734;
                    }
                  } else {
                    sum += (double)-0.0009434847496727747805;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.003979109990950780405;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
            sum += (double)1.54485396848309418e-05;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433000000000000496) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8135000000000001119) ) ) {
                      sum += (double)0.002041073507032139384;
                    } else {
                      sum += (double)-0.004362637752360699721;
                    }
                  } else {
                    sum += (double)0.00260549437410283408;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1974103251759973532) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
                      sum += (double)0.006256382799900033799;
                    } else {
                      sum += (double)-0.0009530810474633269339;
                    }
                  } else {
                    sum += (double)0.007796579998407964472;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                  sum += (double)0.001512825940020753922;
                } else {
                  sum += (double)-0.008961672899251732494;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000000000001554) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
                    sum += (double)0.009850381361254901061;
                  } else {
                    sum += (double)0.002960588839145231275;
                  }
                } else {
                  sum += (double)0.002098827990446802856;
                }
              } else {
                sum += (double)5.497336336256508388e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7159045000000000547) ) ) {
            sum += (double)-0.002551159595242306725;
          } else {
            sum += (double)0.002357953978809842078;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11994.21414222725798) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8006.423874351355153) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5791.073405282010754) ) ) {
                    sum += (double)0.004661885841342923442;
                  } else {
                    sum += (double)-0.00260080925074583592;
                  }
                } else {
                  sum += (double)-0.003724845243518430746;
                }
              } else {
                sum += (double)-0.005357697392845936143;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                sum += (double)-0.001342318716628027216;
              } else {
                sum += (double)0.006642228826955283785;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22862.06187916693671) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                  sum += (double)3.274042412952474934e-05;
                } else {
                  sum += (double)0.005777712030402663845;
                }
              } else {
                sum += (double)-0.001273669604299960826;
              }
            } else {
              sum += (double)0.00767966885490048868;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.825750000000000095) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
                sum += (double)-0.0005426220853346035156;
              } else {
                sum += (double)0.00554066671928726915;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3029155602761551269) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3002208421277365313) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                      sum += (double)0.001362834357241387347;
                    } else {
                      sum += (double)-0.0005646172117319458918;
                    }
                  } else {
                    sum += (double)0.005750860391052515889;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
                    sum += (double)-0.0003205065914330609703;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.66602316602317302) ) ) {
                      sum += (double)0.0003156956310172551639;
                    } else {
                      sum += (double)-0.0005961904659714127369;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2592.581278167002438) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2276.637434844240943) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3083306738637045519) ) ) {
                      sum += (double)0.00172713308548713522;
                    } else {
                      sum += (double)-0.001664708183121871819;
                    }
                  } else {
                    sum += (double)0.005448674369089815707;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06175000000000000627) ) ) {
                    sum += (double)-0.005212124380992794008;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                      sum += (double)-0.004731373822817087557;
                    } else {
                      sum += (double)-0.0003774675078979242756;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                  sum += (double)0.004024538594305127927;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
                      sum += (double)-0.000477681735027365344;
                    } else {
                      sum += (double)-0.006612250157259920436;
                    }
                  } else {
                    sum += (double)0.002568631212759183574;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09712242158187701924) ) ) {
                  sum += (double)-0.00144307263599650795;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
                    sum += (double)-0.01331425298874635253;
                  } else {
                    sum += (double)-0.006392935679596411895;
                  }
                }
              }
            } else {
              sum += (double)0.0009322310454039199352;
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5481.444926233901242) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
              sum += (double)0.001346239580060952772;
            } else {
              sum += (double)0.01062823868147003484;
            }
          } else {
            sum += (double)-0.001654368542323370918;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06524444126709380565) ) ) {
          sum += (double)9.414530321088928559e-05;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
            sum += (double)-0.008346810188755668727;
          } else {
            sum += (double)-0.0008731846041620399974;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1639.070051175312983) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
        sum += (double)-0.001171421835905030922;
      } else {
        sum += (double)-0.007682039845898745896;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
        sum += (double)0.0009672161748950778215;
      } else {
        sum += (double)-0.0003942758622185188336;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000000000000167) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
              sum += (double)0.0002126588429948680393;
            } else {
              sum += (double)0.01004850583179507303;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34.77474226493854559) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15.77248611608338713) ) ) {
                  sum += (double)-7.226612466561354155e-05;
                } else {
                  sum += (double)0.007239428819741763194;
                }
              } else {
                sum += (double)-0.001119533880100791754;
              }
            } else {
              sum += (double)-0.003893928946184141947;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8347.454337403256432) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                      sum += (double)0.0002561618723491150117;
                    } else {
                      sum += (double)-0.00313204213004266525;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
                      sum += (double)0.007880506473901887146;
                    } else {
                      sum += (double)0.000497608211308471016;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.09500000000000001499) ) ) {
                      sum += (double)0.0007969718162607512075;
                    } else {
                      sum += (double)-0.003733266170741785569;
                    }
                  } else {
                    sum += (double)0.001099255512131313856;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                    sum += (double)-0.001789919156995625543;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                      sum += (double)0.006063999588476877943;
                    } else {
                      sum += (double)0.002237741058782481609;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.65057915057916205) ) ) {
                    sum += (double)0.001544507741293114434;
                  } else {
                    sum += (double)-0.00272885276989859489;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
                sum += (double)-0.0002741172372331128655;
              } else {
                sum += (double)-0.003115615132484407523;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.591750841750842582) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                    sum += (double)-0.001710791602315684008;
                  } else {
                    sum += (double)0.004045341836923164493;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                    sum += (double)-0.004753151554768689051;
                  } else {
                    sum += (double)-9.321629431729756278e-08;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                  sum += (double)-0.000226862521073312466;
                } else {
                  sum += (double)-0.00552790438543208397;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
                sum += (double)-0.008083276977684130185;
              } else {
                sum += (double)-0.0002840979238450412939;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
          sum += (double)0.003023499211885501137;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.79864864864865481) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03931893328124715786) ) ) {
              sum += (double)0.003702151580587061813;
            } else {
              sum += (double)0.0003723638276214654048;
            }
          } else {
            sum += (double)-0.003323151818575815954;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
        sum += (double)0.002976050284979840123;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1332400080645387008) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                  sum += (double)-0.00643279167329382888;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
                    sum += (double)-0.002530895830145562988;
                  } else {
                    sum += (double)0.0009628540845675105132;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                  sum += (double)0.00346443764905388649;
                } else {
                  sum += (double)-1.57416786575492157e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
                  sum += (double)0.0008845015206530084393;
                } else {
                  sum += (double)-0.002441923912144012589;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
                  sum += (double)-0.002372036715113342784;
                } else {
                  sum += (double)-0.006592462904808554791;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
              sum += (double)-0.001684335515243021121;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                  sum += (double)0.0007270875030742303445;
                } else {
                  sum += (double)0.006153253715153639454;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792689664682383444) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.727553723874008185) ) ) {
                    sum += (double)0.001744268069907712639;
                  } else {
                    sum += (double)-0.004508814584730983996;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1595.83134361526254) ) ) {
                    sum += (double)-0.0007288216764543599142;
                  } else {
                    sum += (double)0.003938446509888502041;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.00329213510064085748;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.803600000000000203) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1636390000000000067) ) ) {
            sum += (double)-0.0006736489990080425216;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.25978407557355609) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.536235053951590324) ) ) {
                  sum += (double)0.002485389063250755936;
                } else {
                  sum += (double)0.008592718711487878219;
                }
              } else {
                sum += (double)-0.003181130976219432444;
              }
            } else {
              sum += (double)0.00848367686940983308;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1702908340369640727) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                sum += (double)-0.00289099687670401782;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                    sum += (double)0.003065937605764711311;
                  } else {
                    sum += (double)0.009266395338673773241;
                  }
                } else {
                  sum += (double)0.0006586550504684471992;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
                sum += (double)-0.001890217393840922357;
              } else {
                sum += (double)0.002328754994859657482;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
              sum += (double)-0.0006108108333735131441;
            } else {
              sum += (double)-0.00599054295550578448;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7148500000000000965) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
              sum += (double)0.0001242562737038799248;
            } else {
              sum += (double)-0.004812742506136873794;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
              sum += (double)0.007632276791315933256;
            } else {
              sum += (double)0.0003349339515840341042;
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2772.548050562498702) ) ) {
            sum += (double)0.0005608306417553705339;
          } else {
            sum += (double)-0.00456755312844651061;
          }
        }
      }
    } else {
      sum += (double)-9.619352033865395486e-06;
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1944435586226250512) ) ) {
                sum += (double)-0.0003883542582961948056;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7179500000000001991) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
                    sum += (double)0.003645944895055215629;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                      sum += (double)0.002434653517225871238;
                    } else {
                      sum += (double)-0.002737445654792666078;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                    sum += (double)0.01029511918192054648;
                  } else {
                    sum += (double)0.0003397548016235338829;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1911254520728568607) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1275578474030112097) ) ) {
                    sum += (double)-0.0005782638315839995534;
                  } else {
                    sum += (double)0.006473521286021939082;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.10905271199389688) ) ) {
                      sum += (double)-0.001816394626552450585;
                    } else {
                      sum += (double)0.0008612127108906087293;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                      sum += (double)0.005133853016029479681;
                    } else {
                      sum += (double)0.0007481856340499914992;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                    sum += (double)-0.001015426022482073323;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1259607501907395177) ) ) {
                      sum += (double)-0.006752836355376557083;
                    } else {
                      sum += (double)-0.002419591676926019161;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                      sum += (double)0.000695396478776139971;
                    } else {
                      sum += (double)-0.006800594683680902773;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
                      sum += (double)0.005656488958971891794;
                    } else {
                      sum += (double)-9.679087322951651434e-07;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.003654197659836436445;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.50675675675677212) ) ) {
            sum += (double)0.002369381424731505873;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
              sum += (double)0.004325660210098794534;
            } else {
              sum += (double)-0.000856329586208708169;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
          sum += (double)-0.004427905484556004904;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
                  sum += (double)-0.005667804012852130195;
                } else {
                  sum += (double)0.001022023935441182139;
                }
              } else {
                sum += (double)-0.006337598179579999151;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8284500000000000197) ) ) {
                sum += (double)-0.0007906858589233289013;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1572954101779138469) ) ) {
                  sum += (double)-0.002541108177065570361;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2470000000000000251) ) ) {
                    sum += (double)0.0004195270384850151931;
                  } else {
                    sum += (double)0.007542304006009615223;
                  }
                }
              }
            }
          } else {
            sum += (double)0.001595521829570560601;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
          sum += (double)0.0006441733345173917061;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4800849858356940891) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                sum += (double)3.346676514918398319e-05;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4902547376640098986) ) ) {
                    sum += (double)-0.002326743248629420478;
                  } else {
                    sum += (double)0.006965638985644823263;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.86905594405594577) ) ) {
                      sum += (double)0.004015505104921966023;
                    } else {
                      sum += (double)0.01083313063285171879;
                    }
                  } else {
                    sum += (double)0.001507632675746068979;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5381500000000001283) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
                      sum += (double)0.001036610641602331252;
                    } else {
                      sum += (double)-0.001742721480181024093;
                    }
                  } else {
                    sum += (double)-0.001449992366270126416;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
                      sum += (double)0.0004057986367456601251;
                    } else {
                      sum += (double)0.002964467012328357663;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                      sum += (double)2.325702485601206917e-05;
                    } else {
                      sum += (double)-0.001328060634125412601;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2993500000000000605) ) ) {
                    sum += (double)0.001868358214093063675;
                  } else {
                    sum += (double)0.009133935854784938288;
                  }
                } else {
                  sum += (double)-0.001138499125112544738;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)507.68014339146265) ) ) {
                sum += (double)0.003271637328082061067;
              } else {
                sum += (double)-0.0006239746492464649796;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                sum += (double)-0.0009454369518396093207;
              } else {
                sum += (double)0.00961733833476358102;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1002500000000000197) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.16622267131788) ) ) {
            sum += (double)0.002461712713099072861;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3604310129059999368) ) ) {
                sum += (double)-6.596554172366349571e-05;
              } else {
                sum += (double)-0.00539530756062856897;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2689713774233481458) ) ) {
                  sum += (double)-0.009577601226498259207;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4391.076444984862064) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5349.110830475206967) ) ) {
                      sum += (double)0.002685065448708208978;
                    } else {
                      sum += (double)-0.00529451814135879599;
                    }
                  } else {
                    sum += (double)-0.006060115673398715729;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.602083333333334636) ) ) {
                  sum += (double)0.00531144218125212484;
                } else {
                  sum += (double)-0.00114778167520848207;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3149.812030383795445) ) ) {
            sum += (double)-0.0005558049594844469924;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.83130081300813075) ) ) {
              sum += (double)0.001139883418471736168;
            } else {
              sum += (double)0.01116041199561159693;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2225.774828494720623) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05367276199100708828) ) ) {
        sum += (double)-0.0003625300234163558364;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.851320094411903) ) ) {
          sum += (double)-0.006621713174734844207;
        } else {
          sum += (double)-0.001875431525397682929;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
        sum += (double)0.003172992560846849344;
      } else {
        sum += (double)-0.0001435249426300233707;
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
        sum += (double)0.0001035685724500650339;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4013.229638921312926) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
            sum += (double)-0.006069035992866842096;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.397650000000000059) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
                    sum += (double)-0.0004995218716408192589;
                  } else {
                    sum += (double)0.004364515857722873864;
                  }
                } else {
                  sum += (double)-0.003977313209079272674;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                      sum += (double)-0.01139505935133474507;
                    } else {
                      sum += (double)-0.004309961620589925109;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1595.83134361526254) ) ) {
                      sum += (double)-0.00697250602739673403;
                    } else {
                      sum += (double)0.0007951740888181140507;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                      sum += (double)-0.0005558748821147782874;
                    } else {
                      sum += (double)0.006332173833682152794;
                    }
                  } else {
                    sum += (double)-0.005291347195217113372;
                  }
                }
              }
            } else {
              sum += (double)0.00477853942846446101;
            }
          }
        } else {
          sum += (double)0.001288290759639687836;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5568739105774286324) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
              sum += (double)0.002051756171359185588;
            } else {
              sum += (double)-0.006217781071659147715;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4263286645986366086) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3420950000000000935) ) ) {
                    sum += (double)0.0008130585674550371358;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                      sum += (double)0.01071548575164366426;
                    } else {
                      sum += (double)0.003966194935296074239;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                    sum += (double)0.002068524945642314424;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1639.070051175312983) ) ) {
                      sum += (double)0.001050225263026280343;
                    } else {
                      sum += (double)-0.005536747016639863815;
                    }
                  }
                }
              } else {
                sum += (double)-0.003497836964436255077;
              }
            } else {
              sum += (double)0.007658008528465471906;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
            sum += (double)0.008626756593206993257;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4348787844478528841) ) ) {
              sum += (double)0.004542377695373592261;
            } else {
              sum += (double)-0.002821805685233212332;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
          sum += (double)0.001295742936296907311;
        } else {
          sum += (double)-0.002519399855450900078;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.828201000000000076) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
              sum += (double)-7.777809532079006563e-05;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                sum += (double)-0.0006308131128132491187;
              } else {
                sum += (double)-0.00606850988281563454;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06175000000000000627) ) ) {
                  sum += (double)0.003516852867042748361;
                } else {
                  sum += (double)0.01085048194017343946;
                }
              } else {
                sum += (double)0.0004137956268279644845;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.27272012578616867) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
                    sum += (double)0.008563281800436367205;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4496507448607858781) ) ) {
                      sum += (double)0.006254814111759200886;
                    } else {
                      sum += (double)-9.352561819470023372e-05;
                    }
                  }
                } else {
                  sum += (double)-0.0004926144851146447949;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                    sum += (double)-0.003612483823038101748;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
                      sum += (double)0.002220722667686336835;
                    } else {
                      sum += (double)-0.002123516797450177712;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                    sum += (double)-0.0004853548546604976623;
                  } else {
                    sum += (double)-0.005462748267241348751;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.004073975829209681467;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
          sum += (double)-0.000967093034396110233;
        } else {
          sum += (double)0.006501767467200113108;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1426.377837264146592) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4254330624375546877) ) ) {
                  sum += (double)0.004250240806881964636;
                } else {
                  sum += (double)-0.0003208813430389388546;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  sum += (double)-0.001269361266378128206;
                } else {
                  sum += (double)-0.005426143212653567957;
                }
              }
            } else {
              sum += (double)-0.007792823450862065501;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2668.597659326529538) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2485.764563093356628) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                  sum += (double)-0.002738406750182480458;
                } else {
                  sum += (double)0.0004061857922521736291;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
                  sum += (double)-0.001285746622822895192;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                    sum += (double)0.009584461102897925272;
                  } else {
                    sum += (double)0.001698028356338089975;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                    sum += (double)6.783814948243688258e-05;
                  } else {
                    sum += (double)-0.004206042372643377207;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07798442130072869016) ) ) {
                    sum += (double)-0.0004203065833556383826;
                  } else {
                    sum += (double)-0.007638675279225190864;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2737835000000000685) ) ) {
                  sum += (double)-0.001156532717265037341;
                } else {
                  sum += (double)-0.007869221043244932837;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
            sum += (double)0.001631751299286650228;
          } else {
            sum += (double)0.00881661715687410974;
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2168.319171519228803) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
            sum += (double)-0.003962936345034886315;
          } else {
            sum += (double)1.203416841991371373e-05;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2782500000000000528) ) ) {
              sum += (double)-0.009065439931744998653;
            } else {
              sum += (double)-0.00365363353784021799;
            }
          } else {
            sum += (double)-0.001230507152520627029;
          }
        }
      }
    }
  }
  return sum;
}
