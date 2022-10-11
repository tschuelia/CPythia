#include "prediction.h"
double predict_margin_unit4(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6860815000000001218) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5620204603580564173) ) ) {
      sum += (double)0.006294495663358741847;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
        sum += (double)-0.001858831235578711294;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.193950000000000039) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.764897074756232698) ) ) {
              sum += (double)0.01505502952489623167;
            } else {
              sum += (double)0.00276215447634604221;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
                sum += (double)0.008786597420700384409;
              } else {
                sum += (double)0.0008865773922008824944;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.183961879798863581) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.55013736263736313) ) ) {
                  sum += (double)-0.002492116619485897425;
                } else {
                  sum += (double)-0.01162405264470058389;
                }
              } else {
                sum += (double)0.002549973300823194563;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001650000000000000208) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.676579163248564708) ) ) {
              sum += (double)-0.001120355817235904562;
            } else {
              sum += (double)-0.01056408884500366005;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2933365293588373057) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.1289592760181222) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.61180124223603016) ) ) {
                  sum += (double)-0.0009026052310932762513;
                } else {
                  sum += (double)-0.01006020796733568361;
                }
              } else {
                sum += (double)0.007961769622360491752;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5104547563113605024) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1922.307281728331645) ) ) {
                  sum += (double)0.0009210488914956623885;
                } else {
                  sum += (double)0.009320103071685875706;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04420000000000001011) ) ) {
                  sum += (double)-0.003258402439559028585;
                } else {
                  sum += (double)6.606330551969345495e-05;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0249432245900995074) ) ) {
      sum += (double)-0.002841668200188661973;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.199422509077590293) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14584.17359590971137) ) ) {
          sum += (double)-0.003322859484654556127;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.701736736206714617) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1224000000000000227) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-211.5714022873356726) ) ) {
                sum += (double)-0.005180187600252247372;
              } else {
                sum += (double)0.003558402869339512276;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6117.436696911457148) ) ) {
                sum += (double)-0.001816049597046025818;
              } else {
                sum += (double)0.003940292303436124938;
              }
            }
          } else {
            sum += (double)0.009507195163054553769;
          }
        }
      } else {
        sum += (double)-0.004591641723638824682;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.921270005162622807) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4119110000000000826) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165280000000000871) ) ) {
        sum += (double)0.00313816035413712769;
      } else {
        sum += (double)-0.007052396861127531967;
      }
    } else {
      sum += (double)0.002061642861775606853;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.173795431680086043) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000000000000637) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9313838414749247008) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1426500000000000268) ) ) {
              sum += (double)-0.009726551017249271402;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
                sum += (double)0.002529546335977386675;
              } else {
                sum += (double)-0.00794791671935981929;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2336.682350514520749) ) ) {
              sum += (double)0.01194267539130234625;
            } else {
              sum += (double)0.0009156922737719706568;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4906165000000000664) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004000000000000000951) ) ) {
              sum += (double)0.008793920556635333521;
            } else {
              sum += (double)-0.0008688088859441926758;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.3556547619047663) ) ) {
              sum += (double)0.01652079730136615104;
            } else {
              sum += (double)0.002520800001784685804;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-771.1535402920288789) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.154350000000000015) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                sum += (double)0.004198850281140495931;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6558653967640264426) ) ) {
                  sum += (double)-0.0008859135441568817722;
                } else {
                  sum += (double)-0.01003288419523026484;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1032187713739281393) ) ) {
                sum += (double)-0.003178761914276654384;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3733500000000000707) ) ) {
                  sum += (double)0.005458648872202221877;
                } else {
                  sum += (double)0.0005230481101084036473;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5042355000000001697) ) ) {
              sum += (double)-0.0005370612637734293411;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2180500000000000216) ) ) {
                  sum += (double)-0.001415777991513580449;
                } else {
                  sum += (double)-0.01505282460006205671;
                }
              } else {
                sum += (double)0.002307117751657803296;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000000000001554) ) ) {
            sum += (double)-0.002838991249362259484;
          } else {
            sum += (double)-0.01488866277806367468;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
        sum += (double)0.001749465655394659078;
      } else {
        sum += (double)-0.0124271381173572653;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1378260869565509) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72060.08021480003663) ) ) {
      sum += (double)0.01359505915451264361;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33376.32965003637219) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6171500000000001984) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4081000000000000738) ) ) {
            sum += (double)0.009902749666373335605;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3355885000000000118) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.32407407407407973) ) ) {
                sum += (double)-0.006817241333203421377;
              } else {
                sum += (double)-0.002275473097381370841;
              }
            } else {
              sum += (double)0.005267268800244106521;
            }
          }
        } else {
          sum += (double)0.0144770994604171109;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.0650000000000000161) ) ) {
            sum += (double)-0.006301178427440132929;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3024760000000000226) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.618667917448405991) ) ) {
                sum += (double)0.009853229903302195003;
              } else {
                sum += (double)0.003094647783563767539;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3187835000000000529) ) ) {
                sum += (double)-0.006698661779847452959;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.636722972488512839) ) ) {
                  sum += (double)0.001403396653431565264;
                } else {
                  sum += (double)-0.002780718118555370981;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.304076066368664577) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1553.47651953803188) ) ) {
              sum += (double)-0.003789068124911702546;
            } else {
              sum += (double)-0.01335057113615926647;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1577.474241027566222) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000000000000637) ) ) {
                  sum += (double)0.005055356748412130445;
                } else {
                  sum += (double)-0.0004992387293574234624;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
                  sum += (double)-0.001030686751137897166;
                } else {
                  sum += (double)-0.008975085351438195219;
                }
              }
            } else {
              sum += (double)0.007148143596076159817;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8487.909566424181321) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.39811320754717272) ) ) {
          sum += (double)0.007167621385307633777;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559985000000000732) ) ) {
            sum += (double)-0.001415335103559034165;
          } else {
            sum += (double)0.00261234989512735714;
          }
        }
      } else {
        sum += (double)-0.004632028935460940321;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)303.434065934065984) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2357500000000000151) ) ) {
          sum += (double)-0.009501083921569898963;
        } else {
          sum += (double)-0.01650085307196475642;
        }
      } else {
        sum += (double)-0.001752921945804627709;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1378260869565509) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72060.08021480003663) ) ) {
      sum += (double)0.0116460085282952281;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2297500000000000375) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-85.02663671482834218) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
                  sum += (double)-7.711818111014417769e-05;
                } else {
                  sum += (double)0.008010816807979572601;
                }
              } else {
                sum += (double)0.014528336211256156;
              }
            } else {
              sum += (double)-0.002464223737212910704;
            }
          } else {
            sum += (double)-0.004856310195246502093;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4233480000000000576) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1850000000000000255) ) ) {
                sum += (double)0.001994848342371067715;
              } else {
                sum += (double)-0.005516912518223862812;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717060000000000586) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8253500000000001391) ) ) {
                  sum += (double)-0.0004729903539561094408;
                } else {
                  sum += (double)-0.003916576486498382116;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.795000000000000151) ) ) {
                  sum += (double)-0.002341855222864607303;
                } else {
                  sum += (double)0.01248423460396170734;
                }
              }
            }
          } else {
            sum += (double)-0.01184741188862330902;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.99679487179488291) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-50341.6477749142432) ) ) {
            sum += (double)0.008996217022724536591;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.59151511703276527) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1922015000000000251) ) ) {
                  sum += (double)0.01242844820679091591;
                } else {
                  sum += (double)0.002208261962948878613;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-162.0383866462893536) ) ) {
                  sum += (double)0.0003495090739530105082;
                } else {
                  sum += (double)0.006654477702829774202;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.159557344064386708) ) ) {
                sum += (double)0.003151361425377117303;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2336.682350514520749) ) ) {
                  sum += (double)-0.001316995414030094338;
                } else {
                  sum += (double)-0.008374472742251936122;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32502.46407997500137) ) ) {
            sum += (double)-0.0008321922835969581362;
          } else {
            sum += (double)-0.008668578477481229602;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
      sum += (double)-0.0006432151089944877385;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)102.4779942279942446) ) ) {
        sum += (double)-0.01348839122043161108;
      } else {
        sum += (double)-0.003271064132162356756;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09005000000000001892) ) ) {
        sum += (double)0.008630050160181585231;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.28409090909091361) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.845519167301347352) ) ) {
              sum += (double)0.004247273338442403637;
            } else {
              sum += (double)-0.005162673924381023551;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.34035087719298929) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.62250712250712681) ) ) {
                sum += (double)0.007350571914257037452;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3355885000000000118) ) ) {
                  sum += (double)-0.006182329058475976961;
                } else {
                  sum += (double)0.00602398153921039365;
                }
              }
            } else {
              sum += (double)0.01196071382996671817;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3757500000000000284) ) ) {
            sum += (double)-0.008732621953832847214;
          } else {
            sum += (double)0.00311079920514065059;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.9767628205128247) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11846.64145781244406) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
            sum += (double)0.001908702376461855364;
          } else {
            sum += (double)-0.01533268606920232258;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380952380952905) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.6574074074074101) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5477000000000001867) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.00649350649350922) ) ) {
                  sum += (double)-0.0003840502655509229232;
                } else {
                  sum += (double)0.002047160319782576413;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                  sum += (double)-5.157065618122151022e-05;
                } else {
                  sum += (double)-0.01592591072174915495;
                }
              }
            } else {
              sum += (double)0.008606194743559655858;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              sum += (double)0.0003700828802790709208;
            } else {
              sum += (double)-0.01073545521598792858;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.28832547169812273) ) ) {
          sum += (double)-0.003121376609680789286;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
            sum += (double)-0.002154020118680263947;
          } else {
            sum += (double)0.02380779964632014772;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2297500000000000375) ) ) {
      sum += (double)0.001088195383888244895;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
        sum += (double)-0.000676289251541552618;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17373.1323558930053) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.4022959183673578) ) ) {
            sum += (double)-0.000628181387331525694;
          } else {
            sum += (double)-0.007298334350893810607;
          }
        } else {
          sum += (double)-0.01161349586286393974;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3371020000000000683) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3080910000000000593) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929020000000000512) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.238294673539519941) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
            sum += (double)-0.003297769848947721023;
          } else {
            sum += (double)0.01242448833555783415;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.88955479452054842) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.179724500000000037) ) ) {
              sum += (double)-0.01090817769500984288;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162155000000000327) ) ) {
                sum += (double)0.009287395515005477872;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
                  sum += (double)-0.01373991755063449192;
                } else {
                  sum += (double)-0.002534240345989119403;
                }
              }
            }
          } else {
            sum += (double)-0.0004307867083841997202;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.03571428571428825) ) ) {
          sum += (double)0.01041619019753793098;
        } else {
          sum += (double)-0.006025516050221916761;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.301981351981353008) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01805000000000000701) ) ) {
          sum += (double)-0.009314270861861158324;
        } else {
          sum += (double)0.006273202520376591936;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7513000000000001899) ) ) {
          sum += (double)-0.007580473838278371096;
        } else {
          sum += (double)0.00427829496979679081;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4920.48183468867046) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658500000000000252) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.9321266968325812) ) ) {
            sum += (double)0.003812825822039157386;
          } else {
            sum += (double)0.01437269906866709725;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32502.46407997500137) ) ) {
            sum += (double)0.006706627015118363754;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.9888888888888907) ) ) {
              sum += (double)0.001374336987124939388;
            } else {
              sum += (double)-0.008979526109879232276;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.008771929824562541) ) ) {
          sum += (double)0.0007978501871248479651;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.65853889943074506) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
              sum += (double)-0.01155955130953256055;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
                sum += (double)-0.006662962470129350952;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06685000000000000664) ) ) {
                  sum += (double)0.007873705681557320937;
                } else {
                  sum += (double)-0.001644401133337229474;
                }
              }
            }
          } else {
            sum += (double)0.005917540685332498863;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2590000000000000635) ) ) {
        sum += (double)0.000194165259275576454;
      } else {
        sum += (double)-0.01215532222525203543;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000000000000933) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.680054525315388014) ) ) {
          sum += (double)-0.0007356558680450301594;
        } else {
          sum += (double)0.006969632790319497256;
        }
      } else {
        sum += (double)0.008615119855588812547;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1749240000000000239) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488515000000000255) ) ) {
          sum += (double)-0.002773044372384687439;
        } else {
          sum += (double)0.007138539479778411613;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.98305084745763338) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.875516528925620374) ) ) {
            sum += (double)-0.000153191979136605539;
          } else {
            sum += (double)-0.008466803141200369281;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7757.51780776707983) ) ) {
            sum += (double)-0.003848474940562232431;
          } else {
            sum += (double)0.005258596500284607941;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1378260869565509) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72060.08021480003663) ) ) {
        sum += (double)0.01041026189979916451;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04759238521836728) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81002331002331474) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24848.45518581499709) ) ) {
                sum += (double)0.00923212544909803208;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30439814814815058) ) ) {
                  sum += (double)0.0002254093343819970631;
                } else {
                  sum += (double)-0.004661022262266843567;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.50925925925926308) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
                  sum += (double)0.01222943097216656026;
                } else {
                  sum += (double)0.001921301028508394688;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2893000000000000571) ) ) {
                  sum += (double)0.002513674839909812737;
                } else {
                  sum += (double)-0.00357284206912321942;
                }
              }
            }
          } else {
            sum += (double)0.009911660275685019172;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6171500000000001984) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7844500000000002027) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                sum += (double)0.004429645480436166828;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4835000000000000964) ) ) {
                  sum += (double)-0.00390607660503751843;
                } else {
                  sum += (double)0.001031783822568295254;
                }
              }
            } else {
              sum += (double)-0.01207687822776853243;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4559886699161891932) ) ) {
              sum += (double)0.01179646346307819567;
            } else {
              sum += (double)0.000944505056644257099;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01730000000000000634) ) ) {
        sum += (double)0.002724734723426494847;
      } else {
        sum += (double)-0.007874956586373436582;
      }
    }
  }
  return sum;
}
