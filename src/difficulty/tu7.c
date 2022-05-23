#include "prediction.h"
double predict_margin_unit7(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368519976735115051) ) ) {
        sum += (double)0.07278674137931033516;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.345073506236076355) ) ) {
            sum += (double)0.3883374791666666659;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.520404219627380371) ) ) {
              sum += (double)0.2593534642857142636;
            } else {
              sum += (double)0.1684890333333333434;
            }
          }
        } else {
          sum += (double)0.463029370689655162;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3547950088977813721) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.09536933898925781) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419689863920211792) ) ) {
                    sum += (double)0.01619989285714285715;
                  } else {
                    sum += (double)0.004396249999999999984;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2056499943137168884) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.05555534362792969) ) ) {
                      sum += (double)0.007165625000000000987;
                    } else {
                      sum += (double)0.002738149456521740601;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2926499992609024048) ) ) {
                      sum += (double)0.01081559375000000142;
                    } else {
                      sum += (double)0.003592472222222223028;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0921499989926815033) ) ) {
                  sum += (double)0.04074087500000000278;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4285.661865234375) ) ) {
                      sum += (double)0.009360520000000000646;
                    } else {
                      sum += (double)0.02604199999999999918;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19934.763671875) ) ) {
                sum += (double)0.01567053750000000148;
              } else {
                sum += (double)0.05351081521739129571;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.13025236129760742) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.118750095367431641) ) ) {
                sum += (double)0.03545347058823529462;
              } else {
                sum += (double)0.1737846785714285414;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6160414516925811768) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156829982995986938) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.54285717010498047) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2700000032782554626) ) ) {
                      sum += (double)0.07068260526315787995;
                    } else {
                      sum += (double)0.02704050000000000203;
                    }
                  } else {
                    sum += (double)0.01366477419354838845;
                  }
                } else {
                  sum += (double)0.09078177272727273872;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5832.749267578125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39698.39453125) ) ) {
                    sum += (double)0.0069660625000000009;
                  } else {
                    sum += (double)0.01671367857142857377;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1366.28826904296875) ) ) {
                    sum += (double)0.002648999999999999445;
                  } else {
                    sum += (double)0.007562361111111111714;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
              sum += (double)0.2375368482142857229;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                sum += (double)0.1927878750000000252;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1072915010154247284) ) ) {
                  sum += (double)0.164311410714285705;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06864999979734420776) ) ) {
                      sum += (double)0.03993807352941175504;
                    } else {
                      sum += (double)0.01645550000000000138;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19490.8876953125) ) ) {
                      sum += (double)0.03792526875000000464;
                    } else {
                      sum += (double)0.1004751060606060425;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.350149989128112793) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9499999880790710449) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854030042886734009) ) ) {
                  sum += (double)0.01095900000000000173;
                } else {
                  sum += (double)0.003228548387096774261;
                }
              } else {
                sum += (double)0.02534772000000000414;
              }
            } else {
              sum += (double)0.04253522826086956338;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6702491044998168945) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
              sum += (double)0.09405587962962960735;
            } else {
              sum += (double)0.2840442058823529625;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.621025562286376953) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2886500060558319092) ) ) {
                sum += (double)0.02827322222222222042;
              } else {
                sum += (double)0.07279723333333333601;
              }
            } else {
              sum += (double)0.1639798214285714262;
            }
          }
        } else {
          sum += (double)0.3664755000000000096;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.66176509857177734) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.48980283737182617) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.889093875885009766) ) ) {
                    sum += (double)0.3792263846153846041;
                  } else {
                    sum += (double)0.4468976875000000293;
                  }
                } else {
                  sum += (double)0.3174683124999999606;
                }
              } else {
                sum += (double)0.4880115603448276773;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.27991724014282227) ) ) {
                  sum += (double)0.3016611212121212415;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8636.1201171875) ) ) {
                    sum += (double)0.1828132812500000148;
                  } else {
                    sum += (double)0.1027338035714285835;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1571500003337860107) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    sum += (double)0.3971767199999999831;
                  } else {
                    sum += (double)0.2541802142857142455;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356735587120056152) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.36681604385375977) ) ) {
                      sum += (double)0.3957678875000000263;
                    } else {
                      sum += (double)0.4402047794117646684;
                    }
                  } else {
                    sum += (double)0.3513828333333333109;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.02025842666625977) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.495692968368530273) ) ) {
                  sum += (double)0.5018106900000000037;
                } else {
                  sum += (double)0.4603709038461538672;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01390000013634562492) ) ) {
                  sum += (double)0.6013298809523808242;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.593365907669067383) ) ) {
                    sum += (double)0.5012280882352940781;
                  } else {
                    sum += (double)0.5601285999999999765;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0123138427734375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4929499924182891846) ) ) {
                  sum += (double)0.452444366666666653;
                } else {
                  sum += (double)0.5127922500000000605;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2524692639708518982) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.657142877578735352) ) ) {
                    sum += (double)0.4718952499999999883;
                  } else {
                    sum += (double)0.388501328125000045;
                  }
                } else {
                  sum += (double)0.3616404699999998806;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335070013999938965) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18792.2998046875) ) ) {
                sum += (double)0.2966372647058823642;
              } else {
                sum += (double)0.1705303421052631607;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22654.9990234375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39530.7109375) ) ) {
                  sum += (double)0.178437465909090931;
                } else {
                  sum += (double)0.08453719791666668149;
                }
              } else {
                sum += (double)0.2033791111111110939;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3800955861806869507) ) ) {
              sum += (double)0.4258750666666666351;
            } else {
              sum += (double)0.2468380666666666889;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2702.6221923828125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2804429978132247925) ) ) {
              sum += (double)0.1099010666666666719;
            } else {
              sum += (double)0.4081936029411764588;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
              sum += (double)0.2529490833333332689;
            } else {
              sum += (double)0.07885092647058822291;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.145312190055847168) ) ) {
            sum += (double)0.1823070178571428723;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3620100021362304688) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2896885126829147339) ) ) {
                sum += (double)0.03189474000000000475;
              } else {
                sum += (double)0.01657071052631578847;
              }
            } else {
              sum += (double)0.060315941176470593;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9965807795524597168) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3818.8492431640625) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8756.37744140625) ) ) {
                  sum += (double)0.5255672500000000413;
                } else {
                  sum += (double)0.4650277968750000657;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1509252488613128662) ) ) {
                  sum += (double)0.6175869333333333655;
                } else {
                  sum += (double)0.5564162499999999456;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4386.61572265625) ) ) {
                    sum += (double)0.5219933229166666688;
                  } else {
                    sum += (double)0.5946695217391303467;
                  }
                } else {
                  sum += (double)0.657153647058823509;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.64140927791595459) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07438938319683074951) ) ) {
                    sum += (double)0.6563162222222221898;
                  } else {
                    sum += (double)0.7464672142857142756;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6333.404296875) ) ) {
                    sum += (double)0.5864716071428571764;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3640.1339111328125) ) ) {
                      sum += (double)0.6661387261904762047;
                    } else {
                      sum += (double)0.6151193970588235693;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.4148349642857142583;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061500012874603271) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                sum += (double)0.7959567499999999907;
              } else {
                sum += (double)0.8298675166666666936;
              }
            } else {
              sum += (double)0.8934994027777778403;
            }
          } else {
            sum += (double)0.7126968815789473943;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6609975099563598633) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.4174662500000000387;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.3721587692307691819;
            } else {
              sum += (double)0.1426597031250000092;
            }
          }
        } else {
          sum += (double)0.4634838026315789006;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3292695134878158569) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.960769176483154297) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1886370033025741577) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7948499917984008789) ) ) {
              sum += (double)0.007003934782608695585;
            } else {
              sum += (double)0.05077430769230768109;
            }
          } else {
            sum += (double)0.07756306818181818441;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09464155882596969604) ) ) {
            sum += (double)0.343345046875000004;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447162598371505737) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.31785678863525391) ) ) {
                sum += (double)0.2375384687500000092;
              } else {
                sum += (double)0.1430008461538461451;
              }
            } else {
              sum += (double)0.07123391071428569754;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3030499964952468872) ) ) {
              sum += (double)0.04167595833333333222;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                sum += (double)0.00403934090909090996;
              } else {
                sum += (double)0.01481579629629629739;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
              sum += (double)0.01677797619047619385;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003355761904761904359;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09590600058436393738) ) ) {
                    sum += (double)0.004242203703703704629;
                  } else {
                    sum += (double)0.008074593750000001041;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9506.373046875) ) ) {
                  sum += (double)0.01036018749999999961;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7343119978904724121) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090284973382949829) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.78149318695068359) ) ) {
                sum += (double)0.126168476190476192;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4955710768699645996) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7697499990463256836) ) ) {
                      sum += (double)0.02083753496503494909;
                    } else {
                      sum += (double)0.0473147499999999957;
                    }
                  } else {
                    sum += (double)0.0688549499999999981;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.05147075653076172) ) ) {
                    sum += (double)0.13622763333333332;
                  } else {
                    sum += (double)0.03748020000000000518;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.5219573974609375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2614115029573440552) ) ) {
                  sum += (double)0.0778859861111111107;
                } else {
                  sum += (double)0.04146487499999999826;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26425.9794921875) ) ) {
                  sum += (double)0.04774212499999999637;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.8818511962890625) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.515350341796875) ) ) {
                      sum += (double)0.1597849038461538751;
                    } else {
                      sum += (double)0.082206846153846172;
                    }
                  } else {
                    sum += (double)0.1953264999999999862;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08050000295042991638) ) ) {
              sum += (double)0.05895211666666665129;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8204554915428161621) ) ) {
                sum += (double)0.03912151315789472172;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3084499984979629517) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                      sum += (double)0.005418555555555555799;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01170239285714285912;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.72368431091308594) ) ) {
                    sum += (double)0.006736842105263159131;
                  } else {
                    sum += (double)0.03792902777777777679;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.930952310562133789) ) ) {
        sum += (double)0.387562266129032218;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.20833396911621094) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3096000105142593384) ) ) {
              sum += (double)0.01067191304347826254;
            } else {
              sum += (double)0.07293748863636363711;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1765500009059906006) ) ) {
              sum += (double)0.2822388281250000075;
            } else {
              sum += (double)0.08990041666666664932;
            }
          }
        } else {
          sum += (double)0.2947151209677420503;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5495170056819915771) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3347699940204620361) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.469298362731933594) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001700000022538006306) ) ) {
              sum += (double)0.516424500000000064;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.2158647499999999664;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4603744596242904663) ) ) {
                    sum += (double)0.3311594791666667148;
                  } else {
                    sum += (double)0.2477216630434782851;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.97889232635498047) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                      sum += (double)0.4285973928571428226;
                    } else {
                      sum += (double)0.3461277121212120722;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1628499999642372131) ) ) {
                      sum += (double)0.2771158875000000466;
                    } else {
                      sum += (double)0.3821642499999999831;
                    }
                  }
                } else {
                  sum += (double)0.4676878088235293385;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10632.30322265625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.95230340957641602) ) ) {
                  sum += (double)0.4063981999999999872;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6962499916553497314) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2085499987006187439) ) ) {
                      sum += (double)0.3442946428571427853;
                    } else {
                      sum += (double)0.2132167500000000104;
                    }
                  } else {
                    sum += (double)0.1840554531249999903;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66748762130737305) ) ) {
                  sum += (double)0.1016414404761904755;
                } else {
                  sum += (double)0.2174010326086956435;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5384776294231414795) ) ) {
                sum += (double)0.1339714166666666484;
              } else {
                sum += (double)0.06509750000000000258;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.705384731292724609) ) ) {
                sum += (double)0.4504572692307692861;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5057774782180786133) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008500000112690031528) ) ) {
                    sum += (double)0.5999781499999999879;
                  } else {
                    sum += (double)0.5412384078947367616;
                  }
                } else {
                  sum += (double)0.652912289473684182;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4643076509237289429) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4051220118999481201) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3704899996519088745) ) ) {
                      sum += (double)0.4273631093749999943;
                    } else {
                      sum += (double)0.5112408482142857258;
                    }
                  } else {
                    sum += (double)0.4108774519230770084;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0685500018298625946) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.74278450012207031) ) ) {
                      sum += (double)0.5097359270833333733;
                    } else {
                      sum += (double)0.5862957380952380504;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.146325334906578064) ) ) {
                      sum += (double)0.4675722105263158124;
                    } else {
                      sum += (double)0.536300409090909147;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.233180522918701172) ) ) {
                  sum += (double)0.4713932777777778416;
                } else {
                  sum += (double)0.3872445520833333599;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.71725559234619141) ) ) {
              sum += (double)0.2113615666666666948;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.58854484558105469) ) ) {
                sum += (double)0.4218005624999999759;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)59.0828704833984375) ) ) {
                  sum += (double)0.2763477968749999958;
                } else {
                  sum += (double)0.3682478552631578417;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.101443767547607422) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2513.433349609375) ) ) {
            sum += (double)0.3267575937500000194;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
              sum += (double)0.245893958333333329;
            } else {
              sum += (double)0.08410941964285713335;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.33066105842590332) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1843999996781349182) ) ) {
              sum += (double)0.1958384899999999762;
            } else {
              sum += (double)0.05680356578947367424;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.30347633361816406) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3627160042524337769) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3507500141859054565) ) ) {
                  sum += (double)0.02311556250000000243;
                } else {
                  sum += (double)0.05670433333333332881;
                }
              } else {
                sum += (double)0.09461814285714285899;
              }
            } else {
              sum += (double)0.01839511111111111208;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7665.83203125) ) ) {
            sum += (double)0.5099304210526315329;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.873068094253540039) ) ) {
              sum += (double)0.5844637589285716084;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6171754896640777588) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.814199984073638916) ) ) {
                  sum += (double)0.6631767499999999815;
                } else {
                  sum += (double)0.5844848977272726342;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                  sum += (double)0.665435179999999904;
                } else {
                  sum += (double)0.7406093289473684171;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7969379723072052002) ) ) {
                sum += (double)0.8132630750000000575;
              } else {
                sum += (double)0.7526446875000000203;
              }
            } else {
              sum += (double)0.7230406562499999135;
            }
          } else {
            sum += (double)0.8816368749999998755;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.220949999988079071) ) ) {
          sum += (double)0.3194395859374999924;
        } else {
          sum += (double)0.4908308076923076912;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4375604987144470215) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3501.4981689453125) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
            sum += (double)0.2874698571428571658;
          } else {
            sum += (double)0.2049097300000000121;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.120772957801818848) ) ) {
            sum += (double)0.2755384166666666745;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
                sum += (double)0.0894360434782608682;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.337606906890869141) ) ) {
                  sum += (double)0.01208970454545454411;
                } else {
                  sum += (double)0.06839608333333332957;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.294346049427986145) ) ) {
                sum += (double)0.2307941944444444338;
              } else {
                sum += (double)0.05758137068965517996;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.02380943298339844) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1480235010385513306) ) ) {
              sum += (double)0.11167581818181814;
            } else {
              sum += (double)0.0192068571428571401;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.32692337036132812) ) ) {
                  sum += (double)0.00933863333333333559;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03576799854636192322) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04000000003725290298) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003206333333333333171;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)53.15659332275390625) ) ) {
                      sum += (double)0.005557200000000000854;
                    } else {
                      sum += (double)0.002696983333333334044;
                    }
                  }
                }
              } else {
                sum += (double)0.03056269117647058414;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6402493715286254883) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1117000021040439606) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671000093221664429) ) ) {
                      sum += (double)0.03868475000000000386;
                    } else {
                      sum += (double)0.01340421874999999513;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.83087635040283203) ) ) {
                      sum += (double)0.0766176666666666395;
                    } else {
                      sum += (double)0.02799070833333332231;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2945500016212463379) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.222748458385467529) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.003399909090909091023;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3914500027894973755) ) ) {
                      sum += (double)0.02050190625000000016;
                    } else {
                      sum += (double)0.007784111111111113174;
                    }
                  }
                }
              } else {
                sum += (double)0.0763548809523809241;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2545961588621139526) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019385039806365967) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03190000075846910477) ) ) {
                sum += (double)0.1966743392857142891;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2104090005159378052) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.99200534820556641) ) ) {
                    sum += (double)0.02912553125000000298;
                  } else {
                    sum += (double)0.05482614062499999857;
                  }
                } else {
                  sum += (double)0.0715114750000000049;
                }
              }
            } else {
              sum += (double)0.2280890882352941129;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5821499824523925781) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2292639985680580139) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02605000045150518417) ) ) {
                  sum += (double)0.1029243928571428601;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2765000015497207642) ) ) {
                      sum += (double)0.0270152957746478857;
                    } else {
                      sum += (double)0.06195103260869565254;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.87471389770507812) ) ) {
                      sum += (double)0.02128989705882352451;
                    } else {
                      sum += (double)0.01010642592592592842;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
                  sum += (double)0.1795894347826086368;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5094500184059143066) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6393032968044281006) ) ) {
                      sum += (double)0.04508480555555555852;
                    } else {
                      sum += (double)0.01950698499999999752;
                    }
                  } else {
                    sum += (double)0.1074649659090908954;
                  }
                }
              }
            } else {
              sum += (double)0.1492012000000000338;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02950000017881393433) ) ) {
          sum += (double)0.1078206739130434522;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53749990463256836) ) ) {
            sum += (double)0.3936703653846154172;
          } else {
            sum += (double)0.2111635384615384581;
          }
        }
      } else {
        sum += (double)0.4280622333333334306;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5304741111111110907;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2409274950623512268) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5097493231296539307) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2057824954390525818) ) ) {
                      sum += (double)0.1840167758620689653;
                    } else {
                      sum += (double)0.3437633660714285999;
                    }
                  } else {
                    sum += (double)0.1304705200000000065;
                  }
                } else {
                  sum += (double)0.3507098478260868846;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.60255336761474609) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.686781644821166992) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2339.043212890625) ) ) {
                      sum += (double)0.3865725361842105023;
                    } else {
                      sum += (double)0.2921772613636363092;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7841.720703125) ) ) {
                      sum += (double)0.3459938999999999654;
                    } else {
                      sum += (double)0.1837221249999999861;
                    }
                  }
                } else {
                  sum += (double)0.4552296388888888434;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301644444465637207) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4353.189697265625) ) ) {
                  sum += (double)0.6202212656250000178;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                    sum += (double)0.4885569999999999635;
                  } else {
                    sum += (double)0.5676009062499999258;
                  }
                }
              } else {
                sum += (double)0.4515158333333333385;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.1729736328125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3489.8294677734375) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1286389976739883423) ) ) {
                    sum += (double)0.3992834285714285669;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5017.229248046875) ) ) {
                      sum += (double)0.4538099714285713793;
                    } else {
                      sum += (double)0.4972721624999999479;
                    }
                  }
                } else {
                  sum += (double)0.3609867656249999834;
                }
              } else {
                sum += (double)0.5224538676470588117;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4525499939918518066) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3374499976634979248) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5654999911785125732) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12775.68408203125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.312410503625869751) ) ) {
                    sum += (double)0.1381634583333333499;
                  } else {
                    sum += (double)0.08271325000000000205;
                  }
                } else {
                  sum += (double)0.2442122833333333076;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7000499963760375977) ) ) {
                  sum += (double)0.3432746739130434488;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.42692184448242188) ) ) {
                    sum += (double)0.1705185357142857405;
                  } else {
                    sum += (double)0.2468811923076922876;
                  }
                }
              }
            } else {
              sum += (double)0.09507637000000000727;
            }
          } else {
            sum += (double)0.3127511195652173948;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.1938799000000000217;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
            sum += (double)0.1248588359374999956;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.857517480850219727) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
                sum += (double)0.1223271363636363324;
              } else {
                sum += (double)0.02845678125000000031;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.78486394882202148) ) ) {
                sum += (double)0.03636239062500000452;
              } else {
                sum += (double)0.01778535714285714442;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240499943494796753) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4676279276609420776) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4904465079307556152) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04200000129640102386) ) ) {
                      sum += (double)0.5648159999999999847;
                    } else {
                      sum += (double)0.5035077205882353413;
                    }
                  } else {
                    sum += (double)0.6065816923076924327;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.306540727615356445) ) ) {
                    sum += (double)0.450425933333333306;
                  } else {
                    sum += (double)0.5477632211538461249;
                  }
                }
              } else {
                sum += (double)0.4423574285714285681;
              }
            } else {
              sum += (double)0.3775076785714285843;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                sum += (double)0.59952245000000004;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.654179573059082031) ) ) {
                  sum += (double)0.687800767241379396;
                } else {
                  sum += (double)0.6369609741379310686;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500095844268799) ) ) {
                sum += (double)0.5363689999999998737;
              } else {
                sum += (double)0.6117662638888888837;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052999980747699738) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8287499845027923584) ) ) {
                sum += (double)0.736431929687500042;
              } else {
                sum += (double)0.7907415925925925793;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1314999982714653015) ) ) {
                sum += (double)0.6522125657894737305;
              } else {
                sum += (double)0.7113239099999999482;
              }
            }
          } else {
            sum += (double)0.8787089047619047744;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
            sum += (double)0.4132804666666666238;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3393.7718505859375) ) ) {
              sum += (double)0.2892462499999999825;
            } else {
              sum += (double)0.1106146477272727385;
            }
          }
        } else {
          sum += (double)0.5497953611111110472;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5131235122680664062) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1894240006804466248) ) ) {
          sum += (double)0.06189848529411764305;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.555000007152557373) ) ) {
            sum += (double)0.1587695333333333236;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.8383784294128418) ) ) {
              sum += (double)0.2187079423076922768;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1444.4383544921875) ) ) {
                sum += (double)0.2859833125000000309;
              } else {
                sum += (double)0.3605171470588235394;
              }
            }
          }
        }
      } else {
        sum += (double)0.4480985961538461737;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.949834346771240234) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1391934975981712341) ) ) {
            sum += (double)0.02054670833333333349;
          } else {
            sum += (double)0.1441920299999999988;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                    sum += (double)0.003816659090909092344;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003830916666666666932;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07000000029802322388) ) ) {
                    sum += (double)0.00302083333333333327;
                  } else {
                    sum += (double)0.009105175000000000074;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  sum += (double)0.01597197058823529581;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                sum += (double)0.02583805882352941188;
              } else {
                sum += (double)0.003938861111111111729;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7576999962329864502) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.81547641754150391) ) ) {
                sum += (double)0.06745113043478259685;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1723939999938011169) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08583099767565727234) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06210549920797348022) ) ) {
                      sum += (double)0.01164965000000000098;
                    } else {
                      sum += (double)0.03774618999999999197;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5909000039100646973) ) ) {
                      sum += (double)0.01314964285714285627;
                    } else {
                      sum += (double)0.003998733333333334;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4139000028371810913) ) ) {
                    sum += (double)0.0125178103448275891;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.658199995756149292) ) ) {
                      sum += (double)0.05954947727272727476;
                    } else {
                      sum += (double)0.02878658823529411936;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.08223063043478261169;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4178429991006851196) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6789383888244628906) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009899999946355819702) ) ) {
              sum += (double)0.2752504032258064059;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.948511123657226562) ) ) {
                  sum += (double)0.1581114499999999867;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4189000129699707031) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694999933242797852) ) ) {
                      sum += (double)0.02974700287356321637;
                    } else {
                      sum += (double)0.09757176190476188338;
                    }
                  } else {
                    sum += (double)0.1296393906250000172;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.44540214538574219) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08559999987483024597) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9200000166893005371) ) ) {
                      sum += (double)0.04909861666666667096;
                    } else {
                      sum += (double)0.09209460000000001256;
                    }
                  } else {
                    sum += (double)0.1671364565217391407;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1420999988913536072) ) ) {
                    sum += (double)0.2947607884615384699;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.75688362121582031) ) ) {
                      sum += (double)0.1764348095238095493;
                    } else {
                      sum += (double)0.09189269642857141041;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1908164992928504944) ) ) {
                sum += (double)0.01044384615384615599;
              } else {
                sum += (double)0.1053867083333333426;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.523700028657913208) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3948.9285888671875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2349095046520233154) ) ) {
                    sum += (double)0.01331397000000000136;
                  } else {
                    sum += (double)0.03011941666666666587;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.86005687713623047) ) ) {
                    sum += (double)0.01264827272727272849;
                  } else {
                    sum += (double)0.002733699999999999932;
                  }
                }
              } else {
                sum += (double)0.05788399999999999795;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.32070732116699219) ) ) {
            sum += (double)0.1698912678571428692;
          } else {
            sum += (double)0.3349049296874999637;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.735669940710067749) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2590230107307434082) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.335714340209960938) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2053668871521949768) ) ) {
              sum += (double)0.3744801617647058878;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1461500003933906555) ) ) {
                sum += (double)0.2197219047619047572;
              } else {
                sum += (double)0.3092267166666666234;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10622.55810546875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-35385.27734375) ) ) {
                sum += (double)0.1018005000000000021;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
                  sum += (double)0.3149036309523809418;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1919394955039024353) ) ) {
                    sum += (double)0.1420314999999999772;
                  } else {
                    sum += (double)0.2673174843750000251;
                  }
                }
              }
            } else {
              sum += (double)0.05759951086956521804;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3398025035858154297) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.5163141184210526813;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.101546287536621094) ) ) {
                    sum += (double)0.3434045500000000306;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08964999765157699585) ) ) {
                      sum += (double)0.4389634218749999817;
                    } else {
                      sum += (double)0.3924472934782609612;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9249.4755859375) ) ) {
                    sum += (double)0.3917961956521738842;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3974.1156005859375) ) ) {
                      sum += (double)0.268400565217391307;
                    } else {
                      sum += (double)0.321728633333333347;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596265822649002075) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08924999833106994629) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3237.344970703125) ) ) {
                    sum += (double)0.5814410384615383842;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4103675037622451782) ) ) {
                      sum += (double)0.4841709687500000414;
                    } else {
                      sum += (double)0.5342733499999999802;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                    sum += (double)0.5059697884615383945;
                  } else {
                    sum += (double)0.4378792647058823428;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2523.8408203125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.191894292831420898) ) ) {
                    sum += (double)0.4442954166666666649;
                  } else {
                    sum += (double)0.3894379999999999509;
                  }
                } else {
                  sum += (double)0.5178397638888889709;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5311999917030334473) ) ) {
              sum += (double)0.1613645526315789225;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2481999993324279785) ) ) {
                sum += (double)0.3631342375000000122;
              } else {
                sum += (double)0.2654943068181818133;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.23516941070556641) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5773.260986328125) ) ) {
              sum += (double)0.3402863645833333339;
            } else {
              sum += (double)0.2149963518518518413;
            }
          } else {
            sum += (double)0.1331681562500000027;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1808.40313720703125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.363158002495765686) ) ) {
                sum += (double)0.1672220384615384636;
              } else {
                sum += (double)0.3217561153846154043;
              }
            } else {
              sum += (double)0.07879424999999999624;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.1071717187500000057;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3620100021362304688) ) ) {
                sum += (double)0.01451954310344827706;
              } else {
                sum += (double)0.03621600000000000513;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6643044948577880859) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.093493223190307617) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02909999992698431015) ) ) {
                sum += (double)0.6040138157894737736;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098678819835186005) ) ) {
                  sum += (double)0.4757211911764707146;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004869997501373291) ) ) {
                    sum += (double)0.5465844999999999176;
                  } else {
                    sum += (double)0.4959502708333333731;
                  }
                }
              }
            } else {
              sum += (double)0.3839473928571428551;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6021510064601898193) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3324.51171875) ) ) {
                  sum += (double)0.6259188823529412415;
                } else {
                  sum += (double)0.6747647031249999205;
                }
              } else {
                sum += (double)0.7084187333333332726;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4713000059127807617) ) ) {
                sum += (double)0.6586632968749999151;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6183935105800628662) ) ) {
                  sum += (double)0.5515425760869564487;
                } else {
                  sum += (double)0.6268467738095238051;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.411096692085266113) ) ) {
            sum += (double)0.4150789583333333588;
          } else {
            sum += (double)0.2092245333333333512;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.17864999920129776) ) ) {
          sum += (double)0.5699033518518518138;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7379765212535858154) ) ) {
              sum += (double)0.7326635749999999003;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1275.18548583984375) ) ) {
                sum += (double)0.841570609374999945;
              } else {
                sum += (double)0.8064397941176471019;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.337209224700927734) ) ) {
              sum += (double)0.6822327166666667386;
            } else {
              sum += (double)0.7396351875000000131;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01260000001639127731) ) ) {
            sum += (double)0.04958294565217391536;
          } else {
            sum += (double)0.1314884464285714372;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.90476131439208984) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1386.1256103515625) ) ) {
              sum += (double)0.1860514411764705722;
            } else {
              sum += (double)0.0802817291666666627;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.345073506236076355) ) ) {
              sum += (double)0.3723701599999999501;
            } else {
              sum += (double)0.2437858666666667118;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2147499993443489075) ) ) {
          sum += (double)0.3525244318181817715;
        } else {
          sum += (double)0.5439440735294117646;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
              sum += (double)0.00451172222222222339;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.30172348022460938) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06320000067353248596) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.75468969345092773) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.78333282470703125) ) ) {
                      sum += (double)0.02102899999999999908;
                    } else {
                      sum += (double)0.005884772727272727204;
                    }
                  } else {
                    sum += (double)0.04848824999999998969;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359499990940093994) ) ) {
                    sum += (double)0.1139380156249999859;
                  } else {
                    sum += (double)0.02560302083333333353;
                  }
                }
              } else {
                sum += (double)0.09122853409090908583;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)506.9383087158203125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.79166603088378906) ) ) {
                  sum += (double)0.003566411764705883052;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02319999970495700836) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.008949545454545454817;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.626620560884475708) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
                  sum += (double)0.06963621666666663934;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2299999967217445374) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.09861087799072266) ) ) {
                      sum += (double)0.02906759999999999899;
                    } else {
                      sum += (double)0.00897573404255319271;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87567710876464844) ) ) {
                      sum += (double)0.01818880769230769162;
                    } else {
                      sum += (double)0.04895964999999999345;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                    sum += (double)0.01162335294117647182;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2477499991655349731) ) ) {
                      sum += (double)0.006332194444444444979;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12785.7978515625) ) ) {
                    sum += (double)0.02032958333333333492;
                  } else {
                    sum += (double)0.00976010000000000072;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.09903684000000000098;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
          sum += (double)0.2856876999999999889;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14558.50537109375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33652.2890625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.7627716064453125) ) ) {
                  sum += (double)0.03203603571428571828;
                } else {
                  sum += (double)0.008016624999999999446;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4689999967813491821) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6865999996662139893) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20280.4521484375) ) ) {
                      sum += (double)0.01906862162162162311;
                    } else {
                      sum += (double)0.03998639772727272806;
                    }
                  } else {
                    sum += (double)0.06040760416666666327;
                  }
                } else {
                  sum += (double)0.1051742666666666687;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.42083358764648438) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500077962875366) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
                    sum += (double)0.09187892307692308025;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.01715776063829787049;
                    } else {
                      sum += (double)0.05024482142857142342;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.27564048767089844) ) ) {
                    sum += (double)0.1632107380952380893;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1605625003576278687) ) ) {
                      sum += (double)0.03100908333333332947;
                    } else {
                      sum += (double)0.09865764406779660434;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434435039758682251) ) ) {
                  sum += (double)0.1036994886363636348;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.95054817199707031) ) ) {
                    sum += (double)0.3227690178571429036;
                  } else {
                    sum += (double)0.1650176875000000098;
                  }
                }
              }
            }
          } else {
            sum += (double)0.2514296293103447932;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3338970094919204712) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412979975342750549) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05549999885261058807) ) ) {
                sum += (double)0.3970031666666666847;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13330.00634765625) ) ) {
                  sum += (double)0.3236813928571428689;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.641333580017089844) ) ) {
                    sum += (double)0.254663453703703746;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6035999953746795654) ) ) {
                      sum += (double)0.1805229772727272586;
                    } else {
                      sum += (double)0.1257281071428571484;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03174999915063381195) ) ) {
                  sum += (double)0.4846431171875000277;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2698850631713867188) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5424.633056640625) ) ) {
                      sum += (double)0.3991802678571428342;
                    } else {
                      sum += (double)0.3175196166666666708;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3942669332027435303) ) ) {
                      sum += (double)0.4426812000000000524;
                    } else {
                      sum += (double)0.3818225999999999565;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2841000035405158997) ) ) {
                  sum += (double)0.2711514852941176446;
                } else {
                  sum += (double)0.3804805227272726742;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.27619075775146484) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
                sum += (double)0.3181609456521739543;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2534404918551445007) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6578000187873840332) ) ) {
                    sum += (double)0.0660635000000000111;
                  } else {
                    sum += (double)0.1456594605263157594;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2987629920244216919) ) ) {
                    sum += (double)0.3317830238095238471;
                  } else {
                    sum += (double)0.1975508593749999986;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2965499907732009888) ) ) {
                sum += (double)0.06560259722222221146;
              } else {
                sum += (double)0.1784523333333333239;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.329099997878074646) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17019.94921875) ) ) {
              sum += (double)0.3752714117647059089;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.48809432983398438) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007549999980255961418) ) ) {
                  sum += (double)0.5519448478260869928;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3558439910411834717) ) ) {
                    sum += (double)0.3795009833333333193;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5080545544624328613) ) ) {
                      sum += (double)0.481774963983050919;
                    } else {
                      sum += (double)0.3959091428571427929;
                    }
                  }
                }
              } else {
                sum += (double)0.5626912499999999762;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5484142899513244629) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.072627067565917969) ) ) {
                sum += (double)0.455637916666666698;
              } else {
                sum += (double)0.412935838235294117;
              }
            } else {
              sum += (double)0.3066360138888889475;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.451273500919342041) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.059573173522949219) ) ) {
            sum += (double)0.2891410833333332708;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
              sum += (double)0.1819285961538461283;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.897893905639648438) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                  sum += (double)0.2338994999999999824;
                } else {
                  sum += (double)0.06178333333333334287;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3620100021362304688) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3914000093936920166) ) ) {
                    sum += (double)0.01015540000000000019;
                  } else {
                    sum += (double)0.02516467647058823545;
                  }
                } else {
                  sum += (double)0.05916831250000000042;
                }
              }
            }
          }
        } else {
          sum += (double)0.3289945483870968523;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.122972965240478516) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.134611368179321289) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6197260022163391113) ) ) {
                sum += (double)0.5557744999999999491;
              } else {
                sum += (double)0.6704244772727272483;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.64140927791595459) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01660000067204236984) ) ) {
                  sum += (double)0.6937318958333333896;
                } else {
                  sum += (double)0.74274108928571414;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7576000094413757324) ) ) {
                  sum += (double)0.7089865263157895114;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3440.8551025390625) ) ) {
                    sum += (double)0.6525485156250000474;
                  } else {
                    sum += (double)0.6131300535714284683;
                  }
                }
              }
            }
          } else {
            sum += (double)0.5418832999999998457;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
              sum += (double)0.8857210375000000857;
            } else {
              sum += (double)0.8064164166666666356;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032000124454498291) ) ) {
              sum += (double)0.6932689464285715086;
            } else {
              sum += (double)0.7835326547619048121;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.660247504711151123) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.190721631050109863) ) ) {
            sum += (double)0.4401215833333333993;
          } else {
            sum += (double)0.19313031578947365;
          }
        } else {
          sum += (double)0.5019587105263157989;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5685060024261474609) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242690086364746094) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2594159990549087524) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4116.89501953125) ) ) {
            sum += (double)0.2274814456521739581;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06354999914765357971) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.472222328186035156) ) ) {
                sum += (double)0.09586465909090909066;
              } else {
                sum += (double)0.02274834615384615372;
              }
            } else {
              sum += (double)0.1442581842105263024;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.76098823547363281) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
              sum += (double)0.0382236071428571425;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.099195718765258789) ) ) {
                sum += (double)0.2474891470588234665;
              } else {
                sum += (double)0.1396654705882352798;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3400000035762786865) ) ) {
              sum += (double)0.4063951071428571482;
            } else {
              sum += (double)0.264750267241379289;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972222328186035156) ) ) {
            sum += (double)0.08128114473684211472;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.34999990463256836) ) ) {
                sum += (double)0.02833076388888889491;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                    sum += (double)0.006888375000000002135;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2137999981641769409) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003101321428571428545;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)225.486114501953125) ) ) {
                    sum += (double)0.01466203333333333282;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1202000007033348083) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.298699989914894104) ) ) {
                  sum += (double)0.05780764999999998821;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)183.1728591918945312) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4160.518310546875) ) ) {
                      sum += (double)0.007249517857142857152;
                    } else {
                      sum += (double)0.02698419078947367211;
                    }
                  } else {
                    sum += (double)0.05608581249999999851;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.77305641770362854) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)47.34596061706542969) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.15384626388549805) ) ) {
                      sum += (double)0.03704032692307691887;
                    } else {
                      sum += (double)0.01292841935483870358;
                    }
                  } else {
                    sum += (double)0.04902543749999999784;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)76.75232315063476562) ) ) {
                    sum += (double)0.008813351851851851729;
                  } else {
                    sum += (double)0.00269798000000000043;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01700000045821070671) ) ) {
              sum += (double)0.1317373235294117262;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.58660793304443359) ) ) {
                sum += (double)0.09346126190476190809;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.7028961181640625) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
                      sum += (double)0.01145621153846153664;
                    } else {
                      sum += (double)0.02572848846153845404;
                    }
                  } else {
                    sum += (double)0.04088591999999999921;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1720409989356994629) ) ) {
                      sum += (double)0.04781099999999999933;
                    } else {
                      sum += (double)0.1021995795454545275;
                    }
                  } else {
                    sum += (double)0.01140489473684210692;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.418182373046875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4888.614501953125) ) ) {
                sum += (double)0.1103894605263157913;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
                  sum += (double)0.07698571428571428232;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.211308002471923828) ) ) {
                    sum += (double)0.04067904687499999949;
                  } else {
                    sum += (double)0.01291452500000000135;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4859.7783203125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7105499804019927979) ) ) {
                    sum += (double)0.2647183333333333333;
                  } else {
                    sum += (double)0.122728458333333304;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.92083358764648438) ) ) {
                    sum += (double)0.03508526923076922543;
                  } else {
                    sum += (double)0.09918845238095236327;
                  }
                }
              } else {
                sum += (double)0.3397111363636363124;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4390922486782073975) ) ) {
        sum += (double)0.6086780000000000523;
      } else {
        sum += (double)0.3876876547619048097;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4511609971523284912) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03329999931156635284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.5078201982758621114;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6646000146865844727) ) ) {
                  sum += (double)0.3703293157894737009;
                } else {
                  sum += (double)0.4659176022727272715;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                  sum += (double)0.2732522608695652222;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.01965522766113281) ) ) {
                    sum += (double)0.1335146249999999979;
                  } else {
                    sum += (double)0.2142277434210526077;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.038355827331542969) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.672528743743896484) ) ) {
                    sum += (double)0.3611734891304347883;
                  } else {
                    sum += (double)0.4167048515624999783;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2723935097455978394) ) ) {
                      sum += (double)0.4005810999999999122;
                    } else {
                      sum += (double)0.3422659000000000118;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.742063522338867188) ) ) {
                      sum += (double)0.3093759423076922754;
                    } else {
                      sum += (double)0.1986992250000000348;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.043931007385253906) ) ) {
                sum += (double)0.4571943035714286507;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.3217926025390625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6985000073909759521) ) ) {
                    sum += (double)0.5756895789473684966;
                  } else {
                    sum += (double)0.5092868684210526409;
                  }
                } else {
                  sum += (double)0.5966601470588235312;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5391000211238861084) ) ) {
                sum += (double)0.4630315700000000034;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1537000015377998352) ) ) {
                  sum += (double)0.4520688281249999885;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.71694660186767578) ) ) {
                    sum += (double)0.3534364843749999707;
                  } else {
                    sum += (double)0.4142993281249999771;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.88003635406494141) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.55407285690307617) ) ) {
                sum += (double)0.190837217391304409;
              } else {
                sum += (double)0.338949555555555615;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4367000013589859009) ) ) {
                sum += (double)0.08404504687500000126;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7509500086307525635) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.622750014066696167) ) ) {
                    sum += (double)0.1624534300000000098;
                  } else {
                    sum += (double)0.2848286750000000311;
                  }
                } else {
                  sum += (double)0.09458449999999998803;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21846.76953125) ) ) {
              sum += (double)0.2386703260869565135;
            } else {
              sum += (double)0.3769539886363636461;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6018500030040740967) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05140000022947788239) ) ) {
            sum += (double)0.1533830714285714103;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03745000064373016357) ) ) {
              sum += (double)0.1312255874999999905;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.286492347717285156) ) ) {
                sum += (double)0.05844461764705882745;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.01043510437011719) ) ) {
                  sum += (double)0.03070885526315789149;
                } else {
                  sum += (double)0.01250160526315789722;
                }
              }
            }
          }
        } else {
          sum += (double)0.2071182727272727064;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6446089744567871094) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.14261579513549805) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3556.804443359375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004670023918151855) ) ) {
                  sum += (double)0.5416637187500000783;
                } else {
                  sum += (double)0.458311930000000034;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.09545516967773438) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.368627429008483887) ) ) {
                    sum += (double)0.5522400249999999122;
                  } else {
                    sum += (double)0.4816177307692308118;
                  }
                } else {
                  sum += (double)0.6331701770833334519;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1557.5447998046875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1041111834347248077) ) ) {
                  sum += (double)0.6411968064516130328;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.33376073837280273) ) ) {
                    sum += (double)0.5988213333333332056;
                  } else {
                    sum += (double)0.5421468055555556109;
                  }
                }
              } else {
                sum += (double)0.694766624999999971;
              }
            }
          } else {
            sum += (double)0.3922617500000000201;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06974999979138374329) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8275499939918518066) ) ) {
                sum += (double)0.6954414999999998237;
              } else {
                sum += (double)0.7681131964285713432;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.171955406665802002) ) ) {
                sum += (double)0.5930587666666667923;
              } else {
                sum += (double)0.6966080781250000298;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3112.591552734375) ) ) {
              sum += (double)0.7479340673076921853;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5729678571224212646) ) ) {
                sum += (double)0.8827532368421052711;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07375466078519821167) ) ) {
                  sum += (double)0.7655769772727272215;
                } else {
                  sum += (double)0.8461622500000001157;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.4260041111111110834;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.288537740707397461) ) ) {
              sum += (double)0.1780270865384615542;
            } else {
              sum += (double)0.3833686249999999629;
            }
          }
        } else {
          sum += (double)0.5479165657894737862;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4924194961786270142) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09545469284057617) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
            sum += (double)0.1872050000000000103;
          } else {
            sum += (double)0.06976114166666666505;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6150000095367431641) ) ) {
            sum += (double)0.1000450375000000169;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3371255099773406982) ) ) {
              sum += (double)0.3651319296875000231;
            } else {
              sum += (double)0.2408416874999999846;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4620428085327148438) ) ) {
          sum += (double)0.4755953194444444421;
        } else {
          sum += (double)0.2722506785714285948;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75187969207763672) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.78889083862304688) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999932646751404) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.69642829895019531) ) ) {
                sum += (double)0.008849368421052631814;
              } else {
                sum += (double)0.02056749999999999898;
              }
            } else {
              sum += (double)0.07664097058823526876;
            }
          } else {
            sum += (double)0.1164813461538461159;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                sum += (double)0.004853666666666666719;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504999876022338867) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8115500211715698242) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2079999968409538269) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.0030261562500000002;
                    }
                  } else {
                    sum += (double)0.003732590909090908928;
                  }
                } else {
                  sum += (double)0.005749166666666667182;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.64285755157470703) ) ) {
                sum += (double)0.02513465909090909292;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)75.7365570068359375) ) ) {
                  sum += (double)0.007816022727272727011;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
              sum += (double)0.04380293333333332151;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.57004928588867188) ) ) {
                    sum += (double)0.01923679166666666593;
                  } else {
                    sum += (double)0.006703473684210528236;
                  }
                } else {
                  sum += (double)0.005293323529411766114;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3469499945640563965) ) ) {
                  sum += (double)0.05163141071428570955;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1402499973773956299) ) ) {
                    sum += (double)0.00624412500000000141;
                  } else {
                    sum += (double)0.03059053571428571247;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3534810096025466919) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)128.1795158386230469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4528000056743621826) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1775438487529754639) ) ) {
                  sum += (double)0.1226738157894736725;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6821500062942504883) ) ) {
                      sum += (double)0.02740220052083332594;
                    } else {
                      sum += (double)0.07044836111111112131;
                    }
                  } else {
                    sum += (double)0.08750462500000000254;
                  }
                }
              } else {
                sum += (double)0.1233206470588235348;
              }
            } else {
              sum += (double)0.004080687500000000113;
            }
          } else {
            sum += (double)0.1493136249999999776;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6713410913944244385) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.09047698974609375) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1376999989151954651) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2821723818778991699) ) ) {
                    sum += (double)0.1443593214285714132;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4564999938011169434) ) ) {
                      sum += (double)0.07060188235294118098;
                    } else {
                      sum += (double)0.02721010185185184643;
                    }
                  }
                } else {
                  sum += (double)0.1764577916666666968;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2146153971552848816) ) ) {
                  sum += (double)0.1238920499999999897;
                } else {
                  sum += (double)0.2718632374999999657;
                }
              }
            } else {
              sum += (double)0.2981080322580644815;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.06666755676269531) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.077981114387512207) ) ) {
                sum += (double)0.05916215476190476302;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3564874976873397827) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2044499963521957397) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.009200958333333337028;
                  }
                } else {
                  sum += (double)0.01966893055555555755;
                }
              }
            } else {
              sum += (double)0.1900346071428571371;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3383489996194839478) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0142500000074505806) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4383.736083984375) ) ) {
                sum += (double)0.4826211249999998731;
              } else {
                sum += (double)0.4084751590909090901;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2174580022692680359) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4783000051975250244) ) ) {
                  sum += (double)0.3376572352941177302;
                } else {
                  sum += (double)0.1828462878787879275;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04230000078678131104) ) ) {
                  sum += (double)0.4118094722222221948;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2665499895811080933) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                      sum += (double)0.3596662870370370135;
                    } else {
                      sum += (double)0.2771091118421051824;
                    }
                  } else {
                    sum += (double)0.3965555208333332859;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01654999982565641403) ) ) {
              sum += (double)0.5643691093749999554;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2439.1243896484375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.992016792297363281) ) ) {
                  sum += (double)0.469774968749999966;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3221.441650390625) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1284474581480026245) ) ) {
                      sum += (double)0.3823055500000000495;
                    } else {
                      sum += (double)0.4537127916666665595;
                    }
                  } else {
                    sum += (double)0.3406759821428571589;
                  }
                }
              } else {
                sum += (double)0.5008456750000001012;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3467229902744293213) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02325000055134296417) ) ) {
              sum += (double)0.4015093421052631784;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.12616825103759766) ) ) {
                  sum += (double)0.07087345000000001838;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7564999759197235107) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6707000136375427246) ) ) {
                      sum += (double)0.1486191166666666619;
                    } else {
                      sum += (double)0.2553916874999999642;
                    }
                  } else {
                    sum += (double)0.1369844423076923001;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517852783203125) ) ) {
                  sum += (double)0.3504214761904761444;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2987629920244216919) ) ) {
                    sum += (double)0.2526623478260869304;
                  } else {
                    sum += (double)0.1653425208333333396;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5634999871253967285) ) ) {
              sum += (double)0.2745958942307692441;
            } else {
              sum += (double)0.3739787222222222263;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.02099454402923584) ) ) {
          sum += (double)0.2954170394736841398;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.2214234531249999749;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
              sum += (double)0.1913125666666666835;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3350.552978515625) ) ) {
                  sum += (double)0.2198828611111111053;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3422749936580657959) ) ) {
                    sum += (double)0.01485303571428571619;
                  } else {
                    sum += (double)0.06076164285714285435;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
                  sum += (double)0.07690020312499999677;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3354485034942626953) ) ) {
                    sum += (double)0.01543137500000000238;
                  } else {
                    sum += (double)0.04495465789473683527;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3979768604040145874) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.49117469787597656) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0838222987949848175) ) ) {
                  sum += (double)0.4583349874999999574;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7084999978542327881) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082540541887283325) ) ) {
                      sum += (double)0.4974206470588235507;
                    } else {
                      sum += (double)0.5519234615384615017;
                    }
                  } else {
                    sum += (double)0.5895144642857143014;
                  }
                }
              } else {
                sum += (double)0.6027245789473684168;
              }
            } else {
              sum += (double)0.3767878947368421549;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2413.950927734375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08517190068960189819) ) ) {
                sum += (double)0.6555809166666666243;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5828500092029571533) ) ) {
                  sum += (double)0.519777208333333296;
                } else {
                  sum += (double)0.5811636499999999206;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.18521451950073242) ) ) {
                sum += (double)0.6392262236842105594;
              } else {
                sum += (double)0.6868345625000001897;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7322590053081512451) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2545975744724273682) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.111979126930236816) ) ) {
                sum += (double)0.7651606346153846383;
              } else {
                sum += (double)0.6847556521739130986;
              }
            } else {
              sum += (double)0.6598745499999999486;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
                sum += (double)0.8033167727272726433;
              } else {
                sum += (double)0.7227836250000000407;
              }
            } else {
              sum += (double)0.8728333303571430557;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.174389362335205078) ) ) {
          sum += (double)0.443844347222222213;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4677861562500000292;
          } else {
            sum += (double)0.1593711818181818285;
          }
        }
      }
    }
  }
  return sum;
}
