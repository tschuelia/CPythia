#include "header.h"
double predict_margin_unit1(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2081.919677734375) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1208685003221035004) ) ) {
              sum += (double)0.105518352941176452;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4193079918622970581) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1224601194262504578) ) ) {
                    sum += (double)0.342349480769230774;
                  } else {
                    sum += (double)0.2387024021739130031;
                  }
                } else {
                  sum += (double)0.3774663928571428961;
                }
              } else {
                sum += (double)0.1816077105263158298;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5300.90771484375) ) ) {
              sum += (double)0.1453198676470587869;
            } else {
              sum += (double)0.07506837499999999275;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.236059486865997314) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5445585499999999746;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.701502323150634766) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4842.13134765625) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7213999927043914795) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07234999909996986389) ) ) {
                      sum += (double)0.4209359479166667195;
                    } else {
                      sum += (double)0.3760050909090908999;
                    }
                  } else {
                    sum += (double)0.4614931166666667028;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6028500199317932129) ) ) {
                      sum += (double)0.425810354166666627;
                    } else {
                      sum += (double)0.3411156842105263487;
                    }
                  } else {
                    sum += (double)0.25218988392857139;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10100.53466796875) ) ) {
                  sum += (double)0.4344208653846153845;
                } else {
                  sum += (double)0.1640174416666667079;
                }
              }
            }
          } else {
            sum += (double)0.1392090000000000272;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.741173475980758667) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1638465002179145813) ) ) {
              sum += (double)0.01888279166666666578;
            } else {
              sum += (double)0.1151049843749999968;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.47527408599853516) ) ) {
              sum += (double)0.2055881718750000031;
            } else {
              sum += (double)0.3497849210526315922;
            }
          }
        } else {
          sum += (double)0.03477310344827586053;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37796592712402344) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999919673427939) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4354.428955078125) ) ) {
              sum += (double)0.3242860769230769824;
            } else {
              sum += (double)0.01702785000000000062;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17800.208984375) ) ) {
              sum += (double)0.1990797812500000041;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1356304958462715149) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.69868755340576172) ) ) {
                  sum += (double)0.03333522115384614931;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3901.7249755859375) ) ) {
                    sum += (double)0.00454412121212121288;
                  } else {
                    sum += (double)0.01970776315789473862;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6740500032901763916) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2196839973330497742) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8089.1904296875) ) ) {
                      sum += (double)0.06849159782608695013;
                    } else {
                      sum += (double)0.02565220512820512444;
                    }
                  } else {
                    sum += (double)0.09423832291666667249;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7265999913215637207) ) ) {
                    sum += (double)0.2039853055555555239;
                  } else {
                    sum += (double)0.09940521052631579035;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07228600233793258667) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.01677103846153845876;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0221225004643201828) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003746277777777778061;
                  }
                } else {
                  sum += (double)0.004578593750000000198;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.258331298828125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05950300022959709167) ) ) {
                    sum += (double)0.01303978571428571383;
                  } else {
                    sum += (double)0.003645222222222221573;
                  }
                } else {
                  sum += (double)0.002697672413793104299;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8713.66552734375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2272984981536865234) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.25232887268066406) ) ) {
                      sum += (double)0.04117909482758620732;
                    } else {
                      sum += (double)0.1252064374999999896;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2261999994516372681) ) ) {
                      sum += (double)0.06488987499999998576;
                    } else {
                      sum += (double)0.02118596495327101231;
                    }
                  }
                } else {
                  sum += (double)0.1330084218750000047;
                }
              } else {
                sum += (double)0.1353196249999999989;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2886999994516372681) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5506.0888671875) ) ) {
                  sum += (double)0.005975441176470589616;
                } else {
                  sum += (double)0.002743818181818181903;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.83333206176757812) ) ) {
                  sum += (double)0.03614210714285713555;
                } else {
                  sum += (double)0.007711375000000001215;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.436163976788520813) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04859999939799308777) ) ) {
            sum += (double)0.05849497727272727488;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.36176490783691406) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13844.26904296875) ) ) {
                sum += (double)0.3684390340909091122;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2505646571516990662) ) ) {
                  sum += (double)0.2141980588235294636;
                } else {
                  sum += (double)0.3418311166666666567;
                }
              }
            } else {
              sum += (double)0.1417274117647058795;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8853.6728515625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3124414980411529541) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18617.05078125) ) ) {
                  sum += (double)0.2160644659090909248;
                } else {
                  sum += (double)0.0756769124999999987;
                }
              } else {
                sum += (double)0.3027655526315788936;
              }
            } else {
              sum += (double)0.03360809999999999492;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3470.424560546875) ) ) {
              sum += (double)0.0576333586956521704;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3055260032415390015) ) ) {
                sum += (double)0.02694184210526315293;
              } else {
                sum += (double)0.003647650000000000111;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4755957424640655518) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.072627067565917969) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06887514889240264893) ) ) {
              sum += (double)0.5432151574074073341;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1152.593994140625) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.469152495265007019) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.226428747177124023) ) ) {
                      sum += (double)0.5098848518518518391;
                    } else {
                      sum += (double)0.5616691041666667106;
                    }
                  } else {
                    sum += (double)0.4460110978260869441;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.455177009105682373) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4031770080327987671) ) ) {
                      sum += (double)0.4535718846153846684;
                    } else {
                      sum += (double)0.3363324615384615246;
                    }
                  } else {
                    sum += (double)0.4975400344827585752;
                  }
                }
              } else {
                sum += (double)0.4043216999999999506;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9841.20166015625) ) ) {
              sum += (double)0.4220329875000000119;
            } else {
              sum += (double)0.3048326562500000003;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1584558635950088501) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.6935012272727273386;
              } else {
                sum += (double)0.6443543026315787792;
              }
            } else {
              sum += (double)0.5856492999999999283;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.469733715057373047) ) ) {
              sum += (double)0.5528173250000000261;
            } else {
              sum += (double)0.3574762708333333872;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.043953895568847656) ) ) {
              sum += (double)0.6600572499999999287;
            } else {
              sum += (double)0.7315174062500000574;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7677999734878540039) ) ) {
              sum += (double)0.69405534615384612;
            } else {
              sum += (double)0.5787712763157893958;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7972635030746459961) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1857.13079833984375) ) ) {
                sum += (double)0.7700686153846152404;
              } else {
                sum += (double)0.8359442333333333419;
              }
            } else {
              sum += (double)0.70698586842105271;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03189999982714653015) ) ) {
              sum += (double)0.8732219843750000932;
            } else {
              sum += (double)0.8229310156250000396;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552080005407333374) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
          sum += (double)0.4364423020833332889;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.206250190734863281) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2888.6907958984375) ) ) {
              sum += (double)0.3898025875000000751;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
                sum += (double)0.1397948839285713951;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05499999970197677612) ) ) {
                  sum += (double)0.2086247954545454586;
                } else {
                  sum += (double)0.2843421785714285721;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.63956832885742188) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4249790012836456299) ) ) {
                sum += (double)0.02056595312500000133;
              } else {
                sum += (double)0.05494922368421050612;
              }
            } else {
              sum += (double)0.2338057199999999947;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2709999978542327881) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02779999934136867523) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
              sum += (double)0.4463229285714285233;
            } else {
              sum += (double)0.5065903076923077286;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1117499992251396179) ) ) {
              sum += (double)0.2037035113636363748;
            } else {
              sum += (double)0.3816059700000000166;
            }
          }
        } else {
          sum += (double)0.5315285775862068629;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.1796875) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4758750051259994507) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2505149990320205688) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3075.2962646484375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
            sum += (double)0.4143491607142856803;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410804986953735352) ) ) {
              sum += (double)0.06805494047619047027;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.90123271942138672) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4208000004291534424) ) ) {
                  sum += (double)0.2733526527777777604;
                } else {
                  sum += (double)0.3748111125000000432;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.231225967407226562) ) ) {
                  sum += (double)0.2296701847826086718;
                } else {
                  sum += (double)0.1497612343749999964;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78649044036865234) ) ) {
            sum += (double)0.1444635760869565078;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.07965805882352941514;
            } else {
              sum += (double)0.03446153409090908781;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7523927986621856689) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1935466602444648743) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1128728315234184265) ) ) {
                sum += (double)0.3580898815789473888;
              } else {
                sum += (double)0.1997800092592592613;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2833690047264099121) ) ) {
                  sum += (double)0.404592578947368442;
                } else {
                  sum += (double)0.4919845657894736379;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3564.0457763671875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4565397650003433228) ) ) {
                    sum += (double)0.4450924375000000488;
                  } else {
                    sum += (double)0.3817132352941176032;
                  }
                } else {
                  sum += (double)0.2936218815789473635;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3088789135217666626) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4449169933795928955) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.25041961669921875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02029999997466802597) ) ) {
                      sum += (double)0.537216722222222276;
                    } else {
                      sum += (double)0.4894346388888889954;
                    }
                  } else {
                    sum += (double)0.446884281250000015;
                  }
                } else {
                  sum += (double)0.5693004999999999871;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.053278684616088867) ) ) {
                  sum += (double)0.4870386527777776919;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.454591751098632812) ) ) {
                    sum += (double)0.3587781250000000033;
                  } else {
                    sum += (double)0.4375905833333332828;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02929999958723783493) ) ) {
                sum += (double)0.4685732916666666692;
              } else {
                sum += (double)0.3459445955882352042;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5359.331298828125) ) ) {
            sum += (double)0.2847264749999999789;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373667493462562561) ) ) {
              sum += (double)0.04355428409090908448;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.065607547760009766) ) ) {
                sum += (double)0.2398356203703703171;
              } else {
                sum += (double)0.1332231547619047163;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5307764112949371338) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5806144773960113525) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006150000030174851418) ) ) {
              sum += (double)0.6367948181818182674;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3567.67431640625) ) ) {
                sum += (double)0.5215462642857141562;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.04654645919799805) ) ) {
                  sum += (double)0.5389721428571428996;
                } else {
                  sum += (double)0.6108771911764705465;
                }
              }
            }
          } else {
            sum += (double)0.4562997375000000244;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.611263751983642578) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01660000067204236984) ) ) {
                sum += (double)0.6704801739130433758;
              } else {
                sum += (double)0.7215086145833332631;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8123999834060668945) ) ) {
                sum += (double)0.6640037741935483906;
              } else {
                sum += (double)0.5898966770833332651;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09039999917149543762) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.11297142505645752) ) ) {
                  sum += (double)0.8172624500000000847;
                } else {
                  sum += (double)0.7663457999999999659;
                }
              } else {
                sum += (double)0.8642972187499999848;
              }
            } else {
              sum += (double)0.7033854736842105604;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.138076305389404297) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.894699394702911377) ) ) {
            sum += (double)0.488039500000000015;
          } else {
            sum += (double)0.4353898809523809588;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1588.35455322265625) ) ) {
            sum += (double)0.4154828804347826532;
          } else {
            sum += (double)0.1385647500000000143;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.25287342071533203) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11655.693359375) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
            sum += (double)0.3183588200000000423;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19272.123046875) ) ) {
              sum += (double)0.291113642857142807;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1207876689732074738) ) ) {
                sum += (double)0.1915323928571428524;
              } else {
                sum += (double)0.07688023863636363198;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.160686001181602478) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.61268901824951172) ) ) {
              sum += (double)0.1031076071428571467;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1377381086349487305) ) ) {
                sum += (double)0.04890110000000000984;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1089744977653026581) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07167300209403038025) ) ) {
                    sum += (double)0.005692904761904762738;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.02703514999999999044;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4348.305419921875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6368000209331512451) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5896.275390625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139104977250099182) ) ) {
                    sum += (double)0.02928673749999999992;
                  } else {
                    sum += (double)0.1261756710526315828;
                  }
                } else {
                  sum += (double)0.2009593529411764501;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7445999979972839355) ) ) {
                  sum += (double)0.2788227968750000008;
                } else {
                  sum += (double)0.151442283333333344;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.64444446563720703) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0694999992847442627) ) ) {
                  sum += (double)0.05754327500000000484;
                } else {
                  sum += (double)0.01765850000000000058;
                }
              } else {
                sum += (double)0.1224206818181818035;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1039480008184909821) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04403600096702575684) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1978999972343444824) ) ) {
                    sum += (double)0.004892666666666665824;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02652399986982345581) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003122524999999999693;
                    }
                  }
                } else {
                  sum += (double)0.006356590909090909826;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.4647064208984375) ) ) {
                  sum += (double)0.01209314705882352965;
                } else {
                  sum += (double)0.003843250000000000312;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01805000007152557373) ) ) {
                sum += (double)0.05837885416666666744;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-81927.033203125) ) ) {
                  sum += (double)0.02638449999999999476;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.24473762512207031) ) ) {
                    sum += (double)0.01467209999999999868;
                  } else {
                    sum += (double)0.005458086206896552856;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10805.9150390625) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.18300628662109375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28458.671875) ) ) {
                  sum += (double)0.1502581406249999807;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2403999939560890198) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.46859836578369141) ) ) {
                      sum += (double)0.0432000699999999932;
                    } else {
                      sum += (double)0.008109382352941176333;
                    }
                  } else {
                    sum += (double)0.09048023913043476418;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-108144.5859375) ) ) {
                  sum += (double)0.0496849605263157898;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)133.1777725219726562) ) ) {
                    sum += (double)0.02548492708333333426;
                  } else {
                    sum += (double)0.005565652173913043614;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
                sum += (double)0.02721386956521739189;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                  sum += (double)0.008969782608695653706;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.360899999737739563) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1055999994277954102) ) ) {
              sum += (double)0.08903908333333335201;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.93773937225341797) ) ) {
                sum += (double)0.0348914999999999989;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.079432129859924316) ) ) {
                  sum += (double)0.01673520000000000216;
                } else {
                  sum += (double)0.003388788461538461746;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39530.7109375) ) ) {
              sum += (double)0.203879519999999953;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3245434314012527466) ) ) {
                  sum += (double)0.09168018749999998218;
                } else {
                  sum += (double)0.03486331896551723986;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2799475044012069702) ) ) {
                  sum += (double)0.2021536851851852001;
                } else {
                  sum += (double)0.05559288709677420032;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2955.4609375) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.35758638381958008) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4551979899406433105) ) ) {
            sum += (double)0.4468898863636363017;
          } else {
            sum += (double)0.5887736764705883141;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6368684768676757812) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.41847801208496094) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.265841901302337646) ) ) {
                sum += (double)0.1382324218750000111;
              } else {
                sum += (double)0.02679078124999999949;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.02500057220458984) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1631999984383583069) ) ) {
                  sum += (double)0.3651486428571428244;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929204940795898438) ) ) {
                    sum += (double)0.190213138888888883;
                  } else {
                    sum += (double)0.3022272656249999634;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06079999916255474091) ) ) {
                  sum += (double)0.2962920795454545009;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2088999971747398376) ) ) {
                    sum += (double)0.0694906315789473733;
                  } else {
                    sum += (double)0.2009857222222222184;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4459332333333333453;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1552.8240966796875) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4169075042009353638) ) ) {
            sum += (double)0.03985816071428571056;
          } else {
            sum += (double)0.2105178437499999888;
          }
        } else {
          sum += (double)0.03140320967741935115;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211225062608718872) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.986842155456542969) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9540440738201141357) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2602.255126953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.748910665512084961) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5278.861572265625) ) ) {
                sum += (double)0.3310565961538461943;
              } else {
                sum += (double)0.2616666624999999802;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
                sum += (double)0.2748604090909090858;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.595749974250793457) ) ) {
                  sum += (double)0.197393847222222224;
                } else {
                  sum += (double)0.1237053499999999917;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.44529438018798828) ) ) {
              sum += (double)0.1484214642857142885;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1377794146537780762) ) ) {
                sum += (double)0.0662282631578947345;
              } else {
                sum += (double)0.006282346153846153983;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.30740070343017578) ) ) {
              sum += (double)0.4904247499999999649;
            } else {
              sum += (double)0.586684855263157945;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2089.525634765625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.388249397277832031) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2945509999990463257) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4119.788330078125) ) ) {
                      sum += (double)0.403936952380952341;
                    } else {
                      sum += (double)0.3303172291666666704;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                      sum += (double)0.3857841724137930917;
                    } else {
                      sum += (double)0.451317916666666652;
                    }
                  }
                } else {
                  sum += (double)0.2838751250000000059;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708500012755393982) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2202402055263519287) ) ) {
                    sum += (double)0.5219570416666666768;
                  } else {
                    sum += (double)0.4744656904761905269;
                  }
                } else {
                  sum += (double)0.3942040795454544999;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431999802589416504) ) ) {
                sum += (double)0.200482166666666628;
              } else {
                sum += (double)0.3919142946428570973;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
          sum += (double)0.2377942499999999848;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745680004358291626) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.634942293167114258) ) ) {
              sum += (double)0.01863282499999999869;
            } else {
              sum += (double)0.04799468749999998701;
            }
          } else {
            sum += (double)0.1580535714285714322;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.95833301544189453) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7780.98876953125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2282579988241195679) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
              sum += (double)0.3407979999999999898;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90450191497802734) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13484.2763671875) ) ) {
                  sum += (double)0.1696790340909090922;
                } else {
                  sum += (double)0.07854707407407406083;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.626100003719329834) ) ) {
                  sum += (double)0.0152015434782608698;
                } else {
                  sum += (double)0.0570724880952380928;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.7567138671875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3361559957265853882) ) ) {
                sum += (double)0.30326717307692308;
              } else {
                sum += (double)0.4376416428571429096;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1088537499308586121) ) ) {
                sum += (double)0.1418837857142856984;
              } else {
                sum += (double)0.2421163375000000006;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1319625005125999451) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661259710788726807) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3171.4632568359375) ) ) {
                  sum += (double)0.008834307692307693388;
                } else {
                  sum += (double)0.003913820000000001013;
                }
              } else {
                sum += (double)0.03063189000000000536;
              }
            } else {
              sum += (double)0.06438306666666665512;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7748008370399475098) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3822999894618988037) ) ) {
                sum += (double)0.2665605374999999722;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6800500154495239258) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07142877578735352) ) ) {
                      sum += (double)0.08458070312500000354;
                    } else {
                      sum += (double)0.02822290740740740142;
                    }
                  } else {
                    sum += (double)0.1788022083333332957;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7495000064373016357) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5051.802734375) ) ) {
                      sum += (double)0.1051158500000000107;
                    } else {
                      sum += (double)0.2051212250000000459;
                    }
                  } else {
                    sum += (double)0.0570317222222222267;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658484965562820435) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.137150004506111145) ) ) {
                  sum += (double)0.01622307692307692339;
                } else {
                  sum += (double)0.006298571428571430285;
                }
              } else {
                sum += (double)0.06124583928571427499;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2211309969425201416) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1456689983606338501) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
                sum += (double)0.06057078571428570896;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04397500120103359222) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8332000076770782471) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1958000063896179199) ) ) {
                      sum += (double)0.002532515873015874375;
                    } else {
                      sum += (double)0.003572799999999999674;
                    }
                  } else {
                    sum += (double)0.008332541666666666916;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.6366195678710938) ) ) {
                    sum += (double)0.01078376470588235207;
                  } else {
                    sum += (double)0.003156611111111110902;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)316.6353302001953125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21883.97265625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.12103462219238281) ) ) {
                    sum += (double)0.08025137499999999979;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089999884366989136) ) ) {
                      sum += (double)0.04003880000000000633;
                    } else {
                      sum += (double)0.01471846875000000152;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1162500008940696716) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.535740286111831665) ) ) {
                      sum += (double)0.0166122391304347819;
                    } else {
                      sum += (double)0.004296034482758621931;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2246499955654144287) ) ) {
                      sum += (double)0.04428077272727272418;
                    } else {
                      sum += (double)0.008395529411764706199;
                    }
                  }
                }
              } else {
                sum += (double)0.004014553571428571693;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10007.7607421875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.38099193572998047) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5610999763011932373) ) ) {
                  sum += (double)0.0811744038461538614;
                } else {
                  sum += (double)0.1812624807692307938;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-116296.8984375) ) ) {
                  sum += (double)0.08516075000000000728;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.80967807769775391) ) ) {
                    sum += (double)0.05300970000000000681;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5986100733280181885) ) ) {
                      sum += (double)0.0217232142857142832;
                    } else {
                      sum += (double)0.005840062500000001502;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5755.68701171875) ) ) {
                sum += (double)0.019593433333333337;
              } else {
                sum += (double)0.002500000000000000486;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7375432848930358887) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.72857093811035156) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656299978494644165) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.52387619018554688) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1873499974608421326) ) ) {
                    sum += (double)0.07100782352941176212;
                  } else {
                    sum += (double)0.2407404666666666804;
                  }
                } else {
                  sum += (double)0.3049547999999999703;
                }
              } else {
                sum += (double)0.07212378409090908216;
              }
            } else {
              sum += (double)0.05073909210526315189;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1034500002861022949) ) ) {
              sum += (double)0.08466805357142857813;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4061000049114227295) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3362510055303573608) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.46249961853027344) ) ) {
                    sum += (double)0.01342560000000000281;
                  } else {
                    sum += (double)0.004792406250000000659;
                  }
                } else {
                  sum += (double)0.03087769999999999057;
                }
              } else {
                sum += (double)0.07254023684210526846;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.422753453254699707) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1941.93548583984375) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430997848510742188) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.444673538208007812) ) ) {
                sum += (double)0.461647249999999898;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.821428537368774414) ) ) {
                  sum += (double)0.6195342361111111362;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09611644968390464783) ) ) {
                    sum += (double)0.4720176249999999962;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7013500034809112549) ) ) {
                      sum += (double)0.5936435925925925838;
                    } else {
                      sum += (double)0.5236112631578947463;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1811716482043266296) ) ) {
                sum += (double)0.3532569687500000111;
              } else {
                sum += (double)0.4831020138888889592;
              }
            }
          } else {
            sum += (double)0.3540746071428571562;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.275970220565795898) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6591499745845794678) ) ) {
              sum += (double)0.5755368695652173239;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.654179573059082031) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1815.1107177734375) ) ) {
                  sum += (double)0.660631999999999997;
                } else {
                  sum += (double)0.6920676111111111473;
                }
              } else {
                sum += (double)0.6272181500000000298;
              }
            }
          } else {
            sum += (double)0.442870383333333284;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.250849008560180664) ) ) {
              sum += (double)0.7624681931818183545;
            } else {
              sum += (double)0.6999515357142856997;
            }
          } else {
            sum += (double)0.6757379166666667158;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.146208643913269043) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02924999967217445374) ) ) {
              sum += (double)0.8633718076923078133;
            } else {
              sum += (double)0.8303212500000001217;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06571529805660247803) ) ) {
              sum += (double)0.7253339583333332508;
            } else {
              sum += (double)0.7971344166666666231;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.215148568153381348) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5486334860324859619) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25759792327880859) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1266499981284141541) ) ) {
              sum += (double)0.3645595147058823815;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5959.772705078125) ) ) {
                sum += (double)0.4341870972222222069;
              } else {
                sum += (double)0.535255449999999966;
              }
            }
          } else {
            sum += (double)0.2192669999999999897;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09939999878406524658) ) ) {
            sum += (double)0.4708181363636362859;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6644209921360015869) ) ) {
              sum += (double)0.5770824423076923448;
            } else {
              sum += (double)0.6606126750000000936;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.3898628392857143576;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6156424880027770996) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127980709075927734) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1681.68902587890625) ) ) {
                sum += (double)0.2882669318181818596;
              } else {
                sum += (double)0.1407095535714285583;
              }
            } else {
              sum += (double)0.1163564880952381031;
            }
          } else {
            sum += (double)0.3506148958333334398;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3891014903783798218) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.296703338623046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4691.333251953125) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6282362639904022217) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046934962272644043) ) ) {
              sum += (double)0.2814234456521739203;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.152158975601196289) ) ) {
                sum += (double)0.3712972875000001283;
              } else {
                sum += (double)0.4382792777777776982;
              }
            }
          } else {
            sum += (double)0.1627371944444444274;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2031410038471221924) ) ) {
              sum += (double)0.2112378653846153365;
            } else {
              sum += (double)0.2919033666666666638;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1162029989063739777) ) ) {
              sum += (double)0.01140602631578947583;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.155555486679077148) ) ) {
                sum += (double)0.03519031944444444421;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06225000135600566864) ) ) {
                  sum += (double)0.1041010357142857085;
                } else {
                  sum += (double)0.1813468333333333182;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9928456246852874756) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000017136335373) ) ) {
            sum += (double)0.5208311439393940034;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.4638671875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3916575461626052856) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2570222020149230957) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.076923131942749023) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.239327549934387207) ) ) {
                      sum += (double)0.3788622205882352656;
                    } else {
                      sum += (double)0.4539821944444444313;
                    }
                  } else {
                    sum += (double)0.3549106300000000602;
                  }
                } else {
                  sum += (double)0.4805930092592592962;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4936.458740234375) ) ) {
                  sum += (double)0.3846969166666668327;
                } else {
                  sum += (double)0.3279653194444444586;
                }
              }
            } else {
              sum += (double)0.2479071315789473373;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.417050838470458984) ) ) {
            sum += (double)0.2109102500000000213;
          } else {
            sum += (double)0.08984337500000001697;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1925434991717338562) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.9052577018737793) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10097.6796875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1283010020852088928) ) ) {
              sum += (double)0.1545793970588235089;
            } else {
              sum += (double)0.3293972205882353399;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4835.57763671875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6463.56298828125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7795.3828125) ) ) {
                  sum += (double)0.1042943076923076862;
                } else {
                  sum += (double)0.02692698437500000083;
                }
              } else {
                sum += (double)0.2046114062499999608;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09475000202655792236) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1075564995408058167) ) ) {
                  sum += (double)0.005355961538461540342;
                } else {
                  sum += (double)0.02107182000000000499;
                }
              } else {
                sum += (double)0.08294799999999999396;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
              sum += (double)0.03965047368421052709;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.156800001859664917) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05397449992597103119) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)105.174072265625) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6763.696044921875) ) ) {
                      sum += (double)0.004810066666666667178;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                } else {
                  sum += (double)0.004458798076923078078;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2335499972105026245) ) ) {
                  sum += (double)0.01092859374999999994;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05423900112509727478) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.004822781249999999811;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08375649899244308472) ) ) {
              sum += (double)0.1062507155172413842;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.464300006628036499) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.87894725799560547) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.13161087036132812) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1607070043683052063) ) ) {
                      sum += (double)0.01382293571428570497;
                    } else {
                      sum += (double)0.04770820731707316881;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11779.34619140625) ) ) {
                      sum += (double)0.1204282500000000145;
                    } else {
                      sum += (double)0.02540113636363635491;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.23778235912322998) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1728000044822692871) ) ) {
                      sum += (double)0.004911924528301888151;
                    } else {
                      sum += (double)0.01814658482142856438;
                    }
                  } else {
                    sum += (double)0.03510966249999999261;
                  }
                }
              } else {
                sum += (double)0.0918028611111111198;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4346754997968673706) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2951619923114776611) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6055000126361846924) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2905499935150146484) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0762481689453125) ) ) {
                  sum += (double)0.1281519999999999881;
                } else {
                  sum += (double)0.2250904204545454423;
                }
              } else {
                sum += (double)0.3150316406250000534;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1033284328877925873) ) ) {
                sum += (double)0.2248382321428571973;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.04594230651855469) ) ) {
                  sum += (double)0.1874595735294117549;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5301.467041015625) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12126.53076171875) ) ) {
                      sum += (double)0.0655638593749999915;
                    } else {
                      sum += (double)0.1425938452380952626;
                    }
                  } else {
                    sum += (double)0.03532107894736841169;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.19336128234863281) ) ) {
              sum += (double)0.3825122499999999981;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
                sum += (double)0.183976943181818231;
              } else {
                sum += (double)0.2983963999999999506;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9647.53759765625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.00031566619873047) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162840008735656738) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25506.7353515625) ) ) {
                  sum += (double)0.2311890781250000027;
                } else {
                  sum += (double)0.1050437613636363565;
                }
              } else {
                sum += (double)0.2725430500000000089;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8487367331981658936) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2804960012435913086) ) ) {
                  sum += (double)0.04400732692307692678;
                } else {
                  sum += (double)0.1412244218750000058;
                }
              } else {
                sum += (double)0.01822946296296296814;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2704184949398040771) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.99140071868896484) ) ) {
                sum += (double)0.1000546018518518737;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2121500000357627869) ) ) {
                  sum += (double)0.0689384999999999859;
                } else {
                  sum += (double)0.003511055555555555891;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9574251174926757812) ) ) {
                sum += (double)0.04528467968749999573;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3578.2015380859375) ) ) {
                  sum += (double)0.02657183928571428891;
                } else {
                  sum += (double)0.005326599999999999911;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4755957424640655518) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.6129570007324219) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.954715132713317871) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1393951773643493652) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4844985008239746094) ) ) {
                sum += (double)0.5490374218749999313;
              } else {
                sum += (double)0.6317402222222221475;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319289565086364746) ) ) {
                sum += (double)0.4615873375000000278;
              } else {
                sum += (double)0.5197639456521738754;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07860000059008598328) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.097938060760498047) ) ) {
                sum += (double)0.4289692999999999978;
              } else {
                sum += (double)0.5558692870370370853;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7366000115871429443) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4631629884243011475) ) ) {
                  sum += (double)0.4137755156249999233;
                } else {
                  sum += (double)0.4983600729166666743;
                }
              } else {
                sum += (double)0.3533326111111111389;
              }
            }
          }
        } else {
          sum += (double)0.2276354687499999863;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4982999861240386963) ) ) {
            sum += (double)0.4973795657894736766;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02324999962002038956) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5996280014514923096) ) ) {
                sum += (double)0.6773570416666667704;
              } else {
                sum += (double)0.7376895108695652459;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6047894954681396484) ) ) {
                sum += (double)0.57714362500000016;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.991754651069641113) ) ) {
                  sum += (double)0.6368909204545455394;
                } else {
                  sum += (double)0.7131055166666666612;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.136946022510528564) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6911095380783081055) ) ) {
              sum += (double)0.8813881250000001888;
            } else {
              sum += (double)0.8113638541666666759;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              sum += (double)0.7815359913793101798;
            } else {
              sum += (double)0.7000611973684209843;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985099971294403076) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.099275469779968262) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06250000186264514923) ) ) {
            sum += (double)0.3072611805555555131;
          } else {
            sum += (double)0.4616656973684210574;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9453918933868408203) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1136999987065792084) ) ) {
              sum += (double)0.2074181916666666681;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5089544951915740967) ) ) {
                sum += (double)0.3366445750000000015;
              } else {
                sum += (double)0.4772492142857142072;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.101443767547607422) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1688.21429443359375) ) ) {
                sum += (double)0.3387456547619048242;
              } else {
                sum += (double)0.1766558181818181916;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1379499956965446472) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3524.2724609375) ) ) {
                  sum += (double)0.2548758947368421346;
                } else {
                  sum += (double)0.117785588235294128;
                }
              } else {
                sum += (double)0.0832512592592592332;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          sum += (double)0.5932411477272726552;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841369867324829102) ) ) {
            sum += (double)0.3166332499999999772;
          } else {
            sum += (double)0.4544105374999999336;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7158777117729187012) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3037.5723876953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.612573146820068359) ) ) {
              sum += (double)0.3701458333333332296;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004599999869242310524) ) ) {
                sum += (double)0.3544235441176470935;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.4140625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3344809859991073608) ) ) {
                    sum += (double)0.3058693611111110711;
                  } else {
                    sum += (double)0.207499385416666654;
                  }
                } else {
                  sum += (double)0.1435763928571428816;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.45516300201416016) ) ) {
              sum += (double)0.1765332058823529393;
            } else {
              sum += (double)0.02861589423076923294;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1161.30059814453125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
                sum += (double)0.5090304090909092416;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.146255016326904297) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.964861631393432617) ) ) {
                    sum += (double)0.3415919264705881697;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2757.90625) ) ) {
                      sum += (double)0.3947958749999999628;
                    } else {
                      sum += (double)0.4608639124999999725;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7117.5205078125) ) ) {
                    sum += (double)0.3958410972222222157;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2978219985961914062) ) ) {
                      sum += (double)0.262730668918918886;
                    } else {
                      sum += (double)0.3493670357142856786;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1695500016212463379) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.42571449279785156) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4195740073919296265) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                      sum += (double)0.4487291463414633808;
                    } else {
                      sum += (double)0.5090030113636362374;
                    }
                  } else {
                    sum += (double)0.5386976544117645371;
                  }
                } else {
                  sum += (double)0.402616032608695662;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5285.385498046875) ) ) {
                  sum += (double)0.3972246805555555982;
                } else {
                  sum += (double)0.4248916923076923036;
                }
              }
            }
          } else {
            sum += (double)0.2504295800000000405;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5175.541748046875) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3626499921083450317) ) ) {
            sum += (double)0.3987785535714286067;
          } else {
            sum += (double)0.242617765625000037;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
            sum += (double)0.2336486637931034505;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3773425072431564331) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
                sum += (double)0.0628288942307692333;
              } else {
                sum += (double)0.01627377777777777937;
              }
            } else {
              sum += (double)0.1145483064516128885;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.1466670036315918) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1285900026559829712) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8903.274658203125) ) ) {
              sum += (double)0.1086243124999999865;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.06884002685546875) ) ) {
                  sum += (double)0.01124353571428571459;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              } else {
                sum += (double)0.05526371428571429101;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01550000021234154701) ) ) {
              sum += (double)0.3084207708333333575;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6786499917507171631) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1574830040335655212) ) ) {
                  sum += (double)0.01448511538461538448;
                } else {
                  sum += (double)0.07621563888888888139;
                }
              } else {
                sum += (double)0.2203812249999999862;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4617000073194503784) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.70586967468261719) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28103.18359375) ) ) {
                sum += (double)0.1399725666666666868;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10365.73779296875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5617282688617706299) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.30188655853271484) ) ) {
                      sum += (double)0.04998027272727272735;
                    } else {
                      sum += (double)0.01586881730769230253;
                    }
                  } else {
                    sum += (double)0.1089486718749999999;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1042844988405704498) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1099499985575675964) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.003676166666666666992;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4540079087018966675) ) ) {
                      sum += (double)0.006141770833333335018;
                    } else {
                      sum += (double)0.02289419791666666426;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18167.6572265625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)319.052520751953125) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4256500005722045898) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6470028162002563477) ) ) {
                      sum += (double)0.05869838636363635537;
                    } else {
                      sum += (double)0.004646933333333334686;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09287700057029724121) ) ) {
                      sum += (double)0.005944000000000001366;
                    } else {
                      sum += (double)0.01696270833333333658;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2184064686298370361) ) ) {
                    sum += (double)0.01194014285714285924;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.008424800000000001385;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2025500014424324036) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.72608661651611328) ) ) {
                    sum += (double)0.003627020833333333225;
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                } else {
                  sum += (double)0.008269812500000001121;
                }
              }
            }
          } else {
            sum += (double)0.1306642968750000022;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3070201128721237183) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.259431004524230957) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4571.704345703125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2258299961686134338) ) ) {
                sum += (double)0.2471047500000000119;
              } else {
                sum += (double)0.1029466153846154003;
              }
            } else {
              sum += (double)0.03915816666666666751;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8053999841213226318) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3361559957265853882) ) ) {
                  sum += (double)0.3122946447368420975;
                } else {
                  sum += (double)0.4457373035714285447;
                }
              } else {
                sum += (double)0.2773980172413792467;
              }
            } else {
              sum += (double)0.1706983499999999987;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3517.2071533203125) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.80303192138671875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25050.177734375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32753.9326171875) ) ) {
                  sum += (double)0.3110678214285714227;
                } else {
                  sum += (double)0.2247352115384615157;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3930049985647201538) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.85987472534179688) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10190.50439453125) ) ) {
                      sum += (double)0.248700105263157889;
                    } else {
                      sum += (double)0.1339370374999999946;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7600792050361633301) ) ) {
                      sum += (double)0.09850966129032255603;
                    } else {
                      sum += (double)0.0324689062499999917;
                    }
                  }
                } else {
                  sum += (double)0.2461620340909091709;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2442115023732185364) ) ) {
                sum += (double)0.01893316666666666759;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.3260040283203125) ) ) {
                  sum += (double)0.1499000999999999806;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1930500045418739319) ) ) {
                    sum += (double)0.08198282352941177464;
                  } else {
                    sum += (double)0.0470176300000000047;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4171679913997650146) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2481559962034225464) ) ) {
                sum += (double)0.03664146153846153942;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.173962295055389404) ) ) {
                  sum += (double)0.01960183653846153673;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            } else {
              sum += (double)0.08021659999999998514;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4928509294986724854) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.76636075973510742) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5455760061740875244) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8637000024318695068) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4674739986658096313) ) ) {
                sum += (double)0.5856387857142857367;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.687480926513671875) ) ) {
                  sum += (double)0.5621459673913044019;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4867344945669174194) ) ) {
                    sum += (double)0.46271946666666669;
                  } else {
                    sum += (double)0.5342228522727272555;
                  }
                }
              }
            } else {
              sum += (double)0.4357298000000000004;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000058710575104) ) ) {
                sum += (double)0.6924729722222222605;
              } else {
                sum += (double)0.5821030972222221989;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.831323146820068359) ) ) {
                sum += (double)0.5946973125000000193;
              } else {
                sum += (double)0.5090238499999999444;
              }
            }
          }
        } else {
          sum += (double)0.3554323593750000621;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6964474916458129883) ) ) {
              sum += (double)0.7662495595238093538;
            } else {
              sum += (double)0.7180766250000000239;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8970000147819519043) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07997386157512664795) ) ) {
                sum += (double)0.7842675000000000063;
              } else {
                sum += (double)0.8230308289473685646;
              }
            } else {
              sum += (double)0.8602335833333333293;
            }
          }
        } else {
          sum += (double)0.6535765399999999836;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.62469148635864258) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3494.5797119140625) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5592055022716522217) ) ) {
            sum += (double)0.4830206521739130454;
          } else {
            sum += (double)0.592744649999999984;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.398076891899108887) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.674565970897674561) ) ) {
              sum += (double)0.5066480999999999346;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.074007511138916016) ) ) {
                sum += (double)0.4422323552631579058;
              } else {
                sum += (double)0.3659858035714286251;
              }
            }
          } else {
            sum += (double)0.247749035714285748;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.99074172973632812) ) ) {
            sum += (double)0.1075291562500000075;
          } else {
            sum += (double)0.2054735892857142698;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9184.98095703125) ) ) {
            sum += (double)0.4647760096153845666;
          } else {
            sum += (double)0.3312401470588235419;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3849800080060958862) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.11875009536743164) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.260218009352684021) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4220.39404296875) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1314854994416236877) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.48345088958740234) ) ) {
              sum += (double)0.1464822222222222359;
            } else {
              sum += (double)0.03734622222222221816;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
              sum += (double)0.4972063749999999782;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.00835108757019043) ) ) {
                sum += (double)0.3417470892857142895;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13455.06201171875) ) ) {
                  sum += (double)0.3020302499999999446;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6475077569484710693) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.284374728798866272) ) ) {
                      sum += (double)0.1683397999999999839;
                    } else {
                      sum += (double)0.2460138583333333351;
                    }
                  } else {
                    sum += (double)0.08056028333333334346;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.2043337763157894726;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.20361995697021484) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6813842952251434326) ) ) {
                sum += (double)0.2054989821428571395;
              } else {
                sum += (double)0.05427262500000000489;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02439999952912330627) ) ) {
                  sum += (double)0.004497796296296297479;
                } else {
                  sum += (double)0.01619855555555555632;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.783333301544189453) ) ) {
                  sum += (double)0.1088891250000000033;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7035000026226043701) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2823.3443603515625) ) ) {
                      sum += (double)0.09569786538461536041;
                    } else {
                      sum += (double)0.05957057692307690666;
                    }
                  } else {
                    sum += (double)0.008859411764705884748;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8233080506324768066) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.178947210311889648) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.586687207221984863) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2711292058229446411) ) ) {
                  sum += (double)0.3048234230769230613;
                } else {
                  sum += (double)0.3736230999999999858;
                }
              } else {
                sum += (double)0.4371130887096774664;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01805000007152557373) ) ) {
                sum += (double)0.3870725657894736327;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09365000203251838684) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.006578922271728516) ) ) {
                    sum += (double)0.1866454285714285732;
                  } else {
                    sum += (double)0.07631374999999998576;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    sum += (double)0.3792581499999999606;
                  } else {
                    sum += (double)0.258003808823529468;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1015000008046627045) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.27485561370849609) ) ) {
                sum += (double)0.422876183333333322;
              } else {
                sum += (double)0.5066445600000000216;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2340350598096847534) ) ) {
                sum += (double)0.4424740476190476279;
              } else {
                sum += (double)0.3668849642857142102;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
            sum += (double)0.1930776979166666241;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.947962760925292969) ) ) {
              sum += (double)0.0924423552631578882;
            } else {
              sum += (double)0.01388578571428571509;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195205017924308777) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
            sum += (double)0.03859526136363636284;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.37163543701171875) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4059811234474182129) ) ) {
                sum += (double)0.009985777777777775713;
              } else {
                sum += (double)0.004316314814814815361;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02648049965500831604) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.6000022888183594) ) ) {
                    sum += (double)0.005312357142857142105;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05098500102758407593) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.003947694444444444645;
                    }
                  }
                }
              } else {
                sum += (double)0.005488211538461538162;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2170553803443908691) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.72200965881347656) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11432.17333984375) ) ) {
                sum += (double)0.2296577343750000055;
              } else {
                sum += (double)0.06866717647058823148;
              }
            } else {
              sum += (double)0.04386542999999999692;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5780760347843170166) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391499951481819153) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.43497467041015625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3084644079208374023) ) ) {
                    sum += (double)0.02912930208333333604;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212514907121658325) ) ) {
                      sum += (double)0.1687478181818181655;
                    } else {
                      sum += (double)0.06657710526315789579;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7053500115871429443) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04435000009834766388) ) ) {
                      sum += (double)0.02182211904761904506;
                    } else {
                      sum += (double)0.008756706521739130583;
                    }
                  } else {
                    sum += (double)0.03334297058823528642;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2965999990701675415) ) ) {
                  sum += (double)0.1502429342105263133;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4399000108242034912) ) ) {
                    sum += (double)0.0260903235294117665;
                  } else {
                    sum += (double)0.07661894230769231151;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1100785024464130402) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8533513545989990234) ) ) {
                  sum += (double)0.003123633333333333383;
                } else {
                  sum += (double)0.01162505263157894743;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1774339973926544189) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1447165012359619141) ) ) {
                    sum += (double)0.0214597421874999951;
                  } else {
                    sum += (double)0.04433194230769230137;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12108.0302734375) ) ) {
                    sum += (double)0.01808397619047618851;
                  } else {
                    sum += (double)0.006883783333333334115;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4405913949012756348) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0969000011682510376) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03844999894499778748) ) ) {
              sum += (double)0.04562029411764706444;
            } else {
              sum += (double)0.1009422124999999892;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.82126331329345703) ) ) {
              sum += (double)0.3393469428571428415;
            } else {
              sum += (double)0.1461742734375000019;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7308.338623046875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.72418308258056641) ) ) {
              sum += (double)0.1808635384615384922;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3356994986534118652) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2883214950561523438) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7372602522373199463) ) ) {
                    sum += (double)0.07401348437500002153;
                  } else {
                    sum += (double)0.1280428928571428482;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3496000021696090698) ) ) {
                    sum += (double)0.02379751388888888888;
                  } else {
                    sum += (double)0.06709207692307692095;
                  }
                }
              } else {
                sum += (double)0.1412894761904761876;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1498.46722412109375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4922.6123046875) ) ) {
                sum += (double)0.03049012500000000681;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.58928585052490234) ) ) {
                  sum += (double)0.0166628055555555557;
                } else {
                  sum += (double)0.005634023809523810121;
                }
              }
            } else {
              sum += (double)0.06316271428571428037;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6223134994506835938) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.91679859161376953) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4435250014066696167) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05150000005960464478) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2446.917236328125) ) ) {
                    sum += (double)0.5031189852941176932;
                  } else {
                    sum += (double)0.4357855000000000478;
                  }
                } else {
                  sum += (double)0.5610332000000000097;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3457.0665283203125) ) ) {
                  sum += (double)0.4254826111111110754;
                } else {
                  sum += (double)0.3484589999999999632;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6584.76708984375) ) ) {
                sum += (double)0.4647375200000000706;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1942.0135498046875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02670000027865171432) ) ) {
                    sum += (double)0.6265637656250000465;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.66076183319091797) ) ) {
                      sum += (double)0.515925326086956515;
                    } else {
                      sum += (double)0.5652117124999999076;
                    }
                  }
                } else {
                  sum += (double)0.4794619699999999596;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.717261791229248047) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.458931207656860352) ) ) {
                sum += (double)0.5504475699999998861;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04265000112354755402) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8195999860763549805) ) ) {
                    sum += (double)0.6984621406250001163;
                  } else {
                    sum += (double)0.6432122833333334677;
                  }
                } else {
                  sum += (double)0.6291488833333332975;
                }
              }
            } else {
              sum += (double)0.5076435227272727557;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.36145591735839844) ) ) {
            sum += (double)0.1842599687500000027;
          } else {
            sum += (double)0.4205444027777777705;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7400960028171539307) ) ) {
            sum += (double)0.7127636637931036301;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09095000103116035461) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.952875614166259766) ) ) {
                  sum += (double)0.8115085833333331999;
                } else {
                  sum += (double)0.8471125441176470261;
                }
              } else {
                sum += (double)0.8917281499999999417;
              }
            } else {
              sum += (double)0.7406745714285715154;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.08798789978027344) ) ) {
            sum += (double)0.7001705468750001327;
          } else {
            sum += (double)0.5817385357142856872;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.84195399284362793) ) ) {
          sum += (double)0.3891554545454544711;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3496.088134765625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.33918523788452148) ) ) {
              sum += (double)0.415091545454545463;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11235.466796875) ) ) {
                sum += (double)0.2764308125000000116;
              } else {
                sum += (double)0.1288398055555555477;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.043611526489257812) ) ) {
              sum += (double)0.2294427142857142499;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4778615087270736694) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.239765644073486328) ) ) {
                  sum += (double)0.09054945833333333249;
                } else {
                  sum += (double)0.02562333333333333824;
                }
              } else {
                sum += (double)0.1599537499999999779;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.44642829895019531) ) ) {
            sum += (double)0.5685750833333333976;
          } else {
            sum += (double)0.4318907900000000799;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.4257781129032259249;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1669.27581787109375) ) ) {
              sum += (double)0.3430335166666667601;
            } else {
              sum += (double)0.1491871499999999906;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.793770790100097656) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1741705015301704407) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4461999982595443726) ) ) {
          sum += (double)0.2168607045454545024;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1112500019371509552) ) ) {
            sum += (double)0.01721210294117647005;
          } else {
            sum += (double)0.07850826785714284939;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5630118846893310547) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2696644961833953857) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7142000198364257812) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6085500121116638184) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3067707866430282593) ) ) {
                  sum += (double)0.259388400000000019;
                } else {
                  sum += (double)0.3536894519230769363;
                }
              } else {
                sum += (double)0.3901693874999999645;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
                sum += (double)0.2741632403846154253;
              } else {
                sum += (double)0.1526977638888888933;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001500000013038516045) ) ) {
              sum += (double)0.5580926304347824107;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801319897174835205) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2024.21307373046875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2953102290630340576) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.174512036144733429) ) ) {
                      sum += (double)0.3774952229729728881;
                    } else {
                      sum += (double)0.4483669294871794331;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1857500001788139343) ) ) {
                      sum += (double)0.3456420312499999814;
                    } else {
                      sum += (double)0.4132046718750000402;
                    }
                  }
                } else {
                  sum += (double)0.2598395500000000302;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.849898576736450195) ) ) {
                    sum += (double)0.4767004078947368328;
                  } else {
                    sum += (double)0.5272743181818182467;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    sum += (double)0.5101820576923077333;
                  } else {
                    sum += (double)0.33210026724137931;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5359.331298828125) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3551000058650970459) ) ) {
              sum += (double)0.3790405000000000024;
            } else {
              sum += (double)0.260680269230769257;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.707563638687133789) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2628.7816162109375) ) ) {
                sum += (double)0.3205501406250000351;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0950499996542930603) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.551848769187927246) ) ) {
                    sum += (double)0.1162404166666666794;
                  } else {
                    sum += (double)0.06298787499999999873;
                  }
                } else {
                  sum += (double)0.205248474999999958;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3421770036220550537) ) ) {
                sum += (double)0.03728186666666666316;
              } else {
                sum += (double)0.1336717291666666696;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1039480008184909821) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
            sum += (double)0.09521567391304346095;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.30444717407226562) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14487.32763671875) ) ) {
                sum += (double)0.05811938541666666208;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306999996304512024) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7642.7451171875) ) ) {
                    sum += (double)0.01650323333333333226;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5374500155448913574) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.005904692307692309579;
                    }
                  }
                } else {
                  sum += (double)0.03011209090909090433;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0446629989892244339) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1488.8948974609375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8458499908447265625) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003264333333333333496;
                  }
                } else {
                  sum += (double)0.009684088235294117941;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12360.53125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)301.2857208251953125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-58111.53125) ) ) {
                      sum += (double)0.02260343750000000027;
                    } else {
                      sum += (double)0.01026551470588235419;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.003273140000000000337;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006499999872175976634) ) ) {
            sum += (double)0.292411124999999994;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.98148155212402344) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5470.3671875) ) ) {
                sum += (double)0.1704156071428571673;
              } else {
                sum += (double)0.06251514473684209594;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10350.0634765625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.14636802673339844) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6581499874591827393) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.67168617248535156) ) ) {
                      sum += (double)0.1016703750000000211;
                    } else {
                      sum += (double)0.02452927941176470325;
                    }
                  } else {
                    sum += (double)0.2187640416666666865;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.15216445922851562) ) ) {
                    sum += (double)0.07471759722222220956;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1653919965028762817) ) ) {
                      sum += (double)0.01126300581395349096;
                    } else {
                      sum += (double)0.03618118478260869131;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1110500022768974304) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.05357170104980469) ) ) {
                    sum += (double)0.01944973684210526271;
                  } else {
                    sum += (double)0.01093937096774193554;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4149499982595443726) ) ) {
                    sum += (double)0.01893452083333333619;
                  } else {
                    sum += (double)0.05593068750000000644;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5485448539257049561) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3323754966259002686) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1587314605712890625) ) ) {
                sum += (double)0.2137732343749999819;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.99285697937011719) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4478.900634765625) ) ) {
                    sum += (double)0.1412253799999999559;
                  } else {
                    sum += (double)0.04040658823529410387;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5046999901533126831) ) ) {
                    sum += (double)0.05449570000000000108;
                  } else {
                    sum += (double)0.03095501470588235549;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2555190026760101318) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7164.716796875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38761329650878906) ) ) {
                    sum += (double)0.1969311470588235302;
                  } else {
                    sum += (double)0.1127166442307692279;
                  }
                } else {
                  sum += (double)0.06073240789473683537;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.08610820770263672) ) ) {
                  sum += (double)0.3377879000000000298;
                } else {
                  sum += (double)0.1016571785714285442;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.82550048828125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9910.57958984375) ) ) {
                sum += (double)0.4824975312499999447;
              } else {
                sum += (double)0.3331914218750000045;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.99740219116210938) ) ) {
                sum += (double)0.1378158026315789431;
              } else {
                sum += (double)0.2981868815789473492;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8814.4501953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.92402553558349609) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18474.4296875) ) ) {
                sum += (double)0.260673421052631582;
              } else {
                sum += (double)0.1798341964285714301;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2456170022487640381) ) ) {
                sum += (double)0.02669720588235294234;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.72287178039550781) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.73078727722167969) ) ) {
                    sum += (double)0.07652519642857143201;
                  } else {
                    sum += (double)0.1778890312500000237;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                    sum += (double)0.1267420588235294576;
                  } else {
                    sum += (double)0.03411478846153846722;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4503.1162109375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05367124080657959) ) ) {
                sum += (double)0.1037843035714285655;
              } else {
                sum += (double)0.04428238888888888503;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.65098094940185547) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1477500051259994507) ) ) {
                  sum += (double)0.02303662499999999461;
                } else {
                  sum += (double)0.1061269999999999852;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2765879929065704346) ) ) {
                  sum += (double)0.01044285000000000005;
                } else {
                  sum += (double)0.002872473684210527164;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007451236248016357) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.01984405517578125) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.49117469787597656) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.781531572341918945) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7010000050067901611) ) ) {
                    sum += (double)0.4692623500000000503;
                  } else {
                    sum += (double)0.5458343666666666261;
                  }
                } else {
                  sum += (double)0.5728946428571429772;
                }
              } else {
                sum += (double)0.4550404732142858122;
              }
            } else {
              sum += (double)0.604989966666666712;
            }
          } else {
            sum += (double)0.415550838235294151;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823999941349029541) ) ) {
            sum += (double)0.5288956666666666528;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1557.5447998046875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.96068763732910156) ) ) {
                sum += (double)0.5911218000000000306;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.476715087890625) ) ) {
                  sum += (double)0.6570433409090908894;
                } else {
                  sum += (double)0.6171127023809523937;
                }
              }
            } else {
              sum += (double)0.7010051973684210402;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.77499997615814209) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09885000064969062805) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7172160148620605469) ) ) {
              sum += (double)0.7254513500000000503;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8328820168972015381) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8429999947547912598) ) ) {
                  sum += (double)0.7806159000000000292;
                } else {
                  sum += (double)0.8243015795454545769;
                }
              } else {
                sum += (double)0.8717828088235294315;
              }
            }
          } else {
            sum += (double)0.6985732000000001163;
          }
        } else {
          sum += (double)0.6723274714285714104;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94285726547241211) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2905.59765625) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3098499923944473267) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49234819412231445) ) ) {
              sum += (double)0.5976926785714286039;
            } else {
              sum += (double)0.5299347499999998989;
            }
          } else {
            sum += (double)0.4164791730769230038;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.949853479862213135) ) ) {
              sum += (double)0.4776400166666667224;
            } else {
              sum += (double)0.3690129642857143399;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.111947834491729736) ) ) {
              sum += (double)0.3467723125000000128;
            } else {
              sum += (double)0.1501281293103448322;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7057.9658203125) ) ) {
            sum += (double)0.2156371176470588125;
          } else {
            sum += (double)0.1131412999999999724;
          }
        } else {
          sum += (double)0.4514993999999999952;
        }
      }
    }
  }
  return sum;
}
