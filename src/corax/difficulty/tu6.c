#include "prediction.h"
double predict_margin_unit6(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.106374722838138425) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
          sum += (double)-0.003250877213718145718;
        } else {
          sum += (double)0.0002908331334007710598;
        }
      } else {
        sum += (double)0.005002262360961633354;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6350000000000001199) ) ) {
              sum += (double)-0.00123383286630082082;
            } else {
              sum += (double)0.003669015063820708997;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2456.927866336010538) ) ) {
                  sum += (double)-0.002340354115072917993;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078956535486476492) ) ) {
                    sum += (double)-0.0008945185782396325707;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1456989672773315592) ) ) {
                      sum += (double)0.001287791244110638757;
                    } else {
                      sum += (double)0.00996848218881274048;
                    }
                  }
                }
              } else {
                sum += (double)-0.003451323197585527431;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1185548504618808702) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3965.158948031867112) ) ) {
                      sum += (double)-0.00711248360676421023;
                    } else {
                      sum += (double)0.003117617557856185335;
                    }
                  } else {
                    sum += (double)0.006556527183210147068;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                      sum += (double)-0.002022891904330884234;
                    } else {
                      sum += (double)0.006540662880572071028;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                      sum += (double)-0.01067097164404319683;
                    } else {
                      sum += (double)-0.0003759044123953355298;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
                  sum += (double)0.006976305112899598877;
                } else {
                  sum += (double)-0.0003616582227679583216;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3029155602761551269) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
                  sum += (double)0.009462936250114713579;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                      sum += (double)0.006908382911955644919;
                    } else {
                      sum += (double)-0.001447830762292060631;
                    }
                  } else {
                    sum += (double)-0.001052320537730576031;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                    sum += (double)-0.005817917043030483397;
                  } else {
                    sum += (double)0.0001762043111768379141;
                  }
                } else {
                  sum += (double)0.007643636686790316985;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3146.277250048707629) ) ) {
                    sum += (double)-0.005214859420782569886;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                      sum += (double)0.002254988084820831219;
                    } else {
                      sum += (double)-0.003138993886367959577;
                    }
                  }
                } else {
                  sum += (double)-0.0008671464371110144389;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4966500000000000914) ) ) {
                      sum += (double)0.006507762864376025885;
                    } else {
                      sum += (double)0.001172749614915300376;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
                      sum += (double)-0.000234304878912407411;
                    } else {
                      sum += (double)-0.003465265973853668205;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)82.64618349518126195) ) ) {
                    sum += (double)0.006501105230283573538;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                      sum += (double)0.005078848733669539574;
                    } else {
                      sum += (double)-0.00198314527513201392;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
              sum += (double)-0.006809307816656376758;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3604310129059999368) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                      sum += (double)-0.003026412204897555112;
                    } else {
                      sum += (double)0.0007467310466816349471;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                      sum += (double)-0.007409839765802895585;
                    } else {
                      sum += (double)0.005978423685378867446;
                    }
                  }
                } else {
                  sum += (double)0.004150771951441049358;
                }
              } else {
                sum += (double)0.003497078962203038419;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)38933.33430093093193) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4481.016304914502143) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
              sum += (double)-0.001856424074902612723;
            } else {
              sum += (double)-0.008944728177451241949;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8006.423874351355153) ) ) {
              sum += (double)0.0001424461513332394083;
            } else {
              sum += (double)-0.002886836704171040751;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
              sum += (double)0.001282248354123362733;
            } else {
              sum += (double)0.01144483332445686216;
            }
          } else {
            sum += (double)-0.0008769228416670720068;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
      sum += (double)-0.005857444771898748757;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.921363443236741575) ) ) {
              sum += (double)0.001529128699601632092;
            } else {
              sum += (double)0.007232230670246746207;
            }
          } else {
            sum += (double)-0.005320494854376064953;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
            sum += (double)0.0006771558800256350773;
          } else {
            sum += (double)-0.007965965819490211999;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
              sum += (double)-0.001588294433995087991;
            } else {
              sum += (double)-0.008781284509977060893;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4348787844478528841) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6486275000000000235) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1419531765899220976) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                      sum += (double)-0.001021071689327760369;
                    } else {
                      sum += (double)-0.006995825204431045663;
                    }
                  } else {
                    sum += (double)0.00173462594484544738;
                  }
                } else {
                  sum += (double)0.0009584246727808426848;
                }
              } else {
                sum += (double)-0.005038928788495170875;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
                sum += (double)0.005910218026303761321;
              } else {
                sum += (double)-9.405318588679621944e-05;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9999263622974964294) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7689.919473708750047) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                sum += (double)0.0030304252294047632;
              } else {
                sum += (double)-0.002573311732123040579;
              }
            } else {
              sum += (double)0.00766378826988965093;
            }
          } else {
            sum += (double)-0.002966772112439780042;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
      sum += (double)-0.0006986493878985925582;
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2118118797363109373) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8503000000000001668) ) ) {
          sum += (double)0.005580220065436882794;
        } else {
          sum += (double)0.0008188049043238633138;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3398531389175412643) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                sum += (double)0.009240174315491577611;
              } else {
                sum += (double)0.003083476901219331726;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
                      sum += (double)-0.001365399503951995365;
                    } else {
                      sum += (double)0.002587348319859031354;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9301791105069795451) ) ) {
                      sum += (double)-0.004948608605160069798;
                    } else {
                      sum += (double)0.003393548564743553275;
                    }
                  }
                } else {
                  sum += (double)-0.003345818023634102457;
                }
              } else {
                sum += (double)0.001282760078886655648;
              }
            }
          } else {
            sum += (double)-0.00244060743863942645;
          }
        } else {
          sum += (double)-0.0019290207479303015;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4768620372057117418) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
              sum += (double)-0.003089781827588628915;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3958227677773696884) ) ) {
                sum += (double)0.009583915485002647561;
              } else {
                sum += (double)-0.0004312870039567406758;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000000000000234) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                sum += (double)0.007992919272605630149;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                  sum += (double)0.001922843788773873075;
                } else {
                  sum += (double)-0.005933231861560069563;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                sum += (double)0.004198988490415184009;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                  sum += (double)0.01344001516407226579;
                } else {
                  sum += (double)0.003932251524787757843;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
            sum += (double)0.002287315046796039534;
          } else {
            sum += (double)-0.006576989142821136093;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
            sum += (double)-0.007644708215547366473;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
              sum += (double)0.001706920491251288788;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2721073006283602491) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                    sum += (double)0.004323072275197126224;
                  } else {
                    sum += (double)0.00113988279298878341;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                    sum += (double)0.0003484019261837508147;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3391.870434469365591) ) ) {
                      sum += (double)-0.0116695465960952021;
                    } else {
                      sum += (double)-0.0002445895290752100469;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                  sum += (double)0.002116164695450133051;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                      sum += (double)0.0007702295379665999656;
                    } else {
                      sum += (double)-0.003314836244560275934;
                    }
                  } else {
                    sum += (double)-0.009587672005344096901;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
              sum += (double)0.01141419164241461517;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                sum += (double)0.004149682476528462546;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                      sum += (double)0.0009698728076457005217;
                    } else {
                      sum += (double)-0.004779978328877751252;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4092500000000000582) ) ) {
                      sum += (double)0.01047354927731241649;
                    } else {
                      sum += (double)0.001083264402869316481;
                    }
                  }
                } else {
                  sum += (double)-0.004984247708310984327;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2287316404723389318) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                sum += (double)0.006397076388318033782;
              } else {
                sum += (double)-0.003101754112465367717;
              }
            } else {
              sum += (double)-0.004101427748741919531;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
            sum += (double)0.002614079929342972859;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-65.80519855055165124) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                sum += (double)-0.002021108119150528612;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
                    sum += (double)0.009835662406692544449;
                  } else {
                    sum += (double)0.002523974519909949737;
                  }
                } else {
                  sum += (double)-0.001785578310429319741;
                }
              }
            } else {
              sum += (double)-0.008843237330104234198;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000000000001499) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
              sum += (double)0.01229901672340534026;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.54356060606061618) ) ) {
                sum += (double)0.006420286137793760652;
              } else {
                sum += (double)-0.001672437538538849074;
              }
            }
          } else {
            sum += (double)0.001653308294199914031;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
              sum += (double)3.863472737584180538e-05;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                  sum += (double)-0.00207603635503675419;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.05625327053898665) ) ) {
                    sum += (double)-0.01405414990181751665;
                  } else {
                    sum += (double)-0.005679413114906601071;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                  sum += (double)-0.007783792357108170606;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5568739105774286324) ) ) {
                      sum += (double)0.008217260974665085288;
                    } else {
                      sum += (double)-0.0008602155442206800258;
                    }
                  } else {
                    sum += (double)-0.002066461712845350795;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.009452472254440173749;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
                sum += (double)0.0002860001669481628808;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
                  sum += (double)0.001699585794189278996;
                } else {
                  sum += (double)0.01102483000655837125;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                sum += (double)0.001990560014043792764;
              } else {
                sum += (double)-0.006085416802938475866;
              }
            }
          } else {
            sum += (double)-0.002693076709675942121;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      sum += (double)-0.0005498727183297614195;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
            sum += (double)0.00875210391490821929;
          } else {
            sum += (double)0.001513397917290803087;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                sum += (double)-0.0008190974449756536222;
              } else {
                sum += (double)-0.00699240053249163343;
              }
            } else {
              sum += (double)0.003685552497479916995;
            }
          } else {
            sum += (double)0.001183179722222868014;
          }
        }
      } else {
        sum += (double)-0.002367779658315733501;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4768620372057117418) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
          sum += (double)-0.005926494828382521465;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.45767090620031858) ) ) {
                sum += (double)-0.001975714909154839896;
              } else {
                sum += (double)0.01241444326369015548;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                sum += (double)0.001845749737197868983;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
                  sum += (double)-5.26750847224977616e-05;
                } else {
                  sum += (double)-0.009174913947556338767;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10138.67215128568751) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
                sum += (double)-0.003216757390389228966;
              } else {
                sum += (double)0.004980848004069293039;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4351716793902547509) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.796551724137932737) ) ) {
                  sum += (double)0.004621286932106531339;
                } else {
                  sum += (double)0.01188277310754241346;
                }
              } else {
                sum += (double)-0.0006684536704502348856;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
          sum += (double)-0.006570235141252257945;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
            sum += (double)0.0008643718832230018511;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                sum += (double)0.009751000508149516507;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                  sum += (double)0.005564114460364245202;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                    sum += (double)0.003883669114565960635;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      sum += (double)0.0001643726974276982526;
                    } else {
                      sum += (double)-0.00497464902531415034;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                      sum += (double)-0.001248647644526632667;
                    } else {
                      sum += (double)0.007622629182926802735;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                      sum += (double)-0.002484552629497435196;
                    } else {
                      sum += (double)-0.01054439315688274724;
                    }
                  }
                } else {
                  sum += (double)0.008635842265652003344;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12333.58675317392408) ) ) {
                  sum += (double)-0.008483469202375078927;
                } else {
                  sum += (double)-0.002593903584642204708;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7320592709375011164) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1137.968895395498521) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
                  sum += (double)0.002187121616976504378;
                } else {
                  sum += (double)0.01087166126501255652;
                }
              } else {
                sum += (double)-0.0007904439848538146515;
              }
            } else {
              sum += (double)0.009617939079332548172;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
                sum += (double)0.007557221531631816078;
              } else {
                sum += (double)0.001517469697924486889;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
                sum += (double)-0.0008990043134877253759;
              } else {
                sum += (double)-0.008025513328219026354;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              sum += (double)0.009364372179302081142;
            } else {
              sum += (double)0.000285302514306030354;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
              sum += (double)0.002500793612021021822;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                  sum += (double)-0.007440888422799885916;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                    sum += (double)0.004074244158953912835;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
                      sum += (double)0.0006758888097505207906;
                    } else {
                      sum += (double)-0.009165974316201582622;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                  sum += (double)0.0009228054071147097403;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                    sum += (double)-0.0006608989075838093627;
                  } else {
                    sum += (double)-0.004502833120039494326;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.05625327053898665) ) ) {
            sum += (double)2.852827601815739834e-06;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                sum += (double)0.002341889748905337694;
              } else {
                sum += (double)-0.004924184804093405428;
              }
            } else {
              sum += (double)0.008486871165997071989;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                  sum += (double)0.0007086066911014252991;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                    sum += (double)-0.001488298675929480017;
                  } else {
                    sum += (double)-0.009130466792072361101;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  sum += (double)-0.01306091965878687818;
                } else {
                  sum += (double)-0.004986000119428531281;
                }
              }
            } else {
              sum += (double)0.003846494473205256011;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)237.3704492435913664) ) ) {
              sum += (double)-0.006518311802155859688;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.438750000000000639) ) ) {
                      sum += (double)0.002044893760795183247;
                    } else {
                      sum += (double)-0.003468935795506585765;
                    }
                  } else {
                    sum += (double)0.009453889992398068279;
                  }
                } else {
                  sum += (double)-0.005265934012226996218;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6435984235989665736) ) ) {
                    sum += (double)-0.003924502902528920374;
                  } else {
                    sum += (double)0.00228483905994494212;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4415.807239953120188) ) ) {
                    sum += (double)0.008793605764181949835;
                  } else {
                    sum += (double)-0.002085991218733918712;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
      sum += (double)-0.0005969477758663018852;
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2118118797363109373) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8503000000000001668) ) ) {
          sum += (double)0.005117859790812181141;
        } else {
          sum += (double)0.0007480316906281211193;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3398531389175412643) ) ) {
              sum += (double)0.00442466262327298205;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                sum += (double)0.0006756968665670873373;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1795.96581361443873) ) ) {
                  sum += (double)-0.006184542070134783735;
                } else {
                  sum += (double)-0.0008122873771539360901;
                }
              }
            }
          } else {
            sum += (double)-0.002265171139027672906;
          }
        } else {
          sum += (double)-0.001680078967619528553;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4800849858356940891) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2534500000000000641) ) ) {
          sum += (double)-0.005238353096800316307;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
              sum += (double)0.009266266614445968497;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4369219652904519635) ) ) {
                sum += (double)0.007536225223260853076;
              } else {
                sum += (double)6.312798246255538543e-06;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              sum += (double)-0.00414343885256960795;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
                  sum += (double)0.002173614859047186178;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4420656524973072266) ) ) {
                    sum += (double)0.01644995465165055223;
                  } else {
                    sum += (double)0.004935801177954545274;
                  }
                }
              } else {
                sum += (double)-0.001067115857949286041;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
            sum += (double)-0.006626908597524948721;
          } else {
            sum += (double)0.0006872174313179330333;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
              sum += (double)0.009802003689530623676;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                  sum += (double)0.005658119075767487419;
                } else {
                  sum += (double)-0.001702482862507343712;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.8416666666666828) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.07742257742258118) ) ) {
                      sum += (double)-0.001038233981067116386;
                    } else {
                      sum += (double)0.01066949472841526372;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                      sum += (double)-0.001490940333632691196;
                    } else {
                      sum += (double)0.003886641245873964558;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                    sum += (double)0.002720753299744721465;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07015148939065542211) ) ) {
                      sum += (double)-0.01062226621383191398;
                    } else {
                      sum += (double)-0.00357067391868813545;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2721073006283602491) ) ) {
                sum += (double)-0.01072546365696771913;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
                  sum += (double)0.001451508941955216309;
                } else {
                  sum += (double)-0.004779283402708350663;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
                  sum += (double)0.007734816214765982169;
                } else {
                  sum += (double)-0.002833326767171469307;
                }
              } else {
                sum += (double)-0.002667099541945128997;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
            sum += (double)0.002229209657454008127;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-65.80519855055165124) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                sum += (double)-0.001807618463634959186;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
                    sum += (double)0.008861070605913096143;
                  } else {
                    sum += (double)0.002258409861372325748;
                  }
                } else {
                  sum += (double)-0.00175511265162610515;
                }
              }
            } else {
              sum += (double)-0.00810947187546830553;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000000000001499) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
              sum += (double)0.01116739051123381322;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.54356060606061618) ) ) {
                sum += (double)0.005743135816100670456;
              } else {
                sum += (double)-0.001404537231645819687;
              }
            }
          } else {
            sum += (double)0.001513925781190518039;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
              sum += (double)0.001459188118181087464;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6497217366336467403) ) ) {
                  sum += (double)0.008892711885491372259;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
                    sum += (double)0.00401942353681174723;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                      sum += (double)0.001906805521152159103;
                    } else {
                      sum += (double)-0.003994975472690688242;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
                  sum += (double)-0.00348287595175711959;
                } else {
                  sum += (double)0.001658012056832410463;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2292876471803670657) ) ) {
                    sum += (double)-0.0001156214427529196371;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.05625327053898665) ) ) {
                      sum += (double)0.0008510293122380457485;
                    } else {
                      sum += (double)0.008748055349822560917;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00290697674418716) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                      sum += (double)-0.003780028377972143548;
                    } else {
                      sum += (double)0.002882171294950777556;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
                      sum += (double)-0.001976054451868501476;
                    } else {
                      sum += (double)-0.008990625901152621627;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7320592709375011164) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                      sum += (double)0.0003428063442938612403;
                    } else {
                      sum += (double)0.004626522745113675721;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
                      sum += (double)-0.001825082279392826372;
                    } else {
                      sum += (double)0.006435144361034570576;
                    }
                  }
                } else {
                  sum += (double)0.008896151773715442121;
                }
              }
            } else {
              sum += (double)-0.00268176200184900692;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
            sum += (double)-0.01003503796487300974;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
                sum += (double)-0.003060803710883844373;
              } else {
                sum += (double)0.004014310050765389389;
              }
            } else {
              sum += (double)-0.007220191186390156717;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
          sum += (double)-0.00216756977340841657;
        } else {
          sum += (double)0.00167846804394953435;
        }
      } else {
        sum += (double)0.001075692009319261346;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
          sum += (double)0.004912242902008796472;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
              sum += (double)0.001406608687291898904;
            } else {
              sum += (double)-0.006720300047551355446;
            }
          } else {
            sum += (double)0.001410519900091804961;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
          sum += (double)-0.0007032803885389101676;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
            sum += (double)-0.00114179848517326904;
          } else {
            sum += (double)-0.008871254756512037334;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7708000000000000407) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                sum += (double)0.005451752160931294146;
              } else {
                sum += (double)0.0006764677707810385363;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                sum += (double)0.002146816247572185584;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                  sum += (double)0.0007402535520455650383;
                } else {
                  sum += (double)-0.003999617735415799888;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3986990764490913053) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                  sum += (double)-0.002360210169236929764;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                    sum += (double)0.01196348617498127313;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
                      sum += (double)0.007467563792360369136;
                    } else {
                      sum += (double)0.001953285438372166609;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                  sum += (double)0.004245579107046537626;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      sum += (double)-0.001647038726316880745;
                    } else {
                      sum += (double)0.0006910382088981770156;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                      sum += (double)-0.009710477878913045119;
                    } else {
                      sum += (double)-0.001472326338055369652;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                  sum += (double)-0.004520077743947253576;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                    sum += (double)0.006164014813568339211;
                  } else {
                    sum += (double)-0.000208345982800497802;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08262777143435907912) ) ) {
                  sum += (double)0.003722601013440465182;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1322500000000000342) ) ) {
                    sum += (double)-0.009787330184771927261;
                  } else {
                    sum += (double)-0.001333234384446164772;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8671.400547327515596) ) ) {
                  sum += (double)0.00691448784728627714;
                } else {
                  sum += (double)0.002081868552327806061;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                      sum += (double)0.009194098964046689207;
                    } else {
                      sum += (double)0.001095943085482436498;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
                      sum += (double)-0.0002048867512812376499;
                    } else {
                      sum += (double)-0.002122058828427096037;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20900.29691740099588) ) ) {
                    sum += (double)-0.00307631315646563451;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
                      sum += (double)-0.004214049852089323672;
                    } else {
                      sum += (double)0.003535818942241285897;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.0009151470493543274265;
            }
          } else {
            sum += (double)0.005071499319608822193;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5350000000000001421) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1642951312239392114) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
                    sum += (double)0.007722999129828414869;
                  } else {
                    sum += (double)-0.0005734350098896646769;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1950.296414506860629) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2021.296333301971345) ) ) {
                      sum += (double)0.00481958778086066103;
                    } else {
                      sum += (double)-0.00220302882887369331;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
                      sum += (double)-0.01118217748096967702;
                    } else {
                      sum += (double)-0.003062108284820334869;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839320000000000177) ) ) {
                  sum += (double)-0.000997231553122001008;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2059541029866850392) ) ) {
                    sum += (double)0.006722388944770113853;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                      sum += (double)-0.0005929651616863087496;
                    } else {
                      sum += (double)0.005090749792347575887;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1682.526551393980526) ) ) {
                sum += (double)0.0102456589547843778;
              } else {
                sum += (double)0.003044560197024107073;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              sum += (double)-0.002910884039883728566;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
                    sum += (double)0.005323664762124284341;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.830018761726079468) ) ) {
                      sum += (double)-0.007906814177977073907;
                    } else {
                      sum += (double)-0.0005487451855010121258;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4311851251853566769) ) ) {
                    sum += (double)-0.002620564535952406293;
                  } else {
                    sum += (double)-0.01080980183660661294;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)983.5309309347018143) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                    sum += (double)0.005833833890539822514;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
                      sum += (double)0.002818336743338103589;
                    } else {
                      sum += (double)-0.001503112680291017337;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                      sum += (double)0.0009406555737390965817;
                    } else {
                      sum += (double)0.009026394679205585955;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                      sum += (double)0.002027234520365676484;
                    } else {
                      sum += (double)-0.007037214918277930227;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1658.751546212527273) ) ) {
            sum += (double)-0.008266164055398655605;
          } else {
            sum += (double)-0.002236177180034156636;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
        sum += (double)8.799249586531215667e-05;
      } else {
        sum += (double)-0.008454554418006765895;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
      sum += (double)-0.002997094586780532643;
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3166171325058890207) ) ) {
          sum += (double)0.001504467857737168401;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
            sum += (double)0.005331751948269181085;
          } else {
            sum += (double)0.0002222676841161988351;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
            sum += (double)0.0004612977187236097054;
          } else {
            sum += (double)-0.004675682282866398289;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2627.9895310241468) ) ) {
            sum += (double)-0.002382610336883556057;
          } else {
            sum += (double)-0.01012686265496785115;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.4050000000000000822) ) ) {
      sum += (double)-0.001148599818771666283;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
              sum += (double)-0.0002671762810225427926;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506000000000000449) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                      sum += (double)0.006749161129694406305;
                    } else {
                      sum += (double)0.001949181245810476708;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
                      sum += (double)0.0008750990143224175516;
                    } else {
                      sum += (double)0.01425692567191147106;
                    }
                  }
                } else {
                  sum += (double)-0.005471283934903116257;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1179193971631925381) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09707842318205106569) ) ) {
                    sum += (double)0.0009765540743390147905;
                  } else {
                    sum += (double)0.008553233446767363052;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2082316587659429064) ) ) {
                      sum += (double)0.0006525735456013131942;
                    } else {
                      sum += (double)-0.005111828340967154369;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      sum += (double)0.00440213625756829402;
                    } else {
                      sum += (double)0.001055886351284497605;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
              sum += (double)0.001031214071994409264;
            } else {
              sum += (double)-0.008064182126921183233;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3029155602761551269) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2251.557754300879878) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
                    sum += (double)0.00799298591536298092;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
                      sum += (double)-0.002515018040511454809;
                    } else {
                      sum += (double)0.00662766283148036664;
                    }
                  }
                } else {
                  sum += (double)0.009388943774301926684;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
                      sum += (double)0.0068538864826353154;
                    } else {
                      sum += (double)0.001319978753136920964;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                      sum += (double)-0.00620796715296023649;
                    } else {
                      sum += (double)0.001104659555877966727;
                    }
                  }
                } else {
                  sum += (double)-0.005661457543571480309;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1219665183460445085) ) ) {
                  sum += (double)0.004963867552210615187;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)482.0848310656759281) ) ) {
                      sum += (double)-0.002146297430942137145;
                    } else {
                      sum += (double)0.002568985319015616199;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4800849858356940891) ) ) {
                      sum += (double)-0.001021937190507266969;
                    } else {
                      sum += (double)-0.00342033320290950453;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)154.1011111111111234) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
                    sum += (double)0.008954060840714704247;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      sum += (double)0.0003056615305843626731;
                    } else {
                      sum += (double)-0.0005129392518085460363;
                    }
                  }
                } else {
                  sum += (double)-0.00176879044407986805;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
                  sum += (double)0.005508954064698069752;
                } else {
                  sum += (double)-0.0027317828016439334;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  sum += (double)0.0009199637482305518315;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                    sum += (double)-0.001543433937530895236;
                  } else {
                    sum += (double)-0.008741795780523434201;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                      sum += (double)0.000598133774921369302;
                    } else {
                      sum += (double)-0.00520661774379896445;
                    }
                  } else {
                    sum += (double)0.002127107980422815025;
                  }
                } else {
                  sum += (double)-0.0004692193043272401606;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.978471102924246772) ) ) {
                    sum += (double)-0.001613004489167776945;
                  } else {
                    sum += (double)0.007123230847764738111;
                  }
                } else {
                  sum += (double)-0.003246195527274217674;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.978471102924246772) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6812.876128776691075) ) ) {
                  sum += (double)-0.001487752531444927733;
                } else {
                  sum += (double)0.002136931145314129119;
                }
              } else {
                sum += (double)-0.004238079443761667668;
              }
            } else {
              sum += (double)0.00746603816774109915;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1066415978387809521) ) ) {
                sum += (double)-0.01126292118537703356;
              } else {
                sum += (double)-0.0008118790390485587085;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                  sum += (double)-0.00096865895237944154;
                } else {
                  sum += (double)0.005653811416879863001;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20900.29691740099588) ) ) {
                  sum += (double)-0.003015764934279860279;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
                    sum += (double)0.0020242998725186305;
                  } else {
                    sum += (double)-0.001573130929209799007;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
              sum += (double)0.007103719998996889211;
            } else {
              sum += (double)-0.003591562905771650358;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
                  sum += (double)-0.01180801508402202007;
                } else {
                  sum += (double)-0.003441359194262959623;
                }
              } else {
                sum += (double)-0.001850169588907505476;
              }
            } else {
              sum += (double)-0.01049577456932629382;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4966500000000000914) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
              sum += (double)0.007969372781732458888;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4290.319098872139875) ) ) {
                sum += (double)-0.002071275239351666551;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5192.030210470990824) ) ) {
                  sum += (double)0.007241792354662406582;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                    sum += (double)0.003081748547166971927;
                  } else {
                    sum += (double)-0.002522476979784971096;
                  }
                }
              }
            }
          } else {
            sum += (double)0.01058443579937116963;
          }
        } else {
          sum += (double)0.0005478195451799455209;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)38933.33430093093193) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9544500000000001316) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                    sum += (double)-0.001822637638450699208;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.05408888269713012925) ) ) {
                      sum += (double)0.006587739648761474671;
                    } else {
                      sum += (double)0.001172258931887882423;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                      sum += (double)-0.001815519219470385906;
                    } else {
                      sum += (double)-0.0003130241660684073067;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                      sum += (double)0.008296255029517319787;
                    } else {
                      sum += (double)0.0006228757000013875316;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.290200000000000069) ) ) {
                    sum += (double)0.01146139919856160351;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                      sum += (double)-0.0003304323326310037111;
                    } else {
                      sum += (double)0.005243021155353471893;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1390480000000000327) ) ) {
                    sum += (double)-0.003783548243181077998;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875000000000000111) ) ) {
                      sum += (double)0.005603516443695493766;
                    } else {
                      sum += (double)0.0006740224708496430532;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7850000000000001421) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                  sum += (double)-0.008107953769235140204;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7607063765522581456) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                      sum += (double)-0.0001000275535959946577;
                    } else {
                      sum += (double)-0.005721261465910653862;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                      sum += (double)0.001805964336163149147;
                    } else {
                      sum += (double)-0.001545030249956219756;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2004.58624898434573) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                      sum += (double)-0.002056498684922827575;
                    } else {
                      sum += (double)0.00331763860414204274;
                    }
                  } else {
                    sum += (double)-0.00256297443878708564;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    sum += (double)-0.006291334808065672524;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
                      sum += (double)0.001411399468613774768;
                    } else {
                      sum += (double)-0.003238449806822917953;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000000000001465) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                sum += (double)-0.0009445205142803967139;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4388460000000000694) ) ) {
                  sum += (double)-0.004503042208399233269;
                } else {
                  sum += (double)-0.01051862589081542336;
                }
              }
            } else {
              sum += (double)0.003163660725041674265;
            }
          }
        } else {
          sum += (double)0.00772787764405846473;
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)82.64618349518126195) ) ) {
        sum += (double)0.004286582949471224452;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
          sum += (double)-0.00183132709320753392;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14358.85907140550808) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
              sum += (double)0.0005025969633134587432;
            } else {
              sum += (double)0.007486759790916521461;
            }
          } else {
            sum += (double)-0.0006483366632236723867;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463850174216029032) ) ) {
                sum += (double)0.0001169796648094546853;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3060106677825033539) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                      sum += (double)0.0007007669076307519338;
                    } else {
                      sum += (double)0.002856152099196837199;
                    }
                  } else {
                    sum += (double)-0.00331592323281439897;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074926675286680289) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                      sum += (double)0.0004996466045526607195;
                    } else {
                      sum += (double)0.004900498782098082137;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769234976159801298) ) ) {
                      sum += (double)-0.006667915359523466506;
                    } else {
                      sum += (double)0.001718150768960732214;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.003936184909654485108;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                sum += (double)-0.00563356132548333173;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3511342604241804444) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
                      sum += (double)-0.009575752246417783622;
                    } else {
                      sum += (double)-0.002151537243100477056;
                    }
                  } else {
                    sum += (double)-0.0004633270204081493229;
                  }
                } else {
                  sum += (double)0.000554283010933823107;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7689.919473708750047) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
                      sum += (double)0.005397213597305274349;
                    } else {
                      sum += (double)-0.0004802128282339266892;
                    }
                  } else {
                    sum += (double)-0.003378263965663953587;
                  }
                } else {
                  sum += (double)0.003880695547245457261;
                }
              } else {
                sum += (double)0.006740992367602682139;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
            sum += (double)0.001405857192772093801;
          } else {
            sum += (double)0.004973064753992797148;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
              sum += (double)0.001456355531110181765;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
                sum += (double)-0.004427933366796889085;
              } else {
                sum += (double)0.0002475087357044103865;
              }
            }
          } else {
            sum += (double)-0.003056492199868822944;
          }
        } else {
          sum += (double)-0.008460842454342327318;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
          sum += (double)0.008827036962861549083;
        } else {
          sum += (double)0.002223413210719562497;
        }
      } else {
        sum += (double)0.0009130327026536067762;
      }
    }
  }
  return sum;
}
