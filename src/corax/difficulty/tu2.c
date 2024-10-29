#include "prediction.h"
double predict_margin_unit2(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
              sum += (double)0.00827809143653261692;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.02631578947369206) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                  sum += (double)-0.006838800769697863519;
                } else {
                  sum += (double)0.004076657730490419046;
                }
              } else {
                sum += (double)-0.009905471554216643826;
              }
            }
          } else {
            sum += (double)-0.009742812144613026415;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849500000000000144) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)118.0299834287672098) ) ) {
                sum += (double)-0.005793360616051498879;
              } else {
                sum += (double)0.003912049257156020345;
              }
            } else {
              sum += (double)-0.00943430524235258465;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
              sum += (double)-0.009901746125801887469;
            } else {
              sum += (double)-0.003585546876877343959;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)786.2947641301196882) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.008776254073894750388;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9842100889221309101) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.48596938775510345) ) ) {
                  sum += (double)0.002868280271390349825;
                } else {
                  sum += (double)-0.008152213730975197206;
                }
              } else {
                sum += (double)-0.008119316047053846616;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
                sum += (double)0.006703016584684536906;
              } else {
                sum += (double)-0.008067266799775313704;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                  sum += (double)-0.0006317979442485543691;
                } else {
                  sum += (double)-0.01256338549939239185;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                    sum += (double)0.005329715464993413192;
                  } else {
                    sum += (double)0.001401616719151369591;
                  }
                } else {
                  sum += (double)-0.003900393775336725207;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.04618346993186531885) ) ) {
                sum += (double)-0.003061220886978347887;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                  sum += (double)0.006958737351892800051;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                    sum += (double)0.005729142634626455122;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                      sum += (double)0.00318299931050189432;
                    } else {
                      sum += (double)-0.00588791708383415522;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
              sum += (double)0.01368233306983280759;
            } else {
              sum += (double)0.006858207364882087931;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1460500000000000409) ) ) {
            sum += (double)0.009682148277872219821;
          } else {
            sum += (double)0.005985547617012930248;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
            sum += (double)0.005813442657203170619;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1116.565576061355387) ) ) {
              sum += (double)-0.005467711314104811704;
            } else {
              sum += (double)0.00738705414875038234;
            }
          }
        }
      } else {
        sum += (double)0.01184438335719747298;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
          sum += (double)-0.00845977772232993537;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4092500000000000582) ) ) {
                sum += (double)-0.001411059906127491931;
              } else {
                sum += (double)0.00810967390928500273;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6080000000000000959) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                      sum += (double)0.00949905587264345333;
                    } else {
                      sum += (double)-0.003110661951733799651;
                    }
                  } else {
                    sum += (double)-0.005261743321114627225;
                  }
                } else {
                  sum += (double)-0.01647400523148192381;
                }
              } else {
                sum += (double)-0.008035651398968031781;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
              sum += (double)0.009875564327838228657;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1116.565576061355387) ) ) {
                sum += (double)-0.01014939027145655287;
              } else {
                sum += (double)-0.006762270497143525044;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
              sum += (double)0.002772196949487738208;
            } else {
              sum += (double)0.01252381711253557593;
            }
          } else {
            sum += (double)-0.001721462196540422818;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
            sum += (double)-0.002725605149149474323;
          } else {
            sum += (double)-0.01265112204997142359;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7581.571018954598003) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                    sum += (double)-0.006176977881886065204;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
                      sum += (double)-0.0001659746985829241132;
                    } else {
                      sum += (double)-0.01156614459249624347;
                    }
                  }
                } else {
                  sum += (double)0.006319088771264949958;
                }
              } else {
                sum += (double)-0.01285796435133932519;
              }
            } else {
              sum += (double)0.006094834960772840121;
            }
          } else {
            sum += (double)-0.01557119566428275849;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
              sum += (double)0.005900580167711636133;
            } else {
              sum += (double)0.000517828335273324853;
            }
          } else {
            sum += (double)0.01248216260203209929;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          sum += (double)0.005730552137036228587;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16838.47520585079837) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32780.76529662315443) ) ) {
                  sum += (double)0.002999264447091606108;
                } else {
                  sum += (double)-0.006919646228892016235;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1003.426071798457656) ) ) {
                    sum += (double)-0.008249829155258105173;
                  } else {
                    sum += (double)0.003573600341488729348;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
                    sum += (double)-0.008875570260798161873;
                  } else {
                    sum += (double)0.0007587932070083842949;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
                sum += (double)0.01224578530606468957;
              } else {
                sum += (double)0.002018821726930407866;
              }
            }
          } else {
            sum += (double)-0.01018306954482363358;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6814500000000002222) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05517050000000000426) ) ) {
            sum += (double)-0.01005738649191074974;
          } else {
            sum += (double)-0.0002391754865368895253;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4568.919520521660161) ) ) {
              sum += (double)0.004976562463255083078;
            } else {
              sum += (double)-0.005425821193822124092;
            }
          } else {
            sum += (double)-0.008554620822584407466;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                  sum += (double)0.003695375166505338038;
                } else {
                  sum += (double)-0.005747483979902094642;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5420.781404110555741) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                      sum += (double)-0.01104101538352648439;
                    } else {
                      sum += (double)-0.002677457675767955323;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                      sum += (double)0.004881661519443849725;
                    } else {
                      sum += (double)-0.0006174025856265010371;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                    sum += (double)0.007686396853896752639;
                  } else {
                    sum += (double)-0.002824678697580725126;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5206.745974317551372) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                  sum += (double)-0.001586755902498317205;
                } else {
                  sum += (double)0.01141943076911085264;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                    sum += (double)0.0006777732122162035983;
                  } else {
                    sum += (double)-0.007686922661898204327;
                  }
                } else {
                  sum += (double)-0.01272453570728259223;
                }
              }
            }
          } else {
            sum += (double)0.005864660771553222192;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2793.363867362420478) ) ) {
              sum += (double)0.002034400456857390037;
            } else {
              sum += (double)-0.006423431438472041073;
            }
          } else {
            sum += (double)-0.01183336799773498926;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
            sum += (double)-0.00838153130903924494;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
              sum += (double)0.004898988066603659174;
            } else {
              sum += (double)-0.006643444533134390886;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
              sum += (double)0.004999488657182901696;
            } else {
              sum += (double)-0.003053042376068343736;
            }
          } else {
            sum += (double)-0.009518369493799449729;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
            sum += (double)0.002874764938126127267;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8491407799074687235) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2682134158579352889) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9790.82043369202438) ) ) {
                  sum += (double)-0.005578550242317070751;
                } else {
                  sum += (double)0.004896371432679765337;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                    sum += (double)-0.006976146918459534899;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                      sum += (double)-0.003749175078155636033;
                    } else {
                      sum += (double)0.00952878402507748197;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
                    sum += (double)-0.002525074297574591686;
                  } else {
                    sum += (double)0.00901868876958241035;
                  }
                }
              }
            } else {
              sum += (double)-0.01190397479333590511;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4626188573480190525) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5650500000000000522) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18158.57126180104024) ) ) {
                sum += (double)-0.0001985748283845405692;
              } else {
                sum += (double)0.01184247666342515964;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5350000000000001421) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7340.285232759907558) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4444724744926561999) ) ) {
                      sum += (double)-0.008213216947279810762;
                    } else {
                      sum += (double)0.004799383097419054542;
                    }
                  } else {
                    sum += (double)0.01299372338356791744;
                  }
                } else {
                  sum += (double)-0.006314926344186312483;
                }
              } else {
                sum += (double)0.004041840650290287433;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
              sum += (double)-0.007082177576201847784;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                  sum += (double)0.00662672094342680023;
                } else {
                  sum += (double)-0.003071779063033818792;
                }
              } else {
                sum += (double)-0.009990720448731321007;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1366.16280735785358) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
            sum += (double)0.004681916823630997114;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
              sum += (double)0.004522465729273413178;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                sum += (double)-0.01218023228381984527;
              } else {
                sum += (double)-0.0009703851974475029415;
              }
            }
          }
        } else {
          sum += (double)0.007187894895077183606;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.831026909314261597) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
              sum += (double)0.005147628895904533299;
            } else {
              sum += (double)0.009844080674712435072;
            }
          } else {
            sum += (double)0.004489653179858154111;
          }
        } else {
          sum += (double)0.01184533830145524311;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                    sum += (double)0.003950117091305520821;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5133.306374476119345) ) ) {
                      sum += (double)-0.001616946515680374452;
                    } else {
                      sum += (double)0.004400508714161425333;
                    }
                  }
                } else {
                  sum += (double)-0.00499282808598283754;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                  sum += (double)0.00968496698881848514;
                } else {
                  sum += (double)-0.002641617176355654222;
                }
              }
            } else {
              sum += (double)-0.01099324083819748672;
            }
          } else {
            sum += (double)0.007916011255772145358;
          }
        } else {
          sum += (double)-0.004094872252975342332;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
            sum += (double)0.00318081656978836053;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7049118465821219148) ) ) {
              sum += (double)-0.0057069105336473476;
            } else {
              sum += (double)0.005767497718813388054;
            }
          }
        } else {
          sum += (double)-0.004908014344619376912;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
          sum += (double)0.001545400296658251942;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
            sum += (double)-0.00429337280972122079;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2655.127693887397527) ) ) {
              sum += (double)-0.01086284206644133957;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                sum += (double)-0.004141398283310331919;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                  sum += (double)0.007818540246191491364;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                    sum += (double)0.006653813370174350983;
                  } else {
                    sum += (double)-0.008696128370582026021;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)961.6140299952331816) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.65331664580726034) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                  sum += (double)0.006213161151229005912;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                    sum += (double)-0.01140538344450204786;
                  } else {
                    sum += (double)0.005804445368989981889;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                  sum += (double)-0.003987878125655006621;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4880421551248437795) ) ) {
                    sum += (double)0.009982216204466697398;
                  } else {
                    sum += (double)0.001332032237968838566;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
                sum += (double)-0.007554951038299965484;
              } else {
                sum += (double)0.003315935134196229973;
              }
            }
          } else {
            sum += (double)-0.009730125478591766103;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                sum += (double)0.003838712387795273958;
              } else {
                sum += (double)0.00620914381614602693;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                sum += (double)-0.01050677628594639569;
              } else {
                sum += (double)0.002032790993352752516;
              }
            }
          } else {
            sum += (double)0.008255627041087265292;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.257490756088232242) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3864255899139620865) ) ) {
          sum += (double)0.01015983491821325496;
        } else {
          sum += (double)0.00748817037926606012;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9842100889221309101) ) ) {
            sum += (double)0.007811062169769887945;
          } else {
            sum += (double)-0.002069007168017714636;
          }
        } else {
          sum += (double)-0.006524108420258365251;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
            sum += (double)0.002650906505447278832;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
              sum += (double)0.002343965853604418424;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                sum += (double)0.003513263764498976687;
              } else {
                sum += (double)-0.004032206508418712497;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2478.891438747010852) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                sum += (double)0.003784186609378804075;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  sum += (double)-0.007088646069882555134;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2924659694118884601) ) ) {
                    sum += (double)0.006293689853006421454;
                  } else {
                    sum += (double)-0.006431191595831417356;
                  }
                }
              }
            } else {
              sum += (double)-0.008972428005818372868;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3268798599916286629) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                    sum += (double)-0.008069235724267622561;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                      sum += (double)-0.0004988676459566068408;
                    } else {
                      sum += (double)0.01184662590885493354;
                    }
                  }
                } else {
                  sum += (double)-0.006474619574182612081;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5528205492927561471) ) ) {
                  sum += (double)0.008970637990623560667;
                } else {
                  sum += (double)-0.002267437304471313798;
                }
              }
            } else {
              sum += (double)-0.009507555639931717859;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29069.44581527830451) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
              sum += (double)0.004662421417650403771;
            } else {
              sum += (double)-0.002710956745205210516;
            }
          } else {
            sum += (double)-0.005701900792599662315;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
            sum += (double)0.001022187981737981413;
          } else {
            sum += (double)-0.007325859193693713516;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5142890000000001072) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4357.007724276188128) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
                    sum += (double)0.00714614618682012006;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
                      sum += (double)-0.002761734737668436381;
                    } else {
                      sum += (double)0.001138314868651769301;
                    }
                  }
                } else {
                  sum += (double)-0.01027284501793825251;
                }
              } else {
                sum += (double)0.004009519145190441718;
              }
            } else {
              sum += (double)-0.01288222282462462773;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              sum += (double)0.004094419303911777872;
            } else {
              sum += (double)0.01022138961444446145;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
              sum += (double)0.001620381213229246491;
            } else {
              sum += (double)-0.0109130463401964882;
            }
          } else {
            sum += (double)-0.0114418334241540888;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.54356060606061618) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
              sum += (double)0.008518125083780095363;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
                sum += (double)0.009662839341776060034;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
                    sum += (double)0.003582306814692196462;
                  } else {
                    sum += (double)-0.004859667420457334554;
                  }
                } else {
                  sum += (double)0.002772655851582048105;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              sum += (double)0.006425626901462337323;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
                sum += (double)0.003553038991048055803;
              } else {
                sum += (double)-0.006418076684962999504;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1729.290123274111693) ) ) {
              sum += (double)-0.003331322812419130509;
            } else {
              sum += (double)0.01752168651582333009;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03895000000000000545) ) ) {
              sum += (double)-0.01296383034198796656;
            } else {
              sum += (double)-0.005091952803003042816;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
            sum += (double)0.009529172180206185727;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                sum += (double)-0.003309218791027892983;
              } else {
                sum += (double)0.001577941434225488488;
              }
            } else {
              sum += (double)-0.009769418589225916522;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
              sum += (double)-0.002932809594891730692;
            } else {
              sum += (double)0.006777604305003213231;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
              sum += (double)-0.004463042593450153132;
            } else {
              sum += (double)-0.009352515549785493654;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7340.285232759907558) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1116.565576061355387) ) ) {
                  sum += (double)0.001098303549697079648;
                } else {
                  sum += (double)0.004734652423766576301;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                    sum += (double)-0.01019137530093459226;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                      sum += (double)-0.0003345835955672475963;
                    } else {
                      sum += (double)0.004892616686179873144;
                    }
                  }
                } else {
                  sum += (double)0.003964277657909104358;
                }
              }
            } else {
              sum += (double)0.006058353390887775101;
            }
          } else {
            sum += (double)-0.004999636535684916575;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9772770219198791963) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1179193971631925381) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1229.430445872638074) ) ) {
                    sum += (double)0.01430422323090341924;
                  } else {
                    sum += (double)-0.0002294647409208758378;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5095115945175783256) ) ) {
                      sum += (double)0.005338722754039733169;
                    } else {
                      sum += (double)-0.0004348489265566740452;
                    }
                  } else {
                    sum += (double)-0.006755625760319355563;
                  }
                }
              } else {
                sum += (double)-0.009369050264673713796;
              }
            } else {
              sum += (double)-0.008961446107113435824;
            }
          } else {
            sum += (double)-0.006280845520824537322;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
          sum += (double)-0.006511708735926992689;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769234976159801298) ) ) {
              sum += (double)0.005715506793640760287;
            } else {
              sum += (double)-0.006657214199297547055;
            }
          } else {
            sum += (double)-0.004940014318380892347;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4681341459817245365) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                  sum += (double)-0.002515807778187224841;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1623500000000000221) ) ) {
                    sum += (double)0.01410155294075458692;
                  } else {
                    sum += (double)0.002574229628590832524;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
                  sum += (double)-0.009187200652741287638;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
                      sum += (double)-0.003266741694180321388;
                    } else {
                      sum += (double)0.008837649782121115641;
                    }
                  } else {
                    sum += (double)-0.006238008420050090812;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                sum += (double)0.00213972425410974363;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                  sum += (double)0.001153192740701460819;
                } else {
                  sum += (double)-0.006222820932772492493;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
                sum += (double)0.005530494211589061758;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
                  sum += (double)0.002860806245129869987;
                } else {
                  sum += (double)-0.006955211746139876652;
                }
              }
            } else {
              sum += (double)-0.005191702718520209772;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7118907180887991126) ) ) {
            sum += (double)0.003695617173839597664;
          } else {
            sum += (double)-0.007379618006558309566;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
          sum += (double)0.007408693875381366402;
        } else {
          sum += (double)0.003610501787986631576;
        }
      } else {
        sum += (double)0.009210583597436023881;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5964765000000001871) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1784550515539286286) ) ) {
                  sum += (double)0.008624973941563262442;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7372500000000000719) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3986990764490913053) ) ) {
                      sum += (double)0.006776510643197623113;
                    } else {
                      sum += (double)0.003211155456984084514;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                      sum += (double)0.004506300620376232566;
                    } else {
                      sum += (double)-0.0007190370772655789791;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                  sum += (double)0.005365148391458462139;
                } else {
                  sum += (double)-0.01173625241679575153;
                }
              }
            } else {
              sum += (double)-0.0001476072153767474541;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
              sum += (double)0.007875774906830364588;
            } else {
              sum += (double)0.003798719119351653874;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
            sum += (double)-0.01341437789967677569;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
              sum += (double)0.0009869237652007478278;
            } else {
              sum += (double)-0.009794472320191004167;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08132629836300046822) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8992000000000001103) ) ) {
              sum += (double)0.006989513496486492693;
            } else {
              sum += (double)-0.003591488042366086653;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                sum += (double)0.00757725848131748838;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)19887.81802584273828) ) ) {
                      sum += (double)-0.002255999534615623758;
                    } else {
                      sum += (double)0.004709045515205712538;
                    }
                  } else {
                    sum += (double)-0.00739372597587324102;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5095115945175783256) ) ) {
                    sum += (double)0.01040401266270460715;
                  } else {
                    sum += (double)-0.001780452048723995401;
                  }
                }
              }
            } else {
              sum += (double)-0.0118619199986778473;
            }
          }
        } else {
          sum += (double)0.01028288114832048676;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.72873563218391979) ) ) {
              sum += (double)0.003001012254148261848;
            } else {
              sum += (double)-0.004809305700890700343;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
              sum += (double)-0.005991735377442234355;
            } else {
              sum += (double)-0.0001717408594421073853;
            }
          }
        } else {
          sum += (double)-0.004616949981460245073;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)961.6140299952331816) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.65331664580726034) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              sum += (double)0.002121866853957106447;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
                sum += (double)0.004484243090717977137;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
                  sum += (double)-0.002563736010188244832;
                } else {
                  sum += (double)-0.01558833490667977002;
                }
              }
            }
          } else {
            sum += (double)-0.008979429141686335117;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
              sum += (double)0.004198202416856037372;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
                sum += (double)-0.009179210410460414069;
              } else {
                sum += (double)0.001693742787447414817;
              }
            }
          } else {
            sum += (double)0.007160442173168289105;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
        sum += (double)0.009405892667898086562;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)12.82999835704816327) ) ) {
          sum += (double)0.0004012509597611797329;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
              sum += (double)0.0043292806103835315;
            } else {
              sum += (double)0.008024149611399047227;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
              sum += (double)0.005830511821257831732;
            } else {
              sum += (double)-0.01076030558186926583;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
          sum += (double)0.002516463991936553329;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
                sum += (double)-0.004348065673091303096;
              } else {
                sum += (double)0.008222128629889961793;
              }
            } else {
              sum += (double)-0.005332874352572539341;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10362.98456196805637) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2997.79619999661054) ) ) {
                    sum += (double)-0.007243893555592431817;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                      sum += (double)1.068686767084177705e-05;
                    } else {
                      sum += (double)-0.005867740879416705017;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)260.2258709753264725) ) ) {
                    sum += (double)-0.007367823808961758598;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
                      sum += (double)-0.01049300222861992808;
                    } else {
                      sum += (double)-0.001470688913944937903;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4636414834351271774) ) ) {
                  sum += (double)0.005257870291768179487;
                } else {
                  sum += (double)-0.005096341413613909507;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2484845401189077485) ) ) {
                  sum += (double)0.01152780649367468775;
                } else {
                  sum += (double)0.0009668161540166950218;
                }
              } else {
                sum += (double)-0.00293632971262155389;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
          sum += (double)0.001133493190385106942;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6672.266741891098718) ) ) {
                sum += (double)-0.006063572225954733802;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2993500000000000605) ) ) {
                    sum += (double)-0.005154641240914142539;
                  } else {
                    sum += (double)0.00938378900898843675;
                  }
                } else {
                  sum += (double)-0.004407438796463750488;
                }
              }
            } else {
              sum += (double)0.007071669301361149622;
            }
          } else {
            sum += (double)-0.006813460013715529062;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4917.478106812183796) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                      sum += (double)0.002754332223022135009;
                    } else {
                      sum += (double)-0.008257293990073740625;
                    }
                  } else {
                    sum += (double)-0.00755509618235330159;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                    sum += (double)0.003508969192650493018;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
                      sum += (double)0.0004802808327288215291;
                    } else {
                      sum += (double)-0.00557737543300908245;
                    }
                  }
                }
              } else {
                sum += (double)0.003391759098757953037;
              }
            } else {
              sum += (double)-0.01146074180769494043;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.244386202413397563) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08774088920105922729) ) ) {
                  sum += (double)-0.001892292907063394293;
                } else {
                  sum += (double)0.007449492657169342648;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                    sum += (double)0.0005733925779033211597;
                  } else {
                    sum += (double)-0.01231108278109176515;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.283247888168071893) ) ) {
                    sum += (double)-0.009668282294823376047;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2020500000000000351) ) ) {
                      sum += (double)0.007144168503276471932;
                    } else {
                      sum += (double)0.001969383147917618156;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.009131775132978232554;
            }
          }
        } else {
          sum += (double)-0.005127174911916090351;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
          sum += (double)0.004298496674905855769;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3652.934062563911539) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                      sum += (double)-0.0004984964811118544224;
                    } else {
                      sum += (double)0.0117504269270535984;
                    }
                  } else {
                    sum += (double)-0.004847245859762243196;
                  }
                } else {
                  sum += (double)-0.01140677416264199509;
                }
              } else {
                sum += (double)-0.008641417473453117185;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                sum += (double)0.01264102362891188214;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-53428.13244237575418) ) ) {
                    sum += (double)0.005658093829780343718;
                  } else {
                    sum += (double)-0.004089209786385003022;
                  }
                } else {
                  sum += (double)0.01331502696627016001;
                }
              }
            }
          } else {
            sum += (double)-0.008393429384345708899;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
        sum += (double)-0.006534450379347275621;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                      sum += (double)-0.00863043273980523655;
                    } else {
                      sum += (double)0.0006326447176740813191;
                    }
                  } else {
                    sum += (double)-0.009069416806243376164;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                    sum += (double)0.01228376193566709657;
                  } else {
                    sum += (double)0.002218050823671977468;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                      sum += (double)-0.004324720900494517274;
                    } else {
                      sum += (double)0.003794191089661357909;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                      sum += (double)-0.007201338592970649849;
                    } else {
                      sum += (double)-0.002146351385274811521;
                    }
                  }
                } else {
                  sum += (double)-0.008467711691882784733;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
                  sum += (double)0.002948751353430418502;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
                    sum += (double)-0.001218004810142811088;
                  } else {
                    sum += (double)-0.01309025842062875276;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4444724744926561999) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                    sum += (double)0.004652866468670017151;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1116.565576061355387) ) ) {
                      sum += (double)-0.01304516031018956336;
                    } else {
                      sum += (double)0.001677857005984094776;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                      sum += (double)0.003318488915246151083;
                    } else {
                      sum += (double)-0.004681418277470325053;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                      sum += (double)-0.0005839213208241732667;
                    } else {
                      sum += (double)0.003038750020335793164;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01325000000000000309) ) ) {
              sum += (double)0.008675059799863403531;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5801.456541730448407) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      sum += (double)0.003094640199750805804;
                    } else {
                      sum += (double)-0.002994116632261627827;
                    }
                  } else {
                    sum += (double)0.007988302079990742405;
                  }
                } else {
                  sum += (double)0.005608474437046963301;
                }
              } else {
                sum += (double)-0.0064840823866278742;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
              sum += (double)-0.00664368122088314101;
            } else {
              sum += (double)0.001015168951630027704;
            }
          } else {
            sum += (double)-0.008897206524033786368;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          sum += (double)-0.005139589638455424776;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
            sum += (double)0.000104855574476075527;
          } else {
            sum += (double)-0.00519618788027668109;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
          sum += (double)-0.005922739578835693568;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.9002463054187615) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                sum += (double)0.006200064502240389824;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)599.5344662300684604) ) ) {
                  sum += (double)-0.007216696468786538109;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3312.681485277902539) ) ) {
                      sum += (double)-0.005914973857429446473;
                    } else {
                      sum += (double)-0.002283035373415593251;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      sum += (double)0.003012357829068930491;
                    } else {
                      sum += (double)-0.003271712305418590129;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67607313195548535) ) ) {
                  sum += (double)0.002481905179869757505;
                } else {
                  sum += (double)0.01108486545073394947;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                  sum += (double)0.003066682175707307473;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16180.09325483776956) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407499999999999973) ) ) {
                      sum += (double)-0.002969032732780331127;
                    } else {
                      sum += (double)-0.01209709368529110311;
                    }
                  } else {
                    sum += (double)3.794220396249900029e-05;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.008957886240188055182;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
          sum += (double)0.006284796977090958102;
        } else {
          sum += (double)0.003141010195647398091;
        }
      } else {
        sum += (double)0.007804510819929268324;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9892588490470258789) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                      sum += (double)0.002514202362039861301;
                    } else {
                      sum += (double)0.005142412817307737832;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1816.551521492987149) ) ) {
                      sum += (double)-0.006626736731970043863;
                    } else {
                      sum += (double)0.0015524675925974161;
                    }
                  }
                } else {
                  sum += (double)0.006432082342412731406;
                }
              } else {
                sum += (double)-0.003929639104885888565;
              }
            } else {
              sum += (double)0.008283700840264128853;
            }
          } else {
            sum += (double)0.01544527230600607239;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
            sum += (double)-0.01197657410623908202;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.074247175785397301) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                  sum += (double)0.006249295986076433378;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
                    sum += (double)-0.005956920804824181355;
                  } else {
                    sum += (double)0.003055864495174855262;
                  }
                }
              } else {
                sum += (double)-0.004929007658282181376;
              }
            } else {
              sum += (double)-0.01028695347029574304;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
              sum += (double)0.01009996503035994961;
            } else {
              sum += (double)0.002351141643520466683;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
              sum += (double)-0.003363742389733430718;
            } else {
              sum += (double)0.009792383885407514657;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.59687500000000426) ) ) {
            sum += (double)0.004788908421398782762;
          } else {
            sum += (double)-0.004224916746552324735;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
          sum += (double)0.001249409427888153882;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
            sum += (double)-0.00364861303201707279;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
              sum += (double)-0.008976606850965086412;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                sum += (double)-0.002965545367514425129;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
                    sum += (double)0.008781499808012847505;
                  } else {
                    sum += (double)-0.004976527151189156367;
                  }
                } else {
                  sum += (double)0.008697582471081915373;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          sum += (double)-0.00520244491024493029;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)939.1508267619991557) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              sum += (double)0.002767059100126343513;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                sum += (double)-0.01019111489778603587;
              } else {
                sum += (double)-0.0006825086527447487336;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
              sum += (double)0.003263592238204351265;
            } else {
              sum += (double)-0.006667744304882204306;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7.193095877481540334) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
            sum += (double)0.006333038087468369388;
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (1) ) ) {
              sum += (double)-0.007112213284697829589;
            } else {
              sum += (double)0.0001267241992863306712;
            }
          }
        } else {
          sum += (double)0.00451509159417316959;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8840870000000001783) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
            sum += (double)0.006732711447489734234;
          } else {
            sum += (double)0.001451865766861661512;
          }
        } else {
          sum += (double)0.009378571224765125391;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
            sum += (double)0.003800596789896156999;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
                  sum += (double)-0.0009337952532211364013;
                } else {
                  sum += (double)0.00798993541988055056;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                    sum += (double)-0.006528413672016025564;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5639.254044705900924) ) ) {
                      sum += (double)-0.003338852411197616547;
                    } else {
                      sum += (double)0.000362623167689888953;
                    }
                  }
                } else {
                  sum += (double)-0.01116747890372764979;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9581.734211346893062) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3634578871420977575) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6858500000000001817) ) ) {
                    sum += (double)0.003096585347247450635;
                  } else {
                    sum += (double)-0.005308484135374624303;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.405609901914840254) ) ) {
                      sum += (double)0.004323386815670469778;
                    } else {
                      sum += (double)0.01487183769514209032;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                      sum += (double)0.008471849327692121748;
                    } else {
                      sum += (double)-0.0009180972876043793198;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14710.51606691821326) ) ) {
                  sum += (double)0.006914991871945332449;
                } else {
                  sum += (double)-0.002702234933379349478;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
            sum += (double)-0.006112103810654721109;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                sum += (double)0.007641055219288013858;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
                  sum += (double)-0.002772543843312882776;
                } else {
                  sum += (double)0.005024815586178236343;
                }
              }
            } else {
              sum += (double)-0.00729824601915895349;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
          sum += (double)-0.005744995685910040707;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
            sum += (double)0.003368110778575139803;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)31299.3757595375755) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7030.279293102100382) ) ) {
                  sum += (double)-0.004520309056542874682;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                      sum += (double)-0.004386793504468974349;
                    } else {
                      sum += (double)0.004752347235092814655;
                    }
                  } else {
                    sum += (double)-0.003294228930061846288;
                  }
                }
              } else {
                sum += (double)0.005663573314025205016;
              }
            } else {
              sum += (double)-0.005866325528397301099;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              sum += (double)-0.004098443806129560898;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
                  sum += (double)-0.0006611746905061820136;
                } else {
                  sum += (double)0.009946321290549097957;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                      sum += (double)0.004248757843195042141;
                    } else {
                      sum += (double)-0.000372340460679985942;
                    }
                  } else {
                    sum += (double)0.005440987976754539657;
                  }
                } else {
                  sum += (double)-0.005281678610446689445;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)14358.85907140550808) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.9546342098412026) ) ) {
                  sum += (double)0.002630449028324196702;
                } else {
                  sum += (double)-0.01114572753218164881;
                }
              } else {
                sum += (double)0.007176764132793796332;
              }
            } else {
              sum += (double)0.007169262967783667471;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4006500000000000061) ) ) {
            sum += (double)-0.0018350562644009799;
          } else {
            sum += (double)-0.009454114451776650385;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
                sum += (double)0.01031222624530610602;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                    sum += (double)-0.001192126258413110304;
                  } else {
                    sum += (double)0.01234954791369524858;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                    sum += (double)-0.007134475357080070738;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                      sum += (double)0.001995731384467412054;
                    } else {
                      sum += (double)-0.004850991150727046973;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.006569478336319563468;
            }
          } else {
            sum += (double)0.004361944959375591534;
          }
        } else {
          sum += (double)-0.00439855387632985019;
        }
      }
    }
  }
  return sum;
}
