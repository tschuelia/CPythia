#include "prediction.h"
double predict_margin_unit5(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
          sum += (double)0.0009802122896631244864;
        } else {
          sum += (double)-0.002235877244840735623;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.545000000000000151) ) ) {
          sum += (double)-0.005175414101559603318;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
            sum += (double)-0.005582071101041587505;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              sum += (double)0.006703206978528226077;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8627945000000001308) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                      sum += (double)0.002031615427243743058;
                    } else {
                      sum += (double)0.0006712993855081059993;
                    }
                  } else {
                    sum += (double)0.004063440042835771149;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
                    sum += (double)0.0003319616016454282224;
                  } else {
                    sum += (double)-0.006146961612254310016;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10171.3697502395753) ) ) {
                  sum += (double)-0.01350075130962696476;
                } else {
                  sum += (double)0.003138651639138667019;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
        sum += (double)0.00333871505665508635;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.179108910891089934) ) ) {
            sum += (double)0.003633637169548243392;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
              sum += (double)-0.007824506935075487696;
            } else {
              sum += (double)0.001067357164218117735;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34.77474226493854559) ) ) {
              sum += (double)0.0007496201623614011204;
            } else {
              sum += (double)-0.007358031505330537951;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
                    sum += (double)8.597033236482368374e-05;
                  } else {
                    sum += (double)-0.00664491150824094573;
                  }
                } else {
                  sum += (double)0.001615264912982517865;
                }
              } else {
                sum += (double)-0.009599920566404731778;
              }
            } else {
              sum += (double)-0.01005473940494576619;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
        sum += (double)-0.005939977599464724319;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
          sum += (double)0.006212028956799866414;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
            sum += (double)0.004908417669694939249;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4450000000000000622) ) ) {
              sum += (double)-0.001653366516428118665;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331779278199183014) ) ) {
                    sum += (double)0.001889551175555440575;
                  } else {
                    sum += (double)0.008116417296427261979;
                  }
                } else {
                  sum += (double)-0.004467913993813119045;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                  sum += (double)-0.0006810283489331276979;
                } else {
                  sum += (double)-0.004159841813439651634;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18906.11182675446616) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9544500000000001316) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.677320500000000103) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
                  sum += (double)0.00783547570140452794;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2571.528544352357585) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                      sum += (double)0.006542703398793810882;
                    } else {
                      sum += (double)0.0001420396866288420269;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07335000000000001241) ) ) {
                      sum += (double)0.01068605981780479039;
                    } else {
                      sum += (double)0.0003555739787492747479;
                    }
                  }
                }
              } else {
                sum += (double)0.003361868595039944896;
              }
            } else {
              sum += (double)-0.009179196267146496474;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9343500000000001249) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1768500000000000349) ) ) {
                sum += (double)0.007770295020941374482;
              } else {
                sum += (double)0.002763759513149177845;
              }
            } else {
              sum += (double)-0.0004097426478717721213;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                sum += (double)-0.006812687786750539279;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1983.263552118278994) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                    sum += (double)0.001369764366121387642;
                  } else {
                    sum += (double)-0.01020203043970619936;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
                    sum += (double)-0.001413602992445985333;
                  } else {
                    sum += (double)0.006630180256477100249;
                  }
                }
              }
            } else {
              sum += (double)-0.009410890729791931628;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2703.500010395392565) ) ) {
                    sum += (double)0.009320150425234490985;
                  } else {
                    sum += (double)-0.001664282680322982846;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                      sum += (double)0.0006833369141958215744;
                    } else {
                      sum += (double)-0.00709959209988777519;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3146902490233077776) ) ) {
                      sum += (double)0.0108523568914035487;
                    } else {
                      sum += (double)-7.754662694356800304e-05;
                    }
                  }
                }
              } else {
                sum += (double)-0.006717749331236692011;
              }
            } else {
              sum += (double)-0.005536010558863683692;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8817.104006290848702) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
              sum += (double)0.003397603682703662607;
            } else {
              sum += (double)-0.004044758515613635849;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49080.05530822202854) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.90306122448980375) ) ) {
                sum += (double)0.007646602471986918038;
              } else {
                sum += (double)-0.00340010704446411325;
              }
            } else {
              sum += (double)-0.00301608346056616303;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7698386560669406853) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-61889.65780747836834) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                      sum += (double)0.009362524494718527102;
                    } else {
                      sum += (double)-0.00122295442306553947;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.789850000000000052) ) ) {
                      sum += (double)-0.0001795799908044824549;
                    } else {
                      sum += (double)-0.005785517522453908698;
                    }
                  }
                } else {
                  sum += (double)0.008084924019243877602;
                }
              } else {
                sum += (double)-0.003246958293645836255;
              }
            } else {
              sum += (double)0.005743500248579706639;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2855158726759733923) ) ) {
              sum += (double)0.0002789501369526961225;
            } else {
              sum += (double)0.01377941938034652272;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
      sum += (double)0.002573690988141173492;
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
        sum += (double)0.001264850201009040014;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
          sum += (double)-0.0006869920758209057451;
        } else {
          sum += (double)-0.01028138912494158154;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
        sum += (double)-0.005456121288199921801;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
          sum += (double)0.004568667595544723126;
        } else {
          sum += (double)-0.00125022775237568955;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4768620372057117418) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
              sum += (double)-0.001062624612217734051;
            } else {
              sum += (double)0.009663642693948409218;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                sum += (double)0.008010834163080736078;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3926465801380922271) ) ) {
                  sum += (double)0.004280604686756278067;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                    sum += (double)0.00102442761622799079;
                  } else {
                    sum += (double)-0.006590901681899242505;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5381500000000001283) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
                    sum += (double)0.009644226035663654856;
                  } else {
                    sum += (double)0.0212750158071304124;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4496507448607858781) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                      sum += (double)0.01205356688356371865;
                    } else {
                      sum += (double)0.003401667929186591097;
                    }
                  } else {
                    sum += (double)-0.0006331165747417886406;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                  sum += (double)0.004829952265032911619;
                } else {
                  sum += (double)-0.003889019586505045555;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5882.835930520358488) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6358500000000001373) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
                  sum += (double)0.002047678799486908792;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                    sum += (double)-0.01138998692981923674;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
                      sum += (double)-0.01114863293342277517;
                    } else {
                      sum += (double)-0.001860235018254795258;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
                  sum += (double)0.004862994741880978349;
                } else {
                  sum += (double)-0.003051705405905934341;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09707842318205106569) ) ) {
                    sum += (double)-0.009665568528179511662;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                      sum += (double)-2.698657475622293357e-05;
                    } else {
                      sum += (double)-0.002686974097646918722;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7680500000000001215) ) ) {
                    sum += (double)0.009623261243835810191;
                  } else {
                    sum += (double)0.001011055201761392819;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)983.5309309347018143) ) ) {
                  sum += (double)-0.008226750207715001137;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                      sum += (double)0.01158527653535083163;
                    } else {
                      sum += (double)0.002713871791484278369;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                      sum += (double)0.006012266760754198837;
                    } else {
                      sum += (double)-0.0009120394742619067786;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1322500000000000342) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
                      sum += (double)0.005891453695040275822;
                    } else {
                      sum += (double)0.001472850786087958773;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                      sum += (double)0.00210529980150495977;
                    } else {
                      sum += (double)-0.005845771695373540473;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0939432926751793268) ) ) {
                    sum += (double)0.002050963654544197753;
                  } else {
                    sum += (double)0.009494253164049752322;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                  sum += (double)0.002057782278232736517;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2660000000000000697) ) ) {
                      sum += (double)-0.006362493725533190266;
                    } else {
                      sum += (double)0.001252959336916225925;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                      sum += (double)-0.004614332529027339799;
                    } else {
                      sum += (double)0.002454658957105756382;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.007854219987136805414;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6327627825323679511) ) ) {
              sum += (double)0.006308619997954498237;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
                sum += (double)0.001438597939743552516;
              } else {
                sum += (double)-0.002507478731656658921;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3374528484932872718) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                    sum += (double)-0.00243969748751262901;
                  } else {
                    sum += (double)-0.009887906084191138562;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.569111884291402359) ) ) {
                    sum += (double)0.002708507046297950471;
                  } else {
                    sum += (double)-0.005583440548266286815;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
                    sum += (double)0.008623756982426449003;
                  } else {
                    sum += (double)0.0002874002517253189675;
                  }
                } else {
                  sum += (double)-0.005309334032296047536;
                }
              }
            } else {
              sum += (double)-0.005513122315884523908;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)-0.005000237050706259762;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2340754640673623765) ) ) {
                      sum += (double)0.002878986974248258935;
                    } else {
                      sum += (double)-0.001506533300894752694;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                      sum += (double)0.009288236285575466114;
                    } else {
                      sum += (double)0.001491518034041953555;
                    }
                  }
                }
              } else {
                sum += (double)0.008770670795009942802;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                sum += (double)-0.008423947459063996224;
              } else {
                sum += (double)-0.0002624749140597832753;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                sum += (double)-0.002372808830647483644;
              } else {
                sum += (double)0.006448078248050106813;
              }
            } else {
              sum += (double)-0.002461598281832603433;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
        sum += (double)-0.003911914420757114756;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3028.043267225880754) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.21825396825397192) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.12310606060606588) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                      sum += (double)-0.0002521442969585666136;
                    } else {
                      sum += (double)-0.003703380789730855837;
                    }
                  } else {
                    sum += (double)0.0007460739798754611367;
                  }
                } else {
                  sum += (double)0.006762255865677686655;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                  sum += (double)0.01213358258125378161;
                } else {
                  sum += (double)0.001660615501350531454;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1572954101779138469) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.80359334895659007) ) ) {
                    sum += (double)0.008426300571719447241;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849500000000000144) ) ) {
                      sum += (double)0.004785460970067826475;
                    } else {
                      sum += (double)-0.002676794330705204675;
                    }
                  }
                } else {
                  sum += (double)-0.003490422275293186653;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                      sum += (double)-0.00640415419249332641;
                    } else {
                      sum += (double)-0.01583051194706683665;
                    }
                  } else {
                    sum += (double)-0.001868619625096125218;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1839.943830114362981) ) ) {
                    sum += (double)0.007449570873131282529;
                  } else {
                    sum += (double)-0.002189083705185893274;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.16273471352914015) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                    sum += (double)-0.0105614688992659439;
                  } else {
                    sum += (double)7.089308059219949964e-05;
                  }
                } else {
                  sum += (double)0.004168716936947600496;
                }
              } else {
                sum += (double)0.003341648500246045123;
              }
            } else {
              sum += (double)-0.002276343469502765341;
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)23070.06005165050738) ) ) {
            sum += (double)-0.005726749054511079406;
          } else {
            sum += (double)0.003580719944191491921;
          }
        }
      }
    } else {
      sum += (double)0.001547855522248895062;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4450000000000000622) ) ) {
        sum += (double)-0.001385163983198482718;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
            sum += (double)0.005353395212727927663;
          } else {
            sum += (double)-0.003779925923388648482;
          }
        } else {
          sum += (double)-0.0007173745372613647437;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
              sum += (double)-0.005062150412585881762;
            } else {
              sum += (double)0.003189896932281275407;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
              sum += (double)0.002704162394855946089;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4507500000000000395) ) ) {
                  sum += (double)0.01780153633534912322;
                } else {
                  sum += (double)0.00881309927456885682;
                }
              } else {
                sum += (double)0.005134520338529307074;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
                  sum += (double)0.001354810613307751502;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
                    sum += (double)-0.002991801174204658173;
                  } else {
                    sum += (double)-0.01194801786041421732;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18906.11182675446616) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                      sum += (double)0.0006716565255474141486;
                    } else {
                      sum += (double)-0.001235088126382996154;
                    }
                  } else {
                    sum += (double)0.004132231057845095132;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4636414834351271774) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9003.644477627831293) ) ) {
                      sum += (double)-0.003158425588810329782;
                    } else {
                      sum += (double)-0.000720760233983336481;
                    }
                  } else {
                    sum += (double)0.005019948018259121417;
                  }
                }
              }
            } else {
              sum += (double)-0.006186330657825592043;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
              sum += (double)-0.0007587514586074552885;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2168.319171519228803) ) ) {
                sum += (double)0.009925532550782944358;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.10606060606062329) ) ) {
                  sum += (double)0.00116993856625431116;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8825000000000001732) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
                      sum += (double)0.0142859811053861873;
                    } else {
                      sum += (double)0.003000754227036866745;
                    }
                  } else {
                    sum += (double)0.0003023367324680687829;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5797681545636242939) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1795.96581361443873) ) ) {
            sum += (double)-0.009425707122621465248;
          } else {
            sum += (double)-0.002062755198738501234;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                      sum += (double)0.00196922912891547364;
                    } else {
                      sum += (double)-0.002620036407844366852;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
                      sum += (double)-0.007639375696092477394;
                    } else {
                      sum += (double)-0.001375613792624528651;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                    sum += (double)0.007109859682590250439;
                  } else {
                    sum += (double)-0.0002173733311266778695;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
                    sum += (double)0.0111001748694159897;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      sum += (double)-0.001415731202692917506;
                    } else {
                      sum += (double)0.005439768580535130592;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      sum += (double)0.008773324138532115346;
                    } else {
                      sum += (double)-0.00249761160681272968;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                      sum += (double)0.001240451021177304972;
                    } else {
                      sum += (double)-0.002843804259613803235;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2149.529036211334187) ) ) {
                sum += (double)-0.004145357020876047974;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  sum += (double)-0.004096884505467861433;
                } else {
                  sum += (double)0.0003259556879083972433;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1061.95970582644145) ) ) {
              sum += (double)0.01017406980727751306;
            } else {
              sum += (double)-0.0008620808495362535049;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7513157894736842701) ) ) {
      sum += (double)0.002515191000446599743;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
          sum += (double)-0.008317069706928298736;
        } else {
          sum += (double)-0.002257414283632931933;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
            sum += (double)0.0006210103998164895594;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
                sum += (double)0.001682019988591733958;
              } else {
                sum += (double)-0.0002582303325678406971;
              }
            } else {
              sum += (double)0.003503686613231322706;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)642.537947836085209) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
                      sum += (double)0.004909630765988941443;
                    } else {
                      sum += (double)-0.003523454302541544417;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                      sum += (double)-0.001157253016778191914;
                    } else {
                      sum += (double)-0.00804726920240887017;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1850000000000000255) ) ) {
                    sum += (double)0.00346161739216981762;
                  } else {
                    sum += (double)-0.004917326087509324949;
                  }
                }
              } else {
                sum += (double)0.003293757873073814655;
              }
            } else {
              sum += (double)0.006122590951252629421;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
              sum += (double)-0.003591214733893099628;
            } else {
              sum += (double)-0.01442786461225026469;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
        sum += (double)0.004729014385525445036;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4450000000000000622) ) ) {
          sum += (double)-0.001316210379770697912;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2190711269459436339) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
              sum += (double)0.01261589944328682204;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                sum += (double)-0.00238956366498749382;
              } else {
                sum += (double)0.00444504227879404662;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2487665370563404699) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                sum += (double)0.002814994352989155617;
              } else {
                sum += (double)-0.003364356678836706235;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                  sum += (double)0.004832092987232952143;
                } else {
                  sum += (double)0.0002058360731780925588;
                }
              } else {
                sum += (double)-0.002974104506139303196;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9679500000000001991) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4768620372057117418) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5623500000000001275) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
              sum += (double)-0.002771193829547981009;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
                  sum += (double)0.007709418459353256821;
                } else {
                  sum += (double)-0.00237433532938963231;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2807000000000000051) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                    sum += (double)0.001477484502870069849;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
                      sum += (double)0.007712915369361240253;
                    } else {
                      sum += (double)0.01616493668324408411;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
                    sum += (double)0.007270933347926463071;
                  } else {
                    sum += (double)-0.0008613301656799996625;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7014630000000000587) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10534.50099646399576) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
                      sum += (double)-0.0001191172258790247314;
                    } else {
                      sum += (double)-0.00254564517806224206;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
                      sum += (double)0.003742058663739838628;
                    } else {
                      sum += (double)0.0001139803727684789701;
                    }
                  }
                } else {
                  sum += (double)0.003824104548888287731;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                      sum += (double)-0.002245095700415456006;
                    } else {
                      sum += (double)0.001976070320062338088;
                    }
                  } else {
                    sum += (double)0.006468237538815087978;
                  }
                } else {
                  sum += (double)0.008106796360860868411;
                }
              }
            } else {
              sum += (double)-0.004793779053108771469;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
                  sum += (double)-0.002776466309160543523;
                } else {
                  sum += (double)0.004151606642299669574;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                  sum += (double)0.007875918079407667055;
                } else {
                  sum += (double)-0.001480380241648388039;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    sum += (double)0.003060563981210857008;
                  } else {
                    sum += (double)-0.003430547336504519065;
                  }
                } else {
                  sum += (double)0.002965110509865942403;
                }
              } else {
                sum += (double)-0.007677048045520542749;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.50675675675677212) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5189379155588735859) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2804.56287847494923) ) ) {
                      sum += (double)-0.00237105256329566208;
                    } else {
                      sum += (double)0.006917191346174350955;
                    }
                  } else {
                    sum += (double)0.01396198885413269496;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                      sum += (double)0.005383016057894258848;
                    } else {
                      sum += (double)-0.00209409527055669795;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
                      sum += (double)0.001449815081702332314;
                    } else {
                      sum += (double)-0.004602245480558679255;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6199252650020550259) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
                      sum += (double)-0.0041760785570885018;
                    } else {
                      sum += (double)0.003440283688997354972;
                    }
                  } else {
                    sum += (double)-0.01035604941486525238;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7158.326501222521074) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                      sum += (double)0.0007181929129234833212;
                    } else {
                      sum += (double)-0.002087707649654949038;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8671.400547327515596) ) ) {
                      sum += (double)0.01290850078675491105;
                    } else {
                      sum += (double)-0.0001082821860922848967;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                sum += (double)-0.004258048779457675875;
              } else {
                sum += (double)0.003268980169228898579;
              }
            }
          }
        }
      } else {
        sum += (double)-0.008195464894144181833;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35052.81431451296521) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
                sum += (double)-0.003308113892549045202;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16362.01564670949665) ) ) {
                  sum += (double)-0.002388110490880997888;
                } else {
                  sum += (double)0.000715884183117833253;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                    sum += (double)0.006971708329373379337;
                  } else {
                    sum += (double)-0.004066789232743187044;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                    sum += (double)-0.00732510132249868974;
                  } else {
                    sum += (double)0.0002692312110857278742;
                  }
                }
              } else {
                sum += (double)-0.007963475289208151592;
              }
            }
          } else {
            sum += (double)-0.008597517052011257113;
          }
        } else {
          sum += (double)0.009109791330343914445;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
            sum += (double)-0.0005672432176107872898;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
              sum += (double)0.001748875882238789614;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.02622543668122271146) ) ) {
                  sum += (double)0.005035463023664922023;
                } else {
                  sum += (double)-0.000291323093963074208;
                }
              } else {
                sum += (double)-0.009412069317732502105;
              }
            }
          }
        } else {
          sum += (double)0.008307997394250634868;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
        sum += (double)-0.006910213342698437455;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.312776891724260375) ) ) {
          sum += (double)0.002834809362701987134;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1850000000000000255) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
              sum += (double)-0.005815572626440907583;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9678488682944218491) ) ) {
                sum += (double)0.002390373184677630717;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
                  sum += (double)-0.002773137500196830307;
                } else {
                  sum += (double)0.004923637657207270181;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.041494490358127578) ) ) {
                sum += (double)0.00324639164688201665;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
                  sum += (double)-0.006988440922130153762;
                } else {
                  sum += (double)0.0008543696367317767928;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000000000000351) ) ) {
                sum += (double)-0.007049180781159729292;
              } else {
                sum += (double)-0.00114240627232491663;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
          sum += (double)0.003963016850866439567;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.2152144160583962) ) ) {
            sum += (double)-0.009369182725214284663;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3339271889634866652) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500000000001345) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                  sum += (double)-0.0009250153232120034456;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1891267783217778775) ) ) {
                      sum += (double)-0.001567069283967377968;
                    } else {
                      sum += (double)0.01018445690541753754;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
                      sum += (double)0.006532414844582732152;
                    } else {
                      sum += (double)-0.002376972889272459689;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1682.526551393980526) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                    sum += (double)-0.001197373959710737804;
                  } else {
                    sum += (double)0.0141828910706519682;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7425.301902740433434) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                      sum += (double)0.00156735956348334521;
                    } else {
                      sum += (double)-0.001373747904775137656;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.52175925925926236) ) ) {
                      sum += (double)-0.007171598421045557309;
                    } else {
                      sum += (double)-0.001966440621644995751;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1127211429752079802) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7158.326501222521074) ) ) {
                  sum += (double)0.0003290916553628147408;
                } else {
                  sum += (double)0.008046953924809491926;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
                      sum += (double)-0.0007235129273810635923;
                    } else {
                      sum += (double)0.008199647843805960012;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4420656524973072266) ) ) {
                      sum += (double)0.00173239411193246433;
                    } else {
                      sum += (double)-0.001343714543845147928;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                      sum += (double)-0.001950081633441596912;
                    } else {
                      sum += (double)-0.004079296240654556663;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                      sum += (double)0.004695530182083511306;
                    } else {
                      sum += (double)-0.002275170489134564419;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3368947088135722523) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11657.82777714064287) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5192.030210470990824) ) ) {
              sum += (double)0.002078281917771025809;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                sum += (double)-0.01098273674995192857;
              } else {
                sum += (double)-0.004218376552213667398;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
              sum += (double)0.003130203703339703991;
            } else {
              sum += (double)-0.001945604429278843025;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500000000001345) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                      sum += (double)0.001441010244456093336;
                    } else {
                      sum += (double)0.005416184665560742038;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
                      sum += (double)-0.001467120109719480172;
                    } else {
                      sum += (double)0.004032701345950727781;
                    }
                  }
                } else {
                  sum += (double)-0.002701746176767927648;
                }
              } else {
                sum += (double)0.007037870785587877626;
              }
            } else {
              sum += (double)-0.005256577190076117297;
            }
          } else {
            sum += (double)0.007070361760436284088;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
            sum += (double)0.0008655234580623887876;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
              sum += (double)-0.00829289129644131609;
            } else {
              sum += (double)0.001656955038463045569;
            }
          }
        } else {
          sum += (double)0.002920516357658423448;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
            sum += (double)0.005485463253613018925;
          } else {
            sum += (double)-0.002601190299921588185;
          }
        } else {
          sum += (double)-0.004585569293526115149;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
        sum += (double)-0.001307872180617971388;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)23070.06005165050738) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
              sum += (double)0.001580852402774348374;
            } else {
              sum += (double)-0.006628100236279029812;
            }
          } else {
            sum += (double)0.008650077888218844768;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
              sum += (double)0.002699695285798410331;
            } else {
              sum += (double)-0.003297454291709280005;
            }
          } else {
            sum += (double)-0.008417122672998806829;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5221506565800743127) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)901.8913219877068741) ) ) {
          sum += (double)-0.0117581369990262391;
        } else {
          sum += (double)0.0005086446610166129104;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
            sum += (double)0.002154859694445171361;
          } else {
            sum += (double)-0.001034477572245911256;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
            sum += (double)-0.002826296565915094577;
          } else {
            sum += (double)0.001758429858612196471;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000000000001052) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
            sum += (double)-0.002173545734397041261;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2461167842040226927) ) ) {
              sum += (double)0.007573078730163995687;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000000000000355) ) ) {
                sum += (double)0.00390030897575720974;
              } else {
                sum += (double)-0.001459816220790506819;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5642304926403781673) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
                  sum += (double)0.00286965664580402435;
                } else {
                  sum += (double)0.01402405599290197646;
                }
              } else {
                sum += (double)0.0004111418386672000989;
              }
            } else {
              sum += (double)-0.001237232265056075831;
            }
          } else {
            sum += (double)-0.001409146279784146598;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
            sum += (double)0.006454106255192314581;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2313484523829452688) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1372018916650266929) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6493.911283074395214) ) ) {
                    sum += (double)0.004856414844177460444;
                  } else {
                    sum += (double)-0.0009608014406701250159;
                  }
                } else {
                  sum += (double)0.009831747082871666182;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
                      sum += (double)-0.0018784596776101213;
                    } else {
                      sum += (double)-0.005576839955968518857;
                    }
                  } else {
                    sum += (double)0.005242316041655000966;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                    sum += (double)0.008533572312539811425;
                  } else {
                    sum += (double)-0.0002177082509034170444;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12510.35759572274947) ) ) {
                      sum += (double)0.005587905615764607488;
                    } else {
                      sum += (double)-0.001319004347908180703;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
                      sum += (double)-0.0001163713453685481873;
                    } else {
                      sum += (double)-0.005007790131638334592;
                    }
                  }
                } else {
                  sum += (double)0.007341083971721115882;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5192.030210470990824) ) ) {
                  sum += (double)0.004022248080955969328;
                } else {
                  sum += (double)0.01394487407042951585;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
            sum += (double)-0.001185869102104475685;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
              sum += (double)-0.000744242840559965267;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.3581481481481603) ) ) {
                sum += (double)0.001531919981499156981;
              } else {
                sum += (double)0.009008127064118279584;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
          sum += (double)0.002938022361723568402;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)361.7598371524995287) ) ) {
            sum += (double)-0.00734821530985670969;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                      sum += (double)0.0007767920699908272605;
                    } else {
                      sum += (double)0.009565667902045899701;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                      sum += (double)-0.003844260687838434165;
                    } else {
                      sum += (double)0.000889269068995189268;
                    }
                  }
                } else {
                  sum += (double)-0.003676252091613316838;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
                  sum += (double)0.01185696671230130825;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                    sum += (double)0.00773906283739848877;
                  } else {
                    sum += (double)-0.003803772725102406039;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4709808304613328223) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984500000000001485) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                    sum += (double)0.01240913168799905909;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.16273471352914015) ) ) {
                      sum += (double)-0.003279864135740345136;
                    } else {
                      sum += (double)0.004646557332140943165;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                      sum += (double)0.0116677657112767251;
                    } else {
                      sum += (double)0.0001835294707944027954;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
                      sum += (double)-0.006233845738196326994;
                    } else {
                      sum += (double)-0.002058244961788901432;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  sum += (double)-0.003509136452112565207;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                      sum += (double)-0.001025828566311013171;
                    } else {
                      sum += (double)-0.008182904442890055752;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
                      sum += (double)-0.001827655891579568715;
                    } else {
                      sum += (double)0.007004720460195978417;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8190000000000000613) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
            sum += (double)-0.007655745193156250801;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.0002659895806577366323;
              } else {
                sum += (double)0.005979120172917874558;
              }
            } else {
              sum += (double)-0.004127302194737653314;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
            sum += (double)-0.002824573750022027485;
          } else {
            sum += (double)-0.01142620662035644108;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6486275000000000235) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)35052.81431451296521) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
              sum += (double)0.0003023997028950196572;
            } else {
              sum += (double)-0.006967252264755308122;
            }
          } else {
            sum += (double)0.006167428179926223199;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
              sum += (double)-0.001579336855873608074;
            } else {
              sum += (double)0.001706434467740833207;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
                sum += (double)-0.004557070984968670732;
              } else {
                sum += (double)0.001639029874098597286;
              }
            } else {
              sum += (double)-0.01086313235114394309;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
          sum += (double)0.004646590970969928514;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
            sum += (double)0.001046681857470914846;
          } else {
            sum += (double)0.004765392799925144592;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
        sum += (double)-0.006326226643973774377;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1850000000000000255) ) ) {
          sum += (double)0.000817871860057441352;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
              sum += (double)0.003691560672149433748;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                  sum += (double)-0.003936659943736982997;
                } else {
                  sum += (double)0.00430879842601915742;
                }
              } else {
                sum += (double)-0.00668109589874179427;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
              sum += (double)0.0004958011667510390076;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
                sum += (double)-0.003646029465853176197;
              } else {
                sum += (double)-0.01009785555890079303;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4236293998663874238) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                    sum += (double)-0.001216389768058906851;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                      sum += (double)0.005754702978378558285;
                    } else {
                      sum += (double)0.0002100336036466174058;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
                      sum += (double)0.002850953931578147343;
                    } else {
                      sum += (double)-0.000924179340159821984;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                      sum += (double)-0.002337338814476185283;
                    } else {
                      sum += (double)-0.008473769698386465765;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                      sum += (double)-0.009744263141342395657;
                    } else {
                      sum += (double)-0.003525546406525090128;
                    }
                  } else {
                    sum += (double)-0.001054532688109034331;
                  }
                } else {
                  sum += (double)-0.0006987471978657313915;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                sum += (double)0.009168212920052432047;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3577.178536742065262) ) ) {
                    sum += (double)-0.008490160838690639575;
                  } else {
                    sum += (double)0.002367483510191452974;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1201.367728319936987) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
                      sum += (double)-0.0002618915827968300997;
                    } else {
                      sum += (double)0.008823931989596198525;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.545995454461449814) ) ) {
                      sum += (double)0.001771312159150184064;
                    } else {
                      sum += (double)-0.005050792400333601467;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6081.744581517318693) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7845442775498493448) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1708.479834708773978) ) ) {
                      sum += (double)0.005897344707414920589;
                    } else {
                      sum += (double)-0.0001452408541451464695;
                    }
                  } else {
                    sum += (double)-0.002876504075310013214;
                  }
                } else {
                  sum += (double)-0.00564640790908865417;
                }
              } else {
                sum += (double)-0.002803484154118417431;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                  sum += (double)-0.003006019282741629554;
                } else {
                  sum += (double)-0.01235222259992561737;
                }
              } else {
                sum += (double)-0.002679505465595288446;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.180896918882973573) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
              sum += (double)-0.01012963632418351252;
            } else {
              sum += (double)0.00104173557638619573;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2118118797363109373) ) ) {
              sum += (double)0.006701383160946118404;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3083306738637045519) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11908.89586363036506) ) ) {
                  sum += (double)-5.070519696067024308e-05;
                } else {
                  sum += (double)-0.008490662074009589638;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                  sum += (double)0.0005511393934001483641;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5505500000000000949) ) ) {
                      sum += (double)-0.002961723793213609686;
                    } else {
                      sum += (double)0.005991859891173158259;
                    }
                  } else {
                    sum += (double)0.009177049729437510017;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1755162960706670994) ) ) {
            sum += (double)0.007007903010916289796;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3962.214750511102011) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.6750000000000398) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9820.391414902553151) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                      sum += (double)0.001169802338934168443;
                    } else {
                      sum += (double)-0.003817440023268869539;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                      sum += (double)0.004613517310185398339;
                    } else {
                      sum += (double)-0.0004219873981192259239;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                      sum += (double)-0.010742396320944975;
                    } else {
                      sum += (double)-0.001532676451826753923;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                      sum += (double)0.002393892318763854183;
                    } else {
                      sum += (double)-0.004008463392475095262;
                    }
                  }
                }
              } else {
                sum += (double)-0.006104392450099394539;
              }
            } else {
              sum += (double)0.006187903523492197314;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
              sum += (double)0.004907716853049677239;
            } else {
              sum += (double)-0.004271096269588813346;
            }
          } else {
            sum += (double)-0.004917533569080446802;
          }
        }
      }
    } else {
      sum += (double)0.001870435880083335138;
    }
  }
  return sum;
}
