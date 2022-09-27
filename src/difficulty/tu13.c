#include "prediction.h"
double predict_margin_unit13(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.226495742797851562) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253819003701210022) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5549999922513961792) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
            sum += (double)0.1332261637144948052;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.776549994945526123) ) ) {
              sum += (double)0.06375437460067126527;
            } else {
              sum += (double)0.008661707755102042786;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447162598371505737) ) ) {
            sum += (double)0.2281462942783493986;
          } else {
            sum += (double)0.110523083083776924;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.97689056396484375) ) ) {
              sum += (double)0.2598186941131735428;
            } else {
              sum += (double)0.4036574254728719779;
            }
          } else {
            sum += (double)0.4898696012488641394;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.943595051765441895) ) ) {
            sum += (double)0.4108480988841838322;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1874.19549560546875) ) ) {
              sum += (double)0.2195221647285745536;
            } else {
              sum += (double)0.08609120011157853081;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165430024266242981) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.56891059875488281) ) ) {
                sum += (double)0.00861460000000000177;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07228600233793258667) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8681000173091888428) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.00607011764705882393;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05855749920010566711) ) ) {
                      sum += (double)0.007659466666666667374;
                    } else {
                      sum += (double)0.004224999999999999589;
                    }
                  }
                } else {
                  sum += (double)0.007963723076923081429;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02969999983906745911) ) ) {
                sum += (double)0.004000000000000000951;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1666999980807304382) ) ) {
                  sum += (double)0.01826383163265305962;
                } else {
                  sum += (double)0.03256382352941177005;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15664.6767578125) ) ) {
              sum += (double)0.01173303636363636632;
            } else {
              sum += (double)0.06260570604288498431;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.13025236129760742) ) ) {
            sum += (double)0.1291569253922675298;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1343495026230812073) ) ) {
              sum += (double)0.07566562585718780709;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.2307662963867188) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
                  sum += (double)0.007737950000000002118;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7128954827785491943) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
                      sum += (double)0.01475214222222222434;
                    } else {
                      sum += (double)0.03171266586235418211;
                    }
                  } else {
                    sum += (double)0.05290236000000000244;
                  }
                }
              } else {
                sum += (double)0.05953186591995222182;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14569.18603515625) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4528000056743621826) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.49846172332763672) ) ) {
                sum += (double)0.09498195228261996359;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-37293.8203125) ) ) {
                  sum += (double)0.04815972330332770474;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2424704954028129578) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                      sum += (double)0.0117902814814814811;
                    } else {
                      sum += (double)0.02368297865137865277;
                    }
                  } else {
                    sum += (double)0.04802438160345752494;
                  }
                }
              }
            } else {
              sum += (double)0.0970674836168291949;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.633331298828125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1374000012874603271) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2019384950399398804) ) ) {
                      sum += (double)0.01879459510204081751;
                    } else {
                      sum += (double)0.0605890247336687976;
                    }
                  } else {
                    sum += (double)0.1316198087657556026;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.74901151657104492) ) ) {
                    sum += (double)0.07058119107371825518;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.83134937286376953) ) ) {
                      sum += (double)0.251666601438284343;
                    } else {
                      sum += (double)0.1223697678117095927;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                  sum += (double)0.02795146647230320816;
                } else {
                  sum += (double)0.004356276923076923997;
                }
              }
            } else {
              sum += (double)0.2942950053332109017;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
            sum += (double)0.1881036727003271569;
          } else {
            sum += (double)0.3346481095480163814;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3742075115442276001) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.6184343852545863829;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.519128561019897461) ) ) {
                  sum += (double)0.4055751454464303629;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3584478795528411865) ) ) {
                    sum += (double)0.2794204483047842413;
                  } else {
                    sum += (double)0.3711967570971516084;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243529319763183594) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2475.832763671875) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3383146971464157104) ) ) {
                      sum += (double)0.544939678637770486;
                    } else {
                      sum += (double)0.4875799486419132855;
                    }
                  } else {
                    sum += (double)0.3945958420796403243;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.147149994969367981) ) ) {
                    sum += (double)0.270387515555191138;
                  } else {
                    sum += (double)0.4939843849644360296;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.74205780029296875) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.549358963966369629) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2578.8104248046875) ) ) {
                    sum += (double)0.5687366531641198097;
                  } else {
                    sum += (double)0.6414531792207791572;
                  }
                } else {
                  sum += (double)0.5598437801459292817;
                }
              } else {
                sum += (double)0.6679876406356105578;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7207500040531158447) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.513055801391601562) ) ) {
                  sum += (double)0.6148107288922263214;
                } else {
                  sum += (double)0.5318533175897650622;
                }
              } else {
                sum += (double)0.4234468190694279377;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.84882545471191406) ) ) {
              sum += (double)0.3277854724572463185;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1598075032234191895) ) ) {
                sum += (double)0.08173869262390713597;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.81646823883056641) ) ) {
                  sum += (double)0.314225127126158299;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2685000002384185791) ) ) {
                    sum += (double)0.1297899511061574029;
                  } else {
                    sum += (double)0.2465937492222881888;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007935225963592529) ) ) {
              sum += (double)0.4456477204210523291;
            } else {
              sum += (double)0.2619629929930051837;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.681742429733276367) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3124.1878662109375) ) ) {
            sum += (double)0.3671425656769909396;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
              sum += (double)0.09006333559487274265;
            } else {
              sum += (double)0.3054460899643967609;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
            sum += (double)0.2930461485114722597;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
              sum += (double)0.1262619874075104343;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7372.614501953125) ) ) {
                sum += (double)0.04173812710795902353;
              } else {
                sum += (double)0.01832110923423423479;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7327805161476135254) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.522743523120880127) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3176.391357421875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000178217887878) ) ) {
                sum += (double)0.6049656842312280958;
              } else {
                sum += (double)0.5381456338104994019;
              }
            } else {
              sum += (double)0.6432268849774904762;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7794.133056640625) ) ) {
              sum += (double)0.6061193349022964139;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2239.275146484375) ) ) {
                  sum += (double)0.6450579681572958801;
                } else {
                  sum += (double)0.7309893318681318641;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.67457818984985352) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1287298388779163361) ) ) {
                    sum += (double)0.7434617827252510969;
                  } else {
                    sum += (double)0.6935216376091221102;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.87761020660400391) ) ) {
                    sum += (double)0.7774688857142856291;
                  } else {
                    sum += (double)0.7362400499999999237;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8302393555641174316) ) ) {
              sum += (double)0.8979964727272726766;
            } else {
              sum += (double)0.8372794029158583395;
            }
          } else {
            sum += (double)0.7930836837159234154;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08875000104308128357) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6475529968738555908) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.219072222709655762) ) ) {
              sum += (double)0.4470866782993422883;
            } else {
              sum += (double)0.251276985166364597;
            }
          } else {
            sum += (double)0.5499781178310314544;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5123305022716522217) ) ) {
            sum += (double)0.4940179808367127778;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
              sum += (double)0.6815504514173830186;
            } else {
              sum += (double)0.584328736666178572;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3236180096864700317) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
          sum += (double)0.09552097855408374361;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9137500226497650146) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652375012636184692) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2164499983191490173) ) ) {
                      sum += (double)0.0132920128205128215;
                    } else {
                      sum += (double)0.005195170776255709708;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04800000041723251343) ) ) {
                      sum += (double)0.02244805210084033567;
                    } else {
                      sum += (double)0.008233707692307693643;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.14935016632080078) ) ) {
                    sum += (double)0.03370957882255045529;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                      sum += (double)0.02265309655172413617;
                    } else {
                      sum += (double)0.01067075595772540471;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.75555562973022461) ) ) {
                  sum += (double)0.06634490947203361411;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4913000017404556274) ) ) {
                    sum += (double)0.02407058064516129359;
                  } else {
                    sum += (double)0.009201940000000002201;
                  }
                }
              }
            } else {
              sum += (double)0.06021751111111111471;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4224999994039535522) ) ) {
                sum += (double)0.05213753223684210875;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09080000221729278564) ) ) {
                  sum += (double)0.01399967272727272762;
                } else {
                  sum += (double)0.03557529133459835097;
                }
              }
            } else {
              sum += (double)0.06988252456259803902;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006599999964237213135) ) ) {
          sum += (double)0.2862779860823883582;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.682360410690307617) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093345001339912415) ) ) {
              sum += (double)0.1309690474324339826;
            } else {
              sum += (double)0.2629750529509624624;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1646514981985092163) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.0787696838378906) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8350000083446502686) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1400664970278739929) ) ) {
                      sum += (double)0.01742550588235294157;
                    } else {
                      sum += (double)0.0384494051098162315;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6041999757289886475) ) ) {
                      sum += (double)0.08465400839814075928;
                    } else {
                      sum += (double)0.02865577523809524282;
                    }
                  }
                } else {
                  sum += (double)0.07940454043883148072;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.3832855224609375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2755499929189682007) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7059500217437744141) ) ) {
                      sum += (double)0.06106011266221291617;
                    } else {
                      sum += (double)0.1348146624072533162;
                    }
                  } else {
                    sum += (double)0.1543592007241540165;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16123.923828125) ) ) {
                    sum += (double)0.07487806702587793128;
                  } else {
                    sum += (double)0.2479380974202813614;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                sum += (double)0.07409846944883906328;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.55286788940429688) ) ) {
                    sum += (double)0.05141071157661337987;
                  } else {
                    sum += (double)0.01435205268817204248;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    sum += (double)0.005107652173913044408;
                  } else {
                    sum += (double)0.0182027020408163237;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.512763261795043945) ) ) {
        sum += (double)0.4928816970591857749;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8491871356964111328) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.143750190734863281) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01215000031515955925) ) ) {
              sum += (double)0.2937791820717043367;
            } else {
              sum += (double)0.4342387476577201366;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4592555314302444458) ) ) {
                sum += (double)0.128852934202419972;
              } else {
                sum += (double)0.05181965657568238931;
              }
            } else {
              sum += (double)0.2583876126222628966;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03599999845027923584) ) ) {
            sum += (double)0.3232280004152958131;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.33333206176757812) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2420.1561279296875) ) ) {
                sum += (double)0.09442843609781456649;
              } else {
                sum += (double)0.02920824827586206845;
              }
            } else {
              sum += (double)0.2336915783910062383;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.463763996958732605) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.76521873474121094) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2702469974756240845) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.5991475835372960246;
              } else {
                sum += (double)0.4563062377024096339;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.79416847229003906) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                  sum += (double)0.4803065690104852403;
                } else {
                  sum += (double)0.3097462912306598315;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.274736255407333374) ) ) {
                  sum += (double)0.1675542754877936968;
                } else {
                  sum += (double)0.3341222050400901034;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3741570115089416504) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5345000028610229492) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.354672670364379883) ) ) {
                    sum += (double)0.4666117263717777242;
                  } else {
                    sum += (double)0.5112824817338655903;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.59654998779296875) ) ) {
                    sum += (double)0.5880379691095350969;
                  } else {
                    sum += (double)0.5256012402115676219;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06414127349853516) ) ) {
                  sum += (double)0.3216529683168455334;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346499994397163391) ) ) {
                    sum += (double)0.429032473706383366;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.18567943572998047) ) ) {
                      sum += (double)0.5716855497435895384;
                    } else {
                      sum += (double)0.4681375393211769098;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08579999953508377075) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.816091775894165039) ) ) {
                  sum += (double)0.568774259564607032;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1749909594655036926) ) ) {
                    sum += (double)0.6117205646011395492;
                  } else {
                    sum += (double)0.6755684844854069615;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.602325439453125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.416926383972167969) ) ) {
                    sum += (double)0.6061075555555555106;
                  } else {
                    sum += (double)0.5347515148998638335;
                  }
                } else {
                  sum += (double)0.4560620168978049005;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4525499939918518066) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2233371436595916748) ) ) {
              sum += (double)0.3467099423276867598;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12317.3447265625) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2089999988675117493) ) ) {
                  sum += (double)0.06381280393298147113;
                } else {
                  sum += (double)0.178200315479007082;
                }
              } else {
                sum += (double)0.2255685744667639825;
              }
            }
          } else {
            sum += (double)0.4220730453015583694;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1840.76361083984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2910580039024353027) ) ) {
              sum += (double)0.1956732797335600793;
            } else {
              sum += (double)0.3866493469261115812;
            }
          } else {
            sum += (double)0.1056124902243691516;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.145312190055847168) ) ) {
            sum += (double)0.1936856162313202179;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.09687042236328125) ) ) {
              sum += (double)0.09346809021896643199;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3636499941349029541) ) ) {
                sum += (double)0.03618935999999999681;
              } else {
                sum += (double)0.01547820000000000099;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6726120114326477051) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569136321544647217) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.53772830963134766) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.08846855163574219) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.57076728343963623) ) ) {
                  sum += (double)0.6126051675470086666;
                } else {
                  sum += (double)0.5302278613863216084;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5151.910888671875) ) ) {
                  sum += (double)0.5928117247561713876;
                } else {
                  sum += (double)0.7145523344444444369;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3440.8551025390625) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6929500102996826172) ) ) {
                  sum += (double)0.6262400795121652042;
                } else {
                  sum += (double)0.6951649850815851961;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.14644092321395874) ) ) {
                  sum += (double)0.770444529681061141;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5838395059108734131) ) ) {
                    sum += (double)0.7009252831170309506;
                  } else {
                    sum += (double)0.7408292736842105874;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4631802914615835154;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
            sum += (double)0.2535858219302995487;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.491799473762512207) ) ) {
              sum += (double)0.5372207034085294541;
            } else {
              sum += (double)0.387456413768886454;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8392.91455078125) ) ) {
          sum += (double)0.6877690722281895042;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21463346481323242) ) ) {
              sum += (double)0.7338219740819879044;
            } else {
              sum += (double)0.8090724169903460439;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
              sum += (double)0.8823760121212120833;
            } else {
              sum += (double)0.8156087628725887662;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5677529871463775635) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1729710027575492859) ) ) {
          sum += (double)0.07583584898108085282;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001300000003539025784) ) ) {
            sum += (double)0.1040877056652506905;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.148282758891582489) ) ) {
              sum += (double)0.3801271946653716483;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.249901771545410156) ) ) {
                sum += (double)0.3571918675946453292;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2093.84393310546875) ) ) {
                  sum += (double)0.258133906316634465;
                } else {
                  sum += (double)0.1085757453542387646;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.5035164707622535873;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3910440057516098022) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.77473688125610352) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1450000032782554626) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1044000014662742615) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  sum += (double)0.009350914285714287399;
                }
              } else {
                sum += (double)0.03619169103048627129;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.76250076293945312) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08689999952912330627) ) ) {
                  sum += (double)0.02296598400000000179;
                } else {
                  sum += (double)0.1206899510083494359;
                }
              } else {
                sum += (double)0.1699467857816417404;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                  sum += (double)0.01249658420512820417;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1498499959707260132) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8164499998092651367) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004996813793103449357;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2257499992847442627) ) ) {
                      sum += (double)0.007161408000000002785;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05494150146842002869) ) ) {
                  sum += (double)0.01200910088383838267;
                } else {
                  sum += (double)0.02606513028322440459;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2304888442158699036) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1484220027923583984) ) ) {
                  sum += (double)0.03914070317460317805;
                } else {
                  sum += (double)0.02212230000000000446;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.32456016540527344) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1550000011920928955) ) ) {
                    sum += (double)0.03517335359477124362;
                  } else {
                    sum += (double)0.01062488000000000148;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3106.670166015625) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                      sum += (double)0.01457442400000000075;
                    } else {
                      sum += (double)0.007136077419354841002;
                    }
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1069185992591793477;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8202.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489999830722808838) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.36459159851074219) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1351270005106925964) ) ) {
                      sum += (double)0.0201460016806722722;
                    } else {
                      sum += (double)0.08194100856722784376;
                    }
                  } else {
                    sum += (double)0.1312266888282423161;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4073000103235244751) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1957165002822875977) ) ) {
                      sum += (double)0.01808056000000000246;
                    } else {
                      sum += (double)0.03995776418171072958;
                    }
                  } else {
                    sum += (double)0.08580699598136355688;
                  }
                }
              } else {
                sum += (double)0.1591877415163811538;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.09047698974609375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4850.248046875) ) ) {
                    sum += (double)0.05622646328354458101;
                  } else {
                    sum += (double)0.1526780079252544609;
                  }
                } else {
                  sum += (double)0.2342879281122671187;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1754107177257537842) ) ) {
                  sum += (double)0.1353871163683172951;
                } else {
                  sum += (double)0.440455035916289539;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
              sum += (double)0.1663894815485168488;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3755999952554702759) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.93585395812988281) ) ) {
                    sum += (double)0.006123000000000000838;
                  } else {
                    sum += (double)0.02326323105450105871;
                  }
                } else {
                  sum += (double)0.02612240272952854117;
                }
              } else {
                sum += (double)0.04682057573589687438;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4885524958372116089) ) ) {
            sum += (double)0.3605418411720179295;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5962949991226196289) ) ) {
              sum += (double)0.09108217961292564002;
            } else {
              sum += (double)0.2975634853028778504;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508214890956878662) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.17413234710693359) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.70004367828369141) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4879499971866607666) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.828231334686279297) ) ) {
                  sum += (double)0.3288474785525465904;
                } else {
                  sum += (double)0.4291325241123288281;
                }
              } else {
                sum += (double)0.2101943300604509068;
              }
            } else {
              sum += (double)0.5111632263244256791;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005200000014156103134) ) ) {
                sum += (double)0.6044066610500044012;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5760.059326171875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717050015926361084) ) ) {
                    sum += (double)0.5326679642314811058;
                  } else {
                    sum += (double)0.4871596675649492725;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.301522254943847656) ) ) {
                      sum += (double)0.5287606795115620262;
                    } else {
                      sum += (double)0.4292978691767585508;
                    }
                  } else {
                    sum += (double)0.3397889243754387278;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2722.9495849609375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01544999983161687851) ) ) {
                    sum += (double)0.6593323294948629787;
                  } else {
                    sum += (double)0.6121339046232877612;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02609999943524599075) ) ) {
                    sum += (double)0.5569857630136986204;
                  } else {
                    sum += (double)0.605594738119658027;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4083775132894515991) ) ) {
                    sum += (double)0.5780285713937435288;
                  } else {
                    sum += (double)0.5405551880822786481;
                  }
                } else {
                  sum += (double)0.4735470755110841035;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
              sum += (double)0.4088761474186308198;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2394250035285949707) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6982499957084655762) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                    sum += (double)0.1570243175078042397;
                  } else {
                    sum += (double)0.06156498127083000899;
                  }
                } else {
                  sum += (double)0.2883280451852843762;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
                  sum += (double)0.3952019949787132225;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2856690138578414917) ) ) {
                    sum += (double)0.2476989581659994055;
                  } else {
                    sum += (double)0.1506253468636693238;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4837500005960464478) ) ) {
              sum += (double)0.2515158518256425668;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1992860212922096252) ) ) {
                sum += (double)0.4351709964903482386;
              } else {
                sum += (double)0.5533343233169129016;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.965034961700439453) ) ) {
          sum += (double)0.3697530129985452385;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.24297410249710083) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.83468437194824219) ) ) {
              sum += (double)0.2994934197225371242;
            } else {
              sum += (double)0.1103568609030228798;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5089499950408935547) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.103830337524414062) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.605588197708129883) ) ) {
                  sum += (double)0.02975367014492754161;
                } else {
                  sum += (double)0.1056275546952928635;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1041499972343444824) ) ) {
                  sum += (double)0.02709423987341772269;
                } else {
                  sum += (double)0.009876400000000000456;
                }
              }
            } else {
              sum += (double)0.1725232926498909414;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3021.125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4950319975614547729) ) ) {
                    sum += (double)0.6194286915075326583;
                  } else {
                    sum += (double)0.5551878729115877764;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                    sum += (double)0.6055383995791245866;
                  } else {
                    sum += (double)0.6495212752153876057;
                  }
                }
              } else {
                sum += (double)0.6802874912022965903;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1863.19647216796875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.788817405700683594) ) ) {
                  sum += (double)0.6401637801796401517;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.090277671813964844) ) ) {
                    sum += (double)0.7122786718855217414;
                  } else {
                    sum += (double)0.6725499879910212808;
                  }
                }
              } else {
                sum += (double)0.7365681352088661038;
              }
            }
          } else {
            sum += (double)0.4189242934272049412;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1191200204193592072) ) ) {
              sum += (double)0.7827736446298159123;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.11821985244750977) ) ) {
                sum += (double)0.727497798859940259;
              } else {
                sum += (double)0.758202019692307605;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09570000320672988892) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
                sum += (double)0.8486957271284272242;
              } else {
                sum += (double)0.8882317707231039972;
              }
            } else {
              sum += (double)0.7937969159974772593;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.5341805663883208988;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1962.20025634765625) ) ) {
              sum += (double)0.401585608875205724;
            } else {
              sum += (double)0.1622598744288165085;
            }
          }
        } else {
          sum += (double)0.6712171140025611216;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.598214387893676758) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5180520117282867432) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-823.10650634765625) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9249999821186065674) ) ) {
            sum += (double)0.2516851476312154112;
          } else {
            sum += (double)0.364019163006872426;
          }
        } else {
          sum += (double)0.1610544190476190518;
        }
      } else {
        sum += (double)0.5610299274197204644;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.896049737930297852) ) ) {
          sum += (double)0.1389176234670513599;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3535045087337493896) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.01388883590698242) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08626849949359893799) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7785499989986419678) ) ) {
                    sum += (double)0.006697660000000001113;
                  } else {
                    sum += (double)0.01093353333333333538;
                  }
                } else {
                  sum += (double)0.02957494421538885837;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7014.650146484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                      sum += (double)0.004637977777777778539;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.00819304444444444481;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.81604766845703125) ) ) {
                    sum += (double)0.02082691198080671713;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3390663713216781616) ) ) {
                      sum += (double)0.0100309250000000013;
                    } else {
                      sum += (double)0.004646206060606061783;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
                sum += (double)0.07051091530787753636;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7511338293552398682) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4303500056266784668) ) ) {
                    sum += (double)0.06912257096188746675;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)124.2431755065917969) ) ) {
                      sum += (double)0.01633177950383511365;
                    } else {
                      sum += (double)0.03166551721439750389;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1855000033974647522) ) ) {
                    sum += (double)0.009986438095238095447;
                  } else {
                    sum += (double)0.004321428571428572417;
                  }
                }
              }
            }
          } else {
            sum += (double)0.09867438236753758862;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713389992713928223) ) ) {
            sum += (double)0.1916354356102271672;
          } else {
            sum += (double)0.4221023831003656301;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.81024646759033203) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3453000038862228394) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2110999971628189087) ) ) {
                  sum += (double)0.01421498503401360733;
                } else {
                  sum += (double)0.04727510844421402292;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.190808773040771484) ) ) {
                  sum += (double)0.2479895695778047693;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.54266834259033203) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.24788951873779297) ) ) {
                      sum += (double)0.06953526271715995688;
                    } else {
                      sum += (double)0.1254390386542906521;
                    }
                  } else {
                    sum += (double)0.2183897298248181906;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2791499942541122437) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12818.9296875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.41869926452636719) ) ) {
                      sum += (double)0.05293287457809231489;
                    } else {
                      sum += (double)0.01713465217391304737;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.78055572509765625) ) ) {
                      sum += (double)0.006613199999999999634;
                    } else {
                      sum += (double)0.0176477800000000018;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.10751628875732422) ) ) {
                    sum += (double)0.08105575772602796603;
                  } else {
                    sum += (double)0.02543452377260982042;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.625) ) ) {
                  sum += (double)0.1965258364451790418;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.83968162536621094) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.66075229644775391) ) ) {
                      sum += (double)0.04554098200142183556;
                    } else {
                      sum += (double)0.1174356549973415986;
                    }
                  } else {
                    sum += (double)0.02049465979215629383;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.648443102836608887) ) ) {
              sum += (double)0.3090591255216462718;
            } else {
              sum += (double)0.1363779435277654717;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35432529449462891) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280154004693031311) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7105.10888671875) ) ) {
                sum += (double)0.5858623959183673069;
              } else {
                sum += (double)0.4513818063866483765;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.79416847229003906) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4439499974250793457) ) ) {
                  sum += (double)0.3353870977994877767;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.314459800720214844) ) ) {
                    sum += (double)0.5370465014275264126;
                  } else {
                    sum += (double)0.3989313726381808478;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11885.71044921875) ) ) {
                  sum += (double)0.3851289198952764781;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7053.025390625) ) ) {
                    sum += (double)0.1923114386226529859;
                  } else {
                    sum += (double)0.3097736425211313205;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3598954975605010986) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7191500067710876465) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5289500057697296143) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4325499981641769409) ) ) {
                    sum += (double)0.5175924049990994202;
                  } else {
                    sum += (double)0.4157020939897367318;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4005.7427978515625) ) ) {
                    sum += (double)0.5150364287018661669;
                  } else {
                    sum += (double)0.5951981432808942651;
                  }
                }
              } else {
                sum += (double)0.4475887659205339264;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2400500029325485229) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                  sum += (double)0.6742834148351646295;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3560.574462890625) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09885000064969062805) ) ) {
                      sum += (double)0.5975877514376034538;
                    } else {
                      sum += (double)0.5019985546436099844;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.07651519775390625) ) ) {
                      sum += (double)0.5835683112895077018;
                    } else {
                      sum += (double)0.6333229275362318722;
                    }
                  }
                }
              } else {
                sum += (double)0.4861809485305655376;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349194973707199097) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.31418418884277344) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.9368133544921875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26481.5556640625) ) ) {
                  sum += (double)0.3039285517362391165;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2142999991774559021) ) ) {
                    sum += (double)0.2790953731191125886;
                  } else {
                    sum += (double)0.1350606505858454043;
                  }
                }
              } else {
                sum += (double)0.3154502765679796372;
              }
            } else {
              sum += (double)0.1138905851527880347;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22919.048828125) ) ) {
              sum += (double)0.310095412906204404;
            } else {
              sum += (double)0.457772373777323216;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
          sum += (double)0.3476233021087763442;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
            sum += (double)0.2234324745421140401;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
                sum += (double)0.09705734642951252544;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5468499958515167236) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5965.422119140625) ) ) {
                    sum += (double)0.02677631358198451911;
                  } else {
                    sum += (double)0.01406058157894737003;
                  }
                } else {
                  sum += (double)0.06854648601594566515;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.332788705825805664) ) ) {
                sum += (double)0.2477298652935743251;
              } else {
                sum += (double)0.06125319911339911078;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.74278450012207031) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.368627429008483887) ) ) {
                  sum += (double)0.6009746768183974464;
                } else {
                  sum += (double)0.5241451832716440551;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3666.4161376953125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.59821414947509766) ) ) {
                    sum += (double)0.5974323333423261495;
                  } else {
                    sum += (double)0.6483956803401725866;
                  }
                } else {
                  sum += (double)0.6983789473684210991;
                }
              }
            } else {
              sum += (double)0.4629445489839362216;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02634999994188547134) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1054796166718006134) ) ) {
                sum += (double)0.7536567461538461465;
              } else {
                sum += (double)0.6959975593246979786;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6890.1181640625) ) ) {
                sum += (double)0.6258641149636232637;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.510087490081787109) ) ) {
                  sum += (double)0.6562240082815734565;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8088499903678894043) ) ) {
                    sum += (double)0.7183907707936507681;
                  } else {
                    sum += (double)0.667909754011913992;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.260364055633544922) ) ) {
              sum += (double)0.7348238929441831546;
            } else {
              sum += (double)0.7670489306471306445;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
                sum += (double)0.8455326498412698566;
              } else {
                sum += (double)0.7906399691006442687;
              }
            } else {
              sum += (double)0.8921164810606061479;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
          sum += (double)0.5558397638901156901;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.893033146858215332) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.828833580017089844) ) ) {
              sum += (double)0.5439795385215864254;
            } else {
              sum += (double)0.4464107525545279453;
            }
          } else {
            sum += (double)0.1560371628800540644;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.938679218292236328) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1152.868896484375) ) ) {
            sum += (double)0.08293472613777920499;
          } else {
            sum += (double)0.2023315025577411552;
          }
        } else {
          sum += (double)0.2708849817322596665;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.556220054626464844) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4810139983892440796) ) ) {
            sum += (double)0.4084863649493543636;
          } else {
            sum += (double)0.5510666880235353116;
          }
        } else {
          sum += (double)0.2604013393497984219;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07185503095388412476) ) ) {
          sum += (double)0.1063238900550696614;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09602699801325798035) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7793999910354614258) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                      sum += (double)0.004226191082802551076;
                    } else {
                      sum += (double)0.006044310000000002389;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04380000010132789612) ) ) {
                      sum += (double)0.01029175384615384561;
                    } else {
                      sum += (double)0.004820315789473685573;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1439500004053115845) ) ) {
                    sum += (double)0.01148077037037037278;
                  } else {
                    sum += (double)0.02184321333333333337;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6400582194328308105) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671000093221664429) ) ) {
                    sum += (double)0.05847892979876160441;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9233.822265625) ) ) {
                      sum += (double)0.03785926111111111159;
                    } else {
                      sum += (double)0.01491664000000000184;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.332149997353553772) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2214500010013580322) ) ) {
                      sum += (double)0.005275623529411764545;
                    } else {
                      sum += (double)0.004000000000000000083;
                    }
                  } else {
                    sum += (double)0.007904725000000001334;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7160405516624450684) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3068297058343887329) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4050000011920928955) ) ) {
                    sum += (double)0.0119087142857142881;
                  } else {
                    sum += (double)0.02877896565656565264;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5650.260498046875) ) ) {
                    sum += (double)0.07355781722886335638;
                  } else {
                    sum += (double)0.03885314480286738981;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9323.950927734375) ) ) {
                  sum += (double)0.01484191578947368674;
                } else {
                  sum += (double)0.006177557894736842962;
                }
              }
            }
          } else {
            sum += (double)0.08248299629760921792;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131004959344863892) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4185499995946884155) ) ) {
              sum += (double)0.04672832275593823137;
            } else {
              sum += (double)0.367591344892739702;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6136949062347412109) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10614.2412109375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489500045776367188) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1845235005021095276) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4771999865770339966) ) ) {
                      sum += (double)0.0187579302926168881;
                    } else {
                      sum += (double)0.04591975684812086428;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2173030003905296326) ) ) {
                      sum += (double)0.09396508884849374965;
                    } else {
                      sum += (double)0.04625891218035557695;
                    }
                  }
                } else {
                  sum += (double)0.1244194360373516162;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7749999761581420898) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6345.8095703125) ) ) {
                    sum += (double)0.01137212307692307862;
                  } else {
                    sum += (double)0.07781972880212953414;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.48772335052490234) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6892500221729278564) ) ) {
                      sum += (double)0.07004813559620010066;
                    } else {
                      sum += (double)0.1503671407461351917;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6905.39501953125) ) ) {
                      sum += (double)0.151134730339606338;
                    } else {
                      sum += (double)0.3178038761709968685;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
                sum += (double)0.07634879757755795582;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4626999944448471069) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5943.71875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.089019775390625) ) ) {
                      sum += (double)0.02498732864180154556;
                    } else {
                      sum += (double)0.006854843390259329414;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.348093748092651367) ) ) {
                      sum += (double)0.01053336000000000203;
                    } else {
                      sum += (double)0.004000000000000000083;
                    }
                  }
                } else {
                  sum += (double)0.05443193476368592826;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.09615325927734375) ) ) {
            sum += (double)0.2050442462646552;
          } else {
            sum += (double)0.3606748480090845588;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5470429956912994385) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.012146264314651489) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2917779982089996338) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.823438644409179688) ) ) {
                sum += (double)0.4506142368574095891;
              } else {
                sum += (double)0.6154132500000001338;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.597350001335144043) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.84961390495300293) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622500091791152954) ) ) {
                    sum += (double)0.4326160762186373465;
                  } else {
                    sum += (double)0.5212327879183996648;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.901499748229980469) ) ) {
                    sum += (double)0.2886691189671967139;
                  } else {
                    sum += (double)0.4011538261082256418;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434964999556541443) ) ) {
                  sum += (double)0.1272698973094886221;
                } else {
                  sum += (double)0.4030421564145013624;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4600200057029724121) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09320000186562538147) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831795006990432739) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.9568181037902832) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05004999972879886627) ) ) {
                      sum += (double)0.4559116188700660932;
                    } else {
                      sum += (double)0.5319808097848170991;
                    }
                  } else {
                    sum += (double)0.5938881609041477549;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2524248436093330383) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.816810369491577148) ) ) {
                      sum += (double)0.5944691058823529106;
                    } else {
                      sum += (double)0.6345944396382157127;
                    }
                  } else {
                    sum += (double)0.5524099184956048347;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1216000020503997803) ) ) {
                  sum += (double)0.4070159097287567862;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2074499949812889099) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3619.7232666015625) ) ) {
                      sum += (double)0.546897668296929429;
                    } else {
                      sum += (double)0.6330086392156862862;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5935999751091003418) ) ) {
                      sum += (double)0.5306683039022901394;
                    } else {
                      sum += (double)0.4486944536192696287;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4211316555738449097) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01029999973252415657) ) ) {
                  sum += (double)0.6946257568308233932;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098678819835186005) ) ) {
                    sum += (double)0.5542254654130455149;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.071795940399169922) ) ) {
                      sum += (double)0.6145724917527233266;
                    } else {
                      sum += (double)0.6872620538190363781;
                    }
                  }
                }
              } else {
                sum += (double)0.5130354492393963683;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14115.9111328125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.29031753540039062) ) ) {
                  sum += (double)0.3949216181034482798;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7509500086307525635) ) ) {
                    sum += (double)0.2747105793447627287;
                  } else {
                    sum += (double)0.1986228151436527645;
                  }
                }
              } else {
                sum += (double)0.1680526274998459246;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4173999875783920288) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.09723091125488281) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2421500012278556824) ) ) {
                    sum += (double)0.2002037815795050524;
                  } else {
                    sum += (double)0.1304732848641677601;
                  }
                } else {
                  sum += (double)0.04889271232048374854;
                }
              } else {
                sum += (double)0.2896944784322595945;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.04259204864501953) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3604850023984909058) ) ) {
                sum += (double)0.3297880424577572245;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3117499947547912598) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2808428257703781128) ) ) {
                    sum += (double)0.4061193399888112787;
                  } else {
                    sum += (double)0.593510579984514175;
                  }
                } else {
                  sum += (double)0.3799106807376892991;
                }
              }
            } else {
              sum += (double)0.1839030879753109637;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709160089492797852) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24843.2939453125) ) ) {
            sum += (double)0.1545353820093831876;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.964774370193481445) ) ) {
              sum += (double)0.135031094837927218;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.355137228965759277) ) ) {
                sum += (double)0.08068045468518669772;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.774017333984375) ) ) {
                  sum += (double)0.01106462400000000033;
                } else {
                  sum += (double)0.05309140523246892729;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.02724647521972656) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2618.7239990234375) ) ) {
              sum += (double)0.4303621966231959139;
            } else {
              sum += (double)0.2215826747667377361;
            }
          } else {
            sum += (double)0.09896245763040072141;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062999188899993896) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8290.51611328125) ) ) {
            sum += (double)0.5315977621897628458;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5618000030517578125) ) ) {
              sum += (double)0.6667165249739918087;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6502065062522888184) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1557.5447998046875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6067505180835723877) ) ) {
                    sum += (double)0.7282102660000000505;
                  } else {
                    sum += (double)0.6687488135058660133;
                  }
                } else {
                  sum += (double)0.765915923076923022;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.227642178535461426) ) ) {
                  sum += (double)0.7945375878296144778;
                } else {
                  sum += (double)0.7652091316005470434;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.486638545989990234) ) ) {
                sum += (double)0.8613351999999999675;
              } else {
                sum += (double)0.8172912351073763348;
              }
            } else {
              sum += (double)0.9068248437710436649;
            }
          } else {
            sum += (double)0.751765684020750391;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.734411776065826416) ) ) {
          sum += (double)0.5523365818105850922;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.529321259599449423;
          } else {
            sum += (double)0.2836878373309445478;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.985833108425140381) ) ) {
        sum += (double)0.6083469604902066452;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3119.6138916015625) ) ) {
            sum += (double)0.2020818190881688292;
          } else {
            sum += (double)0.09101892325796415162;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1034.853118896484375) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1475.6910400390625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2116.91351318359375) ) ) {
                sum += (double)0.3609898439097683487;
              } else {
                sum += (double)0.2162617565455250968;
              }
            } else {
              sum += (double)0.4916606628955971781;
            }
          } else {
            sum += (double)0.1284080700434353239;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.107257496565580368) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.40350866317749023) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3234.6812744140625) ) ) {
                sum += (double)0.01359968000000000114;
              } else {
                sum += (double)0.00662888333333333437;
              }
            } else {
              sum += (double)0.03479100994794679519;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.84444427490234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04224999994039535522) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007849999936297535896) ) ) {
                  sum += (double)0.02354818666666666852;
                } else {
                  sum += (double)0.009229152000000002617;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                  sum += (double)0.1568875101808647199;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687979996204376221) ) ) {
                    sum += (double)0.0282680999999999974;
                  } else {
                    sum += (double)0.09781114351792069561;
                  }
                }
              }
            } else {
              sum += (double)0.1269069562360443382;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1836999952793121338) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5625) ) ) {
                sum += (double)0.05016164292497625465;
              } else {
                sum += (double)0.00875210819428995368;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1876370012760162354) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.54166603088378906) ) ) {
                      sum += (double)0.005464514285714284873;
                    } else {
                      sum += (double)0.004083427160493829748;
                    }
                  } else {
                    sum += (double)0.007714314285714287192;
                  }
                } else {
                  sum += (double)0.0106484470588235295;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                  sum += (double)0.02637749999999999817;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09590600058436393738) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)102.8631095886230469) ) ) {
                      sum += (double)0.01073390909090909083;
                    } else {
                      sum += (double)0.005503200000000000626;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1500420048832893372) ) ) {
                      sum += (double)0.02332285217391304524;
                    } else {
                      sum += (double)0.007920676923076923684;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08070000261068344116) ) ) {
              sum += (double)0.09601314678660195778;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2456260025501251221) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6290499866008758545) ) ) {
                  sum += (double)0.011238625714285716;
                } else {
                  sum += (double)0.02957377500000000353;
                }
              } else {
                sum += (double)0.06625579881656805392;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464854836463928223) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004850000143051147461) ) ) {
            sum += (double)0.2709693483056729302;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090284973382949829) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2501345127820968628) ) ) {
                    sum += (double)0.07329335811374615428;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3147306889295578003) ) ) {
                      sum += (double)0.01278557777777777731;
                    } else {
                      sum += (double)0.03094120439560439639;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.86274433135986328) ) ) {
                    sum += (double)0.146465054313613452;
                  } else {
                    sum += (double)0.06979142453102453458;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.81472969055175781) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5104.956787109375) ) ) {
                      sum += (double)0.05412450441080517149;
                    } else {
                      sum += (double)0.1188208064346352316;
                    }
                  } else {
                    sum += (double)0.2320437083382782539;
                  }
                } else {
                  sum += (double)0.2877738694700774924;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
                sum += (double)0.1593708929954944786;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7450044751167297363) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2777500003576278687) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                      sum += (double)0.0193912000000000008;
                    } else {
                      sum += (double)0.06419151406267017967;
                    }
                  } else {
                    sum += (double)0.1276535483344941047;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3520499914884567261) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2946445047855377197) ) ) {
                      sum += (double)0.007882142857142860129;
                    } else {
                      sum += (double)0.02118837162078065356;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.171817302703857422) ) ) {
                      sum += (double)0.07611347924118991304;
                    } else {
                      sum += (double)0.02541894965986394098;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3614389188638739703;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.000506043434143066) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05304999835789203644) ) ) {
              sum += (double)0.5072315927252789569;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5456.853515625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55174398422241211) ) ) {
                  sum += (double)0.4603881250403819569;
                } else {
                  sum += (double)0.2526153811714105801;
                }
              } else {
                sum += (double)0.1828481556130304442;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.79599189758300781) ) ) {
                sum += (double)0.6229931041666666447;
              } else {
                sum += (double)0.6560512536287240737;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3179270029067993164) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929475009441375732) ) ) {
                      sum += (double)0.4991072725652619946;
                    } else {
                      sum += (double)0.545504002354159967;
                    }
                  } else {
                    sum += (double)0.4479742759199819568;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5547690391540527344) ) ) {
                      sum += (double)0.5791799508645442129;
                    } else {
                      sum += (double)0.4801624599133384463;
                    }
                  } else {
                    sum += (double)0.473272795201705565;
                  }
                }
              } else {
                sum += (double)0.4126198863068686884;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3418017476797103882) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3039000034332275391) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2290829569101333618) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7313999831676483154) ) ) {
                  sum += (double)0.3152815836054929099;
                } else {
                  sum += (double)0.4785356175578714955;
                }
              } else {
                sum += (double)0.5025782614644709323;
              }
            } else {
              sum += (double)0.2490896878381433921;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3722449988126754761) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10148.6513671875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0718531608581543) ) ) {
                    sum += (double)0.4018409851238598507;
                  } else {
                    sum += (double)0.2304863136916203981;
                  }
                } else {
                  sum += (double)0.1221592043980372078;
                }
              } else {
                sum += (double)0.09671885645596746406;
              }
            } else {
              sum += (double)0.3731869624434988042;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1867.14727783203125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
              sum += (double)0.2631873615631703522;
            } else {
              sum += (double)0.4034389119516160749;
            }
          } else {
            sum += (double)0.07750727063620384272;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1884500011801719666) ) ) {
            sum += (double)0.1301078748944852481;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4721999913454055786) ) ) {
              sum += (double)0.01800146424682395885;
            } else {
              sum += (double)0.06045001778747025739;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5811865031719207764) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.508684009313583374) ) ) {
                sum += (double)0.5635158656061100002;
              } else {
                sum += (double)0.6277875860587633916;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.115455865859985352) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09421525150537490845) ) ) {
                    sum += (double)0.6289679537516082997;
                  } else {
                    sum += (double)0.673055031758241773;
                  }
                } else {
                  sum += (double)0.6029304696816177866;
                }
              } else {
                sum += (double)0.6909912235042734441;
              }
            }
          } else {
            sum += (double)0.4298676414033562043;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1541.4549560546875) ) ) {
                sum += (double)0.6869426326265265503;
              } else {
                sum += (double)0.7580425874999999758;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2681.0269775390625) ) ) {
                sum += (double)0.7375199071267912743;
              } else {
                sum += (double)0.7800593075744274296;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8438450098037719727) ) ) {
                sum += (double)0.8882221329218107364;
              } else {
                sum += (double)0.8463572456911976349;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7070000171661376953) ) ) {
                sum += (double)0.7768958427749204088;
              } else {
                sum += (double)0.8075398588235294106;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.530625698326282258;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.4327057282318945153;
            } else {
              sum += (double)0.2248004071649184199;
            }
          }
        } else {
          sum += (double)0.6028780885903899378;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5821055173873901367) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.11111068725585938) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
              sum += (double)0.101218217928583834;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5798499882221221924) ) ) {
                sum += (double)0.06815505151051055865;
              } else {
                sum += (double)0.01874188571428571717;
              }
            }
          } else {
            sum += (double)0.1973996115374910543;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.306652069091796875) ) ) {
            sum += (double)0.0572608956043956091;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.184615612030029297) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2720620036125183105) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01295000035315752029) ) ) {
                  sum += (double)0.2917306350607587473;
                } else {
                  sum += (double)0.1802946933728485357;
                }
              } else {
                sum += (double)0.3561039535253728294;
              }
            } else {
              sum += (double)0.1183575686673183497;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24364500492811203) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.63492012023925781) ) ) {
              sum += (double)0.05085114287084399609;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                  sum += (double)0.006883305263157893199;
                } else {
                  sum += (double)0.04622057142857141643;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)506.9383087158203125) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2116.4490966796875) ) ) {
                      sum += (double)0.004180094964028779198;
                    } else {
                      sum += (double)0.007044533333333334417;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)225.486114501953125) ) ) {
                      sum += (double)0.01640243200000000151;
                    } else {
                      sum += (double)0.005251626666666667741;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.184749998152256012) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.07323265075683594) ) ) {
                      sum += (double)0.009348588235294120682;
                    } else {
                      sum += (double)0.005906400000000000018;
                    }
                  } else {
                    sum += (double)0.01776509166666667347;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7358402609825134277) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81088542938232422) ) ) {
                sum += (double)0.1064277814136680156;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5531974732875823975) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
                      sum += (double)0.02649262788717718711;
                    } else {
                      sum += (double)0.07005505674596425314;
                    }
                  } else {
                    sum += (double)0.09583892083947816165;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09024999663233757019) ) ) {
                    sum += (double)0.1241518965703731631;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.160078004002571106) ) ) {
                      sum += (double)0.0369764058479532115;
                    } else {
                      sum += (double)0.09549722704180217681;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.51842069625854492) ) ) {
                sum += (double)0.04085383986541697016;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1913530007004737854) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2670000046491622925) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4500000029802322388) ) ) {
                      sum += (double)0.005525843478260869177;
                    } else {
                      sum += (double)0.008156442105263159159;
                    }
                  } else {
                    sum += (double)0.01545118461538461455;
                  }
                } else {
                  sum += (double)0.02616529600000000108;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3157.60546875) ) ) {
              sum += (double)0.0742563247344940891;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.620000004768371582) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.70201969146728516) ) ) {
                  sum += (double)0.05380171428571428605;
                } else {
                  sum += (double)0.02717305999999999888;
                }
              } else {
                sum += (double)0.004621090909090908895;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2650000005960464478) ) ) {
                sum += (double)0.01350109480286738363;
              } else {
                sum += (double)0.09863697801853857361;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9038.6455078125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7511999905109405518) ) ) {
                  sum += (double)0.06157936453761179291;
                } else {
                  sum += (double)0.1239491881215226965;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.879999995231628418) ) ) {
                  sum += (double)0.3400327189307106868;
                } else {
                  sum += (double)0.2063299722972452011;
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.4037712491128117587;
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.569871902465820312) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9602659344673156738) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5209914743900299072) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3387510031461715698) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.6391003805460646614;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2008775025606155396) ) ) {
                sum += (double)0.3241209780514537897;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2115.3048095703125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622500091791152954) ) ) {
                      sum += (double)0.4822707894476480073;
                    } else {
                      sum += (double)0.5327080749288771733;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.145986557006835938) ) ) {
                      sum += (double)0.3592346007509721884;
                    } else {
                      sum += (double)0.5036967904493205861;
                    }
                  }
                } else {
                  sum += (double)0.3686098230352992666;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007549999980255961418) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2663.0958251953125) ) ) {
                sum += (double)0.6736917873715752014;
              } else {
                sum += (double)0.638812787619047695;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.27230052649974823) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4497460126876831055) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.118877023458480835) ) ) {
                    sum += (double)0.4806601378705572247;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2872.2589111328125) ) ) {
                      sum += (double)0.5620152227236532294;
                    } else {
                      sum += (double)0.6122292372398421278;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                    sum += (double)0.5928995620587597104;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000054836273193) ) ) {
                      sum += (double)0.5955370372385991873;
                    } else {
                      sum += (double)0.6733157496866095659;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335294127464294434) ) ) {
                  sum += (double)0.5756534297868144412;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.9814453125) ) ) {
                    sum += (double)0.5483026974627921435;
                  } else {
                    sum += (double)0.3931485567956152782;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5804649889469146729) ) ) {
                sum += (double)0.6147508074908695219;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5339500010013580322) ) ) {
                  sum += (double)0.6562713318624032732;
                } else {
                  sum += (double)0.7269559995859213863;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.602941274642944336) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8278500139713287354) ) ) {
                  sum += (double)0.7187133373015872628;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.593861997127532959) ) ) {
                    sum += (double)0.7463464552631577931;
                  } else {
                    sum += (double)0.7784033474313021284;
                  }
                }
              } else {
                sum += (double)0.6771705137447349143;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.93164515495300293) ) ) {
                sum += (double)0.8960099466666666679;
              } else {
                sum += (double)0.8680160556149733031;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3699.2950439453125) ) ) {
                sum += (double)0.7707710391653626036;
              } else {
                sum += (double)0.8212314631130064324;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.075101733207702637) ) ) {
              sum += (double)0.5251934599132159764;
            } else {
              sum += (double)0.4585155522854414412;
            }
          } else {
            sum += (double)0.5639731871554968246;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2600.464111328125) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.650012195110321045) ) ) {
              sum += (double)0.4540387515061604651;
            } else {
              sum += (double)0.2857271474613022888;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.966084480285644531) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.62044525146484375) ) ) {
                sum += (double)0.1481130936541805443;
              } else {
                sum += (double)0.05088182944593010876;
              }
            } else {
              sum += (double)0.2444236342173423671;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.142028212547302246) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368799984455108643) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
              sum += (double)0.5484605451186392866;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                sum += (double)0.4639281446318547775;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.994304656982421875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23128700256347656) ) ) {
                    sum += (double)0.3056306071883013176;
                  } else {
                    sum += (double)0.4781328722223645022;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9650.12744140625) ) ) {
                    sum += (double)0.2869402926478503701;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6754.281982421875) ) ) {
                      sum += (double)0.1130445170924457843;
                    } else {
                      sum += (double)0.2228799857845529808;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)117.1729698181152344) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.04726409912109375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.56349372863769531) ) ) {
                  sum += (double)0.2790385119177536954;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1894000023603439331) ) ) {
                    sum += (double)0.2261772336049663323;
                  } else {
                    sum += (double)0.09652962595819636338;
                  }
                }
              } else {
                sum += (double)0.3073238963182224892;
              }
            } else {
              sum += (double)0.06014202275132275732;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.34756088256835938) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5389650166034698486) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5156006515026092529) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1944969817996025085) ) ) {
                  sum += (double)0.4589485751245699907;
                } else {
                  sum += (double)0.5676429613981440747;
                }
              } else {
                sum += (double)0.3714854742800558496;
              }
            } else {
              sum += (double)0.6477515764687623578;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.05411338806152344) ) ) {
              sum += (double)0.2483095124129815201;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.96053886413574219) ) ) {
                sum += (double)0.5073305918632744493;
              } else {
                sum += (double)0.2957672457313945125;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4984414875507354736) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19266.078125) ) ) {
            sum += (double)0.1631176638935452616;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39039802551269531) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.559807717800140381) ) ) {
                sum += (double)0.02447299988169181206;
              } else {
                sum += (double)0.04610359304125677404;
              }
            } else {
              sum += (double)0.01399891764705882627;
            }
          }
        } else {
          sum += (double)0.4336658469749397615;
        }
      }
    }
  }
  return sum;
}
