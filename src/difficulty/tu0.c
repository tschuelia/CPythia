#include "prediction.h"
double predict_margin_unit0(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.379999995231628418) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1676684990525245667) ) ) {
            sum += (double)0.01674226470588235233;
          } else {
            sum += (double)0.08349777941176471374;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.54590177536010742) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
              sum += (double)0.1834430972222221845;
            } else {
              sum += (double)0.04275022413793103104;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08353962376713752747) ) ) {
                sum += (double)0.1920793999999999557;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.280219793319702148) ) ) {
                  sum += (double)0.3221116375000000476;
                } else {
                  sum += (double)0.2527650227272726924;
                }
              }
            } else {
              sum += (double)0.4246931093750000441;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
            sum += (double)0.08616956249999999096;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61250019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.127262502908706665) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02034999988973140717) ) ) {
                  sum += (double)0.003641531249999999803;
                } else {
                  sum += (double)0.01836612500000000051;
                }
              } else {
                sum += (double)0.06412845588235292771;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2137999981641769409) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.004370777777777778116;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.01259790740740740836;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01654999982565641403) ) ) {
                  sum += (double)0.04216946428571427541;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)197.5512771606445312) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6620510518550872803) ) ) {
                      sum += (double)0.007865585106382980141;
                    } else {
                      sum += (double)0.00333527083333333375;
                    }
                  } else {
                    sum += (double)0.01470542241379310319;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489999830722808838) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3923500031232833862) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004949999973177909851) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
                    sum += (double)0.03892838333333333706;
                  } else {
                    sum += (double)0.1370398676470588328;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.9918980598449707) ) ) {
                    sum += (double)0.05035654464285713866;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5333965420722961426) ) ) {
                      sum += (double)0.02746978174603173159;
                    } else {
                      sum += (double)0.01274955952380951371;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7278.848876953125) ) ) {
                    sum += (double)0.08552603124999999529;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
                      sum += (double)0.1161742812499999833;
                    } else {
                      sum += (double)0.2701779615384615196;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800000041723251343) ) ) {
                      sum += (double)0.02140940000000000204;
                    } else {
                      sum += (double)0.1014115156250000038;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                      sum += (double)0.005347545454545455518;
                    } else {
                      sum += (double)0.02038911764705882146;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5432031452655792236) ) ) {
                  sum += (double)0.06690055769230769667;
                } else {
                  sum += (double)0.1744479062500000344;
                }
              } else {
                sum += (double)0.02178292857142857114;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5699.73388671875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1900319978594779968) ) ) {
                sum += (double)0.09454904310344824925;
              } else {
                sum += (double)0.1928280999999999745;
              }
            } else {
              sum += (double)0.04890449999999998965;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.514705657958984375) ) ) {
          sum += (double)0.3703217916666667331;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1086000017821788788) ) ) {
            sum += (double)0.2237308529411764502;
          } else {
            sum += (double)0.06792991666666667316;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2511500045657157898) ) ) {
          sum += (double)0.3768492222222223353;
        } else {
          sum += (double)0.5281947500000000462;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5277554988861083984) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3339300006628036499) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72046709060668945) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              sum += (double)0.45960799999999985;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                  sum += (double)0.3161253916666666441;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5749837756156921387) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
                      sum += (double)0.2677536176470588503;
                    } else {
                      sum += (double)0.1568562916666666474;
                    }
                  } else {
                    sum += (double)0.2904991749999999984;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7169499993324279785) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2396125420928001404) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.76587295532226562) ) ) {
                      sum += (double)0.3969929807692307855;
                    } else {
                      sum += (double)0.442496073529411782;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                      sum += (double)0.3122535857142856863;
                    } else {
                      sum += (double)0.3934640999999999833;
                    }
                  }
                } else {
                  sum += (double)0.2785672058823528974;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.64484119415283203) ) ) {
                sum += (double)0.1583657499999999996;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
                  sum += (double)0.3070626964285714244;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992999911308288574) ) ) {
                    sum += (double)0.2763010357142857143;
                  } else {
                    sum += (double)0.1970416562500000024;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5479358136653900146) ) ) {
                sum += (double)0.06337028571428572621;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.10486412048339844) ) ) {
                  sum += (double)0.2207116578947367902;
                } else {
                  sum += (double)0.1278513214285713906;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.70351552963256836) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
              sum += (double)0.639144527777777971;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.329099997878074646) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3736329972743988037) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.34049320220947266) ) ) {
                    sum += (double)0.3998882777777776898;
                  } else {
                    sum += (double)0.4870054600000000011;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.19919395446777344) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1410.42962646484375) ) ) {
                      sum += (double)0.4789158308823530663;
                    } else {
                      sum += (double)0.5376072647058823817;
                    }
                  } else {
                    sum += (double)0.5351711718749999624;
                  }
                }
              } else {
                sum += (double)0.3964995543478262441;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4373503327369689941) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6956499814987182617) ) ) {
                sum += (double)0.4482365652173913584;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.254425048828125) ) ) {
                  sum += (double)0.2505736309523809435;
                } else {
                  sum += (double)0.4000125208333333848;
                }
              }
            } else {
              sum += (double)0.2137912875000000101;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3216.5106201171875) ) ) {
            sum += (double)0.3267586477272727552;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08190000057220458984) ) ) {
                sum += (double)0.02893819230769230713;
              } else {
                sum += (double)0.09456786666666666674;
              }
            } else {
              sum += (double)0.2191040499999999946;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.149255037307739258) ) ) {
            sum += (double)0.2130532142857142763;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
              sum += (double)0.09490175000000000693;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69741535186767578) ) ) {
                sum += (double)0.02918961666666666094;
              } else {
                sum += (double)0.009459625000000001019;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043504655361175537) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7211.4892578125) ) ) {
            sum += (double)0.5323046145833333354;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.793265461921691895) ) ) {
              sum += (double)0.5677582249999999497;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.149084270000457764) ) ) {
                sum += (double)0.7452269351851853463;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6608304977416992188) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8220500051975250244) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3726.691162109375) ) ) {
                      sum += (double)0.6034023928571426998;
                    } else {
                      sum += (double)0.670489731481481499;
                    }
                  } else {
                    sum += (double)0.5953827692307691599;
                  }
                } else {
                  sum += (double)0.6938299473684211849;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1553.44091796875) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000031590461731) ) ) {
                sum += (double)0.8259489411764704414;
              } else {
                sum += (double)0.7798657083333333517;
              }
            } else {
              sum += (double)0.8543314305555557153;
            }
          } else {
            sum += (double)0.7485116100000002159;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.4209429583333333391;
          } else {
            sum += (double)0.2210246842105262899;
          }
        } else {
          sum += (double)0.4740928571428572047;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5979785025119781494) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.56512606143951416) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4529899954795837402) ) ) {
            sum += (double)0.2630150673076923074;
          } else {
            sum += (double)0.3701906826923077598;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.553977251052856445) ) ) {
              sum += (double)0.2293466000000000116;
            } else {
              sum += (double)0.06843980434782608036;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02654999960213899612) ) ) {
              sum += (double)0.1266079078947368597;
            } else {
              sum += (double)0.318585375000000004;
            }
          }
        }
      } else {
        sum += (double)0.5109532875000000196;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165430024266242981) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.39136695861816406) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5310.881591796875) ) ) {
                  sum += (double)0.0301881315789473692;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05795949883759021759) ) ) {
                      sum += (double)0.005421456521739131777;
                    } else {
                      sum += (double)0.002925204545454545939;
                    }
                  } else {
                    sum += (double)0.02155753846153846479;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8189000189304351807) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69) ) ) {
                      sum += (double)0.003762775000000000321;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000012218952179) ) ) {
                      sum += (double)0.007689590909090909809;
                    } else {
                      sum += (double)0.002635869565217391439;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1425999999046325684) ) ) {
                    sum += (double)0.003553200000000000282;
                  } else {
                    sum += (double)0.01130497619047619168;
                  }
                }
              }
            } else {
              sum += (double)0.03164127777777778205;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.95454549789428711) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000093430280685) ) ) {
                sum += (double)0.03208260576923076951;
              } else {
                sum += (double)0.1121140543478260782;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03780000098049640656) ) ) {
                sum += (double)0.005297555555555556218;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1073000021278858185) ) ) {
                  sum += (double)0.0876227692307692263;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5295.53564453125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8234066665172576904) ) ) {
                      sum += (double)0.0336626785714285795;
                    } else {
                      sum += (double)0.01198959375000000285;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2091500014066696167) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.009226500000000000326;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
            sum += (double)0.2221038035714286152;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2292639985680580139) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02359999995678663254) ) ) {
                sum += (double)0.123790979166666662;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7401177585124969482) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3326441198587417603) ) ) {
                      sum += (double)0.0151253392857142871;
                    } else {
                      sum += (double)0.04075440833333333207;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.805000007152557373) ) ) {
                      sum += (double)0.1137241923076923039;
                    } else {
                      sum += (double)0.05874230000000001117;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.814999997615814209) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2290499955415725708) ) ) {
                      sum += (double)0.02159923076923077334;
                    } else {
                      sum += (double)0.01190266666666666556;
                    }
                  } else {
                    sum += (double)0.007276166666666667761;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5642000138759613037) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5849999785423278809) ) ) {
                  sum += (double)0.1629216499999999734;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6073614060878753662) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                      sum += (double)0.0464256904761904815;
                    } else {
                      sum += (double)0.1416969431818181357;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8737560510635375977) ) ) {
                      sum += (double)0.05591401470588235056;
                    } else {
                      sum += (double)0.02567071186440677763;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9815.28759765625) ) ) {
                  sum += (double)0.1000184852941176372;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                    sum += (double)0.2637630172413793495;
                  } else {
                    sum += (double)0.1484531617647058821;
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.3531763522727272564;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9109495282173156738) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.13393402099609375) ) ) {
                sum += (double)0.378939388888888895;
              } else {
                sum += (double)0.4924669722222223545;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2211224287748336792) ) ) {
                  sum += (double)0.1187697631578947255;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11889.39697265625) ) ) {
                    sum += (double)0.330001593750000044;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.238888740539550781) ) ) {
                      sum += (double)0.3165237717391304328;
                    } else {
                      sum += (double)0.1589943750000000211;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4591999948024749756) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7364.730224609375) ) ) {
                      sum += (double)0.3614728970588235168;
                    } else {
                      sum += (double)0.3211235476190476001;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3627.9508056640625) ) ) {
                      sum += (double)0.3775340882352941629;
                    } else {
                      sum += (double)0.4730941764705883235;
                    }
                  }
                } else {
                  sum += (double)0.3032375625000000019;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09748411178588867) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732499957084655762) ) ) {
                  sum += (double)0.4795843571428571317;
                } else {
                  sum += (double)0.514927029411764714;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6978499889373779297) ) ) {
                  sum += (double)0.6074318499999998844;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.64239692687988281) ) ) {
                    sum += (double)0.5187129833333332662;
                  } else {
                    sum += (double)0.5703617857142857517;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1251996532082557678) ) ) {
                sum += (double)0.3622548625000000522;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6171999871730804443) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    sum += (double)0.4339704895833333409;
                  } else {
                    sum += (double)0.3867516923076922963;
                  }
                } else {
                  sum += (double)0.4939600624999999079;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05159999988973140717) ) ) {
            sum += (double)0.3524173333333333602;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.325857505202293396) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17800.208984375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.25411415100097656) ) ) {
                  sum += (double)0.2646652361111111462;
                } else {
                  sum += (double)0.1640017500000000017;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.66841983795166016) ) ) {
                  sum += (double)0.07684642499999999599;
                } else {
                  sum += (double)0.1621106176470588078;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5120381563901901245) ) ) {
                sum += (double)0.3019602258064515987;
              } else {
                sum += (double)0.1751411346153846083;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.2692030882352941523;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.325380623340606689) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3093589991331100464) ) ) {
              sum += (double)0.2304610833333333164;
            } else {
              sum += (double)0.1208964565217391374;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2881500124931335449) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.1531915972222222255;
              } else {
                sum += (double)0.04144509000000000387;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.789865016937255859) ) ) {
                sum += (double)0.02193883653846153553;
              } else {
                sum += (double)0.05544554687500000134;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468100011348724365) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.68378257751464844) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4667980223894119263) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07317381724715232849) ) ) {
                  sum += (double)0.4666633529411764458;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094980001449584961) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3778.521484375) ) ) {
                      sum += (double)0.5820415416666667729;
                    } else {
                      sum += (double)0.4981858833333332459;
                    }
                  } else {
                    sum += (double)0.6210689124999999589;
                  }
                }
              } else {
                sum += (double)0.6390620238095239269;
              }
            } else {
              sum += (double)0.4064620468750000382;
            }
          } else {
            sum += (double)0.2900063194444444381;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7665.83203125) ) ) {
              sum += (double)0.5252116666666666323;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1320.23370361328125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.918919086456298828) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08254999667406082153) ) ) {
                    sum += (double)0.6458571785714284363;
                  } else {
                    sum += (double)0.5472735374999999625;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.815599977970123291) ) ) {
                    sum += (double)0.7010675714285713456;
                  } else {
                    sum += (double)0.6266736874999998541;
                  }
                }
              } else {
                sum += (double)0.711663026315789593;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07740000262856483459) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8073364794254302979) ) ) {
                sum += (double)0.8041898043478260538;
              } else {
                sum += (double)0.8532783913043479052;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7968119978904724121) ) ) {
                sum += (double)0.6736892499999999062;
              } else {
                sum += (double)0.7648277105263158182;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6602405011653900146) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.4193871666666665332;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2617.1973876953125) ) ) {
              sum += (double)0.3247272833333333386;
            } else {
              sum += (double)0.1589214624999999992;
            }
          }
        } else {
          sum += (double)0.5101847857142856046;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5449999868869781494) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.1575254833333333271;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.817200005054473877) ) ) {
                sum += (double)0.03209777941176469168;
              } else {
                sum += (double)0.005651437500000000211;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.10528087615966797) ) ) {
              sum += (double)0.1011958409090909089;
            } else {
              sum += (double)0.2560258947368421745;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4919499903917312622) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1035499982535839081) ) ) {
              sum += (double)0.07637944354838709093;
            } else {
              sum += (double)0.2689878928571428629;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7623499929904937744) ) ) {
              sum += (double)0.4025884456521738874;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08648532629013061523) ) ) {
                sum += (double)0.3614366250000000114;
              } else {
                sum += (double)0.1632765673076922719;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
              sum += (double)0.04790695312499999164;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2945.4429931640625) ) ) {
                  sum += (double)0.04143615384615384478;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5867973566055297852) ) ) {
                    sum += (double)0.004625479166666667495;
                  } else {
                    sum += (double)0.01397386111111111225;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3907.9583740234375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2189789563417434692) ) ) {
                      sum += (double)0.00370100000000000073;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.005918153846153846424;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7459500133991241455) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.529049992561340332) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.005144000000000000135;
                    }
                  } else {
                    sum += (double)0.01638903571428571362;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.84022998809814453) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                sum += (double)0.1364935138888888622;
              } else {
                sum += (double)0.0454304411764705901;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4732172340154647827) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                  sum += (double)0.006702447368421052612;
                } else {
                  sum += (double)0.01561461904761904732;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                  sum += (double)0.06914220833333332983;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.244946502149105072) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2241999953985214233) ) ) {
                      sum += (double)0.003341117647058824275;
                    } else {
                      sum += (double)0.01108886363636363628;
                    }
                  } else {
                    sum += (double)0.03855191176470588316;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000003576278687) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                sum += (double)0.07881912499999998989;
              } else {
                sum += (double)0.2005616000000000065;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8059499859809875488) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.82244873046875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1750119999051094055) ) ) {
                    sum += (double)0.04146447499999998676;
                  } else {
                    sum += (double)0.09053416071428570244;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1323999986052513123) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.06459331512451172) ) ) {
                      sum += (double)0.02908197058823529246;
                    } else {
                      sum += (double)0.009504602564102564155;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.83158493041992188) ) ) {
                      sum += (double)0.0535234347826086948;
                    } else {
                      sum += (double)0.02173296818181816997;
                    }
                  }
                }
              } else {
                sum += (double)0.1089678289473684364;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.07107734680175781) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.537177354097366333) ) ) {
                sum += (double)0.1414056562499999836;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4123609960079193115) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3949.856689453125) ) ) {
                    sum += (double)0.04408557142857142536;
                  } else {
                    sum += (double)0.00773315909090909262;
                  }
                } else {
                  sum += (double)0.0642334404761904787;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4996.472412109375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9815.28759765625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.417188987135887146) ) ) {
                    sum += (double)0.1192829523809523645;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28693.197265625) ) ) {
                      sum += (double)0.05876800000000000773;
                    } else {
                      sum += (double)0.02601275000000000462;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.84018516540527344) ) ) {
                    sum += (double)0.09698503571428569725;
                  } else {
                    sum += (double)0.2505969843749999981;
                  }
                }
              } else {
                sum += (double)0.33803894791666661;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        sum += (double)0.3178214117647059078;
      } else {
        sum += (double)0.5646310681818182964;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474660098552703857) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7545267343521118164) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3233430087566375732) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04240000061690807343) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12663.287109375) ) ) {
              sum += (double)0.2218764062499999912;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.4838894456521738996;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2194355428218841553) ) ) {
                  sum += (double)0.4188037499999998636;
                } else {
                  sum += (double)0.3529066000000000147;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2256000041961669922) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                  sum += (double)0.2913890092592592573;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359000205993652344) ) ) {
                    sum += (double)0.1084081000000000211;
                  } else {
                    sum += (double)0.2387848653846154079;
                  }
                }
              } else {
                sum += (double)0.09997630714285714315;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06659999862313270569) ) ) {
                  sum += (double)0.2508348571428571927;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2431000024080276489) ) ) {
                      sum += (double)0.4048327333333333056;
                    } else {
                      sum += (double)0.3685399523809524402;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292089506983757019) ) ) {
                      sum += (double)0.2904294903846154075;
                    } else {
                      sum += (double)0.3870752857142857883;
                    }
                  }
                }
              } else {
                sum += (double)0.2296116153846153585;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.73880624771118164) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4631103724241256714) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06554999947547912598) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.54248332977294922) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4156064987182617188) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.382933497428894043) ) ) {
                      sum += (double)0.4275863611111112017;
                    } else {
                      sum += (double)0.4804914264705881233;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007450000150129199028) ) ) {
                      sum += (double)0.5827200576923077247;
                    } else {
                      sum += (double)0.5102508240740740719;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.849299997091293335) ) ) {
                    sum += (double)0.6059963157894736607;
                  } else {
                    sum += (double)0.5299950166666667073;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.459314003586769104) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2097999975085258484) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4388.954345703125) ) ) {
                      sum += (double)0.4116225800000000157;
                    } else {
                      sum += (double)0.4848808636363636793;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.90999841690063477) ) ) {
                      sum += (double)0.4368671666666666953;
                    } else {
                      sum += (double)0.3649700340909091678;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1357628665864467621) ) ) {
                    sum += (double)0.440752234374999996;
                  } else {
                    sum += (double)0.5616802031250001104;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.034899234771728516) ) ) {
                sum += (double)0.4590176190476189522;
              } else {
                sum += (double)0.3252771209677419728;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.49750423431396484) ) ) {
              sum += (double)0.1982963214285714815;
            } else {
              sum += (double)0.3661833750000000332;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242127418518066406) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3124.1878662109375) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5427.7607421875) ) ) {
              sum += (double)0.2674278472222221814;
            } else {
              sum += (double)0.406945954545454569;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.918625116348266602) ) ) {
              sum += (double)0.2752184411764706518;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
                sum += (double)0.03267469444444445065;
              } else {
                sum += (double)0.08285324999999998941;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.116747558116912842) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2203999981284141541) ) ) {
              sum += (double)0.12755026562500002;
            } else {
              sum += (double)0.2286884299999999703;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24843.2939453125) ) ) {
              sum += (double)0.1355504999999999904;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1530000045895576477) ) ) {
                sum += (double)0.05125540178571428435;
              } else {
                sum += (double)0.01405909090909090997;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062999188899993896) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7636.164306640625) ) ) {
            sum += (double)0.5181022124999999923;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.521043777465820312) ) ) {
              sum += (double)0.6675210416666668145;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.22908496856689453) ) ) {
                sum += (double)0.5760794435483871379;
              } else {
                sum += (double)0.6388088796296296223;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8111799955368041992) ) ) {
              sum += (double)0.7899897205882354667;
            } else {
              sum += (double)0.8724212205882352356;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.972222328186035156) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
                  sum += (double)0.689184325000000042;
                } else {
                  sum += (double)0.7384713522727271995;
                }
              } else {
                sum += (double)0.7898170326086956239;
              }
            } else {
              sum += (double)0.6340497500000000786;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6746805012226104736) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
            sum += (double)0.4245404677419355455;
          } else {
            sum += (double)0.3175691099999999878;
          }
        } else {
          sum += (double)0.568922766666666635;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.24166631698608398) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.78889083862304688) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1101075001060962677) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.51091289520263672) ) ) {
                sum += (double)0.01669409999999999991;
              } else {
                sum += (double)0.004016711538461539312;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1574.9168701171875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.18216323852539062) ) ) {
                    sum += (double)0.01252488636363636304;
                  } else {
                    sum += (double)0.03023373684210526116;
                  }
                } else {
                  sum += (double)0.05162925000000000153;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.034090995788574219) ) ) {
                  sum += (double)0.05241089285714285728;
                } else {
                  sum += (double)0.1711515576923076654;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04999999888241291046) ) ) {
              sum += (double)0.01111734375000000309;
            } else {
              sum += (double)0.1637250775862068852;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.701851844787597656) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
              sum += (double)0.1551211710526315402;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2722730040550231934) ) ) {
                sum += (double)0.2829642678571428482;
              } else {
                sum += (double)0.4006066176470587936;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66180562973022461) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.801829338073730469) ) ) {
                sum += (double)0.1733341315789473924;
              } else {
                sum += (double)0.09189153448275862168;
              }
            } else {
              sum += (double)0.201290716666666647;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.883899986743927002) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.94642829895019531) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04020000062882900238) ) ) {
                sum += (double)0.003940000000000000793;
              } else {
                sum += (double)0.05559782894736842174;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
                  sum += (double)0.01374053125000000014;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8154000043869018555) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1880999952554702759) ) ) {
                      sum += (double)0.00256681785714285831;
                    } else {
                      sum += (double)0.004063000000000000639;
                    }
                  } else {
                    sum += (double)0.005762115384615385492;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
                  sum += (double)0.02845244444444443993;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8434582948684692383) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7239266335964202881) ) ) {
                      sum += (double)0.009477859589041091881;
                    } else {
                      sum += (double)0.0231306785714285694;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004914749999999998981;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.06024500000000000688;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8267500102519989014) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.2495574951171875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.546875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20665.484375) ) ) {
                  sum += (double)0.1092286346153845955;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.76282882690429688) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4433.4150390625) ) ) {
                      sum += (double)0.05802694999999998687;
                    } else {
                      sum += (double)0.02068305000000000143;
                    }
                  } else {
                    sum += (double)0.01426473437500000094;
                  }
                }
              } else {
                sum += (double)0.1328985624999999837;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.77083396911621094) ) ) {
                sum += (double)0.04864809999999999968;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3601000010967254639) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1768869981169700623) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1205650009214878082) ) ) {
                      sum += (double)0.009995916666666666839;
                    } else {
                      sum += (double)0.00514565909090909223;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3486500084400177002) ) ) {
                      sum += (double)0.009484592105263157588;
                    } else {
                      sum += (double)0.0285707788461538395;
                    }
                  }
                } else {
                  sum += (double)0.03725327884615384916;
                }
              }
            }
          } else {
            sum += (double)0.1220727500000000215;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
            sum += (double)0.5069683839285714644;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.371356010437011719) ) ) {
                sum += (double)0.3346467045454545874;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162330001592636108) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1458000019192695618) ) ) {
                    sum += (double)0.1953901153846153982;
                  } else {
                    sum += (double)0.2817911111111111033;
                  }
                } else {
                  sum += (double)0.1396216249999999992;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.05628871917724609) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3107.2119140625) ) ) {
                      sum += (double)0.3923335299999999859;
                    } else {
                      sum += (double)0.4533406764705882885;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4218.3651123046875) ) ) {
                      sum += (double)0.3922682314814814331;
                    } else {
                      sum += (double)0.3266866874999999615;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5090.98779296875) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2832009941339492798) ) ) {
                      sum += (double)0.336310174999999989;
                    } else {
                      sum += (double)0.4066391718750000384;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3415.8267822265625) ) ) {
                      sum += (double)0.2004711153846153726;
                    } else {
                      sum += (double)0.300804411764705848;
                    }
                  }
                }
              } else {
                sum += (double)0.4529824250000000774;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.26102399080991745) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19348.2724609375) ) ) {
                sum += (double)0.2457534431818181875;
              } else {
                sum += (double)0.16174670833333335;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2208499982953071594) ) ) {
                sum += (double)0.2568119531249999921;
              } else {
                sum += (double)0.3207559605263157754;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3071500062942504883) ) ) {
              sum += (double)0.2475319411764705935;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4008499979972839355) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.67499923706054688) ) ) {
                  sum += (double)0.1281440909090909297;
                } else {
                  sum += (double)0.05875328750000000794;
                }
              } else {
                sum += (double)0.2263092656249999779;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03930000029504299164) ) ) {
          sum += (double)0.1630922333333333363;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1683000028133392334) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2903524935245513916) ) ) {
              sum += (double)0.01540356617647058862;
            } else {
              sum += (double)0.05450070535714286041;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.53700160980224609) ) ) {
              sum += (double)0.09977110714285715443;
            } else {
              sum += (double)0.04372881666666667694;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
          sum += (double)0.1933958214285714516;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.111742258071899414) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.689369678497314453) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2696470767259597778) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.538193702697753906) ) ) {
                  sum += (double)0.5012591086956522668;
                } else {
                  sum += (double)0.5726488333333333847;
                }
              } else {
                sum += (double)0.438533666666666655;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5120110213756561279) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                  sum += (double)0.6315237999999998575;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.780885934829711914) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.158368587493896484) ) ) {
                      sum += (double)0.5645009374999999663;
                    } else {
                      sum += (double)0.5014473888888888453;
                    }
                  } else {
                    sum += (double)0.5883819285714285696;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.521043777465820312) ) ) {
                  sum += (double)0.6798973571428571505;
                } else {
                  sum += (double)0.6234387799999998592;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.91679859161376953) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5251489877700805664) ) ) {
                sum += (double)0.4593075241935484776;
              } else {
                sum += (double)0.5412529166666667502;
              }
            } else {
              sum += (double)0.3781647934782608189;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02945000026375055313) ) ) {
              sum += (double)0.7497038958333331893;
            } else {
              sum += (double)0.695857766666666544;
            }
          } else {
            sum += (double)0.6251809400000001293;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6792353391647338867) ) ) {
            sum += (double)0.888318083333333286;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04170731082558631897) ) ) {
              sum += (double)0.763336694444444408;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.748865127563476562) ) ) {
                sum += (double)0.8056531184210524721;
              } else {
                sum += (double)0.8363087647058824459;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5496329963207244873) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.376512527465820312) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.890960007905960083) ) ) {
            sum += (double)0.504806789473684292;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.788650929927825928) ) ) {
              sum += (double)0.3747403035714285124;
            } else {
              sum += (double)0.2140270000000000228;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3410.78076171875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.33918523788452148) ) ) {
              sum += (double)0.4203258611111111431;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4434999972581863403) ) ) {
                sum += (double)0.2388459545454545696;
              } else {
                sum += (double)0.1032747608695652325;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8745341300964355469) ) ) {
              sum += (double)0.1954039852941176492;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
                sum += (double)0.02501547058823529873;
              } else {
                sum += (double)0.1085301818181818173;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.064631521701812744) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6756354868412017822) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1587500050663948059) ) ) {
              sum += (double)0.3460142656250000393;
            } else {
              sum += (double)0.5475234722222223072;
            }
          } else {
            sum += (double)0.7268475312499999008;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9132554531097412109) ) ) {
              sum += (double)0.4778357812500000357;
            } else {
              sum += (double)0.4061726617647058446;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.81280755996704102) ) ) {
              sum += (double)0.2100817499999999838;
            } else {
              sum += (double)0.4213300326086955594;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3934629857540130615) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.624080896377563477) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
            sum += (double)0.08257393749999998589;
          } else {
            sum += (double)0.1935732261904762053;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.45384597778320312) ) ) {
            sum += (double)0.1668374090909090779;
          } else {
            sum += (double)0.3644414907407406701;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.96158027648925781) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1123495027422904968) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08244450017809867859) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005200000014156103134) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05381550081074237823) ) ) {
                      sum += (double)0.009771281249999999585;
                    } else {
                      sum += (double)0.003427666666666666102;
                    }
                  }
                } else {
                  sum += (double)0.02205876785714285665;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1374654993414878845) ) ) {
                  sum += (double)0.08260758333333334535;
                } else {
                  sum += (double)0.0263754827586206754;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1349999979138374329) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002623326530612246892;
                    } else {
                      sum += (double)0.004207271428571429488;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04485000111162662506) ) ) {
                      sum += (double)0.01127540000000000139;
                    } else {
                      sum += (double)0.003649928571428571328;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6588.90283203125) ) ) {
                    sum += (double)0.0175668684210526331;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1051000021398067474) ) ) {
                      sum += (double)0.00982468421052631706;
                    } else {
                      sum += (double)0.002807407407407407768;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13738.47998046875) ) ) {
                  sum += (double)0.004266619999999999614;
                } else {
                  sum += (double)0.0235675263157894728;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7842500209808349609) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3132860064506530762) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3801500052213668823) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09996850043535232544) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19402.2275390625) ) ) {
                      sum += (double)0.01346888157894736947;
                    } else {
                      sum += (double)0.07500737500000000113;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846349984407424927) ) ) {
                      sum += (double)0.01258759090909090071;
                    } else {
                      sum += (double)0.02890337058823528454;
                    }
                  }
                } else {
                  sum += (double)0.0883057500000000023;
                }
              } else {
                sum += (double)0.08147064473684209607;
              }
            } else {
              sum += (double)0.09776971428571427924;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3970661163330078125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.875) ) ) {
              sum += (double)0.2539372045454545979;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2688269913196563721) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09764999896287918091) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9138.951171875) ) ) {
                    sum += (double)0.1708364531250000373;
                  } else {
                    sum += (double)0.07361165909090909565;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1693404987454414368) ) ) {
                    sum += (double)0.02049954166666666591;
                  } else {
                    sum += (double)0.09127006666666666324;
                  }
                }
              } else {
                sum += (double)0.1721652380952380934;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7809357941150665283) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7745.342529296875) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19359.9921875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1953064948320388794) ) ) {
                    sum += (double)0.02066243750000000198;
                  } else {
                    sum += (double)0.04864413095238095258;
                  }
                } else {
                  sum += (double)0.07751948863636362597;
                }
              } else {
                sum += (double)0.1740221964285714462;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.436650007963180542) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
                  sum += (double)0.005410838709677420408;
                } else {
                  sum += (double)0.02033879347826087272;
                }
              } else {
                sum += (double)0.05789398333333332924;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5088653564453125) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5073710083961486816) ) ) {
          sum += (double)0.2959792894736842372;
        } else {
          sum += (double)0.4492824499999999999;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59875297546386719) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53749990463256836) ) ) {
            sum += (double)0.2222939629629629155;
          } else {
            sum += (double)0.06004054999999999115;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4929.848876953125) ) ) {
            sum += (double)0.2049624791666666557;
          } else {
            sum += (double)0.3881146931818182377;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2766004949808120728) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              sum += (double)0.425682881578947403;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.1644451333333333543;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2087280005216598511) ) ) {
                    sum += (double)0.3463748095238095015;
                  } else {
                    sum += (double)0.2260375666666666616;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4759.587158203125) ) ) {
                  sum += (double)0.4033388846153846408;
                } else {
                  sum += (double)0.2724136666666666651;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              sum += (double)0.5342924531249998443;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.226981163024902344) ) ) {
                  sum += (double)0.3378286911764705192;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3936.9281005859375) ) ) {
                    sum += (double)0.3650692083333333948;
                  } else {
                    sum += (double)0.4258954537037037413;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2442.576416015625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4014380127191543579) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06079999916255474091) ) ) {
                      sum += (double)0.4102109117647059211;
                    } else {
                      sum += (double)0.4815787559523808659;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4676.1787109375) ) ) {
                      sum += (double)0.4405974285714285288;
                    } else {
                      sum += (double)0.3971591979166666508;
                    }
                  }
                } else {
                  sum += (double)0.5356562631578947187;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240121498703956604) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2152500003576278687) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12516.45166015625) ) ) {
                sum += (double)0.159488798076923094;
              } else {
                sum += (double)0.3148368947368421211;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19061.87109375) ) ) {
                sum += (double)0.1204021124999999914;
              } else {
                sum += (double)0.0416438611111111176;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.76415443420410156) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.21417760848999023) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2938790023326873779) ) ) {
                    sum += (double)0.3045742368421052171;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11395.4453125) ) ) {
                      sum += (double)0.370741839285714303;
                    } else {
                      sum += (double)0.3304374166666666501;
                    }
                  }
                } else {
                  sum += (double)0.2035298716216216164;
                }
              } else {
                sum += (double)0.3779543173076923002;
              }
            } else {
              sum += (double)0.1637434673913043814;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.63289952278137207) ) ) {
          sum += (double)0.228839380952380933;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05709999985992908478) ) ) {
            sum += (double)0.1424022265625000117;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.123808443546295166) ) ) {
              sum += (double)0.1675919833333333053;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.967259228229522705) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11762.462890625) ) ) {
                  sum += (double)0.05931826470588234812;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2318999990820884705) ) ) {
                    sum += (double)0.005487541666666667477;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.625993192195892334) ) ) {
                      sum += (double)0.03145243333333333502;
                    } else {
                      sum += (double)0.01684226190476190502;
                    }
                  }
                }
              } else {
                sum += (double)0.08178801785714286121;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00664999987930059433) ) ) {
            sum += (double)0.6614951015625000208;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5470145046710968018) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5144149959087371826) ) ) {
                    sum += (double)0.515612964285714126;
                  } else {
                    sum += (double)0.4626181315789473225;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.13474082946777344) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08640000224113464355) ) ) {
                      sum += (double)0.4725713888888888881;
                    } else {
                      sum += (double)0.5615071833333332707;
                    }
                  } else {
                    sum += (double)0.5985434722222221504;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2749.1190185546875) ) ) {
                  sum += (double)0.5649709605263159018;
                } else {
                  sum += (double)0.6332414999999999017;
                }
              }
            } else {
              sum += (double)0.4141262656249999341;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08224999904632568359) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6958000063896179199) ) ) {
                sum += (double)0.6775986842105263808;
              } else {
                sum += (double)0.7514667499999998501;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
                sum += (double)0.6783231249999999157;
              } else {
                sum += (double)0.5921152968750000856;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4505.7581787109375) ) ) {
              sum += (double)0.7216050588235294327;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
                sum += (double)0.8552725999999999384;
              } else {
                sum += (double)0.7926148214285714255;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.251293659210205078) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
              sum += (double)0.3935679736842104814;
            } else {
              sum += (double)0.3211962105263157508;
            }
          } else {
            sum += (double)0.2235099782608696017;
          }
        } else {
          sum += (double)0.5561721428571428927;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1532909944653511047) ) ) {
          sum += (double)0.1097099299999999833;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.13333320617675781) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.631261944770812988) ) ) {
              sum += (double)0.3261915192307692224;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5019499808549880981) ) ) {
                sum += (double)0.1031384642857142708;
              } else {
                sum += (double)0.2370060972222222118;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8718500137329101562) ) ) {
              sum += (double)0.3987009000000000247;
            } else {
              sum += (double)0.2420966759259258749;
            }
          }
        }
      } else {
        sum += (double)0.4625622857142858146;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1273088604211807251) ) ) {
                  sum += (double)0.003947457142857144219;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                sum += (double)0.006381979166666668611;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1093754991888999939) ) ) {
                sum += (double)0.02887476785714285926;
              } else {
                sum += (double)0.006213629629629630578;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.14545440673828125) ) ) {
              sum += (double)0.07666982142857141358;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007999999797903001308) ) ) {
                sum += (double)0.052797352941176455;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8450999855995178223) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4074999988079071045) ) ) {
                      sum += (double)0.03721055208333333419;
                    } else {
                      sum += (double)0.01025312499999999835;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1400000005960464478) ) ) {
                      sum += (double)0.002626732142857143328;
                    } else {
                      sum += (double)0.007471434210526315886;
                    }
                  }
                } else {
                  sum += (double)0.04111315384615384094;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.743600010871887207) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.73214340209960938) ) ) {
              sum += (double)0.07975646153846152608;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.52345561981201172) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09454999864101409912) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01500000013038516045) ) ) {
                    sum += (double)0.005291250000000000814;
                  } else {
                    sum += (double)0.02428227272727272179;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60833358764648438) ) ) {
                    sum += (double)0.04338683333333333281;
                  } else {
                    sum += (double)0.08116280263157894803;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13858.73583984375) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1738070026040077209) ) ) {
                    sum += (double)0.0146735441176470572;
                  } else {
                    sum += (double)0.02001365624999999759;
                  }
                } else {
                  sum += (double)0.004325090909090909506;
                }
              }
            }
          } else {
            sum += (double)0.1267522142857142875;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4623266309499740601) ) ) {
              sum += (double)0.340929272727272803;
            } else {
              sum += (double)0.1274081249999999832;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5941435098648071289) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2662470042705535889) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1576480045914649963) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.113618999719619751) ) ) {
                    sum += (double)0.05378135156250000298;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.138433501124382019) ) ) {
                      sum += (double)0.0154961500000000002;
                    } else {
                      sum += (double)0.03573981578947368898;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.88964271545410156) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04684999957680702209) ) ) {
                      sum += (double)0.06324661538461538723;
                    } else {
                      sum += (double)0.1796973749999999925;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1000500023365020752) ) ) {
                      sum += (double)0.04245620588235293758;
                    } else {
                      sum += (double)0.1017936756756756683;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8784.94873046875) ) ) {
                  sum += (double)0.1090510535714285661;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42343759536743164) ) ) {
                    sum += (double)0.1608276136363636366;
                  } else {
                    sum += (double)0.3024463970588234796;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3892499953508377075) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.680000007152557373) ) ) {
                  sum += (double)0.05512149999999998301;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                    sum += (double)0.00743760606060606122;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3017484992742538452) ) ) {
                      sum += (double)0.01522249137931034474;
                    } else {
                      sum += (double)0.03867518333333332808;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                  sum += (double)0.1454184375000000251;
                } else {
                  sum += (double)0.02817411111111110811;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2125499993562698364) ) ) {
            sum += (double)0.3834864264705882264;
          } else {
            sum += (double)0.1867090760869565547;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9330400824546813965) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01924999989569187164) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.309939146041870117) ) ) {
                sum += (double)0.4033890312499999742;
              } else {
                sum += (double)0.47339828846153853;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2320269942283630371) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                  sum += (double)0.3264720000000000399;
                } else {
                  sum += (double)0.1539413749999999914;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340396493673324585) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                      sum += (double)0.3961474429824561327;
                    } else {
                      sum += (double)0.3232670270270270318;
                    }
                  } else {
                    sum += (double)0.4618687647058822843;
                  }
                } else {
                  sum += (double)0.2877804659090909545;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1851000040769577026) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.3828277587890625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4402419924736022949) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.395289003849029541) ) ) {
                    sum += (double)0.5124484687499999414;
                  } else {
                    sum += (double)0.4597528275862068914;
                  }
                } else {
                  sum += (double)0.5328610735294116996;
                }
              } else {
                sum += (double)0.5876356416666665972;
              }
            } else {
              sum += (double)0.4060622159090909733;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.220257982611656189) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2024499997496604919) ) ) {
                sum += (double)0.3579767261904761577;
              } else {
                sum += (double)0.22862311764705881;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66748762130737305) ) ) {
                  sum += (double)0.1147272374999999955;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3773500025272369385) ) ) {
                    sum += (double)0.2952710921052631443;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18841.6982421875) ) ) {
                      sum += (double)0.2276525806451613065;
                    } else {
                      sum += (double)0.1351010887096774082;
                    }
                  }
                }
              } else {
                sum += (double)0.08849011250000000939;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1129499971866607666) ) ) {
              sum += (double)0.5165265625000000638;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
                sum += (double)0.3869339531250000075;
              } else {
                sum += (double)0.2168545208333333418;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
          sum += (double)0.235281547619047654;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
            sum += (double)0.207282999999999995;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
              sum += (double)0.1788155000000000161;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3626739978790283203) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3942.275146484375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.42395000159740448) ) ) {
                    sum += (double)0.05142732812499999084;
                  } else {
                    sum += (double)0.02403585000000000443;
                  }
                } else {
                  sum += (double)0.01471508823529411869;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.511862754821777344) ) ) {
                  sum += (double)0.1517525972222221742;
                } else {
                  sum += (double)0.04695726470588234419;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60194826126098633) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2544.429443359375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                    sum += (double)0.5530151718749999334;
                  } else {
                    sum += (double)0.4819609558823529372;
                  }
                } else {
                  sum += (double)0.449417687499999996;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4607.9423828125) ) ) {
                  sum += (double)0.5019251770833331738;
                } else {
                  sum += (double)0.6000225543478261425;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1049031242728233337) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5838395059108734131) ) ) {
                  sum += (double)0.633422782608695667;
                } else {
                  sum += (double)0.7007783100000000154;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6240500211715698242) ) ) {
                  sum += (double)0.6052669861111110716;
                } else {
                  sum += (double)0.5602011184210525796;
                }
              }
            }
          } else {
            sum += (double)0.3934397205882352866;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2415.3333740234375) ) ) {
              sum += (double)0.6645909659090907251;
            } else {
              sum += (double)0.7339935699999999841;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5058.159912109375) ) ) {
              sum += (double)0.7062349062499999608;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.8933555294117647705;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.392909824848175049) ) ) {
                  sum += (double)0.7990081111111110301;
                } else {
                  sum += (double)0.8373659107142855662;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.4151481578947368578;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.196504771709442139) ) ) {
              sum += (double)0.3131365657894736865;
            } else {
              sum += (double)0.1862939000000000123;
            }
          }
        } else {
          sum += (double)0.4998143571428572129;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4799999892711639404) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.006840066666666666864;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.23077011108398438) ) ) {
              sum += (double)0.05618689062499999248;
            } else {
              sum += (double)0.1709657500000000274;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.10528087615966797) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1992.22613525390625) ) ) {
              sum += (double)0.191728208333333372;
            } else {
              sum += (double)0.06300258333333333405;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2933235019445419312) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7732000052928924561) ) ) {
                sum += (double)0.3076108666666666491;
              } else {
                sum += (double)0.2304251944444444256;
              }
            } else {
              sum += (double)0.3821040138888888715;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116690002381801605) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3262107670307159424) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3468.523681640625) ) ) {
                  sum += (double)0.006783433333333334196;
                } else {
                  sum += (double)0.003466424999999999975;
                }
              } else {
                sum += (double)0.02982720000000000163;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1413654983043670654) ) ) {
                sum += (double)0.1076733999999999886;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0185500001534819603) ) ) {
                  sum += (double)0.01527285294117647352;
                } else {
                  sum += (double)0.05988121590909089437;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                sum += (double)0.01246305882352941215;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3171.5555419921875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2114999964833259583) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003061233333333333601;
                    }
                  } else {
                    sum += (double)0.004840800000000001005;
                  }
                } else {
                  sum += (double)0.01138720000000000183;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6388343870639801025) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4224999994039535522) ) ) {
                  sum += (double)0.04528978125000000104;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1307344995439052582) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.531549990177154541) ) ) {
                      sum += (double)0.01629523214285714602;
                    } else {
                      sum += (double)0.007415200000000000263;
                    }
                  } else {
                    sum += (double)0.02606454000000000409;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1329500004649162292) ) ) {
                  sum += (double)0.01408278125000000068;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2800000011920928955) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.62668228149414062) ) ) {
                      sum += (double)0.005294800000000000548;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01046423333333333129;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9288.591796875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03074999991804361343) ) ) {
                    sum += (double)0.1143925000000000219;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1921604946255683899) ) ) {
                      sum += (double)0.02531544805194805084;
                    } else {
                      sum += (double)0.05551980555555554447;
                    }
                  }
                } else {
                  sum += (double)0.1402163026315789429;
                }
              } else {
                sum += (double)0.1574144124999999617;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.546875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1336500048637390137) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7349999845027923584) ) ) {
                      sum += (double)0.02275505263157894323;
                    } else {
                      sum += (double)0.0643993888888888949;
                    }
                  } else {
                    sum += (double)0.1592035156250000139;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2831507623195648193) ) ) {
                    sum += (double)0.1302588666666666672;
                  } else {
                    sum += (double)0.2532890166666666998;
                  }
                }
              } else {
                sum += (double)0.2948291447368421303;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6099999845027923584) ) ) {
              sum += (double)0.06652716071428571576;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2932000011205673218) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.59248733520507812) ) ) {
                  sum += (double)0.004368148148148148779;
                } else {
                  sum += (double)0.01814617045454545302;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097320437431335449) ) ) {
                  sum += (double)0.05109244999999999759;
                } else {
                  sum += (double)0.01828458000000000513;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.972251415252685547) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
            sum += (double)0.5022139700000000095;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2682649940252304077) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6008000075817108154) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9311.1416015625) ) ) {
                  sum += (double)0.2507618593749999514;
                } else {
                  sum += (double)0.3581002386363636436;
                }
              } else {
                sum += (double)0.1896771599999999836;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919999957084655762) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2947520017623901367) ) ) {
                    sum += (double)0.3625090978260870345;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                      sum += (double)0.4073004625000000156;
                    } else {
                      sum += (double)0.4599842205882353485;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4317.9140625) ) ) {
                    sum += (double)0.3627526299999999648;
                  } else {
                    sum += (double)0.2785475312499999245;
                  }
                }
              } else {
                sum += (double)0.4719152631578947821;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1135316044092178345) ) ) {
                sum += (double)0.1469972812500000003;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13384.77001953125) ) ) {
                  sum += (double)0.3219801621621621868;
                } else {
                  sum += (double)0.2024152777777777634;
                }
              }
            } else {
              sum += (double)0.4014721666666666855;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.03244924545288086) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9932.76318359375) ) ) {
                sum += (double)0.2962905263157895042;
              } else {
                sum += (double)0.1338798125000000006;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.89281749725341797) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.23181819915771484) ) ) {
                  sum += (double)0.08785893421052630436;
                } else {
                  sum += (double)0.2019535576923077447;
                }
              } else {
                sum += (double)0.07118066176470588813;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25155.5751953125) ) ) {
          sum += (double)0.1759813900000000431;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.671597480773925781) ) ) {
            sum += (double)0.08922129629629628467;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2672355026006698608) ) ) {
              sum += (double)0.05919339423076922652;
            } else {
              sum += (double)0.01538518965517241509;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4077123850584030151) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
          sum += (double)0.2114767899999999978;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.252881050109863281) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1939876601099967957) ) ) {
                sum += (double)0.5265216896551724313;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2986869066953659058) ) ) {
                  sum += (double)0.4346692105263157968;
                } else {
                  sum += (double)0.5000588846153845024;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032499909400939941) ) ) {
                  sum += (double)0.6063116052631578601;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02630000002682209015) ) ) {
                    sum += (double)0.5706997016129031763;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                      sum += (double)0.4762369230769231132;
                    } else {
                      sum += (double)0.5199087717391304153;
                    }
                  }
                }
              } else {
                sum += (double)0.6568593750000000231;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1918999999761581421) ) ) {
              sum += (double)0.5064822413793103051;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.7344517707824707) ) ) {
                sum += (double)0.4461152900000000532;
              } else {
                sum += (double)0.3701926666666667254;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.38541603088378906) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7521069943904876709) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.265974998474121094) ) ) {
              sum += (double)0.6090509117647058268;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.64749813079833984) ) ) {
                  sum += (double)0.7321163552631579918;
                } else {
                  sum += (double)0.7723023571428572209;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6773000061511993408) ) ) {
                  sum += (double)0.6893224659090909645;
                } else {
                  sum += (double)0.6405671590909091107;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1727.71044921875) ) ) {
              sum += (double)0.7707853749999999948;
            } else {
              sum += (double)0.8297413586956522424;
            }
          }
        } else {
          sum += (double)0.4933195357142856619;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.853614211082458496) ) ) {
            sum += (double)0.3260598749999999435;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.34615325927734375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38034200668334961) ) ) {
                sum += (double)0.1385852857142857164;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3142.634765625) ) ) {
                  sum += (double)0.03828952631578947524;
                } else {
                  sum += (double)0.09038678947368419814;
                }
              }
            } else {
              sum += (double)0.3191624166666666707;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7901258468627929688) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5088259875774383545) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2884500026702880859) ) ) {
                sum += (double)0.4601093068181817958;
              } else {
                sum += (double)0.372796833333333355;
              }
            } else {
              sum += (double)0.5298578636363635574;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06249999813735485077) ) ) {
                sum += (double)0.3271365468750000449;
              } else {
                sum += (double)0.4254587058823529611;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1764.81591796875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.24266815185546875) ) ) {
                  sum += (double)0.3078583455882352715;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.171698868274688721) ) ) {
                    sum += (double)0.2742605156249999787;
                  } else {
                    sum += (double)0.06012076666666666541;
                  }
                }
              } else {
                sum += (double)0.1154770803571428528;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          sum += (double)0.6528225921052632774;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0439999997615814209) ) ) {
            sum += (double)0.302458029411764695;
          } else {
            sum += (double)0.4715923676470588077;
          }
        }
      }
    }
  }
  return sum;
}
