#include "prediction.h"
double predict_margin_unit10(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211225062608718872) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1994525045156478882) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003049999941140413284) ) ) {
              sum += (double)0.06232517307692306274;
            } else {
              sum += (double)0.0116706363636363622;
            }
          } else {
            sum += (double)0.1319496093749999988;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.48125004768371582) ) ) {
              sum += (double)0.2623672499999999963;
            } else {
              sum += (double)0.1279841034482758488;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
              sum += (double)0.2606642083333333137;
            } else {
              sum += (double)0.4398756624999999865;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165430024266242981) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4560.48388671875) ) ) {
                  sum += (double)0.03386610526315789182;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.26538467407226562) ) ) {
                    sum += (double)0.01243142307692307776;
                  } else {
                    sum += (double)0.002837480769230769657;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1034964993596076965) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8525.933349609375) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.844049990177154541) ) ) {
                      sum += (double)0.002694672774869110669;
                    } else {
                      sum += (double)0.004492899999999999325;
                    }
                  } else {
                    sum += (double)0.009063975000000000157;
                  }
                } else {
                  sum += (double)0.009695781250000000406;
                }
              }
            } else {
              sum += (double)0.04936757291666666464;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.15172386169433594) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.14749526977539062) ) ) {
                  sum += (double)0.08608558928571427571;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6328999996185302734) ) ) {
                    sum += (double)0.02077431250000000285;
                  } else {
                    sum += (double)0.05232021874999999433;
                  }
                }
              } else {
                sum += (double)0.1072890869565217425;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3299999982118606567) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6373737752437591553) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09685000032186508179) ) ) {
                    sum += (double)0.04008260714285714205;
                  } else {
                    sum += (double)0.009614478260869564752;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5463.33447265625) ) ) {
                    sum += (double)0.01100503125000000006;
                  } else {
                    sum += (double)0.003295303030303030779;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.439999997615814209) ) ) {
                  sum += (double)0.09651114285714286478;
                } else {
                  sum += (double)0.0203140740740740712;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23025.9580078125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.78231239318847656) ) ) {
              sum += (double)0.09080217857142856841;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2960724979639053345) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)133.1156578063964844) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.68233108520507812) ) ) {
                    sum += (double)0.01421576315789473653;
                  } else {
                    sum += (double)0.04316426785714286979;
                  }
                } else {
                  sum += (double)0.003544000000000000275;
                }
              } else {
                sum += (double)0.0680388125000000038;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.97058868408203125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154050000011920929) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2079489976167678833) ) ) {
                      sum += (double)0.02016343421052631604;
                    } else {
                      sum += (double)0.05996187000000000045;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1865930035710334778) ) ) {
                      sum += (double)0.05149381666666666413;
                    } else {
                      sum += (double)0.1642111250000000133;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2023499980568885803) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.52173995971679688) ) ) {
                      sum += (double)0.06314519230769231883;
                    } else {
                      sum += (double)0.1543046309523809778;
                    }
                  } else {
                    sum += (double)0.1844635937499999601;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2879129946231842041) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                    sum += (double)0.02283976923076922946;
                  } else {
                    sum += (double)0.009691285714285716515;
                  }
                } else {
                  sum += (double)0.0356178194444444346;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9400.82861328125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7978000044822692871) ) ) {
                  sum += (double)0.08334233333333332383;
                } else {
                  sum += (double)0.1795793571428571378;
                }
              } else {
                sum += (double)0.3195792794117646163;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8233080506324768066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3256864994764328003) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000081211328506) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.59465336799621582) ) ) {
                sum += (double)0.4407834999999999392;
              } else {
                sum += (double)0.4959357142857143685;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.400278329849243164) ) ) {
                    sum += (double)0.2155156617647058792;
                  } else {
                    sum += (double)0.1337862499999999955;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3903499990701675415) ) ) {
                    sum += (double)0.2299621499999999763;
                  } else {
                    sum += (double)0.3132599736842105465;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1572000011801719666) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197473049163818359) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4562.114501953125) ) ) {
                      sum += (double)0.3971355750000000184;
                    } else {
                      sum += (double)0.3129093378378378087;
                    }
                  } else {
                    sum += (double)0.2325417968750000119;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.284801959991455078) ) ) {
                    sum += (double)0.424499964285714293;
                  } else {
                    sum += (double)0.3682452053571428352;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1319999992847442627) ) ) {
                sum += (double)0.2044213749999999885;
              } else {
                sum += (double)0.2846322115384615214;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2502449974417686462) ) ) {
                sum += (double)0.05517957000000001111;
              } else {
                sum += (double)0.1975953250000000438;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
            sum += (double)0.546728935185185172;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.68426942825317383) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3391180038452148438) ) ) {
                sum += (double)0.3705939852941176338;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3707490116357803345) ) ) {
                    sum += (double)0.4617857236842105029;
                  } else {
                    sum += (double)0.5039619166666665651;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3489.8294677734375) ) ) {
                    sum += (double)0.4402922999999999698;
                  } else {
                    sum += (double)0.401080208333333299;
                  }
                }
              }
            } else {
              sum += (double)0.3459848706896551107;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.436583995819091797) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3998499959707260132) ) ) {
              sum += (double)0.3555867314814815106;
            } else {
              sum += (double)0.1672320781250000166;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1803.962890625) ) ) {
              sum += (double)0.07457223437499999052;
            } else {
              sum += (double)0.02959377884615384952;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.123808443546295166) ) ) {
            sum += (double)0.1427833636363636249;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.57142734527587891) ) ) {
              sum += (double)0.01768803947368421253;
            } else {
              sum += (double)0.05816893749999999669;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4915205687284469604) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1426.64923095703125) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2087.774658203125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3460.215087890625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2339142411947250366) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7490499913692474365) ) ) {
                      sum += (double)0.5011692500000000106;
                    } else {
                      sum += (double)0.438186847222222231;
                    }
                  } else {
                    sum += (double)0.5651570781250001563;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2666.9168701171875) ) ) {
                    sum += (double)0.599431523809523803;
                  } else {
                    sum += (double)0.5269647250000000227;
                  }
                }
              } else {
                sum += (double)0.3937862500000000043;
              }
            } else {
              sum += (double)0.592277425000000024;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.427553892135620117) ) ) {
              sum += (double)0.5483931309523809583;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08599999919533729553) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7927999794483184814) ) ) {
                  sum += (double)0.6409811625000000346;
                } else {
                  sum += (double)0.6891979464285714618;
                }
              } else {
                sum += (double)0.5955660277777777845;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18587.134765625) ) ) {
            sum += (double)0.3193202499999999722;
          } else {
            sum += (double)0.3907965892857143131;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.653274655342102051) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6995500028133392334) ) ) {
            sum += (double)0.6914471818181818774;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7133949995040893555) ) ) {
              sum += (double)0.7362360937499997648;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
                sum += (double)0.8714944880952383288;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06830576062202453613) ) ) {
                  sum += (double)0.7927826250000000741;
                } else {
                  sum += (double)0.8371604117647057919;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.67473125457763672) ) ) {
            sum += (double)0.7156214666666667057;
          } else {
            sum += (double)0.5226397361111111417;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5458705127239227295) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1432.3592529296875) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.748840272426605225) ) ) {
              sum += (double)0.4325762037037036989;
            } else {
              sum += (double)0.3115788269230769236;
            }
          } else {
            sum += (double)0.2041238020833333333;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.69534111022949219) ) ) {
            sum += (double)0.03565139423076922609;
          } else {
            sum += (double)0.1781140138888888946;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
          sum += (double)0.2216556428571428428;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7065444886684417725) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04085000045597553253) ) ) {
              sum += (double)0.2976049761904761559;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
                sum += (double)0.5600836527777777185;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
                  sum += (double)0.4227452023809524229;
                } else {
                  sum += (double)0.3476911749999999635;
                }
              }
            }
          } else {
            sum += (double)0.5661988303571428016;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.022222280502319336) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2545460015535354614) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.46795654296875) ) ) {
            sum += (double)0.1940525833333333339;
          } else {
            sum += (double)0.04352745652173912322;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
            sum += (double)0.2210457586206897029;
          } else {
            sum += (double)0.4456278750000000621;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.20666599273681641) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3685.9608154296875) ) ) {
                sum += (double)0.04303251785714286293;
              } else {
                sum += (double)0.01007789285714285818;
              }
            } else {
              sum += (double)0.07550085576923075414;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16666650772094727) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.73611068725585938) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2119.55859375) ) ) {
                  sum += (double)0.02434621153846153879;
                } else {
                  sum += (double)0.003354791666666666946;
                }
              } else {
                sum += (double)0.08305910294117647974;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                  sum += (double)0.009913413043478260314;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8637999892234802246) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003256785714285714665;
                    }
                  } else {
                    sum += (double)0.006498117647058824359;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9555689990520477295) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                    sum += (double)0.04035373437499999161;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.23333358764648438) ) ) {
                      sum += (double)0.02679341406249999974;
                    } else {
                      sum += (double)0.01137015476190475494;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.004838166666666666831;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7836500108242034912) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5710215568542480469) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2037705034017562866) ) ) {
                      sum += (double)0.03259725316455695798;
                    } else {
                      sum += (double)0.06099690853658536888;
                    }
                  } else {
                    sum += (double)0.1164409411764705804;
                  }
                } else {
                  sum += (double)0.1059002874999999955;
                }
              } else {
                sum += (double)0.1491816964285714586;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01574999978765845299) ) ) {
                sum += (double)0.3348346093749999808;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1318000033497810364) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1978764981031417847) ) ) {
                    sum += (double)0.02509252083333332953;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4056.115234375) ) ) {
                      sum += (double)0.1330116847826086912;
                    } else {
                      sum += (double)0.04321117307692308451;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
                    sum += (double)0.1426731499999999986;
                  } else {
                    sum += (double)0.3388936875000000404;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
              sum += (double)0.0680371630434782465;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.59248733520507812) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2489000037312507629) ) ) {
                  sum += (double)0.00444000000000000037;
                } else {
                  sum += (double)0.01507080952380952799;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24488.8857421875) ) ) {
                  sum += (double)0.01315619999999999984;
                } else {
                  sum += (double)0.04628301249999999811;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04834999889135360718) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10474.5029296875) ) ) {
              sum += (double)0.2988935978260869875;
            } else {
              sum += (double)0.4435742777777778034;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.90769672393798828) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.214322999119758606) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7305.41015625) ) ) {
                  sum += (double)0.1999617142857143259;
                } else {
                  sum += (double)0.3036378437499999694;
                }
              } else {
                sum += (double)0.1592118235294117667;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3087499886751174927) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.93099021911621094) ) ) {
                  sum += (double)0.1028171442307692085;
                } else {
                  sum += (double)0.215073056818181757;
                }
              } else {
                sum += (double)0.05941364130434781399;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.13317298889160156) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1141920462250709534) ) ) {
                sum += (double)0.2388957115384615359;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.047448158264160156) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02270000055432319641) ) ) {
                    sum += (double)0.4742869375000000054;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                      sum += (double)0.3425592687499999234;
                    } else {
                      sum += (double)0.3948976277777778709;
                    }
                  }
                } else {
                  sum += (double)0.3010571086956521647;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1809045225381851196) ) ) {
                sum += (double)0.5127598157894737163;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7815.3681640625) ) ) {
                  sum += (double)0.4590238125000000169;
                } else {
                  sum += (double)0.4000519000000000713;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5586999952793121338) ) ) {
                sum += (double)0.1359768157894737095;
              } else {
                sum += (double)0.2300672968750000214;
              }
            } else {
              sum += (double)0.3307410892857142737;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.934309005737304688) ) ) {
          sum += (double)0.2232701718750000064;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.27392953634262085) ) ) {
            sum += (double)0.1216787708333333246;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1604999974370002747) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2805905044078826904) ) ) {
                sum += (double)0.01612957500000000016;
              } else {
                sum += (double)0.0396229999999999985;
              }
            } else {
              sum += (double)0.07403823913043479366;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6062864959239959717) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
          sum += (double)0.1861835961538461093;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5259389877319335938) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                sum += (double)0.5780248815789472694;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.40573100745677948) ) ) {
                  sum += (double)0.4262121590909090929;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4688744992017745972) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.846590876579284668) ) ) {
                      sum += (double)0.5234246309523810092;
                    } else {
                      sum += (double)0.5552219624999999992;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.23529386520385742) ) ) {
                      sum += (double)0.4665371953125000415;
                    } else {
                      sum += (double)0.5317640921052632086;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
                sum += (double)0.5453449305555554405;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.742383956909179688) ) ) {
                  sum += (double)0.6562844687500000163;
                } else {
                  sum += (double)0.5929674078947367866;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1972865089774131775) ) ) {
              sum += (double)0.3611652096774193854;
            } else {
              sum += (double)0.4850155119047618313;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1197637952864170074) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.745067715644836426) ) ) {
              sum += (double)0.755864763888888902;
            } else {
              sum += (double)0.7114463846153846749;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.00596141815185547) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2481791377067565918) ) ) {
                sum += (double)0.6607199868421053113;
              } else {
                sum += (double)0.6909703529411763689;
              }
            } else {
              sum += (double)0.6114823666666667767;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
            sum += (double)0.7244399807692307736;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.154501438140869141) ) ) {
              sum += (double)0.790230634615384675;
            } else {
              sum += (double)0.837375570000000069;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5487999916076660156) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000131130218506) ) ) {
          sum += (double)0.06690963461538458612;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.604591846466064453) ) ) {
              sum += (double)0.4981350099999998782;
            } else {
              sum += (double)0.3472327666666666368;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.788650929927825928) ) ) {
              sum += (double)0.3617185760869565114;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5112.706298828125) ) ) {
                sum += (double)0.2785279903846153982;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4227879941463470459) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.860496997833251953) ) ) {
                    sum += (double)0.1304619264705882409;
                  } else {
                    sum += (double)0.06603338235294117786;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.591879010200500488) ) ) {
                    sum += (double)0.2737279722222221712;
                  } else {
                    sum += (double)0.1600281607142856888;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1951.922119140625) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
            sum += (double)0.3567452656250000298;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6806834936141967773) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8644088506698608398) ) ) {
                sum += (double)0.5625176607142856611;
              } else {
                sum += (double)0.3820257678571428173;
              }
            } else {
              sum += (double)0.640923277777777689;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.914313197135925293) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.85275346040725708) ) ) {
              sum += (double)0.4759732749999999735;
            } else {
              sum += (double)0.4132237500000000008;
            }
          } else {
            sum += (double)0.1165837124999999919;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.268330007791519165) ) ) {
        sum += (double)0.1078119021739130518;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9320483803749084473) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4817304909229278564) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1135.377685546875) ) ) {
              sum += (double)0.369547616666666634;
            } else {
              sum += (double)0.2703208666666666593;
            }
          } else {
            sum += (double)0.5052553529411764055;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.686144590377807617) ) ) {
            sum += (double)0.3242402142857143121;
          } else {
            sum += (double)0.1095223906249999934;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.682208627462387085) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8847000002861022949) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05031750164926052094) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003297558823529411678;
                    }
                  } else {
                    sum += (double)0.003610568181818182669;
                  }
                } else {
                  sum += (double)0.005489552631578947968;
                }
              } else {
                sum += (double)0.0056269347826086967;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4730000048875808716) ) ) {
                sum += (double)0.015968805555555559;
              } else {
                sum += (double)0.005346730769230769419;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05704999901354312897) ) ) {
                sum += (double)0.08733863888888888927;
              } else {
                sum += (double)0.00888310416666666762;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07296450063586235046) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3687968999147415161) ) ) {
                  sum += (double)0.003907456521739131189;
                } else {
                  sum += (double)0.007827071428571429762;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)192.2323760986328125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.99184131622314453) ) ) {
                    sum += (double)0.04210666666666665336;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2782.633056640625) ) ) {
                      sum += (double)0.01738975806451612677;
                    } else {
                      sum += (double)0.004576551724137930925;
                    }
                  }
                } else {
                  sum += (double)0.04691014705882352864;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2548999935388565063) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2449999973177909851) ) ) {
              sum += (double)0.06266489285714284263;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15555572509765625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4621.657958984375) ) ) {
                  sum += (double)0.06273375000000000479;
                } else {
                  sum += (double)0.01736360869565217388;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1721794977784156799) ) ) {
                  sum += (double)0.01035009375000000079;
                } else {
                  sum += (double)0.02291450000000000084;
                }
              }
            }
          } else {
            sum += (double)0.107755526315789496;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000017136335373) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5671.4775390625) ) ) {
              sum += (double)0.1637802380952380898;
            } else {
              sum += (double)0.3621563653846153752;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.88225412368774414) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8602827489376068115) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000143051147461) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.535714149475097656) ) ) {
                    sum += (double)0.1158371562499999896;
                  } else {
                    sum += (double)0.03446726136363636311;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1283499971032142639) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.56818199157714844) ) ) {
                      sum += (double)0.1069604551282051508;
                    } else {
                      sum += (double)0.1959701666666666953;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2145500034093856812) ) ) {
                      sum += (double)0.3104252678571428059;
                    } else {
                      sum += (double)0.1714784821428571582;
                    }
                  }
                }
              } else {
                sum += (double)0.01318760000000000245;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680215030908584595) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981000006198883057) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4789000004529953003) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.00513982772827148) ) ) {
                      sum += (double)0.08869944117647059201;
                    } else {
                      sum += (double)0.03685272409326426774;
                    }
                  } else {
                    sum += (double)0.1017496634615384643;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19772.0146484375) ) ) {
                    sum += (double)0.04760441666666666294;
                  } else {
                    sum += (double)0.170064791666666687;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.36923027038574219) ) ) {
                  sum += (double)0.03969785294117646191;
                } else {
                  sum += (double)0.2271209166666666446;
                }
              }
            }
          }
        } else {
          sum += (double)0.3631644374999999925;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.49879703750000004;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162764966487884521) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.43134498596191406) ) ) {
                      sum += (double)0.2883165192307691749;
                    } else {
                      sum += (double)0.3768076718749999721;
                    }
                  } else {
                    sum += (double)0.2555557499999999704;
                  }
                } else {
                  sum += (double)0.1867796911764706136;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4246132969856262207) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4185.778564453125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03594999946653842926) ) ) {
                      sum += (double)0.4674769117647058492;
                    } else {
                      sum += (double)0.3897036249999999979;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                      sum += (double)0.3827303981481481321;
                    } else {
                      sum += (double)0.278005416666666727;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1461500003933906555) ) ) {
                    sum += (double)0.2483482638888889205;
                  } else {
                    sum += (double)0.3551063083333333426;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1851000040769577026) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999898951500654) ) ) {
                sum += (double)0.6079830357142856911;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2487.288818359375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3154.4288330078125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                      sum += (double)0.4661470694444443952;
                    } else {
                      sum += (double)0.5231790806451611653;
                    }
                  } else {
                    sum += (double)0.4335921730769230487;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2365493699908256531) ) ) {
                    sum += (double)0.496954663793103435;
                  } else {
                    sum += (double)0.5749118166666667973;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929885029792785645) ) ) {
                sum += (double)0.4310260576923076181;
              } else {
                sum += (double)0.3805838382352941252;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0555000007152557373) ) ) {
              sum += (double)0.3000700468749999961;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2036740034818649292) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.01682615280151367) ) ) {
                  sum += (double)0.05992783928571428914;
                } else {
                  sum += (double)0.1426113676470588398;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4552999883890151978) ) ) {
                  sum += (double)0.1311505595238095234;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2674500048160552979) ) ) {
                    sum += (double)0.1867739473684210394;
                  } else {
                    sum += (double)0.3125934999999999686;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.52711467444896698) ) ) {
              sum += (double)0.3452298461538462759;
            } else {
              sum += (double)0.1994194615384615177;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2910580039024353027) ) ) {
              sum += (double)0.1557872187499999839;
            } else {
              sum += (double)0.3148761413043477675;
            }
          } else {
            sum += (double)0.1001140999999999975;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.12922435998916626) ) ) {
            sum += (double)0.1563281374999999918;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2795750051736831665) ) ) {
              sum += (double)0.02040504545454545002;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9173.3916015625) ) ) {
                sum += (double)0.1186317083333333217;
              } else {
                sum += (double)0.03713626136363636782;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7255375087261199951) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7349939048290252686) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6181364953517913818) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.6778119300000000624;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5411314964294433594) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.043066024780273438) ) ) {
                      sum += (double)0.4774946578947368292;
                    } else {
                      sum += (double)0.5333670000000000355;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1711.23260498046875) ) ) {
                      sum += (double)0.5776530185185186905;
                    } else {
                      sum += (double)0.4914401250000000054;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1035499982535839081) ) ) {
                    sum += (double)0.6366089722222221248;
                  } else {
                    sum += (double)0.5748141637931034609;
                  }
                }
              }
            } else {
              sum += (double)0.4293946562500000064;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8341000080108642578) ) ) {
                sum += (double)0.6900690714285714344;
              } else {
                sum += (double)0.7444029531250000442;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.09218215942382812) ) ) {
                sum += (double)0.6658353194444445178;
              } else {
                sum += (double)0.5974851538461538603;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5530200004577636719) ) ) {
            sum += (double)0.2671646847826087412;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567900180816650391) ) ) {
              sum += (double)0.3801287500000000152;
            } else {
              sum += (double)0.4951970500000000275;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
          sum += (double)0.8537155096153846712;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0400000009685754776) ) ) {
            sum += (double)0.804013982142857242;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961159944534301758) ) ) {
              sum += (double)0.6859757124999998901;
            } else {
              sum += (double)0.7652172613636363252;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000190734863281) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165415011346340179) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              sum += (double)0.003298741379310345286;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03729999996721744537) ) ) {
                sum += (double)0.03524770312499999475;
              } else {
                sum += (double)0.01270773684210526645;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.41666793823242188) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4356999993324279785) ) ) {
                sum += (double)0.1085650735294117347;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7649999856948852539) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2397.045166015625) ) ) {
                    sum += (double)0.02638665625000000126;
                  } else {
                    sum += (double)0.00472237500000000001;
                  }
                } else {
                  sum += (double)0.04145390217391303755;
                }
              }
            } else {
              sum += (double)0.1059424342105263067;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1350731104612350464) ) ) {
                  sum += (double)0.004194812500000000624;
                } else {
                  sum += (double)0.002500000000000001353;
                }
              } else {
                sum += (double)0.005220370370370370876;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3609500080347061157) ) ) {
                sum += (double)0.006246843750000001527;
              } else {
                sum += (double)0.01361676470588235426;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914218604564666748) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                sum += (double)0.05015701041666666832;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14341.533203125) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)119.9746971130371094) ) ) {
                      sum += (double)0.008439749999999999336;
                    } else {
                      sum += (double)0.00439785937500000116;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1441320031881332397) ) ) {
                      sum += (double)0.03117310344827585109;
                    } else {
                      sum += (double)0.01175761111111111278;
                    }
                  }
                } else {
                  sum += (double)0.03444502941176470073;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.71428489685058594) ) ) {
                sum += (double)0.01500656666666666875;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1849715039134025574) ) ) {
                  sum += (double)0.002500000000000000919;
                } else {
                  sum += (double)0.003737375000000001113;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.594627141952514648) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2685777097940444946) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1853595003485679626) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1894126906991004944) ) ) {
                sum += (double)0.08952466666666666906;
              } else {
                sum += (double)0.02264938461538461983;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2662659883499145508) ) ) {
                sum += (double)0.2215923571428571603;
              } else {
                sum += (double)0.1427918846153845844;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3932999968528747559) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200000017881393433) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2038055062294006348) ) ) {
                  sum += (double)0.01809291964285714496;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                    sum += (double)0.008718156250000001078;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7612.797607421875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1964235007762908936) ) ) {
                    sum += (double)0.01625496666666666895;
                  } else {
                    sum += (double)0.0651309374999999996;
                  }
                } else {
                  sum += (double)0.07757376562499999906;
                }
              }
            } else {
              sum += (double)0.1793547500000000072;
            }
          }
        } else {
          sum += (double)0.2373597058823529449;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.424379825592041016) ) ) {
            sum += (double)0.3357694605263158438;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2557999938726425171) ) ) {
              sum += (double)0.1341703928571428284;
            } else {
              sum += (double)0.2892755499999999924;
            }
          }
        } else {
          sum += (double)0.4582315200000000033;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01245000027120113373) ) ) {
          sum += (double)0.2476688790322580658;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.506712496280670166) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6828892230987548828) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8418.8359375) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4769999980926513672) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5198086798191070557) ) ) {
                      sum += (double)0.1273982307692307636;
                    } else {
                      sum += (double)0.05284284615384615691;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600445061922073364) ) ) {
                      sum += (double)0.01850572222222222549;
                    } else {
                      sum += (double)0.05830612500000000031;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0803999975323677063) ) ) {
                    sum += (double)0.06196622826086957414;
                  } else {
                    sum += (double)0.2401750781249999966;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  sum += (double)0.0111794833333333319;
                } else {
                  sum += (double)0.03078516666666666901;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                sum += (double)0.248862117647058817;
              } else {
                sum += (double)0.1158062941176470489;
              }
            }
          } else {
            sum += (double)0.2537445416666666564;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.012146264314651489) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5228422500000000639;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2198145017027854919) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.32185792922973633) ) ) {
                    sum += (double)0.2113293823529412141;
                  } else {
                    sum += (double)0.325928531250000042;
                  }
                } else {
                  sum += (double)0.197851102941176471;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.92476749420166016) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.583231449127197266) ) ) {
                      sum += (double)0.3901219999999999688;
                    } else {
                      sum += (double)0.3466351323529411887;
                    }
                  } else {
                    sum += (double)0.4537770882352940571;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06480000168085098267) ) ) {
                    sum += (double)0.2574464166666666776;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5928499996662139893) ) ) {
                      sum += (double)0.4041308092105262428;
                    } else {
                      sum += (double)0.3052611999999999548;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1603500023484230042) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.725464224815368652) ) ) {
                  sum += (double)0.5117085000000000106;
                } else {
                  sum += (double)0.5822496041666666011;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05690000019967556) ) ) {
                    sum += (double)0.4903916527777777978;
                  } else {
                    sum += (double)0.4374003828124999882;
                  }
                } else {
                  sum += (double)0.5101601985294117458;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3491.5357666015625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8131.53759765625) ) ) {
                  sum += (double)0.406005928571428587;
                } else {
                  sum += (double)0.4644548522727273143;
                }
              } else {
                sum += (double)0.39704180769230768;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950670033693313599) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.308899998664855957) ) ) {
              sum += (double)0.2125066328125000403;
            } else {
              sum += (double)0.04231275000000000314;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4051000028848648071) ) ) {
              sum += (double)0.1205014605263158151;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2665694952011108398) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5860500037670135498) ) ) {
                  sum += (double)0.2647758958333333301;
                } else {
                  sum += (double)0.1941100000000000048;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10228.46826171875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18548393249511719) ) ) {
                    sum += (double)0.3859908421052631322;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28045.6318359375) ) ) {
                      sum += (double)0.3311873043478261169;
                    } else {
                      sum += (double)0.2453227211538461794;
                    }
                  }
                } else {
                  sum += (double)0.2127765555555555521;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.841967463493347168) ) ) {
          sum += (double)0.2395945999999999909;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.1861156521739130432;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3915974944829940796) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
                sum += (double)0.07648617187500000858;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4739000052213668823) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
                    sum += (double)0.02807980681818181973;
                  } else {
                    sum += (double)0.009958516129032259426;
                  }
                } else {
                  sum += (double)0.05678255263157893501;
                }
              }
            } else {
              sum += (double)0.1514613157894736939;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6643044948577880859) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700002610683441162) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07100000232458114624) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5205454826354980469) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.79599285125732422) ) ) {
                sum += (double)0.5296926363636363932;
              } else {
                sum += (double)0.5820945681818181505;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1623.94207763671875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7275499999523162842) ) ) {
                  sum += (double)0.6118528035714285718;
                } else {
                  sum += (double)0.6554695657894736849;
                }
              } else {
                sum += (double)0.7138567058823530598;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.05244731903076172) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5461210012435913086) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1441270485520362854) ) ) {
                  sum += (double)0.4758314705882352169;
                } else {
                  sum += (double)0.5352725948275862677;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3726.691162109375) ) ) {
                  sum += (double)0.5826526562499999562;
                } else {
                  sum += (double)0.6264822361111110904;
                }
              }
            } else {
              sum += (double)0.4067496617647058943;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4404885603448274733;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
              sum += (double)0.4165592500000000475;
            } else {
              sum += (double)0.2379365869565217562;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09379999712109565735) ) ) {
              sum += (double)0.7432647500000001406;
            } else {
              sum += (double)0.6771113749999997378;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7081622779369354248) ) ) {
                sum += (double)0.8940461718750000175;
              } else {
                sum += (double)0.8348359875000002095;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3001.2060546875) ) ) {
                sum += (double)0.7343367812500000147;
              } else {
                sum += (double)0.8054875277777777676;
              }
            }
          }
        } else {
          sum += (double)0.5875269375000000682;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3851220011711120605) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3550000041723251343) ) ) {
          sum += (double)0.08990389285714284195;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839994877576828003) ) ) {
            sum += (double)0.2787138333333333273;
          } else {
            sum += (double)0.420006400000000002;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61250019073486328) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.16666793823242188) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2211.8759765625) ) ) {
                  sum += (double)0.01602202500000000224;
                } else {
                  sum += (double)0.003483050000000000122;
                }
              } else {
                sum += (double)0.03959934523809524598;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06185000017285346985) ) ) {
                  sum += (double)0.01437105000000000153;
                } else {
                  sum += (double)0.05761071590909089962;
                }
              } else {
                sum += (double)0.1568976931818181764;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196600005030632019) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05413299985229969025) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1170047484338283539) ) ) {
                      sum += (double)0.00293443749999999998;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.004702604166666666564;
                  }
                } else {
                  sum += (double)0.005494704545454547409;
                }
              } else {
                sum += (double)0.01498796428571428675;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6402493715286254883) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4303500056266784668) ) ) {
                  sum += (double)0.06315947999999999007;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8303999900817871094) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2367999926209449768) ) ) {
                      sum += (double)0.008309805555555556389;
                    } else {
                      sum += (double)0.02299300000000000302;
                    }
                  } else {
                    sum += (double)0.03796737500000000459;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.375) ) ) {
                  sum += (double)0.01581505357142857018;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9162768125534057617) ) ) {
                    sum += (double)0.005038294117647059214;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2039478644728660583) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000133514404297) ) ) {
              sum += (double)0.2216495526315789277;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207972995936870575) ) ) {
                sum += (double)0.03566193749999999746;
              } else {
                sum += (double)0.1456865999999999994;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670105159282684326) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2096634954214096069) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.05691289901733398) ) ) {
                  sum += (double)0.1276611388888889143;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
                      sum += (double)0.01529183490566037029;
                    } else {
                      sum += (double)0.04226738541666665711;
                    }
                  } else {
                    sum += (double)0.0808779537037037366;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09495000168681144714) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4879499971866607666) ) ) {
                    sum += (double)0.04009985714285714542;
                  } else {
                    sum += (double)0.08091929999999999956;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9026.51318359375) ) ) {
                    sum += (double)0.05565047368421052049;
                  } else {
                    sum += (double)0.2767594166666666466;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2679425030946731567) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1185499988496303558) ) ) {
                  sum += (double)0.0329117142857142872;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                    sum += (double)0.02782392647058823734;
                  } else {
                    sum += (double)0.008912535714285716587;
                  }
                }
              } else {
                sum += (double)0.04239374999999999394;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9330400824546813965) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.91750335693359375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03710000030696392059) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2050990015268325806) ) ) {
                sum += (double)0.4414007708333333446;
              } else {
                sum += (double)0.5527936700000000148;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4898499995470046997) ) ) {
                sum += (double)0.2796744333333333055;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2853344976902008057) ) ) {
                  sum += (double)0.3716860416666666889;
                } else {
                  sum += (double)0.4774758703703703144;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4674.783203125) ) ) {
                  sum += (double)0.3429765625000000262;
                } else {
                  sum += (double)0.2395333666666666916;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2171500027179718018) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.95059585571289062) ) ) {
                    sum += (double)0.1792787500000000145;
                  } else {
                    sum += (double)0.2583591413043477836;
                  }
                } else {
                  sum += (double)0.1148881785714285647;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349104970693588257) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.686781644821166992) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.599599987268447876) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4830499887466430664) ) ) {
                      sum += (double)0.3432016250000000102;
                    } else {
                      sum += (double)0.4210654479166666686;
                    }
                  } else {
                    sum += (double)0.3156423888888888474;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793000027537345886) ) ) {
                    sum += (double)0.227320239999999979;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82305192947387695) ) ) {
                      sum += (double)0.3906832666666666953;
                    } else {
                      sum += (double)0.3224368269230769579;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984000265598297119) ) ) {
                  sum += (double)0.4671667499999999085;
                } else {
                  sum += (double)0.3721779625000000147;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
            sum += (double)0.08276724264705881406;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3876499980688095093) ) ) {
              sum += (double)0.09693958823529412461;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127000093460083008) ) ) {
                  sum += (double)0.2971490740740740932;
                } else {
                  sum += (double)0.1683649999999999869;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.45622348785400391) ) ) {
                  sum += (double)0.1227512361111111061;
                } else {
                  sum += (double)0.2113574342105263015;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.417050838470458984) ) ) {
          sum += (double)0.2167245714285714331;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.1564106111111110975;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5128.52001953125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.70458793640136719) ) ) {
                sum += (double)0.09012839999999999741;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1621500030159950256) ) ) {
                  sum += (double)0.08495691176470587802;
                } else {
                  sum += (double)0.01742670833333333572;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07505000010132789612) ) ) {
                sum += (double)0.01970221052631579428;
              } else {
                sum += (double)0.007689779411764705551;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.462770998477935791) ) ) {
            sum += (double)0.1521299782608695472;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07344999909400939941) ) ) {
              sum += (double)0.129042883333333358;
            } else {
              sum += (double)0.4439533906249999995;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0685500018298625946) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.129238367080688477) ) ) {
                sum += (double)0.4510810000000000097;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001500000013038516045) ) ) {
                  sum += (double)0.6264577499999999244;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1446390748023986816) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2885.672119140625) ) ) {
                      sum += (double)0.52742597058823526;
                    } else {
                      sum += (double)0.6072036770833333374;
                    }
                  } else {
                    sum += (double)0.5006951052631579691;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19783.8046875) ) ) {
                sum += (double)0.3544594861111110551;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3299999982118606567) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2357499971985816956) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4168944954872131348) ) ) {
                      sum += (double)0.4204583529411763942;
                    } else {
                      sum += (double)0.486485382352941087;
                    }
                  } else {
                    sum += (double)0.5543092391304348387;
                  }
                } else {
                  sum += (double)0.4008301521739131013;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1392654776573181152) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.294270873069763184) ) ) {
                sum += (double)0.6936101375000000013;
              } else {
                sum += (double)0.6362793676470587245;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4734.651611328125) ) ) {
                sum += (double)0.5046823500000000573;
              } else {
                sum += (double)0.6129951249999999741;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7400960028171539307) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7922500073909759521) ) ) {
              sum += (double)0.6365151607142855994;
            } else {
              sum += (double)0.7554092631578946948;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
              sum += (double)0.8842412647058823794;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.23895031213760376) ) ) {
                sum += (double)0.8221099347826086312;
              } else {
                sum += (double)0.7668682624999999531;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.59090900421142578) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5696000158786773682) ) ) {
              sum += (double)0.74624101388888886;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258335724472999573) ) ) {
                sum += (double)0.6724344722222223014;
              } else {
                sum += (double)0.6313173055555555413;
              }
            }
          } else {
            sum += (double)0.516458172413793215;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5454215109348297119) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.181261062622070312) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.01214599609375) ) ) {
            sum += (double)0.3345300250000000086;
          } else {
            sum += (double)0.1577142159090909046;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.25753879547119141) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1133000031113624573) ) ) {
              sum += (double)0.1104047999999999835;
            } else {
              sum += (double)0.05138535416666666772;
            }
          } else {
            sum += (double)0.2860467500000000163;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1114999987185001373) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.973813891410827637) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04374999925494194031) ) ) {
              sum += (double)0.3623431346153846433;
            } else {
              sum += (double)0.4885895576923077188;
            }
          } else {
            sum += (double)0.3402732822580645244;
          }
        } else {
          sum += (double)0.2213305789473684337;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.1547705999999999804;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9004999995231628418) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2299999967217445374) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07203350216150283813) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.5777592658996582) ) ) {
                    sum += (double)0.006319035714285715401;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879999935626983643) ) ) {
                      sum += (double)0.0027772348993288609;
                    } else {
                      sum += (double)0.005444928571428572783;
                    }
                  }
                } else {
                  sum += (double)0.01228861538461538741;
                }
              } else {
                sum += (double)0.02866560526315789503;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6780820488929748535) ) ) {
                  sum += (double)0.08641682575757572704;
                } else {
                  sum += (double)0.01202729411764705963;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2626799941062927246) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61250019073486328) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.71428489685058594) ) ) {
                      sum += (double)0.01442058333333333039;
                    } else {
                      sum += (double)0.07990393333333331571;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09762750193476676941) ) ) {
                      sum += (double)0.03861925862068964904;
                    } else {
                      sum += (double)0.01277201438848919561;
                    }
                  }
                } else {
                  sum += (double)0.05276016666666664967;
                }
              }
            }
          } else {
            sum += (double)0.1124797499999999895;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.10528087615966797) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2696.92529296875) ) ) {
              sum += (double)0.1784381499999999898;
            } else {
              sum += (double)0.08173553124999999309;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02209999971091747284) ) ) {
              sum += (double)0.3576222391304347825;
            } else {
              sum += (double)0.2369847878787879059;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14569.18603515625) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5885865390300750732) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2111930027604103088) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.390869140625) ) ) {
                  sum += (double)0.09333824999999998373;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5285000205039978027) ) ) {
                    sum += (double)0.06565217857142856273;
                  } else {
                    sum += (double)0.03177010576923076923;
                  }
                }
              } else {
                sum += (double)0.1032771015624999872;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24046.02734375) ) ) {
                sum += (double)0.0185683240740740739;
              } else {
                sum += (double)0.03983931944444443762;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.42083358764648438) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005649999948218464851) ) ) {
                sum += (double)0.2104411625000000008;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2814500033855438232) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2149680033326148987) ) ) {
                      sum += (double)0.03634152222222221396;
                    } else {
                      sum += (double)0.09464596951219515775;
                    }
                  } else {
                    sum += (double)0.1988420882352941177;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.355563342571258545) ) ) {
                    sum += (double)0.02173945312500000226;
                  } else {
                    sum += (double)0.03771215909090908786;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7304500043392181396) ) ) {
                sum += (double)0.3211663863636364247;
              } else {
                sum += (double)0.1644827946428571441;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.91346168518066406) ) ) {
            sum += (double)0.1743565156249999859;
          } else {
            sum += (double)0.09986526562500000481;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5863704085350036621) ) ) {
            sum += (double)0.385202888888888928;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.051874995231628418) ) ) {
              sum += (double)0.1615590714285714546;
            } else {
              sum += (double)0.3310399166666666559;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1362.18914794921875) ) ) {
          sum += (double)0.4592607500000001064;
        } else {
          sum += (double)0.2498442115384615081;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4574484974145889282) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.5022792222222222103;
              } else {
                sum += (double)0.3797793965517241577;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5985499918460845947) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1745999976992607117) ) ) {
                    sum += (double)0.2141512395833333471;
                  } else {
                    sum += (double)0.2926041904761905177;
                  }
                } else {
                  sum += (double)0.1338958229166666569;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6079.36279296875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.517560720443725586) ) ) {
                    sum += (double)0.3859289545454546166;
                  } else {
                    sum += (double)0.3496296249999999439;
                  }
                } else {
                  sum += (double)0.2689692499999999931;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007500000065192580223) ) ) {
              sum += (double)0.5503419326923076893;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.444583699107170105) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5792.010009765625) ) ) {
                    sum += (double)0.3834330555555554576;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5261999964714050293) ) ) {
                      sum += (double)0.3974332656249999762;
                    } else {
                      sum += (double)0.4679159705882353637;
                    }
                  }
                } else {
                  sum += (double)0.3358192142857143181;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3015000075101852417) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3950494974851608276) ) ) {
                    sum += (double)0.5220960514705882405;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1204500012099742889) ) ) {
                      sum += (double)0.4333605555555555267;
                    } else {
                      sum += (double)0.5080355092592593325;
                    }
                  }
                } else {
                  sum += (double)0.3969101375000000376;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4525499939918518066) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3734496086835861206) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.46098899841308594) ) ) {
                sum += (double)0.3143167500000000336;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.28418731689453125) ) ) {
                  sum += (double)0.136233749999999959;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.35505008697509766) ) ) {
                    sum += (double)0.3432193076923076291;
                  } else {
                    sum += (double)0.161858714285714328;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2571000084280967712) ) ) {
                sum += (double)0.2063488035714285684;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006000012159347534) ) ) {
                  sum += (double)0.03993611764705882333;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3061999976634979248) ) ) {
                    sum += (double)0.1836428461538461288;
                  } else {
                    sum += (double)0.111735383333333313;
                  }
                }
              }
            }
          } else {
            sum += (double)0.3180086521739129979;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.2724203437499999603;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30137.2822265625) ) ) {
            sum += (double)0.1710591250000000063;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.809735774993896484) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06710000336170196533) ) ) {
                  sum += (double)0.03638300000000000561;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4193499982357025146) ) ) {
                    sum += (double)0.01030376086956521879;
                  } else {
                    sum += (double)0.01952863888888889052;
                  }
                }
              } else {
                sum += (double)0.05131714705882352984;
              }
            } else {
              sum += (double)0.1274303947368420897;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5886995196342468262) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3438.42626953125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5251489877700805664) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4980064928531646729) ) ) {
                sum += (double)0.5092448529411764957;
              } else {
                sum += (double)0.4434536428571427824;
              }
            } else {
              sum += (double)0.5473458124999999175;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.501010507345199585) ) ) {
              sum += (double)0.5350176666666667247;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.929873824119567871) ) ) {
                sum += (double)0.6285668088235294437;
              } else {
                sum += (double)0.6642949305555556627;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.25738906860351562) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6958000063896179199) ) ) {
                sum += (double)0.6934816388888890293;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6843680143356323242) ) ) {
                  sum += (double)0.7243935625000000877;
                } else {
                  sum += (double)0.773205218750000034;
                }
              }
            } else {
              sum += (double)0.6432353055555555255;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1788.03802490234375) ) ) {
              sum += (double)0.8024728000000002082;
            } else {
              sum += (double)0.8472565092592594382;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6726120114326477051) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.276456832885742188) ) ) {
              sum += (double)0.5274284545454546169;
            } else {
              sum += (double)0.4002993970588234474;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.199175834655761719) ) ) {
              sum += (double)0.4199828030303029425;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.161607980728149414) ) ) {
                sum += (double)0.1979907065217390849;
              } else {
                sum += (double)0.3165355603448276045;
              }
            }
          }
        } else {
          sum += (double)0.5993134605263158443;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.267592504620552063) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09099549800157546997) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01300000026822090149) ) ) {
                sum += (double)0.002500000000000000486;
              } else {
                sum += (double)0.006563464285714286188;
              }
            } else {
              sum += (double)0.02579225000000000267;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.84444427490234375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1664.1246337890625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.58624649047851562) ) ) {
                  sum += (double)0.03452271874999999351;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07914999872446060181) ) ) {
                    sum += (double)0.01308020270270270242;
                  } else {
                    sum += (double)0.02776845454545454756;
                  }
                }
              } else {
                sum += (double)0.07572581034482758766;
              }
            } else {
              sum += (double)0.1121833043478260711;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1497000008821487427) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.002977708333333333509;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3067010939121246338) ) ) {
                    sum += (double)0.006963423076923077118;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)119.7371940612792969) ) ) {
                      sum += (double)0.00353229411764705882;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
                  sum += (double)0.01147842500000000217;
                } else {
                  sum += (double)0.003622540000000000916;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14703.1865234375) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)406.5911865234375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1063919998705387115) ) ) {
                    sum += (double)0.01132050000000000244;
                  } else {
                    sum += (double)0.005623568181818182701;
                  }
                } else {
                  sum += (double)0.002499999999999999618;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.834716796875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4758993536233901978) ) ) {
                    sum += (double)0.01556916666666666865;
                  } else {
                    sum += (double)0.03856191176470587928;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5400248169898986816) ) ) {
                    sum += (double)0.01656286666666666879;
                  } else {
                    sum += (double)0.004534533333333334339;
                  }
                }
              }
            }
          } else {
            sum += (double)0.0326553303571428602;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.104166507720947266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1629640012979507446) ) ) {
            sum += (double)0.1194556388888888682;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2137615010142326355) ) ) {
              sum += (double)0.2575192500000000329;
            } else {
              sum += (double)0.173537472222222211;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
            sum += (double)0.1562401346153846071;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2284979969263076782) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4016499966382980347) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5923130810260772705) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.23014926910400391) ) ) {
                    sum += (double)0.09684834999999999972;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917999982833862305) ) ) {
                      sum += (double)0.0263778522727272681;
                    } else {
                      sum += (double)0.06641212068965517135;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7690340578556060791) ) ) {
                    sum += (double)0.02090644642857143395;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8999.86083984375) ) ) {
                      sum += (double)0.01351607407407407271;
                    } else {
                      sum += (double)0.004711833333333335233;
                    }
                  }
                }
              } else {
                sum += (double)0.08628051666666666786;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.879999995231628418) ) ) {
                sum += (double)0.164082837499999995;
              } else {
                sum += (double)0.04289299264705882797;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3413260132074356079) ) ) {
            sum += (double)0.3994761018518517837;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.10000038146972656) ) ) {
              sum += (double)0.1482934342105262648;
            } else {
              sum += (double)0.2490033269230769453;
            }
          }
        } else {
          sum += (double)0.4609660555555556427;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2554590925574302673) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              sum += (double)0.1671269558823529344;
            } else {
              sum += (double)0.3219245588235294386;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6018044352531433105) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05309999920427799225) ) ) {
                  sum += (double)0.04850674999999999432;
                } else {
                  sum += (double)0.1499695416666666503;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2868154942989349365) ) ) {
                  sum += (double)0.0858021666666666516;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5549999773502349854) ) ) {
                    sum += (double)0.01079821250000000121;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.07205277681350708) ) ) {
                      sum += (double)0.04780558823529411361;
                    } else {
                      sum += (double)0.02637401136363635989;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2292.14599609375) ) ) {
                sum += (double)0.1914232045454545839;
              } else {
                sum += (double)0.07945934374999998051;
              }
            }
          }
        } else {
          sum += (double)0.3372239821428571482;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3347699940204620361) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              sum += (double)0.4967481093750000243;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362929955124855042) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1871920004487037659) ) ) {
                    sum += (double)0.2205210666666666819;
                  } else {
                    sum += (double)0.3476788452380952243;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.01022624969482422) ) ) {
                    sum += (double)0.1593334903846154171;
                  } else {
                    sum += (double)0.2390246249999999906;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.3309101931818182463;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5722999870777130127) ) ) {
                      sum += (double)0.4287198870967741104;
                    } else {
                      sum += (double)0.380569727272727254;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0481499992311000824) ) ) {
                    sum += (double)0.4023669821428570992;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1784000024199485779) ) ) {
                      sum += (double)0.2486894210526315874;
                    } else {
                      sum += (double)0.3758510000000000462;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.04726409912109375) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.74114513397216797) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600320041179656982) ) ) {
                  sum += (double)0.1369252727272727288;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.711250007152557373) ) ) {
                    sum += (double)0.2959907391304348323;
                  } else {
                    sum += (double)0.1948476562499999731;
                  }
                }
              } else {
                sum += (double)0.09836495312500000143;
              }
            } else {
              sum += (double)0.3284646527777776992;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64350080490112305) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.306742668151855469) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.82421875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3066.5411376953125) ) ) {
                  sum += (double)0.4489076923076922854;
                } else {
                  sum += (double)0.4840694117647058592;
                }
              } else {
                sum += (double)0.5441500277777777672;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.70967674255371094) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.40476179122924805) ) ) {
                  sum += (double)0.4322835916666666889;
                } else {
                  sum += (double)0.3455210192307692219;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6943999826908111572) ) ) {
                  sum += (double)0.5427548043478261919;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1251680329442024231) ) ) {
                    sum += (double)0.4106892261904760977;
                  } else {
                    sum += (double)0.4689489166666667153;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3746999949216842651) ) ) {
              sum += (double)0.2274825263157894406;
            } else {
              sum += (double)0.3454648541666666683;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3811115026473999023) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32560.2060546875) ) ) {
            sum += (double)0.1851569499999999868;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4706.062744140625) ) ) {
                sum += (double)0.1735713541666666915;
              } else {
                sum += (double)0.0617469374999999876;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.209442138671875) ) ) {
                sum += (double)0.01654771428571428712;
              } else {
                sum += (double)0.05055483333333334744;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.453254282474517822) ) ) {
            sum += (double)0.3027954431818181136;
          } else {
            sum += (double)0.1675542812499999923;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6681739985942840576) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4674499928951263428) ) ) {
              sum += (double)0.3258585833333332848;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.895092487335205078) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.59821414947509766) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08119999989867210388) ) ) {
                      sum += (double)0.5569101770833332354;
                    } else {
                      sum += (double)0.4948912272727272188;
                    }
                  } else {
                    sum += (double)0.481765382352941085;
                  }
                } else {
                  sum += (double)0.5865599772727273509;
                }
              } else {
                sum += (double)0.4026247361111111589;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02735000010579824448) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5997329950332641602) ) ) {
                sum += (double)0.6426341029411763994;
              } else {
                sum += (double)0.7073126718750000208;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4538.65966796875) ) ) {
                sum += (double)0.5380624464285713726;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
                  sum += (double)0.5604579423076923028;
                } else {
                  sum += (double)0.6402057421875000376;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
            sum += (double)0.4158340394736843026;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03789999894797801971) ) ) {
              sum += (double)0.3589213166666666566;
            } else {
              sum += (double)0.1691720100000000115;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.001827418804168701) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04989999905228614807) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
                sum += (double)0.7750873529411764773;
              } else {
                sum += (double)0.8187790624999998768;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7774589955806732178) ) ) {
                sum += (double)0.6612530092592592279;
              } else {
                sum += (double)0.7710084062499998891;
              }
            }
          } else {
            sum += (double)0.8700146171875001722;
          }
        } else {
          sum += (double)0.4476074499999999623;
        }
      }
    }
  }
  return sum;
}
