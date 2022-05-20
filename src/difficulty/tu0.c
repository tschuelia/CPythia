#include "header.h"
double predict_margin_unit0(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4385659992694854736) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.26666641235351562) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1319625005125999451) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.03091812133789062) ) ) {
            sum += (double)0.1492445526315789583;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7662500143051147461) ) ) {
              sum += (double)0.05438384999999999053;
            } else {
              sum += (double)0.01439945370370370598;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3102.8297119140625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00509999995119869709) ) ) {
              sum += (double)0.4418519333333332799;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.677796840667724609) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.877022504806518555) ) ) {
                  sum += (double)0.3471956323529411526;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                    sum += (double)0.308746728260869574;
                  } else {
                    sum += (double)0.2140657416666666424;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6982499957084655762) ) ) {
                  sum += (double)0.09505131250000001253;
                } else {
                  sum += (double)0.2145389038461538445;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.473544836044311523) ) ) {
              sum += (double)0.1424923804347826006;
            } else {
              sum += (double)0.0520261833333333229;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2932339906692504883) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                sum += (double)0.4247596979166666231;
              } else {
                sum += (double)0.3166202249999999774;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.5) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2854.2120361328125) ) ) {
                  sum += (double)0.2033930526315789744;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2016.8912353515625) ) ) {
                    sum += (double)0.3832955882352941934;
                  } else {
                    sum += (double)0.2564456874999999636;
                  }
                }
              } else {
                sum += (double)0.1415292678571428431;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001750000054016709328) ) ) {
              sum += (double)0.521030120370370331;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.369657993316650391) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8095999956130981445) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6479999721050262451) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3618240058422088623) ) ) {
                      sum += (double)0.4006569261363637224;
                    } else {
                      sum += (double)0.4632525234375000633;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04765000008046627045) ) ) {
                      sum += (double)0.5273291470588233887;
                    } else {
                      sum += (double)0.4728529299999999491;
                    }
                  }
                } else {
                  sum += (double)0.3508604444444444193;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3263.76904296875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3736329972743988037) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9249.4755859375) ) ) {
                      sum += (double)0.4315937499999999982;
                    } else {
                      sum += (double)0.3555031206896551166;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.770978927612304688) ) ) {
                      sum += (double)0.5031601718749999508;
                    } else {
                      sum += (double)0.3992256607142857794;
                    }
                  }
                } else {
                  sum += (double)0.2131064891304348119;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3863499909639358521) ) ) {
              sum += (double)0.3495638269230770256;
            } else {
              sum += (double)0.2158228636363636044;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.040241122245788574) ) ) {
              sum += (double)0.08718072058823529702;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2221000045537948608) ) ) {
                sum += (double)0.01223511666666666706;
              } else {
                sum += (double)0.05673799999999999677;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1942889988422393799) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4762999862432479858) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0050000001210719347) ) ) {
              sum += (double)0.2346559843750000152;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16277.8828125) ) ) {
                sum += (double)0.159801944444444427;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.72420215606689453) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.35714340209960938) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1611845046281814575) ) ) {
                      sum += (double)0.01486271874999999833;
                    } else {
                      sum += (double)0.03214611458333333643;
                    }
                  } else {
                    sum += (double)0.06068476136363636086;
                  }
                } else {
                  sum += (double)0.07671951470588232735;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07246400043368339539) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1590499952435493469) ) ) {
                sum += (double)0.04253198333333332165;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12744.087890625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.67207908630371094) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04573949985206127167) ) ) {
                      sum += (double)0.005292657142857144607;
                    } else {
                      sum += (double)0.01220751136363636309;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3470000028610229492) ) ) {
                      sum += (double)0.00842479999999999965;
                    } else {
                      sum += (double)0.002765794642857144058;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05019150115549564362) ) ) {
                    sum += (double)0.002500000000000000919;
                  } else {
                    sum += (double)0.003017999999999999849;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08208299800753593445) ) ) {
                sum += (double)0.06845227941176469655;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30438.173828125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.40608978271484375) ) ) {
                    sum += (double)0.1117799615384615225;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1538999974727630615) ) ) {
                      sum += (double)0.006782560000000000845;
                    } else {
                      sum += (double)0.04644455000000000805;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.70586967468261719) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.61196136474609375) ) ) {
                      sum += (double)0.01131405357142857386;
                    } else {
                      sum += (double)0.03738033974358973693;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20536.8447265625) ) ) {
                      sum += (double)0.01143286363636363684;
                    } else {
                      sum += (double)0.003736291666666667274;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1698715249999999677;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.09465491771697998) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4353.006103515625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.53610992431640625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165185004472732544) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.23737335205078125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.590196460485458374) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2514294907450675964) ) ) {
                      sum += (double)0.09255992567567566942;
                    } else {
                      sum += (double)0.2202323645833333676;
                    }
                  } else {
                    sum += (double)0.2721939099999999834;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5902127623558044434) ) ) {
                    sum += (double)0.1376663800000000326;
                  } else {
                    sum += (double)0.02925655882352940981;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16325.8603515625) ) ) {
                  sum += (double)0.3486965199999999543;
                } else {
                  sum += (double)0.2187703750000000447;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-94400.51953125) ) ) {
                sum += (double)0.1629646562499999785;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)168.545135498046875) ) ) {
                  sum += (double)0.028721770833333337;
                } else {
                  sum += (double)0.09686573611111110038;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8119196891784668) ) ) {
              sum += (double)0.1286424047619047495;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3861500024795532227) ) ) {
                sum += (double)0.04782217647058822907;
              } else {
                sum += (double)0.009935519999999999768;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09960000216960906982) ) ) {
            sum += (double)0.06497264473684209729;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4316.3271484375) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)52.39285659790039062) ) ) {
                sum += (double)0.02881800000000000334;
              } else {
                sum += (double)0.004924852941176470489;
              }
            } else {
              sum += (double)0.005140720000000000532;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212084412574768066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6070390045642852783) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1941.93548583984375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3563.95263671875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7040999829769134521) ) ) {
                  sum += (double)0.5529819605263157634;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6530.283935546875) ) ) {
                    sum += (double)0.4982663928571428591;
                  } else {
                    sum += (double)0.4520618625000000224;
                  }
                }
              } else {
                sum += (double)0.5552883083333333136;
              }
            } else {
              sum += (double)0.4518779722222222572;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7017999887466430664) ) ) {
              sum += (double)0.5540669166666666312;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.868712663650512695) ) ) {
                sum += (double)0.7016649833333333808;
              } else {
                sum += (double)0.6107422708333333228;
              }
            }
          }
        } else {
          sum += (double)0.3695066739130434819;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.6636518750000000022;
            } else {
              sum += (double)0.7358165833333332184;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000031590461731) ) ) {
                sum += (double)0.8256914999999998006;
              } else {
                sum += (double)0.7783769999999999856;
              }
            } else {
              sum += (double)0.8571380294117646459;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06235000118613243103) ) ) {
            sum += (double)0.5180436911764705332;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6557534933090209961) ) ) {
              sum += (double)0.6465582187499999689;
            } else {
              sum += (double)0.7003081630434782046;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6881895065307617188) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17043304443359375) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6632487475872039795) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5439620018005371094) ) ) {
              sum += (double)0.4545300648148148936;
            } else {
              sum += (double)0.587760359375000041;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.4990572000000000341;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6085674762725830078) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.533619403839111328) ) ) {
                  sum += (double)0.3292450378787879495;
                } else {
                  sum += (double)0.1807218235294117403;
                }
              } else {
                sum += (double)0.4424133666666667519;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18746.4541015625) ) ) {
            sum += (double)0.3459620833333333367;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1328999996185302734) ) ) {
              sum += (double)0.258145597222222245;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5058854818344116211) ) ) {
                sum += (double)0.05694136111111110926;
              } else {
                sum += (double)0.1431794333333333002;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.038156867027282715) ) ) {
          sum += (double)0.7373232361111111688;
        } else {
          sum += (double)0.4667107058823530275;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4559714943170547485) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2505149990320205688) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.9976191520690918) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5475.8037109375) ) ) {
              sum += (double)0.3438845795454544274;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.888679265975952148) ) ) {
                sum += (double)0.299983416666666669;
              } else {
                sum += (double)0.1991676500000000016;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4272.447998046875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01184999989345669746) ) ) {
                sum += (double)0.3440456250000000216;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6579999923706054688) ) ) {
                  sum += (double)0.2334698599999999735;
                } else {
                  sum += (double)0.1158175156249999921;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.355263233184814453) ) ) {
                sum += (double)0.1606590092592592445;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2578.7724609375) ) ) {
                  sum += (double)0.04899816071428571285;
                } else {
                  sum += (double)0.01134739130434782826;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2082.9490966796875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
              sum += (double)0.5768024473684210118;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243529319763183594) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4855.34765625) ) ) {
                      sum += (double)0.3937760677083332883;
                    } else {
                      sum += (double)0.3110725156249999901;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1852100491523742676) ) ) {
                      sum += (double)0.3840835882352941488;
                    } else {
                      sum += (double)0.4566047400000000089;
                    }
                  }
                } else {
                  sum += (double)0.3029808467741935685;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2680.569091796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3399.77880859375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1254300475120544434) ) ) {
                      sum += (double)0.3853196640625000668;
                    } else {
                      sum += (double)0.4635395384615383918;
                    }
                  } else {
                    sum += (double)0.3521236093749999796;
                  }
                } else {
                  sum += (double)0.5139675454545454825;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.568425655364990234) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1288277506828308105) ) ) {
                sum += (double)0.2942721578947368188;
              } else {
                sum += (double)0.4167559899999999096;
              }
            } else {
              sum += (double)0.150842782608695658;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.906093955039978027) ) ) {
          sum += (double)0.2643483289473684272;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1210999973118305206) ) ) {
              sum += (double)0.2487622187500000137;
            } else {
              sum += (double)0.08389654166666665747;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3787394911050796509) ) ) {
              sum += (double)0.02631738888888888669;
            } else {
              sum += (double)0.0567009642857142851;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.96290731430053711) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7883.8984375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01520000025629997253) ) ) {
              sum += (double)0.3331341176470588583;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3208710253238677979) ) ) {
                sum += (double)0.1255176916666666809;
              } else {
                sum += (double)0.2214458399999999771;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1244204975664615631) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.63194465637207031) ) ) {
                sum += (double)0.01133917499999999995;
              } else {
                sum += (double)0.003886440000000000988;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162837497889995575) ) ) {
                sum += (double)0.1520030147058823444;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4513.101806640625) ) ) {
                  sum += (double)0.093063112500000017;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2200.902587890625) ) ) {
                    sum += (double)0.02651995238095238364;
                  } else {
                    sum += (double)0.05230820833333333503;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.08714301666666665613;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.41592025756835938) ) ) {
                  sum += (double)0.003897738095238096473;
                } else {
                  sum += (double)0.002500000000000001353;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06122849881649017334) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)156.9863662719726562) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05819999799132347107) ) ) {
                      sum += (double)0.008110937500000000092;
                    } else {
                      sum += (double)0.01364910714285713991;
                    }
                  } else {
                    sum += (double)0.003997538461538461228;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4244482368230819702) ) ) {
                    sum += (double)0.00467507692307692329;
                  } else {
                    sum += (double)0.002876727272727272553;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8247.181640625) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.45000076293945312) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03574999980628490448) ) ) {
                  sum += (double)0.2475900937499999621;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)100.8074684143066406) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1681705042719841003) ) ) {
                      sum += (double)0.03263401999999999276;
                    } else {
                      sum += (double)0.08122642982456139416;
                    }
                  } else {
                    sum += (double)0.1685943452380952445;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.227465450763702393) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4760999977588653564) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5184790492057800293) ) ) {
                      sum += (double)0.04174485416666665755;
                    } else {
                      sum += (double)0.00910191525423728956;
                    }
                  } else {
                    sum += (double)0.1021096785714285804;
                  }
                } else {
                  sum += (double)0.1183449821428571302;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7804144918918609619) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5876066386699676514) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801669970154762268) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3139.35205078125) ) ) {
                      sum += (double)0.01228509090909091044;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.02723304166666666928;
                  }
                } else {
                  sum += (double)0.04712212500000000082;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.28556060791015625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.15481472015380859) ) ) {
                    sum += (double)0.003671333333333334174;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.008535333333333335742;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7491518259048461914) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.76782608032226562) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9417.5849609375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.56608200073242188) ) ) {
                sum += (double)0.4103584583333333424;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154709160327911377) ) ) {
                  sum += (double)0.3302615781250000104;
                } else {
                  sum += (double)0.2395934642857143471;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05464999936521053314) ) ) {
                sum += (double)0.07370491304347825956;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264615669846534729) ) ) {
                    sum += (double)0.2152028166666666853;
                  } else {
                    sum += (double)0.3685287058823528694;
                  }
                } else {
                  sum += (double)0.1200140357142857189;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.3125) ) ) {
              sum += (double)0.1551169464285714061;
            } else {
              sum += (double)0.06565790476190473679;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3470.424560546875) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.027978003025054932) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2151999995112419128) ) ) {
                sum += (double)0.05529640384615383542;
              } else {
                sum += (double)0.2052117499999999983;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1725000068545341492) ) ) {
                sum += (double)0.1495225588235294112;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3501234948635101318) ) ) {
                  sum += (double)0.01190626666666666847;
                } else {
                  sum += (double)0.03569053124999999743;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1951999962329864502) ) ) {
              sum += (double)0.007961250000000001312;
            } else {
              sum += (double)0.0339095694444444401;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007451236248016357) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6502065062522888184) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2097.2220458984375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.846590876579284668) ) ) {
                sum += (double)0.5115490799999999894;
              } else {
                sum += (double)0.5653355000000001018;
              }
            } else {
              sum += (double)0.4325611500000000609;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5654000043869018555) ) ) {
              sum += (double)0.5412052812500000032;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1027000024914741516) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8206999897956848145) ) ) {
                    sum += (double)0.6733482619047619355;
                  } else {
                    sum += (double)0.6200510434782607883;
                  }
                } else {
                  sum += (double)0.6840648214285713902;
                }
              } else {
                sum += (double)0.5510076607142856409;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5270044803619384766) ) ) {
            sum += (double)0.5207271630434783249;
          } else {
            sum += (double)0.3858227142857143521;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7448975145816802979) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2853.806884765625) ) ) {
            sum += (double)0.6092885595238095586;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1650.0863037109375) ) ) {
              sum += (double)0.6849792499999999285;
            } else {
              sum += (double)0.7312819125000000753;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8551464974880218506) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.155802249908447266) ) ) {
                sum += (double)0.8227575384615384291;
              } else {
                sum += (double)0.7879572812499999745;
              }
            } else {
              sum += (double)0.8735019666666666849;
            }
          } else {
            sum += (double)0.7464925156250000748;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6857104897499084473) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07297277450561523) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6632487475872039795) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5497739613056182861) ) ) {
              sum += (double)0.598131940476190338;
            } else {
              sum += (double)0.4721964705882352176;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.181400001049041748) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.089522480964660645) ) ) {
                sum += (double)0.3859529125000000227;
              } else {
                sum += (double)0.1660332399999999986;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1249500028789043427) ) ) {
                sum += (double)0.3271113055555556204;
              } else {
                sum += (double)0.4620126785714285256;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3429999947547912598) ) ) {
              sum += (double)0.1157541696428571326;
            } else {
              sum += (double)0.2654271029411764959;
            }
          } else {
            sum += (double)0.3823252884615383485;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.349448561668395996) ) ) {
          sum += (double)0.6855386346153845567;
        } else {
          sum += (double)0.3899341805555556206;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.24358940124511719) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1492550000548362732) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.91152095794677734) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000249743461609) ) ) {
            sum += (double)0.07199764772727271223;
          } else {
            sum += (double)0.1650124166666666614;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00370000000111758709) ) ) {
            sum += (double)0.09091128947368420921;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7528.732666015625) ) ) {
              sum += (double)0.04424748809523808973;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2950.909423828125) ) ) {
                sum += (double)0.01269729411764706183;
              } else {
                sum += (double)0.004896545454545455506;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9910407364368438721) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2709535062313079834) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4367.938232421875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002600000007078051567) ) ) {
                sum += (double)0.5005112083333334017;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.096845388412475586) ) ) {
                  sum += (double)0.3624291547619047371;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12524.68603515625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2106129974126815796) ) ) {
                      sum += (double)0.2333591617647058913;
                    } else {
                      sum += (double)0.3634278181818182407;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.85990142822265625) ) ) {
                      sum += (double)0.2345034191176470773;
                    } else {
                      sum += (double)0.1386978359374999858;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.624080896377563477) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2222950905561447144) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1086925789713859558) ) ) {
                    sum += (double)0.2381577333333333157;
                  } else {
                    sum += (double)0.1588856785714285735;
                  }
                } else {
                  sum += (double)0.3101310333333333058;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2254600003361701965) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3369.5228271484375) ) ) {
                    sum += (double)0.112541552631578945;
                  } else {
                    sum += (double)0.01963793478260869585;
                  }
                } else {
                  sum += (double)0.1815407884615384826;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
              sum += (double)0.5184073586956522428;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.670578956604003906) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2948073893785476685) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.20420360565185547) ) ) {
                      sum += (double)0.4417954074074073589;
                    } else {
                      sum += (double)0.3574672734375000105;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4855786263942718506) ) ) {
                      sum += (double)0.3001631176470588858;
                    } else {
                      sum += (double)0.3781310500000000241;
                    }
                  }
                } else {
                  sum += (double)0.4682129117647059191;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5100.2529296875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228369951248168945) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                      sum += (double)0.3828030357142856999;
                    } else {
                      sum += (double)0.2518629749999999889;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3178694844245910645) ) ) {
                      sum += (double)0.4248843645833333404;
                    } else {
                      sum += (double)0.3499047142857142911;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1162000000476837158) ) ) {
                    sum += (double)0.1562405460526315737;
                  } else {
                    sum += (double)0.3492879062499999465;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
            sum += (double)0.2245158586956521318;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.435252666473388672) ) ) {
              sum += (double)0.1117065147058823454;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3226030021905899048) ) ) {
                sum += (double)0.008692875000000000948;
              } else {
                sum += (double)0.0180754230769230792;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473215013742446899) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
            sum += (double)0.04374846428571427942;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1521999984979629517) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8164499998092651367) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.53353500366210938) ) ) {
                  sum += (double)0.004276045454545455114;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                sum += (double)0.005426000000000000267;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)171.8371200561523438) ) ) {
                sum += (double)0.008120238095238095297;
              } else {
                sum += (double)0.004032275862068965787;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37796592712402344) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4754499942064285278) ) ) {
              sum += (double)0.1478123103448275577;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15852.11474609375) ) ) {
                sum += (double)0.1188621333333333419;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1176000013947486877) ) ) {
                  sum += (double)0.01719831481481481211;
                } else {
                  sum += (double)0.0958689615384615279;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4887499958276748657) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020499944686889648) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2690500020980834961) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.20520000159740448) ) ) {
                      sum += (double)0.1043852361111111127;
                    } else {
                      sum += (double)0.03991340535714286292;
                    }
                  } else {
                    sum += (double)0.1026468472222222261;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.52932357788085938) ) ) {
                    sum += (double)0.03027776666666667088;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)119.396575927734375) ) ) {
                      sum += (double)0.01115315625000000074;
                    } else {
                      sum += (double)0.003655266666666667948;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1097515001893043518) ) ) {
                  sum += (double)0.01704788095238095325;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.48214340209960938) ) ) {
                    sum += (double)0.008289434782608696636;
                  } else {
                    sum += (double)0.002853796296296296983;
                  }
                }
              }
            } else {
              sum += (double)0.1026701195652173909;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.09465491771697998) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2455629929900169373) ) ) {
            sum += (double)0.2388069711538461093;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.40000152587890625) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.19856452941894531) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.27400951087474823) ) ) {
                  sum += (double)0.1989510750000000328;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2855499982833862305) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.310036003589630127) ) ) {
                      sum += (double)0.02270011538461538456;
                    } else {
                      sum += (double)0.08984640000000002069;
                    }
                  } else {
                    sum += (double)0.1625523970588235723;
                  }
                }
              } else {
                sum += (double)0.2695156176470588916;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1349500007927417755) ) ) {
                sum += (double)0.04471150000000000124;
              } else {
                sum += (double)0.07912058928571429062;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.081999998539686203) ) ) {
            sum += (double)0.1051423823529411827;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1535000056028366089) ) ) {
              sum += (double)0.02849520833333333766;
            } else {
              sum += (double)0.007879142857142858863;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4062234759330749512) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5482829809188842773) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2802200317382812) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0669500008225440979) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1941.93548583984375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000019557774067) ) ) {
                sum += (double)0.6318842500000000362;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.50185537338256836) ) ) {
                  sum += (double)0.480036427083333328;
                } else {
                  sum += (double)0.5539728999999999903;
                }
              }
            } else {
              sum += (double)0.4610317857142857689;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7581000030040740967) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4441130012273788452) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4083775132894515991) ) ) {
                  sum += (double)0.4921744404761904668;
                } else {
                  sum += (double)0.4068858863636363177;
                }
              } else {
                sum += (double)0.5110806428571428306;
              }
            } else {
              sum += (double)0.3734166739130435064;
            }
          }
        } else {
          sum += (double)0.2743162884615384933;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.77499997615814209) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6218225061893463135) ) ) {
            sum += (double)0.6258198809523809469;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6401499807834625244) ) ) {
              sum += (double)0.6832438593749999844;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.8732801999999997289;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.99131965637207031) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.229356706142425537) ) ) {
                    sum += (double)0.7775284285714285648;
                  } else {
                    sum += (double)0.7263299523809523262;
                  }
                } else {
                  sum += (double)0.8176711406249999037;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8176499903202056885) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.061298131942749023) ) ) {
              sum += (double)0.5978897499999999976;
            } else {
              sum += (double)0.6872167499999999318;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6294755041599273682) ) ) {
              sum += (double)0.5956515250000000705;
            } else {
              sum += (double)0.5233883684210527409;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.959371089935302734) ) ) {
              sum += (double)0.4926366018518518186;
            } else {
              sum += (double)0.3814098874999999889;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2845.7130126953125) ) ) {
              sum += (double)0.3674179166666666219;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.000336766242980957) ) ) {
                sum += (double)0.2404972500000000513;
              } else {
                sum += (double)0.05371457692307692044;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.32397937774658203) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1227499991655349731) ) ) {
              sum += (double)0.03823539062499999724;
            } else {
              sum += (double)0.0849147410714285733;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.49106979370117188) ) ) {
              sum += (double)0.3206599750000000415;
            } else {
              sum += (double)0.1020390833333333358;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6881895065307617188) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1943500041961669922) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.219047665596008301) ) ) {
              sum += (double)0.4347955576923077103;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2878.25048828125) ) ) {
                sum += (double)0.3293884625000000343;
              } else {
                sum += (double)0.102577287499999989;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.630573868751525879) ) ) {
              sum += (double)0.5924449624999998942;
            } else {
              sum += (double)0.4034777232142857661;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.439812958240509033) ) ) {
            sum += (double)0.6562156630434783366;
          } else {
            sum += (double)0.4461104285714285744;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.3285369873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2273795008659362793) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4317.285888671875) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001150000025518238544) ) ) {
            sum += (double)0.3851449814814814632;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375280022621154785) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6160500049591064453) ) ) {
                sum += (double)0.1320561964285714152;
              } else {
                sum += (double)0.0279503823529411756;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3391499966382980347) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.0151820182800293) ) ) {
                  sum += (double)0.3038480499999999807;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1755470037460327148) ) ) {
                    sum += (double)0.2312297857142857349;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8903.84765625) ) ) {
                      sum += (double)0.2027182500000000442;
                    } else {
                      sum += (double)0.1143258815789473665;
                    }
                  }
                }
              } else {
                sum += (double)0.0812850147058823691;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.487012863159179688) ) ) {
            sum += (double)0.1724898076923076784;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5469000041484832764) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500060558319092) ) ) {
                sum += (double)0.03613101249999999681;
              } else {
                sum += (double)0.187896569444444439;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652235016226768494) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1205354966223239899) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02439999952912330627) ) ) {
                    sum += (double)0.003250340909090909322;
                  } else {
                    sum += (double)0.01088703333333333571;
                  }
                } else {
                  sum += (double)0.02499805434782608263;
                }
              } else {
                sum += (double)0.06762108593749999175;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.122619152069091797) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.393547296524047852) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.29584217071533203) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3138940036296844482) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.883377194404602051) ) ) {
                    sum += (double)0.3995877833333333906;
                  } else {
                    sum += (double)0.355684499999999959;
                  }
                } else {
                  sum += (double)0.4395547380952380956;
                }
              } else {
                sum += (double)0.3045695937499999784;
              }
            } else {
              sum += (double)0.4593381206896552382;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5705.28857421875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.26771974563598633) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.42700099945068359) ) ) {
                  sum += (double)0.3229763166666665963;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6458999812602996826) ) ) {
                    sum += (double)0.478771696428571425;
                  } else {
                    sum += (double)0.4185060312500000768;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1670500040054321289) ) ) {
                  sum += (double)0.2388616176470588215;
                } else {
                  sum += (double)0.3113487343749999914;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.669117450714111328) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2118.2491455078125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2963349968194961548) ) ) {
                    sum += (double)0.2483339807692307444;
                  } else {
                    sum += (double)0.3812085480769231149;
                  }
                } else {
                  sum += (double)0.1861129642857142774;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02515000011771917343) ) ) {
                  sum += (double)0.08763950000000000906;
                } else {
                  sum += (double)0.1746747142857142665;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5226.20166015625) ) ) {
            sum += (double)0.1895818020833333339;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3489470034837722778) ) ) {
              sum += (double)0.01536860606060606177;
            } else {
              sum += (double)0.0853122857142857155;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.37458896636962891) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
            sum += (double)0.2055442685185185081;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1391255035996437073) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.6798248291015625) ) ) {
                sum += (double)0.06228316071428571105;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1307500004768371582) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4780.800537109375) ) ) {
                    sum += (double)0.01512511904761904523;
                  } else {
                    sum += (double)0.003955166666666667594;
                  }
                } else {
                  sum += (double)0.03132005000000000206;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.62533760070800781) ) ) {
                sum += (double)0.1173448928571428768;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9184.125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.267503589391708374) ) ) {
                    sum += (double)0.1158868653846153729;
                  } else {
                    sum += (double)0.05472351470588234651;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4257.149658203125) ) ) {
                    sum += (double)0.03318318749999999567;
                  } else {
                    sum += (double)0.003376411764705882119;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1969499960541725159) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                sum += (double)0.01367779411764706056;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-51419.353515625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)205.671875) ) ) {
                    sum += (double)0.0108250294117647073;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.27381134033203125) ) ) {
                    sum += (double)0.003243500000000000289;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5641784369945526123) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-34455.828125) ) ) {
                  sum += (double)0.05046823749999999886;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.99261093139648438) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1411734968423843384) ) ) {
                      sum += (double)0.02335002499999999648;
                    } else {
                      sum += (double)0.01790185714285714297;
                    }
                  } else {
                    sum += (double)0.004179526315789473812;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3393500000238418579) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.130249999463558197) ) ) {
                    sum += (double)0.008298299999999999774;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                } else {
                  sum += (double)0.01303291379310344937;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.50446701049804688) ) ) {
              sum += (double)0.1012487638888888986;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4746000021696090698) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.86394119262695312) ) ) {
                  sum += (double)0.0567737261904761939;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)63.91883277893066406) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1230129972100257874) ) ) {
                      sum += (double)0.007255300000000001852;
                    } else {
                      sum += (double)0.02300157291666667103;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3834500014781951904) ) ) {
                      sum += (double)0.002649984848484848981;
                    } else {
                      sum += (double)0.007406928571428572118;
                    }
                  }
                }
              } else {
                sum += (double)0.07130619736842103151;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2455629929900169373) ) ) {
          sum += (double)0.2484694999999999543;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5166.755126953125) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.71271324157714844) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28263.44140625) ) ) {
                sum += (double)0.2329858452380952349;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.19856452941894531) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16104.58740234375) ) ) {
                    sum += (double)0.1266880294117646855;
                  } else {
                    sum += (double)0.03184435810810810896;
                  }
                } else {
                  sum += (double)0.2383901964285714548;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1672499999403953552) ) ) {
                sum += (double)0.07771124999999998173;
              } else {
                sum += (double)0.02547603124999999608;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3055260032415390015) ) ) {
              sum += (double)0.07633748437499998651;
            } else {
              sum += (double)0.005506180555555555828;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.927400350570678711) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.530753970146179199) ) ) {
                sum += (double)0.4940347826086957106;
              } else {
                sum += (double)0.4061247812500000665;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8779000043869018555) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4714665114879608154) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00879999995231628418) ) ) {
                    sum += (double)0.5665404166666666574;
                  } else {
                    sum += (double)0.5159432631578948492;
                  }
                } else {
                  sum += (double)0.6052387374999999015;
                }
              } else {
                sum += (double)0.4552811374999999883;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.873068094253540039) ) ) {
              sum += (double)0.4957303281249999527;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.868712663650512695) ) ) {
                sum += (double)0.6710926999999998754;
              } else {
                sum += (double)0.6078301160714284501;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2802200317382812) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4614434987306594849) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1274499967694282532) ) ) {
                sum += (double)0.4727985208333333467;
              } else {
                sum += (double)0.3508357727272727877;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2066204100847244263) ) ) {
                sum += (double)0.4589697874999999483;
              } else {
                sum += (double)0.5430811562499999745;
              }
            }
          } else {
            sum += (double)0.2946967352941176621;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02945000026375055313) ) ) {
              sum += (double)0.7497038958333334113;
            } else {
              sum += (double)0.695857766666666766;
            }
          } else {
            sum += (double)0.6251809400000000183;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6792353391647338867) ) ) {
            sum += (double)0.888318083333333397;
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
            sum += (double)0.504806789473684181;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.788650929927825928) ) ) {
              sum += (double)0.3747403035714285124;
            } else {
              sum += (double)0.214026999999999995;
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
                sum += (double)0.1032747608695652047;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8745341300964355469) ) ) {
              sum += (double)0.1954039852941176492;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.64362490177154541) ) ) {
                sum += (double)0.0536746442307692237;
              } else {
                sum += (double)0.1090297115384615406;
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
              sum += (double)0.5475234722222221961;
            }
          } else {
            sum += (double)0.7268475312499999008;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8941556215286254883) ) ) {
              sum += (double)0.4778357812500000357;
            } else {
              sum += (double)0.4061726617647059001;
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.437421798706054688) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2471444979310035706) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3175.5850830078125) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1498735025525093079) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.152281522750854492) ) ) {
              sum += (double)0.2647267678571428307;
            } else {
              sum += (double)0.1001013333333333338;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.006849288940429688) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06560000032186508179) ) ) {
                  sum += (double)0.3916536249999999497;
                } else {
                  sum += (double)0.325580000000000036;
                }
              } else {
                sum += (double)0.2710052499999999753;
              }
            } else {
              sum += (double)0.1885575108695652091;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.624080896377563477) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.16933631896972656) ) ) {
              sum += (double)0.1709442327586206956;
            } else {
              sum += (double)0.05050938636363636047;
            }
          } else {
            sum += (double)0.01173781428571428996;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.673900902271270752) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2932339906692504883) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4951.635009765625) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2696754932403564453) ) ) {
                sum += (double)0.4409987916666666674;
              } else {
                sum += (double)0.3420601447368420422;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2710480093955993652) ) ) {
                sum += (double)0.2163725576923077043;
              } else {
                sum += (double)0.3109675689655173048;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2762.1796875) ) ) {
                  sum += (double)0.5380934687499998592;
                } else {
                  sum += (double)0.4580933823529412252;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2475.832763671875) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1611000001430511475) ) ) {
                      sum += (double)0.437437548913043539;
                    } else {
                      sum += (double)0.3664140781250000423;
                    }
                  } else {
                    sum += (double)0.3483630333333333495;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2535.6046142578125) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                      sum += (double)0.4725285357142856024;
                    } else {
                      sum += (double)0.3768071833333334064;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.899385571479797363) ) ) {
                      sum += (double)0.4932904772727271792;
                    } else {
                      sum += (double)0.5579190714285715558;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4744.42626953125) ) ) {
                sum += (double)0.4840187833333332579;
              } else {
                sum += (double)0.2462793636363636018;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2812.8260498046875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.777388334274291992) ) ) {
              sum += (double)0.2857676538461538795;
            } else {
              sum += (double)0.1648908636363635993;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
              sum += (double)0.1995781323529411677;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3787394911050796509) ) ) {
                sum += (double)0.01991646666666666357;
              } else {
                sum += (double)0.07935504687500000154;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2520719915628433228) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.47549009323120117) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.2999488928571429347;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8289.9365234375) ) ) {
              sum += (double)0.1747491554054054486;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1244204975664615631) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3508.3192138671875) ) ) {
                  sum += (double)0.01229405555555555633;
                } else {
                  sum += (double)0.004654416666666666945;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.92511558532714844) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3354934453964233398) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1816694959998130798) ) ) {
                      sum += (double)0.01633379411764705746;
                    } else {
                      sum += (double)0.04556589999999999946;
                    }
                  } else {
                    sum += (double)0.07960558870967741896;
                  }
                } else {
                  sum += (double)0.1621785227272727059;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.24725341796875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23540.23046875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4075320512056350708) ) ) {
                sum += (double)0.1647387380952380909;
              } else {
                sum += (double)0.09896083333333333121;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9803.51953125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1642175018787384033) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04435000009834766388) ) ) {
                    sum += (double)0.07795886538461536952;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3644345253705978394) ) ) {
                      sum += (double)0.01487661842105262797;
                    } else {
                      sum += (double)0.04498517857142857179;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2154500037431716919) ) ) {
                    sum += (double)0.1350133472222222464;
                  } else {
                    sum += (double)0.05116515277777777121;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.62019252777099609) ) ) {
                  sum += (double)0.06036221428571426906;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4753041267395019531) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.004010750000000000426;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6749369800090789795) ) ) {
                      sum += (double)0.02461498369565216088;
                    } else {
                      sum += (double)0.005133361111111112846;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4789000004529953003) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1432655006647109985) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504999876022338867) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02213350031524896622) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.004187629032258064279;
                    }
                  } else {
                    sum += (double)0.005303055555555556515;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5305143296718597412) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5925500094890594482) ) ) {
                      sum += (double)0.01970173148148148326;
                    } else {
                      sum += (double)0.00737460000000000112;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4915000051259994507) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.007121375000000000101;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-108433.09375) ) ) {
                  sum += (double)0.04764410937499999332;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)70.90322494506835938) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1481999978423118591) ) ) {
                      sum += (double)0.007723147058823529899;
                    } else {
                      sum += (double)0.02507839102564102252;
                    }
                  } else {
                    sum += (double)0.003337999999999999821;
                  }
                }
              }
            } else {
              sum += (double)0.08053923076923076574;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3338336944580078125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3469644933938980103) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.074250001460313797) ) ) {
              sum += (double)0.09791278571428570221;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7830500006675720215) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3025500029325485229) ) ) {
                  sum += (double)0.2710143750000000296;
                } else {
                  sum += (double)0.347422921874999957;
                }
              } else {
                sum += (double)0.159346955882352953;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.0242156982421875) ) ) {
              sum += (double)0.435831511363636348;
            } else {
              sum += (double)0.2868536578947368243;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3435.3092041015625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.3970184326171875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7640308141708374023) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4707500040531158447) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137229979038238525) ) ) {
                    sum += (double)0.2400065535714285825;
                  } else {
                    sum += (double)0.4165303333333333913;
                  }
                } else {
                  sum += (double)0.2056778793103448133;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.339400827884674072) ) ) {
                  sum += (double)0.1682673194444444797;
                } else {
                  sum += (double)0.05094985227272727513;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2911205142736434937) ) ) {
                  sum += (double)0.0960158645833333324;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.197331249713897705) ) ) {
                    sum += (double)0.05224733870967742527;
                  } else {
                    sum += (double)0.0166257833333333313;
                  }
                }
              } else {
                sum += (double)0.1950097699999999989;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3667979985475540161) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135130167007446) ) ) {
                sum += (double)0.003227960000000000638;
              } else {
                sum += (double)0.0133028399999999998;
              }
            } else {
              sum += (double)0.08730972058823527338;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5941531062126159668) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.91369056701660156) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01800000015646219254) ) ) {
                sum += (double)0.5937982272727272415;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08500000089406967163) ) ) {
                  sum += (double)0.4802837499999999538;
                } else {
                  sum += (double)0.5451814027777777127;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05629999935626983643) ) ) {
                sum += (double)0.390153166666666662;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7037499845027923584) ) ) {
                  sum += (double)0.5484883289473684309;
                } else {
                  sum += (double)0.4740386527777777914;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
              sum += (double)0.6773313452380952393;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2413.950927734375) ) ) {
                sum += (double)0.5824779166666665953;
              } else {
                sum += (double)0.6209235882352940328;
              }
            }
          }
        } else {
          sum += (double)0.2217147968750000087;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52560997009277344) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1617.84906005859375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.11821985244750977) ) ) {
                sum += (double)0.6393359431818180783;
              } else {
                sum += (double)0.7081042374999999556;
              }
            } else {
              sum += (double)0.7593409166666666987;
            }
          } else {
            sum += (double)0.5922139868421052444;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
            sum += (double)0.8442843269230770886;
          } else {
            sum += (double)0.7834126532258064435;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
          sum += (double)0.572886038461538516;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31358.93359375) ) ) {
            sum += (double)0.4935819913793103586;
          } else {
            sum += (double)0.2605400294117647397;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.038797378540039062) ) ) {
            sum += (double)0.4376990166666666626;
          } else {
            sum += (double)0.3760422749999999814;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.41131734848022461) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03639999963343143463) ) ) {
              sum += (double)0.2031949531249999941;
            } else {
              sum += (double)0.3205088645833333305;
            }
          } else {
            sum += (double)0.1444341195652174004;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.334890365600585938) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9411062896251678467) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2471444979310035706) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.36401844024658203) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5516571104526519775) ) ) {
                sum += (double)0.2933756979166666778;
              } else {
                sum += (double)0.3985779999999999879;
              }
            } else {
              sum += (double)0.2107020000000000004;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375280022621154785) ) ) {
              sum += (double)0.04585389999999998911;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01289999997243285179) ) ) {
                sum += (double)0.2745297333333333034;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6785500049591064453) ) ) {
                  sum += (double)0.2023352031250000294;
                } else {
                  sum += (double)0.0561465400000000156;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.494290729999999956;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2454.423583984375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340396493673324585) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.3608593437500000611;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3085854947566986084) ) ) {
                      sum += (double)0.4286959130434782606;
                    } else {
                      sum += (double)0.3784635937499999936;
                    }
                  }
                } else {
                  sum += (double)0.4585370555555555727;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5983.13427734375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.624182939529418945) ) ) {
                    sum += (double)0.3787313749999999257;
                  } else {
                    sum += (double)0.4364044499999999993;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04420000128448009491) ) ) {
                    sum += (double)0.3706380468749999602;
                  } else {
                    sum += (double)0.2310336574074074445;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.604651212692260742) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.781930327415466309) ) ) {
                  sum += (double)0.2467947000000000057;
                } else {
                  sum += (double)0.3929068392857142378;
                }
              } else {
                sum += (double)0.1612000416666666547;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
          sum += (double)0.1987727666666666559;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1022499985992908478) ) ) {
            sum += (double)0.06978216666666667289;
          } else {
            sum += (double)0.03389297727272726907;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.85100173950195312) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9570.9716796875) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75500011444091797) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1396999955177307129) ) ) {
                sum += (double)0.2510688552631579196;
              } else {
                sum += (double)0.1306843166666666611;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3201293796300888062) ) ) {
                sum += (double)0.4113883472222221727;
              } else {
                sum += (double)0.2929868833333333922;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3110343515872955322) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7528499960899353027) ) ) {
                sum += (double)0.3040667031249999486;
              } else {
                sum += (double)0.1631329218750000032;
              }
            } else {
              sum += (double)0.1016259596774193447;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.126681499183177948) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1053149998188018799) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03155000042170286179) ) ) {
                sum += (double)0.003192241935483871099;
              } else {
                sum += (double)0.01391088043478261142;
              }
            } else {
              sum += (double)0.02776868749999999997;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7547686100006103516) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2991515100002288818) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01099999994039535522) ) ) {
                  sum += (double)0.2393543166666667055;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05109999887645244598) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29761934280395508) ) ) {
                      sum += (double)0.08195328571428570075;
                    } else {
                      sum += (double)0.02027016000000000234;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2255704998970031738) ) ) {
                      sum += (double)0.08878305978260866982;
                    } else {
                      sum += (double)0.1534739013157894738;
                    }
                  }
                }
              } else {
                sum += (double)0.2395749903846154105;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3497499972581863403) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.23897075653076172) ) ) {
                  sum += (double)0.0035270277777777778;
                } else {
                  sum += (double)0.0252493166666666706;
                }
              } else {
                sum += (double)0.04290969999999998813;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.21702194213867188) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.654000014066696167) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.4272003173828125) ) ) {
                  sum += (double)0.1495914218749999913;
                } else {
                  sum += (double)0.04151077000000000239;
                }
              } else {
                sum += (double)0.2186765769230769041;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7613.465087890625) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5580966174602508545) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.183251500129699707) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.30276775360107422) ) ) {
                      sum += (double)0.01129974468085106348;
                    } else {
                      sum += (double)0.03739424999999999694;
                    }
                  } else {
                    sum += (double)0.06535870833333334851;
                  }
                } else {
                  sum += (double)0.1303086562500000156;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                  sum += (double)0.002500000000000000486;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.36666679382324219) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3453.966064453125) ) ) {
                      sum += (double)0.008484617647058824777;
                    } else {
                      sum += (double)0.00268286363636363644;
                    }
                  } else {
                    sum += (double)0.01915966666666666859;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4760999977588653564) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2013000026345252991) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1339999958872795105) ) ) {
                  sum += (double)0.01179673076923076942;
                } else {
                  sum += (double)0.05853249999999999426;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1829499974846839905) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22404.6650390625) ) ) {
                      sum += (double)0.006074309701492538495;
                    } else {
                      sum += (double)0.002552183823529413469;
                    }
                  } else {
                    sum += (double)0.01225427777777777713;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914142906665802002) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3927500098943710327) ) ) {
                      sum += (double)0.04837514999999999871;
                    } else {
                      sum += (double)0.01650402272727272482;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            } else {
              sum += (double)0.06158091176470588402;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4436464756727218628) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              sum += (double)0.2720332222222222596;
            } else {
              sum += (double)0.1411149027777777454;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8536425232887268066) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2870550006628036499) ) ) {
                sum += (double)0.07333728448275862732;
              } else {
                sum += (double)0.1637877631578947557;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.72916603088378906) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.0509490966796875) ) ) {
                  sum += (double)0.03355670588235293295;
                } else {
                  sum += (double)0.1085108392857142695;
                }
              } else {
                sum += (double)0.008810725000000000154;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6223134994506835938) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.86428451538085938) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860465049743652344) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
                  sum += (double)0.4221825694444443777;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3945.7642822265625) ) ) {
                    sum += (double)0.4396103750000000532;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.195782877504825592) ) ) {
                      sum += (double)0.5252530192307692802;
                    } else {
                      sum += (double)0.4751850921052631627;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0685500018298625946) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2539.494873046875) ) ) {
                    sum += (double)0.5896840916666666876;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.479468584060668945) ) ) {
                      sum += (double)0.5647794558823528988;
                    } else {
                      sum += (double)0.4930737124999999277;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110409684479236603) ) ) {
                    sum += (double)0.3822076176470587949;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4239085018634796143) ) ) {
                      sum += (double)0.4639580416666667095;
                    } else {
                      sum += (double)0.5618625681818181228;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.4050673214285713253;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.717261791229248047) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.981343269348144531) ) ) {
                sum += (double)0.5924011785714284883;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3324.51171875) ) ) {
                  sum += (double)0.6429083125000000232;
                } else {
                  sum += (double)0.6935208499999999665;
                }
              }
            } else {
              sum += (double)0.509435097222222133;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.83683013916015625) ) ) {
            sum += (double)0.3552974107142857774;
          } else {
            sum += (double)0.1609848409090909316;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8408499956130981445) ) ) {
              sum += (double)0.6515878214285714121;
            } else {
              sum += (double)0.741175830000000091;
            }
          } else {
            sum += (double)0.62284732954545452;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
            sum += (double)0.8933555294117647705;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.10836637020111084) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0400000009685754776) ) ) {
                sum += (double)0.8220026931818181781;
              } else {
                sum += (double)0.7627822031250000023;
              }
            } else {
              sum += (double)0.713063386363636309;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5136469900608062744) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.4033292282608695878;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4405760020017623901) ) ) {
              sum += (double)0.0929180833333333317;
            } else {
              sum += (double)0.2113384868421052387;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.237550005316734314) ) ) {
            sum += (double)0.04793560833333332383;
          } else {
            sum += (double)0.1464649285714285654;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6907439827919006348) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2602500021457672119) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
              sum += (double)0.4225118676470587809;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1743.9248046875) ) ) {
                sum += (double)0.3534620833333332324;
              } else {
                sum += (double)0.09355662499999999049;
              }
            }
          } else {
            sum += (double)0.4352452159090909323;
          }
        } else {
          sum += (double)0.5204666249999999605;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.772959232330322266) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9411062896251678467) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2268904969096183777) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4155.423583984375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.171291828155517578) ) ) {
              sum += (double)0.2126933399999999807;
            } else {
              sum += (double)0.3177503333333333013;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1785.6107177734375) ) ) {
              sum += (double)0.1455387173913043342;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.714285612106323242) ) ) {
                sum += (double)0.07401870000000000671;
              } else {
                sum += (double)0.009070681818181819747;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
            sum += (double)0.48998049999999993;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.642801284790039062) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0213000001385807991) ) ) {
                sum += (double)0.303789033333333347;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3144880086183547974) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.402941226959228516) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4830499887466430664) ) ) {
                      sum += (double)0.3730198124999999365;
                    } else {
                      sum += (double)0.4205086071428570937;
                    }
                  } else {
                    sum += (double)0.3388338749999999511;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2111740335822105408) ) ) {
                    sum += (double)0.479718737499999992;
                  } else {
                    sum += (double)0.4069774117647059208;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4979499876499176025) ) ) {
                sum += (double)0.1683496964285713937;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5481.26025390625) ) ) {
                  sum += (double)0.3889318199999999837;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7365500032901763916) ) ) {
                    sum += (double)0.3365038148148148389;
                  } else {
                    sum += (double)0.1883253035714285428;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5132.362060546875) ) ) {
          sum += (double)0.1734947000000000294;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1896.6485595703125) ) ) {
            sum += (double)0.05455193750000000147;
          } else {
            sum += (double)0.02203954166666666561;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1218929998576641083) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
          sum += (double)0.1009188749999999912;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07213700190186500549) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1418999955058097839) ) ) {
              sum += (double)0.01863419047619047433;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1477999985218048096) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.69508552551269531) ) ) {
                  sum += (double)0.005878956521739130484;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20832.8955078125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)65.63636398315429688) ) ) {
                      sum += (double)0.008081430555555555242;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8076499998569488525) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.002971464285714285614;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2346000000834465027) ) ) {
                  sum += (double)0.01234570000000000112;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)241.4296875) ) ) {
                    sum += (double)0.006076766666666667122;
                  } else {
                    sum += (double)0.002499999999999999618;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18768.794921875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.10022926330566406) ) ) {
                sum += (double)0.1095723409090909178;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)470.0023956298828125) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089999884366989136) ) ) {
                    sum += (double)0.05770126666666666737;
                  } else {
                    sum += (double)0.01495509999999999895;
                  }
                } else {
                  sum += (double)0.004688233333333334009;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.08292245864868164) ) ) {
                sum += (double)0.03669995833333333096;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.89824485778808594) ) ) {
                  sum += (double)0.02219899999999999998;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4505621790885925293) ) ) {
                    sum += (double)0.007394357142857142622;
                  } else {
                    sum += (double)0.002721781249999999808;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3447867631912231445) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.26908150315284729) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.98148155212402344) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4927.646728515625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6967499852180480957) ) ) {
                  sum += (double)0.3127101749999999791;
                } else {
                  sum += (double)0.1520824166666666644;
                }
              } else {
                sum += (double)0.08415973684210524552;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17908.3349609375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.05915641784667969) ) ) {
                  sum += (double)0.2610121249999999837;
                } else {
                  sum += (double)0.06939136904761904201;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090284973382949829) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6818999946117401123) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1673384979367256165) ) ) {
                      sum += (double)0.01725406818181818291;
                    } else {
                      sum += (double)0.03676198750000000959;
                    }
                  } else {
                    sum += (double)0.07956440740740741702;
                  }
                } else {
                  sum += (double)0.1249436634615384567;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.46869182586669922) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.82800865173339844) ) ) {
                sum += (double)0.224181279411764689;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.06944465637207031) ) ) {
                  sum += (double)0.4220083214285714202;
                } else {
                  sum += (double)0.2985155185185184856;
                }
              }
            } else {
              sum += (double)0.1539633095238095162;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.574951171875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4379.823974609375) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.56131649017333984) ) ) {
                sum += (double)0.2632558157894737128;
              } else {
                sum += (double)0.1717772000000000188;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5735852718353271484) ) ) {
                sum += (double)0.1071756818181818088;
              } else {
                sum += (double)0.01600478000000000317;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3996500074863433838) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02429999969899654388) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01059999968856573105) ) ) {
                  sum += (double)0.01566652272727272685;
                } else {
                  sum += (double)0.233750538461538454;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1792500019073486328) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1481999978423118591) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.291566997766494751) ) ) {
                      sum += (double)0.02027457575757575861;
                    } else {
                      sum += (double)0.03784765384615384337;
                    }
                  } else {
                    sum += (double)0.1138333124999999918;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2296500056982040405) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380996048450469971) ) ) {
                      sum += (double)0.04764915384615384109;
                    } else {
                      sum += (double)0.01648859183673469231;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9735.466796875) ) ) {
                      sum += (double)0.01274770000000000243;
                    } else {
                      sum += (double)0.002637391304347826235;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.10000038146972656) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2578500062227249146) ) ) {
                  sum += (double)0.07352914285714284848;
                } else {
                  sum += (double)0.2085519264705882336;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5292499959468841553) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2239565029740333557) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.4459686279296875) ) ) {
                      sum += (double)0.03789189880952380934;
                    } else {
                      sum += (double)0.01428956818181818453;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5143499970436096191) ) ) {
                      sum += (double)0.04238604411764706342;
                    } else {
                      sum += (double)0.1101286451612903255;
                    }
                  }
                } else {
                  sum += (double)0.1455973749999999733;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4077123850584030151) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.166666507720947266) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8790999948978424072) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.189049161970615387) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7111499905586242676) ) ) {
                    sum += (double)0.565092956521739076;
                  } else {
                    sum += (double)0.5184527321428571423;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.080534696578979492) ) ) {
                    sum += (double)0.5127744782608695262;
                  } else {
                    sum += (double)0.405523300000000031;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3169.0711669921875) ) ) {
                  sum += (double)0.5092168499999999431;
                } else {
                  sum += (double)0.6219564875000000992;
                }
              }
            } else {
              sum += (double)0.4558531500000000403;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.745000004768371582) ) ) {
              sum += (double)0.5182269196428571645;
            } else {
              sum += (double)0.6404732692307691932;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6380.457763671875) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3168999999761581421) ) ) {
              sum += (double)0.4616066315789473795;
            } else {
              sum += (double)0.3594987187500000014;
            }
          } else {
            sum += (double)0.242963430555555554;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.38541603088378906) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7521069943904876709) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.265974998474121094) ) ) {
              sum += (double)0.6090509117647057158;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.64749813079833984) ) ) {
                  sum += (double)0.7321163552631579918;
                } else {
                  sum += (double)0.7723023571428571099;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6773000061511993408) ) ) {
                  sum += (double)0.6893224659090908535;
                } else {
                  sum += (double)0.6405671590909088886;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1727.71044921875) ) ) {
              sum += (double)0.7707853750000001058;
            } else {
              sum += (double)0.8297413586956521314;
            }
          }
        } else {
          sum += (double)0.4933195357142856619;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.286122560501098633) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06249999813735485077) ) ) {
            sum += (double)0.2918335119047619219;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.648295462131500244) ) ) {
              sum += (double)0.5341113392857143038;
            } else {
              sum += (double)0.4117168333333333652;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1313.27392578125) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2559500038623809814) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.24266815185546875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
                  sum += (double)0.2020168124999999759;
                } else {
                  sum += (double)0.3691498369565218152;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05985000170767307281) ) ) {
                  sum += (double)0.2493536029411764776;
                } else {
                  sum += (double)0.07743287499999999823;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4842914938926696777) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.16258716583251953) ) ) {
                  sum += (double)0.379719407894736849;
                } else {
                  sum += (double)0.1994024772727272798;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
                  sum += (double)0.4836178026315789413;
                } else {
                  sum += (double)0.3826715652173913185;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1227499991655349731) ) ) {
              sum += (double)0.05552561607142857819;
            } else {
              sum += (double)0.151949367647058825;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          sum += (double)0.6528225921052632774;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0439999997615814209) ) ) {
            sum += (double)0.3024580294117647505;
          } else {
            sum += (double)0.4715923676470588077;
          }
        }
      }
    }
  }
  return sum;
}
