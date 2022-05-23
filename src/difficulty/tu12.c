#include "prediction.h"
double predict_margin_unit12(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.240384578704833984) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.564999997615814209) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2500165030360221863) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1099999994039535522) ) ) {
              sum += (double)0.08057835344827583846;
            } else {
              sum += (double)0.02330724999999999811;
            }
          } else {
            sum += (double)0.1796821599999999797;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.667397737503051758) ) ) {
            sum += (double)0.3157092727272727273;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.248263835906982422) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2260.68914794921875) ) ) {
                sum += (double)0.1411059615384615273;
              } else {
                sum += (double)0.02891795000000000823;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                sum += (double)0.2895438161764705698;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2226675227284431458) ) ) {
                  sum += (double)0.1246726818181818214;
                } else {
                  sum += (double)0.2329806810344827728;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4849999994039535522) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
              sum += (double)0.02666056249999999156;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.45217132568359375) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3671393692493438721) ) ) {
                    sum += (double)0.008557650000000001714;
                  } else {
                    sum += (double)0.00296181578947368393;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003701016129032258517;
                  }
                }
              } else {
                sum += (double)0.01362951785714285914;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.77305641770362854) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6074526607990264893) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)198.3166656494140625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.64505481719970703) ) ) {
                    sum += (double)0.06462678571428571994;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2338460460305213928) ) ) {
                      sum += (double)0.0324623392857142784;
                    } else {
                      sum += (double)0.01618702976190474971;
                    }
                  }
                } else {
                  sum += (double)0.07763825000000000587;
                }
              } else {
                sum += (double)0.06791366999999998155;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23018.5380859375) ) ) {
                  sum += (double)0.01088653125000000124;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1400000005960464478) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003084343749999999846;
                  }
                }
              } else {
                sum += (double)0.02444780434782608397;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008849999867379665375) ) ) {
              sum += (double)0.2067697619047618729;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5751000046730041504) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94161844253540039) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1173000037670135498) ) ) {
                      sum += (double)0.0592680125000000016;
                    } else {
                      sum += (double)0.1318768571428571568;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2095990031957626343) ) ) {
                      sum += (double)0.02112272884615384524;
                    } else {
                      sum += (double)0.05482140178571427713;
                    }
                  }
                } else {
                  sum += (double)0.138648475000000021;
                }
              } else {
                sum += (double)0.2008630333333333295;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3058239966630935669) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19067.47265625) ) ) {
                sum += (double)0.0433853499999999892;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.89170074462890625) ) ) {
                  sum += (double)0.1114063124999999793;
                } else {
                  sum += (double)0.1872976785714285664;
                }
              }
            } else {
              sum += (double)0.2548313749999999711;
            }
          }
        }
      }
    } else {
      sum += (double)0.4925957822580645518;
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7563312947750091553) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3346730023622512817) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001849999967816984281) ) ) {
              sum += (double)0.5117218055555555756;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.73943996429443359) ) ) {
                  sum += (double)0.3273384416666666463;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1978999972343444824) ) ) {
                    sum += (double)0.2567055833333333204;
                  } else {
                    sum += (double)0.1347631527777777838;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.17451930046081543) ) ) {
                    sum += (double)0.3367638571428571148;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5242000222206115723) ) ) {
                      sum += (double)0.387984249999999975;
                    } else {
                      sum += (double)0.4282138472222221659;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927590012550354004) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                      sum += (double)0.381531000000000009;
                    } else {
                      sum += (double)0.2201703289473683767;
                    }
                  } else {
                    sum += (double)0.3732275576923076432;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09235000051558017731) ) ) {
                  sum += (double)0.313448636363636346;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.269649997353553772) ) ) {
                    sum += (double)0.1705666578947368506;
                  } else {
                    sum += (double)0.08442755357142857353;
                  }
                }
              } else {
                sum += (double)0.2695826453488372465;
              }
            } else {
              sum += (double)0.1093770185185184846;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.87053585052490234) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03640000149607658386) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.031167984008789062) ) ) {
                sum += (double)0.4810472678571428018;
              } else {
                sum += (double)0.5699901666666666866;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2495.089111328125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                  sum += (double)0.4001039910714285774;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3983.3006591796875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1664500012993812561) ) ) {
                      sum += (double)0.4214337638888889237;
                    } else {
                      sum += (double)0.4574507375000000375;
                    }
                  } else {
                    sum += (double)0.4922463809523809353;
                  }
                }
              } else {
                sum += (double)0.5443205238095237819;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5110000073909759521) ) ) {
              sum += (double)0.2241943749999999735;
            } else {
              sum += (double)0.410501474999999949;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147830009460449219) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3091.4984130859375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.453124940395355225) ) ) {
                sum += (double)0.2651557857142857189;
              } else {
                sum += (double)0.1614290166666666748;
              }
            } else {
              sum += (double)0.06405190740740740463;
            }
          } else {
            sum += (double)0.3303195138888888049;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21521.0654296875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.10289382934570312) ) ) {
              sum += (double)0.2421120624999999749;
            } else {
              sum += (double)0.0968899880952381054;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
              sum += (double)0.112931289473684221;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.783580303192138672) ) ) {
                sum += (double)0.007416230769230770445;
              } else {
                sum += (double)0.0291342307692307699;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6635474860668182373) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.00900459289550781) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.921626925468444824) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.444673538208007812) ) ) {
                    sum += (double)0.4658232031250000293;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4883529990911483765) ) ) {
                      sum += (double)0.5457071818181818967;
                    } else {
                      sum += (double)0.6014171617647058321;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4098.70166015625) ) ) {
                    sum += (double)0.5189557592592592972;
                  } else {
                    sum += (double)0.4313977968750000169;
                  }
                }
              } else {
                sum += (double)0.6194817916666667257;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6021510064601898193) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
                    sum += (double)0.6621964999999998547;
                  } else {
                    sum += (double)0.6028655806451613808;
                  }
                } else {
                  sum += (double)0.7167990357142856039;
                }
              } else {
                sum += (double)0.5714925543478261982;
              }
            }
          } else {
            sum += (double)0.3513973888888888841;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.244230747222900391) ) ) {
            sum += (double)0.3953760374999999438;
          } else {
            sum += (double)0.1926647282608695;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.001827418804168701) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1136000007390975952) ) ) {
              sum += (double)0.7321458478260869374;
            } else {
              sum += (double)0.6633342500000000141;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.880581640625000106;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.614215672016143799) ) ) {
                  sum += (double)0.7990673809523808346;
                } else {
                  sum += (double)0.8572069807692307419;
                }
              } else {
                sum += (double)0.7754150978260869742;
              }
            }
          }
        } else {
          sum += (double)0.5274432833333333459;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.728658676147460938) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1653690040111541748) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3119.6138916015625) ) ) {
            sum += (double)0.09373502777777778516;
          } else {
            sum += (double)0.01607923749999999943;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09545469284057617) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
              sum += (double)0.2459158666666666493;
            } else {
              sum += (double)0.07782338461538461372;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.564999997615814209) ) ) {
              sum += (double)0.1312309999999999865;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.089411735534667969) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                  sum += (double)0.2452066607142857346;
                } else {
                  sum += (double)0.3455386071428571126;
                }
              } else {
                sum += (double)0.2019749705882352975;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1353574991226196289) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6658500134944915771) ) ) {
                sum += (double)0.02348229411764705607;
              } else {
                sum += (double)0.005675852941176472155;
              }
            } else {
              sum += (double)0.1405576363636363291;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8529999852180480957) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1903499960899353027) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.808899998664855957) ) ) {
                      sum += (double)0.002564512578616353743;
                    } else {
                      sum += (double)0.004533775000000000305;
                    }
                  } else {
                    sum += (double)0.005826400000000000676;
                  }
                } else {
                  sum += (double)0.008679861111111110417;
                }
              } else {
                sum += (double)0.01518378571428571737;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.62983798980712891) ) ) {
                sum += (double)0.06397896666666666454;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.022533655166625977) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4142000079154968262) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.60227203369140625) ) ) {
                      sum += (double)0.01970015384615384293;
                    } else {
                      sum += (double)0.04560836842105262662;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3910.263427734375) ) ) {
                      sum += (double)0.01520848853211007913;
                    } else {
                      sum += (double)0.04205252499999999338;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2434999942779541016) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003261461538461538599;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6559292376041412354) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14569.18603515625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2800929993391036987) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.24067497253417969) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925999969244003296) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2569690272212028503) ) ) {
                      sum += (double)0.0649448124999999904;
                    } else {
                      sum += (double)0.01438310000000000109;
                    }
                  } else {
                    sum += (double)0.09295547368421053225;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5645000040531158447) ) ) {
                    sum += (double)0.0234972222222222249;
                  } else {
                    sum += (double)0.01172106250000000058;
                  }
                }
              } else {
                sum += (double)0.09791661363636362803;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.121399998664855957) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01795000024139881134) ) ) {
                  sum += (double)0.2199585769230769372;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1845235005021095276) ) ) {
                    sum += (double)0.02330686538461538074;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                      sum += (double)0.05063434558823529108;
                    } else {
                      sum += (double)0.1494120089285713993;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10491.81201171875) ) ) {
                  sum += (double)0.08282962499999999006;
                } else {
                  sum += (double)0.2421125967741935558;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631920456886291504) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2621420025825500488) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2067350000143051147) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.053863525390625) ) ) {
                    sum += (double)0.009867205882352942867;
                  } else {
                    sum += (double)0.02195879166666666119;
                  }
                } else {
                  sum += (double)0.00654490909090909255;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.021914303302764893) ) ) {
                  sum += (double)0.0768396904761904781;
                } else {
                  sum += (double)0.02007523148148147862;
                }
              }
            } else {
              sum += (double)0.09601737499999998815;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
        sum += (double)0.1500525526315789615;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2894500046968460083) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.031826436519622803) ) ) {
            sum += (double)0.2582957129629629422;
          } else {
            sum += (double)0.3782573235294117708;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
            sum += (double)0.3502853611111110821;
          } else {
            sum += (double)0.4560641176470587865;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4729205071926116943) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3339300006628036499) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.97344303131103516) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162764966487884521) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4752000123262405396) ) ) {
                    sum += (double)0.3553585277777778773;
                  } else {
                    sum += (double)0.2270743828124999752;
                  }
                } else {
                  sum += (double)0.1850683518518518589;
                }
              } else {
                sum += (double)0.4082009375000000273;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05095000006258487701) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01319999992847442627) ) ) {
                    sum += (double)0.4318184166666665935;
                  } else {
                    sum += (double)0.3743096093750000186;
                  }
                } else {
                  sum += (double)0.4885229861111111682;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2875320017337799072) ) ) {
                    sum += (double)0.2705346538461538275;
                  } else {
                    sum += (double)0.3667785555555556076;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8742.363525390625) ) ) {
                    sum += (double)0.3551872857142856499;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.884447574615478516) ) ) {
                      sum += (double)0.383244727272727348;
                    } else {
                      sum += (double)0.4335477656249999701;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.33372879028320312) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19886.4365234375) ) ) {
                sum += (double)0.3397073750000000891;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3070000112056732178) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.54307174682617188) ) ) {
                    sum += (double)0.2129687631578947304;
                  } else {
                    sum += (double)0.2793895192307692676;
                  }
                } else {
                  sum += (double)0.08201017857142857415;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2297499999403953552) ) ) {
                sum += (double)0.09602653124999999124;
              } else {
                sum += (double)0.1866422222222222371;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.80416488647460938) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03640000149607658386) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                sum += (double)0.6070316323529412195;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.42631196975708008) ) ) {
                  sum += (double)0.4901281363636363353;
                } else {
                  sum += (double)0.5545573571428571436;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6270000040531158447) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  sum += (double)0.4657742678571428208;
                } else {
                  sum += (double)0.3943017678571428264;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.551193714141845703) ) ) {
                  sum += (double)0.542668947368421084;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7040999829769134521) ) ) {
                    sum += (double)0.5122767352941176577;
                  } else {
                    sum += (double)0.4477317592592592321;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96285629272460938) ) ) {
              sum += (double)0.3888113148148147902;
            } else {
              sum += (double)0.2791664642857142886;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.149999856948852539) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.966652154922485352) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.722852706909179688) ) ) {
              sum += (double)0.1931587499999999624;
            } else {
              sum += (double)0.06039661538461538193;
            }
          } else {
            sum += (double)0.3209999130434783021;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30044.84375) ) ) {
            sum += (double)0.1697603333333333742;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.256686687469482422) ) ) {
              sum += (double)0.119955574999999981;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.856406211853027344) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7372.614501953125) ) ) {
                  sum += (double)0.0355794531250000004;
                } else {
                  sum += (double)0.006984588235294118298;
                }
              } else {
                sum += (double)0.06312626315789472697;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.093493223190307617) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.314393997192382812) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2991.5469970703125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5006735026836395264) ) ) {
                  sum += (double)0.5247981826923077131;
                } else {
                  sum += (double)0.4856759999999999966;
                }
              } else {
                sum += (double)0.5842832685185185282;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9925.47900390625) ) ) {
                sum += (double)0.460238671874999894;
              } else {
                sum += (double)0.3993662666666665806;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7726.69873046875) ) ) {
              sum += (double)0.5400075199999999631;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
                sum += (double)0.5927744722222222373;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6520799994468688965) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09144999831914901733) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09210025519132614136) ) ) {
                      sum += (double)0.6660567599999999144;
                    } else {
                      sum += (double)0.7236693888888888759;
                    }
                  } else {
                    sum += (double)0.6340172608695652245;
                  }
                } else {
                  sum += (double)0.7550182142857142509;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
            sum += (double)0.4470141630434781854;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2552.708984375) ) ) {
              sum += (double)0.4509036000000000155;
            } else {
              sum += (double)0.1733524875000000132;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5680897831916809082) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            sum += (double)0.7147144027777777575;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.8550203977272728961;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0860590226948261261) ) ) {
                sum += (double)0.7798372241379312175;
              } else {
                sum += (double)0.8315737916666667839;
              }
            }
          }
        } else {
          sum += (double)0.6051431093750000434;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.035119056701660156) ) ) {
          sum += (double)0.08089252173913041855;
        } else {
          sum += (double)0.1902208625000000042;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-765.98193359375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5420745015144348145) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3553670048713684082) ) ) {
              sum += (double)0.3814850775862068666;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2726.510498046875) ) ) {
                sum += (double)0.3565732187499999761;
              } else {
                sum += (double)0.2474513942307692282;
              }
            }
          } else {
            sum += (double)0.4960916052631578754;
          }
        } else {
          sum += (double)0.1373328076923076846;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165290027856826782) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08530573546886444092) ) ) {
                  sum += (double)0.00892976666666666849;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8594999909400939941) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.70833206176757812) ) ) {
                      sum += (double)0.00447558823529411922;
                    } else {
                      sum += (double)0.002745954301075270287;
                    }
                  } else {
                    sum += (double)0.006698499999999999593;
                  }
                }
              } else {
                sum += (double)0.02016304166666666939;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1304499953985214233) ) ) {
                sum += (double)0.004464520000000000467;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07169250026345252991) ) ) {
                  sum += (double)0.01383149999999999831;
                } else {
                  sum += (double)0.0399167499999999939;
                }
              }
            }
          } else {
            sum += (double)0.06221184999999999216;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8357499837875366211) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1099705696105957) ) ) {
              sum += (double)0.09481949999999998713;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1334040015935897827) ) ) {
                sum += (double)0.05853662499999998797;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3393335044384002686) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5586062371730804443) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5317.30078125) ) ) {
                      sum += (double)0.04592386764705883029;
                    } else {
                      sum += (double)0.01757563513513513836;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2297310009598731995) ) ) {
                      sum += (double)0.002976700000000000526;
                    } else {
                      sum += (double)0.01097827272727272888;
                    }
                  }
                } else {
                  sum += (double)0.04586957812499999759;
                }
              }
            }
          } else {
            sum += (double)0.106086799999999995;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
            sum += (double)0.2372864464285714126;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1479744985699653625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2605500072240829468) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23612.7802734375) ) ) {
                  sum += (double)0.03171210416666666448;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.00891304016113281) ) ) {
                    sum += (double)0.02603852777777777849;
                  } else {
                    sum += (double)0.0107433064516129044;
                  }
                }
              } else {
                sum += (double)0.05295046875000000708;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6789383888244628906) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7165.858154296875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5678000152111053467) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4354500025510787964) ) ) {
                      sum += (double)0.03383061111111110991;
                    } else {
                      sum += (double)0.07103675781250001764;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14130.380859375) ) ) {
                      sum += (double)0.07500889814814816481;
                    } else {
                      sum += (double)0.1516735675675675576;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2795455008745193481) ) ) {
                      sum += (double)0.1712163823529411488;
                    } else {
                      sum += (double)0.08207392045454543761;
                    }
                  } else {
                    sum += (double)0.249154052631578915;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.232098996639251709) ) ) {
                    sum += (double)0.0304969999999999998;
                  } else {
                    sum += (double)0.1205474531249999814;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3948.9285888671875) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                      sum += (double)0.01755113636363636251;
                    } else {
                      sum += (double)0.0344497934782608678;
                    }
                  } else {
                    sum += (double)0.01017990000000000041;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3464497500000000008;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85074520111083984) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.4480503260869566073;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11929.9404296875) ) ) {
                sum += (double)0.320336374999999951;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8976.74267578125) ) ) {
                  sum += (double)0.1715467236842105336;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.477477148175239563) ) ) {
                    sum += (double)0.3094104999999999217;
                  } else {
                    sum += (double)0.1878045666666666724;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5787591521739130496;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3500795066356658936) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.3726687500000000486;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6119999885559082031) ) ) {
                      sum += (double)0.4453222903225806939;
                    } else {
                      sum += (double)0.4070359891304348721;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1422999948263168335) ) ) {
                    sum += (double)0.2992561287878787724;
                  } else {
                    sum += (double)0.3946020865384614051;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.14204502105712891) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1596499979496002197) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2396047860383987427) ) ) {
                      sum += (double)0.4585471034482758168;
                    } else {
                      sum += (double)0.5102524999999999977;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107555001974105835) ) ) {
                      sum += (double)0.4821140769230769507;
                    } else {
                      sum += (double)0.3860722500000000057;
                    }
                  }
                } else {
                  sum += (double)0.3755660000000000109;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.63336181640625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
                sum += (double)0.3925815138888889;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1504370346665382385) ) ) {
                  sum += (double)0.3114615288461538567;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17553749680519104) ) ) {
                    sum += (double)0.1173134375000000063;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4652500003576278687) ) ) {
                      sum += (double)0.1518108750000000118;
                    } else {
                      sum += (double)0.2475401323529411723;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15424.068359375) ) ) {
                sum += (double)0.4268644107142857136;
              } else {
                sum += (double)0.3170504090909090911;
              }
            }
          } else {
            sum += (double)0.08757870652173913029;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.855637550354003906) ) ) {
          sum += (double)0.276613104166666679;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.2157574431818182203;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.897893905639648438) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2121355526315789608;
              } else {
                sum += (double)0.05086036111111110619;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.233950003981590271) ) ) {
                sum += (double)0.06395316666666665817;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.72168827056884766) ) ) {
                  sum += (double)0.03623590999999999618;
                } else {
                  sum += (double)0.01557162499999999866;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700002610683441162) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10253.5322265625) ) ) {
              sum += (double)0.4298746093749999386;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4688404947519302368) ) ) {
                sum += (double)0.6041304374999999505;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5015920102596282959) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.195782877504825592) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4861259907484054565) ) ) {
                      sum += (double)0.5546822934782609238;
                    } else {
                      sum += (double)0.4656821458333333386;
                    }
                  } else {
                    sum += (double)0.4420161413043477983;
                  }
                } else {
                  sum += (double)0.5627756363636364778;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3459.4644775390625) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
                sum += (double)0.6048958055555554436;
              } else {
                sum += (double)0.5141172894736841803;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1508.35369873046875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.803846120834350586) ) ) {
                  sum += (double)0.6452399861111112189;
                } else {
                  sum += (double)0.6201236458333333479;
                }
              } else {
                sum += (double)0.7109132894736841513;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.227642178535461426) ) ) {
              sum += (double)0.7451278515624999432;
            } else {
              sum += (double)0.6407020681818180741;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07640000060200691223) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.8485841617647059687;
              } else {
                sum += (double)0.8030951714285713416;
              }
            } else {
              sum += (double)0.7617537777777778629;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3302.6025390625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6603384912014007568) ) ) {
            sum += (double)0.4455237291666667154;
          } else {
            sum += (double)0.6410047307692307017;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.4470919843749999734;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0778499990701675415) ) ) {
              sum += (double)0.1412326875000000093;
            } else {
              sum += (double)0.3204983214285713755;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.78423762321472168) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5850000083446502686) ) ) {
        sum += (double)0.09052713043478258226;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.293749809265136719) ) ) {
              sum += (double)0.218345375000000036;
            } else {
              sum += (double)0.165994132352941165;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8528999984264373779) ) ) {
              sum += (double)0.4123611190476190735;
            } else {
              sum += (double)0.2928640625000000219;
            }
          }
        } else {
          sum += (double)0.4376298409090909058;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8906499743461608887) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2941766232252120972) ) ) {
                    sum += (double)0.004326928571428571846;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4433.33837890625) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.003084966666666666933;
                    }
                  }
                }
              } else {
                sum += (double)0.006513749999999999575;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.76446914672851562) ) ) {
                sum += (double)0.00894100000000000103;
              } else {
                sum += (double)0.003141071428571429267;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3035499900579452515) ) ) {
              sum += (double)0.03316069642857143174;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2708461582660675049) ) ) {
                sum += (double)0.01941996666666666663;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1135159991681575775) ) ) {
                  sum += (double)0.01102930952380952456;
                } else {
                  sum += (double)0.003424000000000000394;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81547641754150391) ) ) {
            sum += (double)0.1181302374999999988;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7507500052452087402) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914350658655166626) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12556.41748046875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4290000051259994507) ) ) {
                    sum += (double)0.04331889583333333599;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25112.6376953125) ) ) {
                      sum += (double)0.01862651315789473627;
                    } else {
                      sum += (double)0.008190029411764707112;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.47155189514160156) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51648330688476562) ) ) {
                      sum += (double)0.05429835714285712739;
                    } else {
                      sum += (double)0.01287795833333333501;
                    }
                  } else {
                    sum += (double)0.08488413749999998426;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12785.7978515625) ) ) {
                  sum += (double)0.01161500000000000032;
                } else {
                  sum += (double)0.003019416666666666343;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.263885498046875) ) ) {
                sum += (double)0.03750695833333333312;
              } else {
                sum += (double)0.10615458333333333;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
            sum += (double)0.2388957758620690042;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5423741340637207) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.15731000155210495) ) ) {
                    sum += (double)0.05075061250000000024;
                  } else {
                    sum += (double)0.1376539907407407504;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4826708436012268066) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1883779987692832947) ) ) {
                      sum += (double)0.02743877232142857142;
                    } else {
                      sum += (double)0.0471321029411764722;
                    }
                  } else {
                    sum += (double)0.07549249999999997629;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13848.81103515625) ) ) {
                    sum += (double)0.1132830340909090905;
                  } else {
                    sum += (double)0.04427855000000000679;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.4426722526550293) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96306800842285156) ) ) {
                      sum += (double)0.109295442708333343;
                    } else {
                      sum += (double)0.1947533214285714631;
                    }
                  } else {
                    sum += (double)0.2858828269230769825;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
                  sum += (double)0.01907855555555555693;
                } else {
                  sum += (double)0.1252165555555555532;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2762285023927688599) ) ) {
                    sum += (double)0.009688281250000001579;
                  } else {
                    sum += (double)0.03317190476190476356;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.228400006890296936) ) ) {
                    sum += (double)0.02207151562499999956;
                  } else {
                    sum += (double)0.06279594318181817847;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.22500038146972656) ) ) {
            sum += (double)0.1373766904761904717;
          } else {
            sum += (double)0.3585439722222222847;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72046709060668945) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007699999958276748657) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.5204024910714285523;
              } else {
                sum += (double)0.4217368676470588662;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13481.8076171875) ) ) {
                  sum += (double)0.3515327142857143095;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4846876710653305054) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7508.677001953125) ) ) {
                      sum += (double)0.2128145476190475838;
                    } else {
                      sum += (double)0.3446106176470588034;
                    }
                  } else {
                    sum += (double)0.1551797500000000052;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17366981506347656) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2302553355693817139) ) ) {
                      sum += (double)0.4120285785714285498;
                    } else {
                      sum += (double)0.3612688958333334366;
                    }
                  } else {
                    sum += (double)0.2412796022727272671;
                  }
                } else {
                  sum += (double)0.4678821617647058728;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01735000032931566238) ) ) {
              sum += (double)0.5757502767857142212;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5354283750057220459) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.822543859481811523) ) ) {
                    sum += (double)0.4545894404761904872;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1914241760969161987) ) ) {
                      sum += (double)0.4613935952380953109;
                    } else {
                      sum += (double)0.5487930799999999332;
                    }
                  }
                } else {
                  sum += (double)0.4235304791666665847;
                }
              } else {
                sum += (double)0.3986679545454545615;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2084544971585273743) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2304032072424888611) ) ) {
                sum += (double)0.2355436029411764609;
              } else {
                sum += (double)0.1075324625000000089;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.722050011157989502) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1807000041007995605) ) ) {
                  sum += (double)0.3792880795454545151;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3682000041007995605) ) ) {
                    sum += (double)0.2486309833333333608;
                  } else {
                    sum += (double)0.357495890624999979;
                  }
                }
              } else {
                sum += (double)0.2496168064516129381;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3525566458702087402) ) ) {
              sum += (double)0.2492043593749999897;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1952999979257583618) ) ) {
                sum += (double)0.07659104761904764191;
              } else {
                sum += (double)0.1826017187500000027;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.373043537139892578) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3787.3985595703125) ) ) {
              sum += (double)0.1166032343749999894;
            } else {
              sum += (double)0.02376675000000000315;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3403999954462051392) ) ) {
              sum += (double)0.04653210937499999839;
            } else {
              sum += (double)0.01737041666666666595;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1109500005841255188) ) ) {
            sum += (double)0.2043191388888888904;
          } else {
            sum += (double)0.0884313624999999992;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6581094861030578613) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.00396823883056641) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.508300483226776123) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485868990421295166) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.02027034759521484) ) ) {
                  sum += (double)0.496511607142857192;
                } else {
                  sum += (double)0.600306928571428644;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3782.74609375) ) ) {
                  sum += (double)0.5281457142857143294;
                } else {
                  sum += (double)0.4296200312499999785;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.56214594841003418) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5742489993572235107) ) ) {
                  sum += (double)0.5246028281249999203;
                } else {
                  sum += (double)0.5702365624999998772;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.818649977445602417) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04144999943673610687) ) ) {
                    sum += (double)0.6909698484848485478;
                  } else {
                    sum += (double)0.63513561904761906;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007949999766424298286) ) ) {
                    sum += (double)0.6629016911764705755;
                  } else {
                    sum += (double)0.5657468299999998118;
                  }
                }
              }
            }
          } else {
            sum += (double)0.3311827500000000257;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5474960207939147949) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6889590024948120117) ) ) {
                sum += (double)0.7579987750000000135;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7125905156135559082) ) ) {
                  sum += (double)0.6562765192307692397;
                } else {
                  sum += (double)0.7100625535714285563;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1620.94403076171875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
                  sum += (double)0.8135297894736842617;
                } else {
                  sum += (double)0.7519565294117648291;
                }
              } else {
                sum += (double)0.8688640789473683901;
              }
            }
          } else {
            sum += (double)0.6094037794117648232;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
            sum += (double)0.3952138382352941015;
          } else {
            sum += (double)0.4685154285714285827;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4027327884615384823;
          } else {
            sum += (double)0.1828825104166666715;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1746900007128715515) ) ) {
          sum += (double)0.0652042142857142959;
        } else {
          sum += (double)0.1529337499999999517;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595435023307800293) ) ) {
              sum += (double)0.3780609230769229612;
            } else {
              sum += (double)0.2148026458333333333;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5083524882793426514) ) ) {
              sum += (double)0.4116858421052631556;
            } else {
              sum += (double)0.6015479230769231744;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.951639533042907715) ) ) {
            sum += (double)0.2857179375000000188;
          } else {
            sum += (double)0.1101253421052631465;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.17395000159740448) ) ) {
              sum += (double)0.01556796428571428741;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                sum += (double)0.008004428571428573794;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05701099894940853119) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.037707500159740448) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.002940961538461538127;
                    }
                  } else {
                    sum += (double)0.003843823529411764545;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06579599902033805847) ) ) {
                    sum += (double)0.00820344117647058696;
                  } else {
                    sum += (double)0.002889984375000000192;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.77100849151611328) ) ) {
              sum += (double)0.04173155357142856181;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000000298023224) ) ) {
                sum += (double)0.02548819230769230545;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2672.490234375) ) ) {
                  sum += (double)0.009675230769230769301;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1250540986657142639) ) ) {
            sum += (double)0.1162279861111111257;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.73214340209960938) ) ) {
              sum += (double)0.09319714772727273611;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                sum += (double)0.07042643333333332978;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2130.19915771484375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.242375500500202179) ) ) {
                      sum += (double)0.008957443037974677919;
                    } else {
                      sum += (double)0.02015337500000000115;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1736664995551109314) ) ) {
                      sum += (double)0.01850256034482758438;
                    } else {
                      sum += (double)0.05092048214285712499;
                    }
                  }
                } else {
                  sum += (double)0.06131573333333332348;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9288.591796875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981000006198883057) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04154999926686286926) ) ) {
                    sum += (double)0.09129577777777778125;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1734215021133422852) ) ) {
                      sum += (double)0.01929257327586206966;
                    } else {
                      sum += (double)0.05587414903846152359;
                    }
                  }
                } else {
                  sum += (double)0.100549133333333332;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.879999995231628418) ) ) {
                  sum += (double)0.08446622826086955249;
                } else {
                  sum += (double)0.1764384499999999689;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.91666793823242188) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000214576721191) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.09094715118408203) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04769999906420707703) ) ) {
                      sum += (double)0.03055131818181818643;
                    } else {
                      sum += (double)0.0693702799999999925;
                    }
                  } else {
                    sum += (double)0.1333941309523809793;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2821574658155441284) ) ) {
                    sum += (double)0.09955773076923073173;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.216011859374999976;
                    } else {
                      sum += (double)0.2847596000000000571;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                  sum += (double)0.1937852222222222476;
                } else {
                  sum += (double)0.3370242794117647711;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                sum += (double)0.05013956730769229819;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                  sum += (double)0.02876504347826087243;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3199.353515625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2459665015339851379) ) ) {
                      sum += (double)0.009650346153846155184;
                    } else {
                      sum += (double)0.01949184210526316158;
                    }
                  } else {
                    sum += (double)0.004187695652173913791;
                  }
                }
              }
            } else {
              sum += (double)0.09841565624999999706;
            }
          }
        } else {
          sum += (double)0.3205112222222222251;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.24973917007446289) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0113499998115003109) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.5177230263157894807;
              } else {
                sum += (double)0.4287905760869564764;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338944971561431885) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.401972293853759766) ) ) {
                  sum += (double)0.2903940652173913062;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2056175023317337036) ) ) {
                    sum += (double)0.2058424285714285928;
                  } else {
                    sum += (double)0.1446660500000000182;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7280000150203704834) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2296859323978424072) ) ) {
                      sum += (double)0.4073571363636362963;
                    } else {
                      sum += (double)0.3408895764705882625;
                    }
                  } else {
                    sum += (double)0.2480905535714285626;
                  }
                } else {
                  sum += (double)0.4772673194444444489;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003649999969638884068) ) ) {
              sum += (double)0.5852508977272726787;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2549.707275390625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3221.32568359375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4260305017232894897) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.483098506927490234) ) ) {
                      sum += (double)0.466982543478260903;
                    } else {
                      sum += (double)0.5320501250000000404;
                    }
                  } else {
                    sum += (double)0.4245434868421052443;
                  }
                } else {
                  sum += (double)0.3672409999999999841;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07084999978542327881) ) ) {
                  sum += (double)0.4983964264705883496;
                } else {
                  sum += (double)0.5420605648148147937;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.65734291076660156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8092.22021484375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2674500048160552979) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12223.82666015625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823000073432922363) ) ) {
                    sum += (double)0.2229953999999999548;
                  } else {
                    sum += (double)0.1449225833333332991;
                  }
                } else {
                  sum += (double)0.3344729342105262626;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2865590751171112061) ) ) {
                  sum += (double)0.3252882692307691448;
                } else {
                  sum += (double)0.4266893690476190604;
                }
              }
            } else {
              sum += (double)0.1386498020833333011;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3565506190061569214) ) ) {
              sum += (double)0.2181050833333333105;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3227570056915283203) ) ) {
                sum += (double)0.06596110294117646378;
              } else {
                sum += (double)0.1469117000000000062;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
            sum += (double)0.1259200625000000129;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1706000044941902161) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2988149970769882202) ) ) {
                sum += (double)0.01933562500000000559;
              } else {
                sum += (double)0.06928165277777778575;
              }
            } else {
              sum += (double)0.07914056249999999737;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.149871826171875) ) ) {
            sum += (double)0.2209562583333332941;
          } else {
            sum += (double)0.09295363749999999148;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7020279765129089355) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7429124116897583008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03080000076442956924) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4811249971389770508) ) ) {
                sum += (double)0.5221760156250000451;
              } else {
                sum += (double)0.6349835999999999814;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6297500133514404297) ) ) {
                  sum += (double)0.5698617894736842659;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4972509890794754028) ) ) {
                    sum += (double)0.5368942314814814099;
                  } else {
                    sum += (double)0.4636146093749999864;
                  }
                }
              } else {
                sum += (double)0.436840166666666585;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1508.35369873046875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6402489840984344482) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6890.1181640625) ) ) {
                  sum += (double)0.5166505694444443186;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
                    sum += (double)0.5566808809523807744;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.03195524215698242) ) ) {
                      sum += (double)0.6491810000000001191;
                    } else {
                      sum += (double)0.5711876590909091833;
                    }
                  }
                }
              } else {
                sum += (double)0.683264611111111142;
              }
            } else {
              sum += (double)0.7109656899999999835;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6088369786739349365) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.206399202346801758) ) ) {
              sum += (double)0.3938164264705882323;
            } else {
              sum += (double)0.279233445652173895;
            }
          } else {
            sum += (double)0.4373567142857141543;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.725079536437988281) ) ) {
          sum += (double)0.6523902343750000998;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            sum += (double)0.6944961184210526328;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3625.1453857421875) ) ) {
              sum += (double)0.7765494124999998693;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8970000147819519043) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07954045012593269348) ) ) {
                  sum += (double)0.7890757647058822544;
                } else {
                  sum += (double)0.8566084285714284929;
                }
              } else {
                sum += (double)0.8728537187499999517;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4811269938945770264) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
          sum += (double)0.07788751190476188302;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49186086654663086) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06745000183582305908) ) ) {
              sum += (double)0.05495744117647058391;
            } else {
              sum += (double)0.2729511666666666891;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
              sum += (double)0.2343946964285713863;
            } else {
              sum += (double)0.3827920714285714121;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5125246047973632812) ) ) {
          sum += (double)0.5562709886363635947;
        } else {
          sum += (double)0.312889971153846147;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8349999785423278809) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5151855051517486572) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
              sum += (double)0.04752391666666665876;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1488.8948974609375) ) ) {
                      sum += (double)0.002945283582089551402;
                    } else {
                      sum += (double)0.01000631250000000132;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.47115325927734375) ) ) {
                      sum += (double)0.01973213888888889281;
                    } else {
                      sum += (double)0.004778655555555556995;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02745000086724758148) ) ) {
                    sum += (double)0.0364041428571428502;
                  } else {
                    sum += (double)0.004835543478260870449;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.364288330078125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.158449999988079071) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5590803921222686768) ) ) {
                      sum += (double)0.01535500000000000059;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  } else {
                    sum += (double)0.02703136842105262685;
                  }
                } else {
                  sum += (double)0.03736813541666666322;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1339722797274589539) ) ) {
              sum += (double)0.119796406250000001;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1942159980535507202) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3942999988794326782) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.94373846054077148) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.14531850814819336) ) ) {
                      sum += (double)0.01494025000000000214;
                    } else {
                      sum += (double)0.04818446951219511332;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3291500061750411987) ) ) {
                      sum += (double)0.005721600000000000297;
                    } else {
                      sum += (double)0.01549320294117646421;
                    }
                  }
                } else {
                  sum += (double)0.0811321093749999972;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3274.693359375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721000000834465027) ) ) {
                    sum += (double)0.1291132596153846124;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39) ) ) {
                      sum += (double)0.09408939285714283673;
                    } else {
                      sum += (double)0.02841136666666667018;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
                    sum += (double)0.06126583333333332493;
                  } else {
                    sum += (double)0.006121631578947368119;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.2026146875000000014;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
          sum += (double)0.3376989285714286915;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5198086798191070557) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5051.124267578125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.359081655740737915) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                    sum += (double)0.08491715384615385054;
                  } else {
                    sum += (double)0.03980660714285715746;
                  }
                } else {
                  sum += (double)0.1131098928571428602;
                }
              } else {
                sum += (double)0.2071130833333333365;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3853085041046142578) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9275968372821807861) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23799.6494140625) ) ) {
                    sum += (double)0.01493121428571428724;
                  } else {
                    sum += (double)0.04757389705882352632;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1754499971866607666) ) ) {
                    sum += (double)0.01924043421052631583;
                  } else {
                    sum += (double)0.007741000000000000485;
                  }
                }
              } else {
                sum += (double)0.1072778660714285709;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2634999901056289673) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.846249997615814209) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                  sum += (double)0.2737090156249999962;
                } else {
                  sum += (double)0.1703397968750000047;
                }
              } else {
                sum += (double)0.1514873382352940889;
              }
            } else {
              sum += (double)0.09565905000000000935;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5279635190963745117) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35432529449462891) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.4956641184210526241;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.806060552597045898) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2719189971685409546) ) ) {
                  sum += (double)0.347573312500000009;
                } else {
                  sum += (double)0.4303228750000000491;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4918.664306640625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.98050689697265625) ) ) {
                      sum += (double)0.2664229187500000151;
                    } else {
                      sum += (double)0.1707442321428571386;
                    }
                  } else {
                    sum += (double)0.3772232000000000363;
                  }
                } else {
                  sum += (double)0.1742336979166666522;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5290337800979614258) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3369925022125244141) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2715764492750167847) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01851844787597656) ) ) {
                    sum += (double)0.4057702125000000604;
                  } else {
                    sum += (double)0.3496767794117647266;
                  }
                } else {
                  sum += (double)0.4613744772727272347;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.3217926025390625) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1940830573439598083) ) ) {
                      sum += (double)0.5304368428571427652;
                    } else {
                      sum += (double)0.4510026500000000049;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01344999996945261955) ) ) {
                      sum += (double)0.620713609374999975;
                    } else {
                      sum += (double)0.5527635760869565873;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7172999978065490723) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2462.08447265625) ) ) {
                      sum += (double)0.4674634049999999985;
                    } else {
                      sum += (double)0.5486769305555556642;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4521709978580474854) ) ) {
                      sum += (double)0.3743146249999999564;
                    } else {
                      sum += (double)0.4509728214285714243;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.512587547302246094) ) ) {
                sum += (double)0.4707283000000000439;
              } else {
                sum += (double)0.3546551602564101957;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4281165003776550293) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.75934982299804688) ) ) {
                sum += (double)0.3258021166666665858;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2211846709251403809) ) ) {
                  sum += (double)0.253245869999999984;
                } else {
                  sum += (double)0.1750764342105263216;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4013499915599822998) ) ) {
                sum += (double)0.08746133333333334925;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30015.203125) ) ) {
                  sum += (double)0.2196387236842105295;
                } else {
                  sum += (double)0.130231907894736848;
                }
              }
            }
          } else {
            sum += (double)0.4087191710526316135;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3826854974031448364) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3263.703857421875) ) ) {
              sum += (double)0.1781407124999999925;
            } else {
              sum += (double)0.0506205238095238097;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.07336419230769231081;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2954999953508377075) ) ) {
                sum += (double)0.01146852941176470728;
              } else {
                sum += (double)0.02873119230769231175;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.2418212890625) ) ) {
              sum += (double)0.3383331413043478841;
            } else {
              sum += (double)0.1472892763157894747;
            }
          } else {
            sum += (double)0.1073359062500000016;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8047.837158203125) ) ) {
            sum += (double)0.5355262132352941462;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2241000011563301086) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.892453193664550781) ) ) {
                sum += (double)0.58499865909090909;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.166855335235595703) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6218225061893463135) ) ) {
                    sum += (double)0.6891305833333334352;
                  } else {
                    sum += (double)0.756399989999999911;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0501255989074707) ) ) {
                    sum += (double)0.6086180760869563944;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6516129970550537109) ) ) {
                      sum += (double)0.6653310878378377868;
                    } else {
                      sum += (double)0.7270520312499999527;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.562031964285714225;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121499985456466675) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9077499806880950928) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06707561388611793518) ) ) {
                sum += (double)0.7994250000000000522;
              } else {
                sum += (double)0.8260241176470588531;
              }
            } else {
              sum += (double)0.8596976666666668043;
            }
          } else {
            sum += (double)0.7170271999999999757;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.543712496757507324) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6056869924068450928) ) ) {
              sum += (double)0.3620861750000000101;
            } else {
              sum += (double)0.4527501249999999478;
            }
          } else {
            sum += (double)0.2201220535714285831;
          }
        } else {
          sum += (double)0.4937583863636363923;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1594.67681884765625) ) ) {
            sum += (double)0.2077264807692307536;
          } else {
            sum += (double)0.1440736500000000253;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1405058130621910095) ) ) {
            sum += (double)0.4316928076923076674;
          } else {
            sum += (double)0.2544134880952380606;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.01704549789428711) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4006.188720703125) ) ) {
                sum += (double)0.02618048749999999508;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09063849970698356628) ) ) {
                  sum += (double)0.004625320000000000473;
                } else {
                  sum += (double)0.01329191666666666889;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.710317611694335938) ) ) {
                sum += (double)0.03409733333333332672;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
                  sum += (double)0.1427517638888888829;
                } else {
                  sum += (double)0.06097154999999999936;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2366.3306884765625) ) ) {
                    sum += (double)0.003219657894736842243;
                  } else {
                    sum += (double)0.01345080000000000234;
                  }
                } else {
                  sum += (double)0.03279212499999999836;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.002549440972222224207;
                    } else {
                      sum += (double)0.003235985294117647588;
                    }
                  } else {
                    sum += (double)0.005414749999999999425;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                    sum += (double)0.01974676785714285857;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.41071510314941406) ) ) {
                      sum += (double)0.006690833333333332487;
                    } else {
                      sum += (double)0.003932200000000001146;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.9233551025390625) ) ) {
                sum += (double)0.05569829687499999737;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8009499907493591309) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607544958591461182) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06174999848008155823) ) ) {
                      sum += (double)0.006239310344827588006;
                    } else {
                      sum += (double)0.01835839439655170824;
                    }
                  } else {
                    sum += (double)0.04103627631578946749;
                  }
                } else {
                  sum += (double)0.04985939285714285213;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.41989421844482422) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500117778778076) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01369999954476952553) ) ) {
                  sum += (double)0.1170277499999999998;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4047000110149383545) ) ) {
                    sum += (double)0.01795086363636363633;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07490000128746032715) ) ) {
                      sum += (double)0.05033398148148148649;
                    } else {
                      sum += (double)0.1039903461538461554;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5672.457275390625) ) ) {
                  sum += (double)0.1247126944444444246;
                } else {
                  sum += (double)0.2306835652173912787;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08119999989867210388) ) ) {
                sum += (double)0.3327270961538462135;
              } else {
                sum += (double)0.1787198229166666597;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
              sum += (double)0.1476076195652173684;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.89444446563720703) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4356.7021484375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529499903321266174) ) ) {
                      sum += (double)0.06497487234042552406;
                    } else {
                      sum += (double)0.1426319166666666916;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.08459663391113281) ) ) {
                      sum += (double)0.02273514285714285654;
                    } else {
                      sum += (double)0.06231561764705883383;
                    }
                  }
                } else {
                  sum += (double)0.01792440277777777868;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9094765186309814453) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316905036568641663) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2835500016808509827) ) ) {
                      sum += (double)0.01014961764705882459;
                    } else {
                      sum += (double)0.03785726388888889515;
                    }
                  } else {
                    sum += (double)0.04286629347826086817;
                  }
                } else {
                  sum += (double)0.00907885185185185184;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.939981758594512939) ) ) {
        sum += (double)0.5543423874999999779;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5863704085350036621) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
            sum += (double)0.2044686477272726899;
          } else {
            sum += (double)0.4577446299999999857;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5781860053539276123) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.34999990463256836) ) ) {
              sum += (double)0.1850519705882353316;
            } else {
              sum += (double)0.05398719791666666684;
            }
          } else {
            sum += (double)0.3254811500000000524;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677469938993453979) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09288978576660156) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322600036859512329) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07519999891519546509) ) ) {
                sum += (double)0.3907220869565216637;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4879499971866607666) ) ) {
                  sum += (double)0.2695826184210526333;
                } else {
                  sum += (double)0.164451190476190473;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.5477037884615383323;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.31999969482421875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.11406326293945312) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036939948797225952) ) ) {
                      sum += (double)0.3494255377358490011;
                    } else {
                      sum += (double)0.4239365753968253325;
                    }
                  } else {
                    sum += (double)0.2614773571428571364;
                  }
                } else {
                  sum += (double)0.4708343499999999571;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7466000020503997803) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19895.677734375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.42591762542724609) ) ) {
                    sum += (double)0.3828698958333332514;
                  } else {
                    sum += (double)0.308667666666666729;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.88666629791259766) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3115000128746032715) ) ) {
                      sum += (double)0.2374363500000000182;
                    } else {
                      sum += (double)0.1205066923076922869;
                    }
                  } else {
                    sum += (double)0.3268636818181817616;
                  }
                }
              } else {
                sum += (double)0.1328645795454545253;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2740000039339065552) ) ) {
                sum += (double)0.05852264473684211377;
              } else {
                sum += (double)0.1873431309523809207;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07530000060796737671) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09748411178588867) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.253616824746131897) ) ) {
                  sum += (double)0.5326502499999999918;
                } else {
                  sum += (double)0.4548314772727272137;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003649999969638884068) ) ) {
                  sum += (double)0.6287297105263157659;
                } else {
                  sum += (double)0.5734417499999999723;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.80522632598876953) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.51411476731300354) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3244.843017578125) ) ) {
                    sum += (double)0.4923207875000000233;
                  } else {
                    sum += (double)0.535799104166666651;
                  }
                } else {
                  sum += (double)0.4287526093749999823;
                }
              } else {
                sum += (double)0.4199672249999999996;
              }
            }
          } else {
            sum += (double)0.3066909736842104994;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3774434924125671387) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.271773815155029297) ) ) {
            sum += (double)0.1889765119047618902;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.297987461090087891) ) ) {
              sum += (double)0.1084133653846153927;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.550406396389007568) ) ) {
                sum += (double)0.0688807499999999906;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3241499960422515869) ) ) {
                  sum += (double)0.02419535714285714345;
                } else {
                  sum += (double)0.04622354411764705712;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3044.78466796875) ) ) {
            sum += (double)0.3214054038461539031;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
              sum += (double)0.2618411973684210969;
            } else {
              sum += (double)0.09014780555555555741;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6589429974555969238) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043504655361175537) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.347228527069091797) ) ) {
              sum += (double)0.5945411875000000679;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.59545445442199707) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8599999845027923584) ) ) {
                  sum += (double)0.6743907499999999278;
                } else {
                  sum += (double)0.7139091470588236898;
                }
              } else {
                sum += (double)0.6270456617647058861;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.98964595794677734) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5938400030136108398) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7853000164031982422) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6625.02880859375) ) ) {
                    sum += (double)0.4925222361111110114;
                  } else {
                    sum += (double)0.5675061057692307731;
                  }
                } else {
                  sum += (double)0.4672073437499999482;
                }
              } else {
                sum += (double)0.6246794431818183391;
              }
            } else {
              sum += (double)0.4073714615384615434;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.259615302085876465) ) ) {
            sum += (double)0.3718651250000000186;
          } else {
            sum += (double)0.2259381710526315867;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749606013298034668) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3984000086784362793) ) ) {
            sum += (double)0.5628007631578947345;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.17498064041137695) ) ) {
              sum += (double)0.672322928571428724;
            } else {
              sum += (double)0.7616345394736843133;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              sum += (double)0.8618530955882354183;
            } else {
              sum += (double)0.8044796124999999964;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7972725033760070801) ) ) {
              sum += (double)0.7556540500000000771;
            } else {
              sum += (double)0.7318417499999999576;
            }
          }
        }
      }
    }
  }
  return sum;
}
