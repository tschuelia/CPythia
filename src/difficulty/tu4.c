#include "prediction.h"
double predict_margin_unit4(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.387362480163574219) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5850000083446502686) ) ) {
          sum += (double)0.1378886729590950433;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1931969523429870605) ) ) {
            sum += (double)0.3711677340942485803;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.708333373069763184) ) ) {
              sum += (double)0.2998942936408622306;
            } else {
              sum += (double)0.173907010417369029;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2003000043332576752) ) ) {
          sum += (double)0.4407485013459416234;
        } else {
          sum += (double)0.5856671472091810049;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3917105048894882202) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09359900280833244324) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-233636.6328125) ) ) {
                sum += (double)0.009031653333333333755;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)502.25) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1301.65118408203125) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004728999999999999697;
                    }
                  } else {
                    sum += (double)0.004824822222222223574;
                  }
                } else {
                  sum += (double)0.005327500000000001505;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4232000112533569336) ) ) {
                sum += (double)0.02328120000000000189;
              } else {
                sum += (double)0.006387239236339698097;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.39285755157470703) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.65217208862304688) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5485000014305114746) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
                    sum += (double)0.03109740956216870342;
                  } else {
                    sum += (double)0.1050238596576343331;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2588.3721923828125) ) ) {
                    sum += (double)0.01473978823529411945;
                  } else {
                    sum += (double)0.005208479999999999707;
                  }
                }
              } else {
                sum += (double)0.09045051573779755438;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.63101577758789062) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5491.355224609375) ) ) {
                    sum += (double)0.04147897815764482743;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02090000081807374954) ) ) {
                      sum += (double)0.0249006857142857127;
                    } else {
                      sum += (double)0.00646656296296296406;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1216499991714954376) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                      sum += (double)0.01177607619047619028;
                    } else {
                      sum += (double)0.0201065537730243625;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5544108003377914429) ) ) {
                      sum += (double)0.007874282352941176094;
                    } else {
                      sum += (double)0.004205503448275862803;
                    }
                  }
                }
              } else {
                sum += (double)0.04251818636456420469;
              }
            }
          }
        } else {
          sum += (double)0.1175798775335775287;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6895476579666137695) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2189299985766410828) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3358500003814697266) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                      sum += (double)0.02887136448728735635;
                    } else {
                      sum += (double)0.07180567793773169616;
                    }
                  } else {
                    sum += (double)0.1003740868837922767;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                    sum += (double)0.1284848580331936774;
                  } else {
                    sum += (double)0.04736361662689237556;
                  }
                }
              } else {
                sum += (double)0.1525618486339528346;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.37103271484375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4706.68798828125) ) ) {
                    sum += (double)0.09147791060713097999;
                  } else {
                    sum += (double)0.03473178910847606743;
                  }
                } else {
                  sum += (double)0.2767285565234312572;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02664999943226575851) ) ) {
                  sum += (double)0.3678893223023186887;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231499984860420227) ) ) {
                    sum += (double)0.1851416902758016292;
                  } else {
                    sum += (double)0.2981613705385874891;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)52.79999923706054688) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9579.81787109375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23080.6005859375) ) ) {
                  sum += (double)0.03200348772285915855;
                } else {
                  sum += (double)0.07340901645809551346;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6399999856948852539) ) ) {
                    sum += (double)0.02506414705882352781;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1754499971866607666) ) ) {
                      sum += (double)0.014044904347826093;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                } else {
                  sum += (double)0.03586313499661033383;
                }
              }
            } else {
              sum += (double)0.1508844134618702038;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.58741188049316406) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1115.149169921875) ) ) {
              sum += (double)0.2154911159319547187;
            } else {
              sum += (double)0.08892350161616162374;
            }
          } else {
            sum += (double)0.346071973291392887;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.45016498863697052) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.49341392517089844) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4383.736083984375) ) ) {
                  sum += (double)0.532254895967870123;
                } else {
                  sum += (double)0.4661405729685785815;
                }
              } else {
                sum += (double)0.5683477094927734674;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4752000123262405396) ) ) {
                  sum += (double)0.4530772860158472359;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6035999953746795654) ) ) {
                    sum += (double)0.2852213364537773965;
                  } else {
                    sum += (double)0.1811198708888853148;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1498499959707260132) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.366690158843994141) ) ) {
                      sum += (double)0.3877734192465908114;
                    } else {
                      sum += (double)0.5054440107396742654;
                    }
                  } else {
                    sum += (double)0.3304100587370060738;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.245000004768371582) ) ) {
                    sum += (double)0.5369983189429697878;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5968999862670898438) ) ) {
                      sum += (double)0.4973082699974158416;
                    } else {
                      sum += (double)0.4152597280916643929;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02020000014454126358) ) ) {
              sum += (double)0.6314750812133073099;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2919.195556640625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1766983717679977417) ) ) {
                  sum += (double)0.5813683042931525602;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5446999967098236084) ) ) {
                    sum += (double)0.5609475043607937694;
                  } else {
                    sum += (double)0.4998749394813612468;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2309945002198219299) ) ) {
                  sum += (double)0.6094917212121211403;
                } else {
                  sum += (double)0.5898774039793278634;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2680875062942504883) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06130000017583370209) ) ) {
                sum += (double)0.4213292712783751059;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17553749680519104) ) ) {
                  sum += (double)0.1567568490629993316;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2238590046763420105) ) ) {
                    sum += (double)0.3170268692842875824;
                  } else {
                    sum += (double)0.2113071444910864793;
                  }
                }
              }
            } else {
              sum += (double)0.07347933723105741499;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4837500005960464478) ) ) {
              sum += (double)0.2389075509987675372;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1221077144145965576) ) ) {
                sum += (double)0.303625350998288579;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3346545100212097168) ) ) {
                  sum += (double)0.4118312754495618289;
                } else {
                  sum += (double)0.5369058155106321006;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.63289952278137207) ) ) {
          sum += (double)0.3144432537307358944;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3821935057640075684) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2949054986238479614) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2661229968070983887) ) ) {
                sum += (double)0.0791151275490467043;
              } else {
                sum += (double)0.1809979346711259596;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.56689548492431641) ) ) {
                sum += (double)0.01445402500000000229;
              } else {
                sum += (double)0.04516775695147463854;
              }
            }
          } else {
            sum += (double)0.2091403982866363032;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5277076065540313721) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.15280723571777344) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.99715900421142578) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.635988950729370117) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04985000006854534149) ) ) {
                    sum += (double)0.614685428121998334;
                  } else {
                    sum += (double)0.654860381422802118;
                  }
                } else {
                  sum += (double)0.5629170944148725875;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7148000001907348633) ) ) {
                  sum += (double)0.7051723714285714761;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03435000032186508179) ) ) {
                    sum += (double)0.6793654957010581974;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5243785083293914795) ) ) {
                      sum += (double)0.6163097636887974184;
                    } else {
                      sum += (double)0.6475769480477855389;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.648395776748657227) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                  sum += (double)0.7011566853708662839;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1346.31195068359375) ) ) {
                    sum += (double)0.7619456901394900949;
                  } else {
                    sum += (double)0.7921290125000000071;
                  }
                }
              } else {
                sum += (double)0.6686703172803803996;
              }
            }
          } else {
            sum += (double)0.4251005973224148971;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07400000095367431641) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8180755078792572021) ) ) {
              sum += (double)0.854883055999999919;
            } else {
              sum += (double)0.8976403636363635696;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7950769960880279541) ) ) {
              sum += (double)0.7852023476104053046;
            } else {
              sum += (double)0.8391637568521030932;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6743144989013671875) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2319499999284744263) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.823788225650787354) ) ) {
              sum += (double)0.5188697073654556791;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.23701179027557373) ) ) {
                sum += (double)0.4039728422201962488;
              } else {
                sum += (double)0.2212590773689074863;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.619008660316467285) ) ) {
              sum += (double)0.5998525543937452964;
            } else {
              sum += (double)0.4650737058289135528;
            }
          }
        } else {
          sum += (double)0.6686957270565746514;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.226495742797851562) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274629995226860046) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2991.6090087890625) ) ) {
          sum += (double)0.1977471576459523261;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.640350341796875) ) ) {
            sum += (double)0.1084543746462931779;
          } else {
            sum += (double)0.0080940000000000005;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-821.1251220703125) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2440999969840049744) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6160500049591064453) ) ) {
                sum += (double)0.128830083862397804;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7712000012397766113) ) ) {
                  sum += (double)0.4006421694981827097;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09622897207736968994) ) ) {
                    sum += (double)0.3364913600393845683;
                  } else {
                    sum += (double)0.207873825039562643;
                  }
                }
              }
            } else {
              sum += (double)0.4320045308453657196;
            }
          } else {
            sum += (double)0.1497688619560505197;
          }
        } else {
          sum += (double)0.4869766094979682269;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3915744870901107788) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.5) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3834.52783203125) ) ) {
                    sum += (double)0.009815925000000001385;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2416381016373634338) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.006847033333333334658;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5843112766742706299) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2079999968409538269) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004582320000000000837;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7365107834339141846) ) ) {
                      sum += (double)0.006670325000000001253;
                    } else {
                      sum += (double)0.004000000000000001818;
                    }
                  }
                }
              } else {
                sum += (double)0.00812003478260869653;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.55224609375) ) ) {
                sum += (double)0.02223534736842105314;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                  sum += (double)0.006448133333333334015;
                } else {
                  sum += (double)0.02128435634118967801;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
              sum += (double)0.08494063839373741653;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.58571434020996094) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.5) ) ) {
                    sum += (double)0.02048913333333333628;
                  } else {
                    sum += (double)0.04164598345864661127;
                  }
                } else {
                  sum += (double)0.08247406226342346436;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1036614999175071716) ) ) {
                  sum += (double)0.04420237142857142559;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8054935336112976074) ) ) {
                      sum += (double)0.01609138500000000319;
                    } else {
                      sum += (double)0.005064178947368423202;
                    }
                  } else {
                    sum += (double)0.02910710263882143253;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.593656003475189209) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9288.591796875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.496212393045425415) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03979999944567680359) ) ) {
                  sum += (double)0.1084717111983869026;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2483280003070831299) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.72606086730957031) ) ) {
                      sum += (double)0.04943873748465816426;
                    } else {
                      sum += (double)0.02532884509835193684;
                    }
                  } else {
                    sum += (double)0.08886349839979987286;
                  }
                }
              } else {
                sum += (double)0.1086016378644676095;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96306800842285156) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                  sum += (double)0.04044872102928127877;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5018.7197265625) ) ) {
                    sum += (double)0.09796006054493520965;
                  } else {
                    sum += (double)0.1844274416249182813;
                  }
                }
              } else {
                sum += (double)0.2466749752153793163;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.075013816356658936) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4742.5205078125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24488.8857421875) ) ) {
                  sum += (double)0.01849355078637837657;
                } else {
                  sum += (double)0.04898996573632995177;
                }
              } else {
                sum += (double)0.1073101660130719032;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6666.935302734375) ) ) {
                sum += (double)0.03153831395077556082;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2191334962844848633) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  sum += (double)0.01210620869565217674;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.62857151031494141) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2368.087158203125) ) ) {
            sum += (double)0.1755097662337662123;
          } else {
            sum += (double)0.05070646545153272705;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
            sum += (double)0.1665928989606933752;
          } else {
            sum += (double)0.3700727005529970692;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.34090900421142578) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5246811136153428645;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5946500003337860107) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7307.54345703125) ) ) {
                  sum += (double)0.3015371560364294989;
                } else {
                  sum += (double)0.4170185992339177083;
                }
              } else {
                sum += (double)0.173099966195279148;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3598954975605010986) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4331.488525390625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02675000019371509552) ) ) {
                  sum += (double)0.5573435427620130334;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197473049163818359) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4372419863939285278) ) ) {
                      sum += (double)0.5218166085394866371;
                    } else {
                      sum += (double)0.4861239529486226507;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2719499915838241577) ) ) {
                      sum += (double)0.3988586148543019627;
                    } else {
                      sum += (double)0.5131600419899340348;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.91803586483001709) ) ) {
                  sum += (double)0.5031316696629495322;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2926619946956634521) ) ) {
                    sum += (double)0.2538930819647769455;
                  } else {
                    sum += (double)0.4219628593944531603;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.06938648223876953) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.798341035842895508) ) ) {
                    sum += (double)0.5579452954145803778;
                  } else {
                    sum += (double)0.619974739941510089;
                  }
                } else {
                  sum += (double)0.685322356935817889;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.5887349618876919211;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    sum += (double)0.5426353545331216166;
                  } else {
                    sum += (double)0.4416000952987620409;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
            sum += (double)0.100574559565769342;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17966499924659729) ) ) {
              sum += (double)0.1201913998921503163;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20063.3896484375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.08610820770263672) ) ) {
                    sum += (double)0.4300986122394636624;
                  } else {
                    sum += (double)0.2669584946509325762;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5815999805927276611) ) ) {
                    sum += (double)0.1294528393023178237;
                  } else {
                    sum += (double)0.2319226133313618543;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
                  sum += (double)0.4495441677579405382;
                } else {
                  sum += (double)0.3306034089723261515;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.006363630294799805) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
            sum += (double)0.3748587792678052533;
          } else {
            sum += (double)0.1334101679934792117;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
            sum += (double)0.1817667927433667951;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.67684412002563477) ) ) {
              sum += (double)0.07632397953785056977;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2706094980239868164) ) ) {
                sum += (double)0.03856226084844175533;
              } else {
                sum += (double)0.02166440274599542443;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6183935105800628662) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60194826126098633) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0254999995231628418) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1220334097743034363) ) ) {
                sum += (double)0.7384202708754207256;
              } else {
                sum += (double)0.6761075157433805716;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539483487606048584) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4885804951190948486) ) ) {
                  sum += (double)0.6488743746031745419;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.501087486743927002) ) ) {
                    sum += (double)0.5538700139398486932;
                  } else {
                    sum += (double)0.6051381838031680838;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.780137062072753906) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5805689990520477295) ) ) {
                    sum += (double)0.6756256476733144556;
                  } else {
                    sum += (double)0.7136355211081533145;
                  }
                } else {
                  sum += (double)0.6384743338187559569;
                }
              }
            }
          } else {
            sum += (double)0.3790390343790188132;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.00596141815185547) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.67457818984985352) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.963557064533233643) ) ) {
                  sum += (double)0.771206066546901492;
                } else {
                  sum += (double)0.733274315789473774;
                }
              } else {
                sum += (double)0.7918098500000000373;
              }
            } else {
              sum += (double)0.7160173241724220317;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1076000034809112549) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
                sum += (double)0.8423160465608465763;
              } else {
                sum += (double)0.9006538790021426655;
              }
            } else {
              sum += (double)0.7651510251278248465;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.528790145380554244;
          } else {
            sum += (double)0.2231873472820122273;
          }
        } else {
          sum += (double)0.5995656328360524645;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7749999761581420898) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1860129982233047485) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09345006197690963745) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
              sum += (double)0.01052902222222222399;
            } else {
              sum += (double)0.1174248507950436671;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1916000023484230042) ) ) {
                sum += (double)0.03554810064102564143;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09673599898815155029) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.375) ) ) {
                    sum += (double)0.007820999999999999827;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6544188261032104492) ) ) {
                      sum += (double)0.004175213953488374728;
                    } else {
                      sum += (double)0.006571120000000001474;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.007299840000000001883;
                  } else {
                    sum += (double)0.0230394823529411763;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
                  sum += (double)0.04912054922027290355;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1981500014662742615) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1975712403655052185) ) ) {
                      sum += (double)0.02214600000000000249;
                    } else {
                      sum += (double)0.01189199117799689086;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16985.2158203125) ) ) {
                      sum += (double)0.0172758228571428564;
                    } else {
                      sum += (double)0.03566279047619047571;
                    }
                  }
                }
              } else {
                sum += (double)0.04350803704520335435;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2051995024085044861) ) ) {
              sum += (double)0.07289061375148997435;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2453135028481483459) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84999990463256836) ) ) {
                  sum += (double)0.01585778030560271515;
                } else {
                  sum += (double)0.004760000000000000342;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6160414516925811768) ) ) {
                  sum += (double)0.0402860689399555244;
                } else {
                  sum += (double)0.01145134999999999903;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2922531664371490479) ) ) {
              sum += (double)0.1901267608733406;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.504999995231628418) ) ) {
                sum += (double)0.1137134201484339274;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3584.8118896484375) ) ) {
                  sum += (double)0.05364575865384615949;
                } else {
                  sum += (double)0.02449780913242009459;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.248263835906982422) ) ) {
            sum += (double)0.1239896766502647796;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009399999864399433136) ) ) {
              sum += (double)0.4302791902725334738;
            } else {
              sum += (double)0.2979208660448876;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01300000026822090149) ) ) {
            sum += (double)0.2788205462755896091;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1632634997367858887) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20374.6220703125) ) ) {
                  sum += (double)0.01788992500000000097;
                } else {
                  sum += (double)0.03813151340206184792;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.40643215179443359) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    sum += (double)0.05876823370894978388;
                  } else {
                    sum += (double)0.08989911784237267223;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8561.158203125) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.31937980651855469) ) ) {
                      sum += (double)0.1434453989140838659;
                    } else {
                      sum += (double)0.07714732384446078284;
                    }
                  } else {
                    sum += (double)0.2269606187361042082;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5169000029563903809) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4018500000238418579) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2360835000872612) ) ) {
                    sum += (double)0.00778651851851852074;
                  } else {
                    sum += (double)0.02034845434243176543;
                  }
                } else {
                  sum += (double)0.04207009454225352219;
                }
              } else {
                sum += (double)0.08804319653810535606;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.222050003707408905) ) ) {
          sum += (double)0.2857417108668250383;
        } else {
          sum += (double)0.1137882200506122737;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8475798368453979492) ) ) {
          sum += (double)0.5438033072093124698;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05329999886453151703) ) ) {
            sum += (double)0.421380302161420861;
          } else {
            sum += (double)0.111079251296230655;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5279635190963745117) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45238733291625977) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.6282209607782808236;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362504974007606506) ) ) {
                  sum += (double)0.3999763910602123218;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7411499917507171631) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5261999964714050293) ) ) {
                      sum += (double)0.4975162061407009118;
                    } else {
                      sum += (double)0.5590919275270774813;
                    }
                  } else {
                    sum += (double)0.4516173291550686364;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11756.787109375) ) ) {
                  sum += (double)0.4808685331928114759;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2978219985961914062) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.116345405578613281) ) ) {
                      sum += (double)0.2496857153912146743;
                    } else {
                      sum += (double)0.3630679597188645746;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.05374860763549805) ) ) {
                      sum += (double)0.5095017856912373855;
                    } else {
                      sum += (double)0.3714947759564075636;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5571127235889434814) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4194310009479522705) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2340164855122566223) ) ) {
                    sum += (double)0.6247980156862744661;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3896815031766891479) ) ) {
                      sum += (double)0.6044625183673469904;
                    } else {
                      sum += (double)0.5567613424583558457;
                    }
                  }
                } else {
                  sum += (double)0.5197601641178062337;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06955000013113021851) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4667795002460479736) ) ) {
                      sum += (double)0.6346894066252587452;
                    } else {
                      sum += (double)0.6758176080808081521;
                    }
                  } else {
                    sum += (double)0.581787512370551263;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7040999829769134521) ) ) {
                    sum += (double)0.6305342301886791567;
                  } else {
                    sum += (double)0.5732215180591501147;
                  }
                }
              }
            } else {
              sum += (double)0.4863724947056564663;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.94560432434082031) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2421500012278556824) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382499992847442627) ) ) {
                    sum += (double)0.397142921876187216;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1196499988436698914) ) ) {
                      sum += (double)0.2382256882952966948;
                    } else {
                      sum += (double)0.3111399815069766372;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301319986581802368) ) ) {
                    sum += (double)0.06671925831870061108;
                  } else {
                    sum += (double)0.2656115295474659743;
                  }
                }
              } else {
                sum += (double)0.440318881069426904;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42361.8203125) ) ) {
                sum += (double)0.1398507756690324788;
              } else {
                sum += (double)0.07926040976772975866;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879500001668930054) ) ) {
              sum += (double)0.5283422458861660731;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3859239816665649414) ) ) {
                sum += (double)0.4337646883587396585;
              } else {
                sum += (double)0.2700911268132449861;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.920685410499572754) ) ) {
          sum += (double)0.3946049413307444187;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
              sum += (double)0.1833329587982570896;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2800389975309371948) ) ) {
                    sum += (double)0.04006829807626160339;
                  } else {
                    sum += (double)0.1139819319868951436;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3261809945106506348) ) ) {
                    sum += (double)0.01309013333333333522;
                  } else {
                    sum += (double)0.0308997297762478515;
                  }
                }
              } else {
                sum += (double)0.1360035244138136645;
              }
            }
          } else {
            sum += (double)0.2646791752865979008;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.079657256603240967) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6839055120944976807) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08224999904632568359) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.62892246246337891) ) ) {
                sum += (double)0.6711005699955170378;
              } else {
                sum += (double)0.721800168421052768;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8398000001907348633) ) ) {
                sum += (double)0.7315025342896174232;
              } else {
                sum += (double)0.7984622571428571236;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.186656713485717773) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817844867706298828) ) ) {
                sum += (double)0.6286711489158424149;
              } else {
                sum += (double)0.6979105449206348677;
              }
            } else {
              sum += (double)0.5851313211710443829;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7595499753952026367) ) ) {
              sum += (double)0.7523662398769913606;
            } else {
              sum += (double)0.7862730041882055598;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3763.4678955078125) ) ) {
              sum += (double)0.7839243234465617105;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.884259223937988281) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                  sum += (double)0.8620413178181817182;
                } else {
                  sum += (double)0.8305931321744451923;
                }
              } else {
                sum += (double)0.8827095684210526372;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
          sum += (double)0.5377391339887550581;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.549005051378966713;
          } else {
            sum += (double)0.1606822090157162541;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.851818323135375977) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4365565031766891479) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1970.0625) ) ) {
          sum += (double)0.3281126571465701192;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1120.3150634765625) ) ) {
            sum += (double)0.1070871458005782789;
          } else {
            sum += (double)0.2211889521145694038;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.271474003791809082) ) ) {
          sum += (double)0.5333082168302120118;
        } else {
          sum += (double)0.3740750612839582323;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.27391290664672852) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2113.5087890625) ) ) {
                sum += (double)0.0229799458646616564;
              } else {
                sum += (double)0.004680400000000001226;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.07500076293945312) ) ) {
                  sum += (double)0.008751857142857144556;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05165950022637844086) ) ) {
                      sum += (double)0.00741680000000000117;
                    } else {
                      sum += (double)0.004000000000000000083;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18844.078125) ) ) {
                  sum += (double)0.01021222000000000275;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8720.7685546875) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29876.1240234375) ) ) {
                  sum += (double)0.005110141176470588478;
                } else {
                  sum += (double)0.01167075294117646961;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25341.5087890625) ) ) {
                  sum += (double)0.02529068672438672741;
                } else {
                  sum += (double)0.01118638333333333429;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4400.1357421875) ) ) {
                sum += (double)0.04174322628017694548;
              } else {
                sum += (double)0.01521608000000000162;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7027499973773956299) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.33571434020996094) ) ) {
              sum += (double)0.06849762146839134813;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714815080165863037) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.1681818962097168) ) ) {
                  sum += (double)0.04640539749373433914;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3650000095367431641) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7739124000072479248) ) ) {
                      sum += (double)0.01268405090909090899;
                    } else {
                      sum += (double)0.005245057142857144535;
                    }
                  } else {
                    sum += (double)0.02218496363636364085;
                  }
                }
              } else {
                sum += (double)0.04907878915381019835;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1476000025868415833) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1799999997019767761) ) ) {
                sum += (double)0.08229823834935413862;
              } else {
                sum += (double)0.1500070533178272381;
              }
            } else {
              sum += (double)0.03779161739130435654;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.59567299485206604) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.684472203254699707) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7064.3173828125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.31937980651855469) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.33795928955078125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.18960666656494141) ) ) {
                    sum += (double)0.1190997470176371059;
                  } else {
                    sum += (double)0.03645350357142856934;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1682164967060089111) ) ) {
                    sum += (double)0.08444786252587992148;
                  } else {
                    sum += (double)0.1843343136460376119;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2104475051164627075) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0892999991774559021) ) ) {
                    sum += (double)0.0175919487109905022;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5425499975681304932) ) ) {
                      sum += (double)0.0655422008821415214;
                    } else {
                      sum += (double)0.03157639444883619112;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1787000000476837158) ) ) {
                    sum += (double)0.06804843388784155567;
                  } else {
                    sum += (double)0.1058263859070661811;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.62907600402832031) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.948511123657226562) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.728658676147460938) ) ) {
                      sum += (double)0.113696683502859372;
                    } else {
                      sum += (double)0.2513386008291439433;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4772.58984375) ) ) {
                      sum += (double)0.1254265366838092366;
                    } else {
                      sum += (double)0.03766708967266776259;
                    }
                  }
                } else {
                  sum += (double)0.2578814825274642897;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2666805088520050049) ) ) {
                  sum += (double)0.1929530505025383591;
                } else {
                  sum += (double)0.3852031526720867127;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05764999985694885254) ) ) {
              sum += (double)0.1816020702461298986;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1543.048583984375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3940.62451171875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1749000027775764465) ) ) {
                    sum += (double)0.03844174977324264081;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6927.552490234375) ) ) {
                      sum += (double)0.02476638430737781657;
                    } else {
                      sum += (double)0.007092619999999999134;
                    }
                  }
                } else {
                  sum += (double)0.05582021370492458445;
                }
              } else {
                sum += (double)0.006277147826086959537;
              }
            }
          }
        } else {
          sum += (double)0.3772913842553634045;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32410335540771484) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2564994990825653076) ) ) {
                sum += (double)0.5598866576131686923;
              } else {
                sum += (double)0.4629577236152735975;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.349303245544433594) ) ) {
                sum += (double)0.486409146699662398;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4918.664306640625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                      sum += (double)0.4183779497803790659;
                    } else {
                      sum += (double)0.2479991372735287913;
                    }
                  } else {
                    sum += (double)0.4943214129222749942;
                  }
                } else {
                  sum += (double)0.1829604528917768702;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.4678044319152832) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03354999981820583344) ) ) {
                  sum += (double)0.5553892968909819317;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1676000058650970459) ) ) {
                    sum += (double)0.4741854003904291126;
                  } else {
                    sum += (double)0.5150405544229542665;
                  }
                }
              } else {
                sum += (double)0.4318686896598423197;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3255999982357025146) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008500000112690031528) ) ) {
                    sum += (double)0.6444263709821428376;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2146329134702682495) ) ) {
                      sum += (double)0.5818649220384963794;
                    } else {
                      sum += (double)0.6348189752926567397;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.304013252258300781) ) ) {
                    sum += (double)0.4722336142400014314;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1607000008225440979) ) ) {
                      sum += (double)0.5341727146202487342;
                    } else {
                      sum += (double)0.6035011791887123778;
                    }
                  }
                }
              } else {
                sum += (double)0.4262823211638247511;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3500849157571792603) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6962499916553497314) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1753349974751472473) ) ) {
                  sum += (double)0.4542703523490513318;
                } else {
                  sum += (double)0.3590988235894231884;
                }
              } else {
                sum += (double)0.2795464185088170628;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.3251490592956543) ) ) {
                sum += (double)0.3521737668928286435;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693499982357025146) ) ) {
                  sum += (double)0.09676178212361370712;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622000008821487427) ) ) {
                    sum += (double)0.1635010763789659094;
                  } else {
                    sum += (double)0.229067799869873856;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3588215112686157227) ) ) {
              sum += (double)0.5154464125067730329;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
                sum += (double)0.4124445185645368994;
              } else {
                sum += (double)0.2602856724393976529;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6111499965190887451) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.387154996395111084) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.267136991024017334) ) ) {
              sum += (double)0.183278023228370307;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5206.3466796875) ) ) {
                sum += (double)0.06416583944183398835;
              } else {
                sum += (double)0.02058962758620689823;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.220000028610229492) ) ) {
              sum += (double)0.292819414126107902;
            } else {
              sum += (double)0.1354521001529096769;
            }
          }
        } else {
          sum += (double)0.3318377126086231588;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05007791519165039) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4841285049915313721) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.01043128967285156) ) ) {
                  sum += (double)0.6285307355227534032;
                } else {
                  sum += (double)0.6921957523809524337;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                  sum += (double)0.6382277746179263467;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.908832073211669922) ) ) {
                    sum += (double)0.6012694100628729332;
                  } else {
                    sum += (double)0.5486332603088722726;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1863.19647216796875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8750999867916107178) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5868434906005859375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1156618408858776093) ) ) {
                      sum += (double)0.6622484587719298377;
                    } else {
                      sum += (double)0.6268470920328295115;
                    }
                  } else {
                    sum += (double)0.6922302465129140936;
                  }
                } else {
                  sum += (double)0.7406814112820512275;
                }
              } else {
                sum += (double)0.7554279267727228575;
              }
            }
          } else {
            sum += (double)0.4984061047073158335;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1638311371207237244) ) ) {
              sum += (double)0.7647907325411978929;
            } else {
              sum += (double)0.7283491172932332613;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
                sum += (double)0.8548405034482758902;
              } else {
                sum += (double)0.8871515090909090073;
              }
            } else {
              sum += (double)0.7715193873115722134;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
            sum += (double)0.5269932502722962653;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.4327444223626146225;
            } else {
              sum += (double)0.1934889645964222304;
            }
          }
        } else {
          sum += (double)0.5804677082272365896;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4784455001354217529) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2469635009765625) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5099999904632568359) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7735500037670135498) ) ) {
            sum += (double)0.1380596437292978818;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.0800000019371509552) ) ) {
              sum += (double)0.01906331693325979265;
            } else {
              sum += (double)0.05954481519434320913;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2306.18896484375) ) ) {
              sum += (double)0.2359336105560456975;
            } else {
              sum += (double)0.06569062521800325682;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7714499831199645996) ) ) {
              sum += (double)0.3812056204124725789;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.824675321578979492) ) ) {
                sum += (double)0.3572430517631511315;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.62907600402832031) ) ) {
                  sum += (double)0.09696542328612715866;
                } else {
                  sum += (double)0.2916489409224595764;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.86507892608642578) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07043199986219406128) ) ) {
                  sum += (double)0.01034351111111111304;
                } else {
                  sum += (double)0.005245152941176473016;
                }
              } else {
                sum += (double)0.02207315719298245937;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02920000068843364716) ) ) {
                sum += (double)0.01479018461538461615;
              } else {
                sum += (double)0.1039497919918388885;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1005499996244907379) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.6741371154785156) ) ) {
                      sum += (double)0.006830961904761905998;
                    } else {
                      sum += (double)0.004332130232558141156;
                    }
                  }
                } else {
                  sum += (double)0.01018906153846153677;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6257069408893585205) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04234999977052211761) ) ) {
                    sum += (double)0.0244376923076923061;
                  } else {
                    sum += (double)0.009075333333333334557;
                  }
                } else {
                  sum += (double)0.004441885714285716096;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.017657160758972168) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10431.2421875) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                    sum += (double)0.006067904761904761336;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)146.0345077514648438) ) ) {
                      sum += (double)0.01247920000000000279;
                    } else {
                      sum += (double)0.02829303960573476343;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4686.7880859375) ) ) {
                    sum += (double)0.0525599140875755641;
                  } else {
                    sum += (double)0.006608092307692307703;
                  }
                }
              } else {
                sum += (double)0.005914361290322581871;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03175000008195638657) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000154972076416) ) ) {
                  sum += (double)0.09310148135517305745;
                } else {
                  sum += (double)0.2549454782916322215;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5211238265037536621) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6829999983310699463) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
                      sum += (double)0.02040668162920399042;
                    } else {
                      sum += (double)0.04399009681246003611;
                    }
                  } else {
                    sum += (double)0.06449660557503275604;
                  }
                } else {
                  sum += (double)0.1243161913706448546;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.91666793823242188) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07039999961853027344) ) ) {
                  sum += (double)0.06230960176844432818;
                } else {
                  sum += (double)0.1446539719785540079;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8988.73779296875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.43494224548339844) ) ) {
                    sum += (double)0.1665874183693324129;
                  } else {
                    sum += (double)0.06892157818181819662;
                  }
                } else {
                  sum += (double)0.299301280892725563;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631920456886291504) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3672000020742416382) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3064755052328109741) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8867278099060058594) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1860499978065490723) ) ) {
                      sum += (double)0.02767320128558310374;
                    } else {
                      sum += (double)0.01587692717171717074;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8127.969482421875) ) ) {
                      sum += (double)0.01584327032967033227;
                    } else {
                      sum += (double)0.006545458823529413592;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.90476179122924805) ) ) {
                    sum += (double)0.02209750909090909404;
                  } else {
                    sum += (double)0.05019351111111110264;
                  }
                }
              } else {
                sum += (double)0.07716636813687159646;
              }
            } else {
              sum += (double)0.1281885331562614416;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.556220054626464844) ) ) {
        sum += (double)0.5100146734324364495;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.760233461856842041) ) ) {
          sum += (double)0.1409635337629051299;
        } else {
          sum += (double)0.4016919061443246508;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2808524966239929199) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03344999998807907104) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13006.67822265625) ) ) {
              sum += (double)0.3608337065465403448;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.582195758819580078) ) ) {
                sum += (double)0.4355919920310369897;
              } else {
                sum += (double)0.599923635816498324;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28477859497070312) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5689.095458984375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2138240039348602295) ) ) {
                  sum += (double)0.2754321557983643864;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                    sum += (double)0.5216547840251798407;
                  } else {
                    sum += (double)0.4001216063280578217;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1648499965667724609) ) ) {
                  sum += (double)0.213515757715499549;
                } else {
                  sum += (double)0.3000322331924517028;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2394250035285949707) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3034500032663345337) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1689774990081787109) ) ) {
                    sum += (double)0.2686431151509113269;
                  } else {
                    sum += (double)0.1698010451723351022;
                  }
                } else {
                  sum += (double)0.09170439564637825058;
                }
              } else {
                sum += (double)0.2987939278851983738;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3407154977321624756) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06064999848604202271) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.604779362678527832) ) ) {
                  sum += (double)0.4847966812904599965;
                } else {
                  sum += (double)0.5555603965106413744;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5843999981880187988) ) ) {
                  sum += (double)0.4995582513868316865;
                } else {
                  sum += (double)0.3835565875184405171;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.09713840484619141) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4860000014305114746) ) ) {
                    sum += (double)0.5545530215100411553;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.469152495265007019) ) ) {
                      sum += (double)0.6155700177134237894;
                    } else {
                      sum += (double)0.573690859299418765;
                    }
                  }
                } else {
                  sum += (double)0.6880526053459782299;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7313500046730041504) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6254500150680541992) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.267441749572753906) ) ) {
                      sum += (double)0.5871043097333750183;
                    } else {
                      sum += (double)0.5269627990044758459;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4208489954471588135) ) ) {
                      sum += (double)0.5896503239610964009;
                    } else {
                      sum += (double)0.6516024551051050606;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1929999962449073792) ) ) {
                    sum += (double)0.4492205925216414819;
                  } else {
                    sum += (double)0.5305813824287320957;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7429499924182891846) ) ) {
                sum += (double)0.4923890547303247378;
              } else {
                sum += (double)0.2963910427796354607;
              }
            } else {
              sum += (double)0.2369154179275469174;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.339742183685302734) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.961665809154510498) ) ) {
            sum += (double)0.4949616069667310825;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912790030241012573) ) ) {
                  sum += (double)0.06034926120210606232;
                } else {
                  sum += (double)0.3015961552113203825;
                }
              } else {
                sum += (double)0.0694005998928056006;
              }
            } else {
              sum += (double)0.3336757657152824574;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15003.7880859375) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1806500032544136047) ) ) {
              sum += (double)0.0875093311279547259;
            } else {
              sum += (double)0.1930280827469250948;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3399499952793121338) ) ) {
              sum += (double)0.07341266051200082132;
            } else {
              sum += (double)0.0144424000000000028;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062999188899993896) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5796644985675811768) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1035499982535839081) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09691703692078590393) ) ) {
                sum += (double)0.7205230923076922922;
              } else {
                sum += (double)0.6657849974494640666;
              }
            } else {
              sum += (double)0.6117880606342437355;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.613146305084228516) ) ) {
                sum += (double)0.6945455974990537573;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.36068117618560791) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01765000075101852417) ) ) {
                    sum += (double)0.764748836574074109;
                  } else {
                    sum += (double)0.7981817735027224581;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.16197957843542099) ) ) {
                    sum += (double)0.7181674966810966954;
                  } else {
                    sum += (double)0.7595296285714284723;
                  }
                }
              }
            } else {
              sum += (double)0.6798519723701968998;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8586425185203552246) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.486638545989990234) ) ) {
              sum += (double)0.8619561157894737313;
            } else {
              sum += (double)0.8143966398941799856;
            }
          } else {
            sum += (double)0.9172032298915075987;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
            sum += (double)0.5351650264581931937;
          } else {
            sum += (double)0.2351684956675113569;
          }
        } else {
          sum += (double)0.6228436607277750836;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472999989986419678) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267609968781471252) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.86507892608642578) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.375) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.30356979370117188) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                    sum += (double)0.01563194285714285953;
                  } else {
                    sum += (double)0.007036307692307693269;
                  }
                } else {
                  sum += (double)0.004000000000000000951;
                }
              } else {
                sum += (double)0.03199848087912087607;
              }
            } else {
              sum += (double)0.04103168906825888779;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54004383087158203) ) ) {
                sum += (double)0.1250754573791358071;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5349.041015625) ) ) {
                  sum += (double)0.05100557767441091239;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04790000058710575104) ) ) {
                    sum += (double)0.01577938181818181601;
                  } else {
                    sum += (double)0.02245867499999999739;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.980000019073486328) ) ) {
                sum += (double)0.2040952742650626317;
              } else {
                sum += (double)0.1000791565217429291;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1975499987602233887) ) ) {
                sum += (double)0.02310530028490028268;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7014.650146484375) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5843744277954101562) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005088140540540541691;
                    }
                  } else {
                    sum += (double)0.007972357894736843004;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.53571414947509766) ) ) {
                    sum += (double)0.01280315294117647003;
                  } else {
                    sum += (double)0.005776187500000000939;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09756350144743919373) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07197099924087524414) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    sum += (double)0.007706110344827587881;
                  } else {
                    sum += (double)0.0416144459355459323;
                  }
                } else {
                  sum += (double)0.05679133739612189646;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.54244041442871094) ) ) {
                  sum += (double)0.02107356363636363888;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21395.5732421875) ) ) {
                    sum += (double)0.01661404615384615494;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13675.6025390625) ) ) {
                      sum += (double)0.006072560000000001151;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622999876737594604) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1527500003576278687) ) ) {
                sum += (double)0.006752333333333334145;
              } else {
                sum += (double)0.02319901065943992882;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6354000270366668701) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.25063323974609375) ) ) {
                  sum += (double)0.06732591185977102044;
                } else {
                  sum += (double)0.152498990251171529;
                }
              } else {
                sum += (double)0.03549703418087428453;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519881054759025574) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.39999961853027344) ) ) {
            sum += (double)0.1574095027313353046;
          } else {
            sum += (double)0.2888842807198170881;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0758500024676322937) ) ) {
            sum += (double)0.2129424677195161653;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06210000067949295044) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1398.203125) ) ) {
                sum += (double)0.05710173153180602562;
              } else {
                sum += (double)0.007761104000000001307;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1295.9945068359375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3738.986328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9158.50390625) ) ) {
                    sum += (double)0.07585418722802701741;
                  } else {
                    sum += (double)0.1536856044143457833;
                  }
                } else {
                  sum += (double)0.00666689411764705836;
                }
              } else {
                sum += (double)0.1530476923578213966;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.851818323135375977) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3496749997138977051) ) ) {
            sum += (double)0.3670223976844408931;
          } else {
            sum += (double)0.2132451678174405452;
          }
        } else {
          sum += (double)0.5412371728211649025;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007800000021234154701) ) ) {
          sum += (double)0.3715051950360959143;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5263529717922210693) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10434.0517578125) ) ) {
                  sum += (double)0.05410112889729499358;
                } else {
                  sum += (double)0.1784711107135910357;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7348000109195709229) ) ) {
                  sum += (double)0.2976310919362322172;
                } else {
                  sum += (double)0.1705860143071491475;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3190.1282958984375) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2559000104665756226) ) ) {
                  sum += (double)0.01157319376344085812;
                } else {
                  sum += (double)0.03198468588114394134;
                }
              } else {
                sum += (double)0.06743301364528311859;
              }
            }
          } else {
            sum += (double)0.297177041896539762;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831795006990432739) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.63115787506103516) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2597120106220245361) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05549999885261058807) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
                sum += (double)0.5546146255041255468;
              } else {
                sum += (double)0.4372195077764236548;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1694499999284744263) ) ) {
                  sum += (double)0.348201424168836704;
                } else {
                  sum += (double)0.4776348548611978884;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2092209979891777039) ) ) {
                  sum += (double)0.1789704733398152503;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193599998950958252) ) ) {
                    sum += (double)0.2675261375161326338;
                  } else {
                    sum += (double)0.3650668457797422994;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004349999944679439068) ) ) {
              sum += (double)0.6267223148727730786;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5309000015258789062) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4979.864501953125) ) ) {
                      sum += (double)0.495280529117939794;
                    } else {
                      sum += (double)0.4454829129201347548;
                    }
                  } else {
                    sum += (double)0.529911330768484623;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11367.98486328125) ) ) {
                    sum += (double)0.4643391677381313309;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.93576145172119141) ) ) {
                      sum += (double)0.3121044565328362497;
                    } else {
                      sum += (double)0.4387466701764343724;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3648834973573684692) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3490370064973831177) ) ) {
                    sum += (double)0.5870584041291516675;
                  } else {
                    sum += (double)0.5218490291401056691;
                  }
                } else {
                  sum += (double)0.432067753644710284;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5122500061988830566) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.21604537963867188) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1762465015053749084) ) ) {
                sum += (double)0.1034063924635259674;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.30357399582862854) ) ) {
                  sum += (double)0.2876573127481087955;
                } else {
                  sum += (double)0.1394486410838940427;
                }
              }
            } else {
              sum += (double)0.07644228394227872703;
            }
          } else {
            sum += (double)0.3548114823829142672;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3867.7899169921875) ) ) {
            sum += (double)0.2600083712467142205;
          } else {
            sum += (double)0.1062332445508727269;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21020.2197265625) ) ) {
            sum += (double)0.107978474129003299;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.78266429901123047) ) ) {
              sum += (double)0.0444789115080253955;
            } else {
              sum += (double)0.01785008888888888617;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468100011348724365) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4634777456521987915) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                sum += (double)0.6951617823913043281;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6942000091075897217) ) ) {
                      sum += (double)0.5651013987198987287;
                    } else {
                      sum += (double)0.6165743924276843035;
                    }
                  } else {
                    sum += (double)0.6658910262626261956;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4433834999799728394) ) ) {
                      sum += (double)0.565540978957332019;
                    } else {
                      sum += (double)0.6189035224459306095;
                    }
                  } else {
                    sum += (double)0.5097109311645928731;
                  }
                }
              }
            } else {
              sum += (double)0.5153400844604716369;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7070499956607818604) ) ) {
              sum += (double)0.3323678257641373701;
            } else {
              sum += (double)0.5183054898077934514;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8047.837158203125) ) ) {
              sum += (double)0.6117513428478027482;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                  sum += (double)0.6653507994298499817;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.618140816688537598) ) ) {
                    sum += (double)0.7620043076923076475;
                  } else {
                    sum += (double)0.7099130722064392884;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.11048555374145508) ) ) {
                  sum += (double)0.7417645311233233008;
                } else {
                  sum += (double)0.8068133888640428575;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052500009536743164) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8328820168972015381) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700851440429688) ) ) {
                  sum += (double)0.8517730200000001028;
                } else {
                  sum += (double)0.8116344529100528726;
                }
              } else {
                sum += (double)0.8973207200000000716;
              }
            } else {
              sum += (double)0.7597203731762065537;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.986157834529876709) ) ) {
            sum += (double)0.5530838739985766139;
          } else {
            sum += (double)0.4833837824661599281;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.6118621826171875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.136363744735717773) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1629.09356689453125) ) ) {
                sum += (double)0.3821581400559699304;
              } else {
                sum += (double)0.1275510382917545982;
              }
            } else {
              sum += (double)0.1029944910589616486;
            }
          } else {
            sum += (double)0.4677349088172627622;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
          sum += (double)0.02990467902097902059;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-767.328643798828125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
              sum += (double)0.2208917366076255384;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                sum += (double)0.256551289590719156;
              } else {
                sum += (double)0.433881502049944523;
              }
            }
          } else {
            sum += (double)0.1320281646890505423;
          }
        }
      } else {
        sum += (double)0.5423750196927634715;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.94799232482910156) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.75) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.46153831481933594) ) ) {
                  sum += (double)0.02680999950891427633;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.83578300476074219) ) ) {
                    sum += (double)0.006996674285714286901;
                  } else {
                    sum += (double)0.01549250000000000106;
                  }
                }
              } else {
                sum += (double)0.0613737785617890913;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1072290018200874329) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8701000213623046875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.23809814453125) ) ) {
                      sum += (double)0.008199466666666667056;
                    } else {
                      sum += (double)0.004144660122699389375;
                    }
                  } else {
                    sum += (double)0.007639899999999999816;
                  }
                } else {
                  sum += (double)0.01153490666666666907;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1703944951295852661) ) ) {
                  sum += (double)0.02162796592724046049;
                } else {
                  sum += (double)0.00514996923076923175;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8471999764442443848) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3451200127601623535) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                  sum += (double)0.07379662954545454512;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.68571376800537109) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09345000237226486206) ) ) {
                      sum += (double)0.01906238333333333881;
                    } else {
                      sum += (double)0.07823672253797442355;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                      sum += (double)0.01101720579710144948;
                    } else {
                      sum += (double)0.02467588071348941064;
                    }
                  }
                }
              } else {
                sum += (double)0.09094990129583679916;
              }
            } else {
              sum += (double)0.115934417342746135;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2061147689819335938) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03190000075846910477) ) ) {
              sum += (double)0.2937854931054130758;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2566159963607788086) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.12077350914478302) ) ) {
                  sum += (double)0.0679523739343685651;
                } else {
                  sum += (double)0.1108252484102254798;
                }
              } else {
                sum += (double)0.2292571461187828119;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.175000190734863281) ) ) {
              sum += (double)0.1595749996755694844;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5751000046730041504) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01184999989345669746) ) ) {
                  sum += (double)0.133274785883347624;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06039999984204769135) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.518193364143371582) ) ) {
                      sum += (double)0.03757791087756898185;
                    } else {
                      sum += (double)0.005779371102150538189;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380943298339844) ) ) {
                      sum += (double)0.104512800821966817;
                    } else {
                      sum += (double)0.0560735980633729203;
                    }
                  }
                }
              } else {
                sum += (double)0.1615299438538332633;
              }
            }
          }
        }
      } else {
        sum += (double)0.3670492070698000986;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9070492982864379883) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280154004693031311) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
              sum += (double)0.5592700264126012621;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.913228154182434082) ) ) {
                sum += (double)0.5040195203335300356;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16817.787109375) ) ) {
                  sum += (double)0.4592010383813788787;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.259416103363037109) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.42788887023925781) ) ) {
                      sum += (double)0.2657688397302676586;
                    } else {
                      sum += (double)0.3913141423911150607;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.22865867614746094) ) ) {
                      sum += (double)0.200776768914016468;
                    } else {
                      sum += (double)0.2913381184787745548;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
              sum += (double)0.6590997927598521988;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3252.1646728515625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.300890997052192688) ) ) {
                    sum += (double)0.4600606670167871615;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.37450361251831055) ) ) {
                      sum += (double)0.5154110354555379025;
                    } else {
                      sum += (double)0.4751537476755428591;
                    }
                  }
                } else {
                  sum += (double)0.4170522322152680483;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.311781644821166992) ) ) {
                    sum += (double)0.5720801077417425606;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.208774864673614502) ) ) {
                      sum += (double)0.6112626523964189706;
                    } else {
                      sum += (double)0.6551337451851850791;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.416926383972167969) ) ) {
                    sum += (double)0.580088389927876702;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.923276424407958984) ) ) {
                      sum += (double)0.4249874992734179457;
                    } else {
                      sum += (double)0.5418431927255790148;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2680875062942504883) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1196999996900558472) ) ) {
              sum += (double)0.3316078427920111094;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.203429006040096283) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3087499886751174927) ) ) {
                  sum += (double)0.1684467262057805781;
                } else {
                  sum += (double)0.04628213779264214039;
                }
              } else {
                sum += (double)0.2185957955677601816;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4451999962329864502) ) ) {
              sum += (double)0.1795598135105457294;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2489500045776367188) ) ) {
                sum += (double)0.3271882558096108617;
              } else {
                sum += (double)0.4365911012506256128;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.194907665252685547) ) ) {
          sum += (double)0.3295735347288481498;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.2544196893148263916;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24728.45703125) ) ) {
              sum += (double)0.1354592383029628311;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.007034778594970703) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3676.5296630859375) ) ) {
                  sum += (double)0.1745115329800547566;
                } else {
                  sum += (double)0.04582558134968479913;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.753016114234924316) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.503048837184906006) ) ) {
                    sum += (double)0.007632320000000000597;
                  } else {
                    sum += (double)0.02180755555555555919;
                  }
                } else {
                  sum += (double)0.03953997781888583807;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10416.89599609375) ) ) {
              sum += (double)0.4969360375861640589;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8065499961376190186) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485707506537437439) ) ) {
                  sum += (double)0.6255784255712251163;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5916.149658203125) ) ) {
                    sum += (double)0.6237838400164041897;
                  } else {
                    sum += (double)0.5417461094825574142;
                  }
                }
              } else {
                sum += (double)0.6627504037172703422;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1508.35369873046875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.868600010871887207) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4538.65966796875) ) ) {
                  sum += (double)0.6184705592414014852;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.131350003182888031) ) ) {
                    sum += (double)0.664521841436299443;
                  } else {
                    sum += (double)0.7267137986394557325;
                  }
                }
              } else {
                sum += (double)0.7150753318681316584;
              }
            } else {
              sum += (double)0.7402939299285413721;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8275499939918518066) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6741120219230651855) ) ) {
                sum += (double)0.7809684678362572852;
              } else {
                sum += (double)0.7254468048535233082;
              }
            } else {
              sum += (double)0.8152125052631579161;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3511.3631591796875) ) ) {
              sum += (double)0.7952708865727698972;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8184680044651031494) ) ) {
                sum += (double)0.8491793714285713612;
              } else {
                sum += (double)0.8901550849403121468;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5180234059513182387;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2319499999284744263) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0422999989241361618) ) ) {
                sum += (double)0.3139686906954908263;
              } else {
                sum += (double)0.1905974184985269604;
              }
            } else {
              sum += (double)0.3902025049415094871;
            }
          }
        } else {
          sum += (double)0.6439049928979423409;
        }
      }
    }
  }
  return sum;
}
