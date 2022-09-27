#include "prediction.h"
double predict_margin_unit10(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.205263137817382812) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
        sum += (double)0.03576755199222546311;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1187.06390380859375) ) ) {
            sum += (double)0.4187928479335796261;
          } else {
            sum += (double)0.2162453761201992009;
          }
        } else {
          sum += (double)0.5109061925205629073;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165430024266242981) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4560.48388671875) ) ) {
                sum += (double)0.03351081162014347969;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
                  sum += (double)0.01640566153846153771;
                } else {
                  sum += (double)0.004490200000000000614;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1002205014228820801) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8525.933349609375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.883899986743927002) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004623776000000001316;
                    }
                  } else {
                    sum += (double)0.007531514285714286869;
                  }
                } else {
                  sum += (double)0.01027908888888889004;
                }
              } else {
                sum += (double)0.01035005454545454701;
              }
            }
          } else {
            sum += (double)0.04600877613168724567;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04761886596679688) ) ) {
            sum += (double)0.1485432117133913821;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3841080069541931152) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6517250537872314453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8727499842643737793) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1318015009164810181) ) ) {
                    sum += (double)0.07828841488112697755;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
                      sum += (double)0.02030518571428571728;
                    } else {
                      sum += (double)0.04908759752685347422;
                    }
                  }
                } else {
                  sum += (double)0.1070573048809974892;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5463.33447265625) ) ) {
                  sum += (double)0.0134410451612903218;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8909524083137512207) ) ) {
                    sum += (double)0.007919363636363635842;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              }
            } else {
              sum += (double)0.106093321153705511;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.417850002646446228) ) ) {
              sum += (double)0.04102628388104026524;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2632939964532852173) ) ) {
                sum += (double)0.2092977596103158811;
              } else {
                sum += (double)0.3856267137560593916;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.63247871398925781) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2037499994039535522) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3428381085395812988) ) ) {
                      sum += (double)0.1255628050877594937;
                    } else {
                      sum += (double)0.02059409947089947332;
                    }
                  } else {
                    sum += (double)0.1769666038029949207;
                  }
                } else {
                  sum += (double)0.03378241337519623938;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.83758306503295898) ) ) {
                  sum += (double)0.007271925000000000264;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.66190433502197266) ) ) {
                    sum += (double)0.04738987466472095039;
                  } else {
                    sum += (double)0.009991740000000002425;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10604.23583984375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.96060562133789062) ) ) {
                  sum += (double)0.1763125435377335959;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4354500025510787964) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.5874176025390625) ) ) {
                      sum += (double)0.03915106869305848281;
                    } else {
                      sum += (double)0.007206987972919155598;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4462500065565109253) ) ) {
                      sum += (double)0.05056495576677260545;
                    } else {
                      sum += (double)0.1263103453266003207;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.546875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2178044989705085754) ) ) {
                      sum += (double)0.01638910588235294521;
                    } else {
                      sum += (double)0.1420943100160524664;
                    }
                  } else {
                    sum += (double)0.2344631011877784943;
                  }
                } else {
                  sum += (double)0.3032362312079587841;
                }
              }
            }
          }
        } else {
          sum += (double)0.3211823435623319956;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.50047159194946289) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.320549502968788147) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000081211328506) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6140.317138671875) ) ) {
                sum += (double)0.5748655678510679046;
              } else {
                sum += (double)0.5146267316117161261;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.400278329849243164) ) ) {
                    sum += (double)0.2643779892595282122;
                  } else {
                    sum += (double)0.158020277844932;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12994.455078125) ) ) {
                    sum += (double)0.4199251630665167268;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1542499959468841553) ) ) {
                      sum += (double)0.35756264205649263;
                    } else {
                      sum += (double)0.2606479331692799217;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.423593997955322266) ) ) {
                    sum += (double)0.5294626575572762839;
                  } else {
                    sum += (double)0.4422048890798336851;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640522956848144531) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08419999852776527405) ) ) {
                      sum += (double)0.38174017081491185;
                    } else {
                      sum += (double)0.5118110087122097474;
                    }
                  } else {
                    sum += (double)0.2670759367072933488;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08035000041127204895) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78706932067871094) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2407.64208984375) ) ) {
                  sum += (double)0.6015185505101222629;
                } else {
                  sum += (double)0.5374776779221634992;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3697925060987472534) ) ) {
                  sum += (double)0.6091119294297397957;
                } else {
                  sum += (double)0.6634953373599002946;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.932718873023986816) ) ) {
                sum += (double)0.5966144368998628211;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2329260781407356262) ) ) {
                  sum += (double)0.5353011009632717698;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3526979386806488037) ) ) {
                    sum += (double)0.4327635001564409389;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4586979299783706665) ) ) {
                      sum += (double)0.5321804492960390265;
                    } else {
                      sum += (double)0.4875953267029267124;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.21233749389648438) ) ) {
              sum += (double)0.2781452318955114911;
            } else {
              sum += (double)0.4552410716826172932;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2502449974417686462) ) ) {
              sum += (double)0.07173151523824920772;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4323999881744384766) ) ) {
                sum += (double)0.1125651636801808381;
              } else {
                sum += (double)0.2959310254666575601;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            sum += (double)0.3790256062811012128;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4135414958000183105) ) ) {
              sum += (double)0.05278834140714461914;
            } else {
              sum += (double)0.2086458802894432807;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.185986220836639404) ) ) {
            sum += (double)0.1800200907964044084;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11670.6953125) ) ) {
              sum += (double)0.07163568222370804428;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.544762790203094482) ) ) {
                sum += (double)0.007564799999999999996;
              } else {
                sum += (double)0.03410559541520467863;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7607523500919342041) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5251489877700805664) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2582.5341796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3560.098388671875) ) ) {
                    sum += (double)0.5726161288044199216;
                  } else {
                    sum += (double)0.649087675922542906;
                  }
                } else {
                  sum += (double)0.5559159418211840897;
                }
              } else {
                sum += (double)0.662684954701034501;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8764999806880950928) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6597.85986328125) ) ) {
                  sum += (double)0.6100898851419910285;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.427553892135620117) ) ) {
                    sum += (double)0.6420021099715531587;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05105000175535678864) ) ) {
                      sum += (double)0.7238794187629936649;
                    } else {
                      sum += (double)0.692321522144522139;
                    }
                  }
                }
              } else {
                sum += (double)0.7564054000000001166;
              }
            }
          } else {
            sum += (double)0.4710227719914272804;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8446999788284301758) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05954999849200248718) ) ) {
                sum += (double)0.7302950589731767028;
              } else {
                sum += (double)0.7675717054346250512;
              }
            } else {
              sum += (double)0.6741955111976558612;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03739999979734420776) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6066484451293945312) ) ) {
                sum += (double)0.8964901231040562912;
              } else {
                sum += (double)0.8621629020133305676;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.601249992847442627) ) ) {
                sum += (double)0.7646197305946581535;
              } else {
                sum += (double)0.8345105333333332487;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6774930059909820557) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5201273514441111523;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4958.061279296875) ) ) {
              sum += (double)0.4391186943750909344;
            } else {
              sum += (double)0.2250388843381419812;
            }
          }
        } else {
          sum += (double)0.6209988177542312693;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2569645047187805176) ) ) {
            sum += (double)0.09205396569249800487;
          } else {
            sum += (double)0.2188371911845040929;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.48015880584716797) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3355499953031539917) ) ) {
              sum += (double)0.1815911431819057786;
            } else {
              sum += (double)0.2933803241183806643;
            }
          } else {
            sum += (double)0.4975019872670211618;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.4212866496772006419;
        } else {
          sum += (double)0.5835451369264942345;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200039997696876526) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.46404838562011719) ) ) {
                sum += (double)0.006927150000000000842;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03691749833524227142) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6479499936103820801) ) ) {
                    sum += (double)0.004000000000000000951;
                  } else {
                    sum += (double)0.006233569230769231417;
                  }
                }
              }
            } else {
              sum += (double)0.01270015438175270406;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
              sum += (double)0.1055024177841707295;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.79528045654296875) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1074324995279312134) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
                    sum += (double)0.0165520222222222263;
                  } else {
                    sum += (double)0.007637044444444445607;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17278299480676651) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.556650012731552124) ) ) {
                      sum += (double)0.09387877225452632979;
                    } else {
                      sum += (double)0.0410970014472483991;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4016.11865234375) ) ) {
                      sum += (double)0.0291780147465437803;
                    } else {
                      sum += (double)0.01512076521739130763;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1624655053019523621) ) ) {
                    sum += (double)0.00417994482758620757;
                  } else {
                    sum += (double)0.01263789090909091077;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2481500059366226196) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4181500077247619629) ) ) {
                      sum += (double)0.02827433043478260952;
                    } else {
                      sum += (double)0.01034507469879518415;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4527149200439453125) ) ) {
                      sum += (double)0.02064272500000000066;
                    } else {
                      sum += (double)0.03734420132890365479;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2541211694478988647) ) ) {
            sum += (double)0.1739216360228221792;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.379999995231628418) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3769700080156326294) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.92788505554199219) ) ) {
                  sum += (double)0.01460485000000000082;
                } else {
                  sum += (double)0.006988647619047620198;
                }
              } else {
                sum += (double)0.08449737556561086327;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3887.3070068359375) ) ) {
                sum += (double)0.1550305279832888128;
              } else {
                sum += (double)0.05654173314787289129;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01300000026822090149) ) ) {
              sum += (double)0.2869351547944039016;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7236.41796875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3060237020254135132) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1821435019373893738) ) ) {
                      sum += (double)0.01458083214285714295;
                    } else {
                      sum += (double)0.03428009019607843044;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.197749994695186615) ) ) {
                      sum += (double)0.05631769012933136864;
                    } else {
                      sum += (double)0.1170822617179848452;
                    }
                  }
                } else {
                  sum += (double)0.1616259207997394476;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1318000033497810364) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4056.115234375) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                      sum += (double)0.07379161108584851581;
                    } else {
                      sum += (double)0.1684444485375677925;
                    }
                  } else {
                    sum += (double)0.0387624316145393083;
                  }
                } else {
                  sum += (double)0.2636990586789769164;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.59248733520507812) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05595000088214874268) ) ) {
                  sum += (double)0.004923706666666667967;
                } else {
                  sum += (double)0.01383345333333333566;
                }
              } else {
                sum += (double)0.03070905040821384976;
              }
            } else {
              sum += (double)0.05359935039991703398;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.48000001907348633) ) ) {
            sum += (double)0.1593150815055854597;
          } else {
            sum += (double)0.4153962481528059025;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3339300006628036499) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.994304656982421875) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6951999962329864502) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
                sum += (double)0.5985057938015770906;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4867500066757202148) ) ) {
                    sum += (double)0.3915009624528513199;
                  } else {
                    sum += (double)0.2594463451932704223;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4174.710205078125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717050015926361084) ) ) {
                      sum += (double)0.5349705972659434261;
                    } else {
                      sum += (double)0.4966946918085164975;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                      sum += (double)0.331282574420666831;
                    } else {
                      sum += (double)0.5007886650111955662;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2699230015277862549) ) ) {
                sum += (double)0.1962270017711733872;
              } else {
                sum += (double)0.4256915634729478981;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2228147238492965698) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6626000106334686279) ) ) {
                sum += (double)0.4821513893753902602;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.2541961669921875) ) ) {
                  sum += (double)0.1491395532278818326;
                } else {
                  sum += (double)0.3857786936345516948;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.14636802673339844) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5018306374549865723) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5194999873638153076) ) ) {
                    sum += (double)0.2709712749498803253;
                  } else {
                    sum += (double)0.1252785160977071821;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2736999988555908203) ) ) {
                    sum += (double)0.2149408454778417021;
                  } else {
                    sum += (double)0.3510474190726021737;
                  }
                }
              } else {
                sum += (double)0.09639834681496735336;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.46833336353302002) ) ) {
                sum += (double)0.6230493882352940993;
              } else {
                sum += (double)0.6770121333333332103;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3591625094413757324) ) ) {
                sum += (double)0.4741954563548227419;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.793604612350463867) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4200090020895004272) ) ) {
                    sum += (double)0.5677650735484449651;
                  } else {
                    sum += (double)0.6245227664197532391;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1972865089774131775) ) ) {
                    sum += (double)0.4638006143571705153;
                  } else {
                    sum += (double)0.5709123982127374264;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4864999949932098389) ) ) {
              sum += (double)0.3066445133619488672;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6956499814987182617) ) ) {
                sum += (double)0.5414853168659174987;
              } else {
                sum += (double)0.418152817542050359;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.94254004955291748) ) ) {
          sum += (double)0.3297057029069059286;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.2574472105609528216;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2485766162435037174;
              } else {
                sum += (double)0.02549490000000000089;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21020.2197265625) ) ) {
                sum += (double)0.1478568838740763891;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.95878314971923828) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8468.48095703125) ) ) {
                    sum += (double)0.04791214006775364881;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2289500012993812561) ) ) {
                      sum += (double)0.01624029999999999918;
                    } else {
                      sum += (double)0.03862399021337126898;
                    }
                  }
                } else {
                  sum += (double)0.01888417142857143002;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.606911003589630127) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.181159496307373047) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52777767181396484) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1121912486851215363) ) ) {
                  sum += (double)0.5338850397611475396;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.005156040191650391) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.444673538208007812) ) ) {
                      sum += (double)0.5835671799797673698;
                    } else {
                      sum += (double)0.6431003446428570358;
                    }
                  } else {
                    sum += (double)0.5543690446172185871;
                  }
                }
              } else {
                sum += (double)0.6489727497142636636;
              }
            } else {
              sum += (double)0.4699416778218586388;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1220334097743034363) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.93635845184326172) ) ) {
                sum += (double)0.6938532578512396354;
              } else {
                sum += (double)0.7251721846153846851;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1113499999046325684) ) ) {
                sum += (double)0.6001953025212897197;
              } else {
                sum += (double)0.6564914000971817654;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1197637952864170074) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.745067715644836426) ) ) {
                sum += (double)0.8075353065886698989;
              } else {
                sum += (double)0.7687993259391769918;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.81451606750488281) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2087.7589111328125) ) ) {
                  sum += (double)0.7529486683411824588;
                } else {
                  sum += (double)0.7074060895035780838;
                }
              } else {
                sum += (double)0.6798420227440749031;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
              sum += (double)0.7957868356725147363;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.154501438140869141) ) ) {
                sum += (double)0.8311554648722201399;
              } else {
                sum += (double)0.888134630039525641;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.529088929292373833;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2046.6697998046875) ) ) {
              sum += (double)0.3376541331558678416;
            } else {
              sum += (double)0.1667556588279035246;
            }
          }
        } else {
          sum += (double)0.6080891246159838559;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2578680068254470825) ) ) {
          sum += (double)0.08024593854056609465;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3553670048713684082) ) ) {
            sum += (double)0.3501805981839771764;
          } else {
            sum += (double)0.179972841467829936;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776080101728439331) ) ) {
          sum += (double)0.2896747341952060073;
        } else {
          sum += (double)0.5143886930661443202;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1916000023484230042) ) ) {
              sum += (double)0.01368237777777777872;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2189.5511474609375) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7901775240898132324) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8164499998092651367) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1542500033974647522) ) ) {
                      sum += (double)0.004000000000000001818;
                    } else {
                      sum += (double)0.004545925000000000139;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1019255854189395905) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.007621066666666668175;
                    }
                  }
                } else {
                  sum += (double)0.007326314285714286001;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1604.44085693359375) ) ) {
                  sum += (double)0.0142055058823529444;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16483497619628906) ) ) {
              sum += (double)0.04423613980823676295;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02500000037252902985) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  sum += (double)0.06844985131670131007;
                } else {
                  sum += (double)0.01443825945945946022;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)197.5512771606445312) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.73639488220214844) ) ) {
                    sum += (double)0.01941214210526315612;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2635000050067901611) ) ) {
                      sum += (double)0.008106857971014493069;
                    } else {
                      sum += (double)0.01487157333333333567;
                    }
                  }
                } else {
                  sum += (double)0.03933658064516129538;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2449999973177909851) ) ) {
            sum += (double)0.09482513428873168282;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473779991269111633) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7091999948024749756) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)94.56007766723632812) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77880525588989258) ) ) {
                    sum += (double)0.01432732631578947577;
                  } else {
                    sum += (double)0.03561389393939394521;
                  }
                } else {
                  sum += (double)0.006932984615384616203;
                }
              } else {
                sum += (double)0.04238066336206896406;
              }
            } else {
              sum += (double)0.05721340000000000453;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000017136335373) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5671.4775390625) ) ) {
              sum += (double)0.1645140862230670964;
            } else {
              sum += (double)0.4184481766737375152;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.88225412368774414) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6090097427368164062) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.15731000155210495) ) ) {
                  sum += (double)0.04974694817847837708;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7267999947071075439) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6783999800682067871) ) ) {
                      sum += (double)0.1712370335530204457;
                    } else {
                      sum += (double)0.3574928180252813781;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.3236846923828125) ) ) {
                      sum += (double)0.0633942237199007913;
                    } else {
                      sum += (double)0.1862628691155633343;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8602827489376068115) ) ) {
                  sum += (double)0.09557211706482818259;
                } else {
                  sum += (double)0.01552430680412371367;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680215030908584595) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981000006198883057) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4789000004529953003) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.00513982772827148) ) ) {
                      sum += (double)0.09057742640488751495;
                    } else {
                      sum += (double)0.03994051860788776914;
                    }
                  } else {
                    sum += (double)0.1062043471655474414;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19772.0146484375) ) ) {
                    sum += (double)0.0485994663846744529;
                  } else {
                    sum += (double)0.1824941456595690348;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.36923027038574219) ) ) {
                  sum += (double)0.03932911913835956258;
                } else {
                  sum += (double)0.2254158079725565311;
                }
              }
            }
          }
        } else {
          sum += (double)0.3677910865293181897;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3222520053386688232) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5994034813632131975;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.43134498596191406) ) ) {
                    sum += (double)0.348639484274968714;
                  } else {
                    sum += (double)0.4875657763946674161;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6847.738037109375) ) ) {
                    sum += (double)0.2129801575646027845;
                  } else {
                    sum += (double)0.3490086317384601955;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1571500003337860107) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.710590362548828125) ) ) {
                      sum += (double)0.4120580999628086216;
                    } else {
                      sum += (double)0.5325812489510857173;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.261524006724357605) ) ) {
                      sum += (double)0.4955527428861200012;
                    } else {
                      sum += (double)0.1877025382223936056;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9395.96533203125) ) ) {
                    sum += (double)0.4567256381072979377;
                  } else {
                    sum += (double)0.5209158618467244484;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3015000075101852417) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999898951500654) ) ) {
                sum += (double)0.6744369064343784803;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.45860385894775391) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.521153926849365234) ) ) {
                      sum += (double)0.5435466684917767966;
                    } else {
                      sum += (double)0.4873263067808656923;
                    }
                  } else {
                    sum += (double)0.5721458274831772162;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05234999954700469971) ) ) {
                      sum += (double)0.5708999910467231764;
                    } else {
                      sum += (double)0.6543865827956988346;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                      sum += (double)0.601497395934469048;
                    } else {
                      sum += (double)0.5397743960689019849;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.4778078672561889007;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.326752007007598877) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0555000007152557373) ) ) {
              sum += (double)0.3496338166666666525;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2036740034818649292) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.01682615280151367) ) ) {
                  sum += (double)0.07406486312259170923;
                } else {
                  sum += (double)0.1708031193939364145;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4552999883890151978) ) ) {
                  sum += (double)0.142557843761886599;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2674500048160552979) ) ) {
                    sum += (double)0.2218534095161791564;
                  } else {
                    sum += (double)0.4079237152741180816;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.58854484558105469) ) ) {
              sum += (double)0.452595737174024848;
            } else {
              sum += (double)0.2858034619536595766;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
              sum += (double)0.231233717758070334;
            } else {
              sum += (double)0.4242455840989507454;
            }
          } else {
            sum += (double)0.1116338530963390113;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.12922435998916626) ) ) {
            sum += (double)0.1928346134978767001;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5671499967575073242) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08419999852776527405) ) ) {
                sum += (double)0.06641901372700385886;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2916245013475418091) ) ) {
                  sum += (double)0.009751326315789475563;
                } else {
                  sum += (double)0.02283091111111111571;
                }
              }
            } else {
              sum += (double)0.1008729744118424115;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6007195115089416504) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005899999989196658134) ) ) {
            sum += (double)0.7320626690476190745;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5215319991111755371) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                sum += (double)0.5865536369487023283;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04835000075399875641) ) ) {
                  sum += (double)0.6082861210884352721;
                } else {
                  sum += (double)0.675116026666666591;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04289999976754188538) ) ) {
                sum += (double)0.706240878563411778;
              } else {
                sum += (double)0.6457303414960322563;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.958786249160766602) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8623999953269958496) ) ) {
                sum += (double)0.7467513299761944223;
              } else {
                sum += (double)0.8087239594632575912;
              }
            } else {
              sum += (double)0.7148191174324701747;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.8852334996913580056;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2559.8624267578125) ) ) {
                sum += (double)0.8038984914035088858;
              } else {
                sum += (double)0.8460588460606058847;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5496329963207244873) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
            sum += (double)0.5092852239145341242;
          } else {
            sum += (double)0.2848919735258627628;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.081818282604217529) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.03296661376953125) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6214751899242401123) ) ) {
                sum += (double)0.7476259025641025513;
              } else {
                sum += (double)0.6679466338184664176;
              }
            } else {
              sum += (double)0.5996334526854850688;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
              sum += (double)0.5382685097773560745;
            } else {
              sum += (double)0.3518054598512105891;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000190734863281) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165415011346340179) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08939399942755699158) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2914844155311584473) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002399999939370900393) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  sum += (double)0.005355371428571430344;
                }
              } else {
                sum += (double)0.01804407368421052579;
              }
            } else {
              sum += (double)0.02972869999999999679;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4356999993324279785) ) ) {
              sum += (double)0.1011459056890633285;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.41666793823242188) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7649999856948852539) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2397.045166015625) ) ) {
                    sum += (double)0.02767182500000000059;
                  } else {
                    sum += (double)0.005902900000000000855;
                  }
                } else {
                  sum += (double)0.04113787629733520884;
                }
              } else {
                sum += (double)0.09580247666633649739;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1350731104612350464) ) ) {
                  sum += (double)0.005855850000000000985;
                } else {
                  sum += (double)0.004000000000000002685;
                }
              } else {
                sum += (double)0.00654666666666666678;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3609500080347061157) ) ) {
                sum += (double)0.007122475000000000507;
              } else {
                sum += (double)0.01383458823529411935;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914218604564666748) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                sum += (double)0.0457767429362223241;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14341.533203125) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)119.9746971130371094) ) ) {
                      sum += (double)0.01037680000000000199;
                    } else {
                      sum += (double)0.005830787500000001941;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1441320031881332397) ) ) {
                      sum += (double)0.03097296551724138328;
                    } else {
                      sum += (double)0.01246164444444444568;
                    }
                  }
                } else {
                  sum += (double)0.03459827705053852842;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.71428489685058594) ) ) {
                sum += (double)0.01627192000000000222;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1849715039134025574) ) ) {
                  sum += (double)0.004000000000000000951;
                } else {
                  sum += (double)0.00548990000000000155;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.594627141952514648) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2685777097940444946) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1884744986891746521) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746351048350334167) ) ) {
                sum += (double)0.1052807242422918871;
              } else {
                sum += (double)0.02838604057971014574;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2662659883499145508) ) ) {
                sum += (double)0.2543012038183694035;
              } else {
                sum += (double)0.1333469954896783771;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3932999968528747559) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200000017881393433) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2038055062294006348) ) ) {
                  sum += (double)0.02020068398555298697;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                    sum += (double)0.01022452500000000167;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7612.797607421875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1964235007762908936) ) ) {
                    sum += (double)0.01867063999999999876;
                  } else {
                    sum += (double)0.06449605314130313349;
                  }
                } else {
                  sum += (double)0.07848695321203447151;
                }
              }
            } else {
              sum += (double)0.1841642724962706257;
            }
          }
        } else {
          sum += (double)0.2344393446138636206;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.150423884391784668) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7655149400234222412) ) ) {
              sum += (double)0.3398296653191169581;
            } else {
              sum += (double)0.1347295390471344445;
            }
          } else {
            sum += (double)0.4129453898774199105;
          }
        } else {
          sum += (double)0.4951407148047944906;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01245000027120113373) ) ) {
          sum += (double)0.2728293699691652363;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.506712496280670166) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6828892230987548828) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8418.8359375) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4038999974727630615) ) ) {
                    sum += (double)0.1259390489938678193;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2358499988913536072) ) ) {
                      sum += (double)0.02751447478350474429;
                    } else {
                      sum += (double)0.08091650827946376967;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0803999975323677063) ) ) {
                    sum += (double)0.06335295255801683123;
                  } else {
                    sum += (double)0.2804616097371206984;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  sum += (double)0.01274695367003367275;
                } else {
                  sum += (double)0.03166819604772299485;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                sum += (double)0.267433904309608117;
              } else {
                sum += (double)0.1264394197411553566;
              }
            }
          } else {
            sum += (double)0.2644964786259037526;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.012146264314651489) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.6156849679060240055;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2198145017027854919) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5930499732494354248) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.893887519836425781) ) ) {
                    sum += (double)0.2856055268457679541;
                  } else {
                    sum += (double)0.3983461418216418526;
                  }
                } else {
                  sum += (double)0.2436485367197711582;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4338.4638671875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.686781644821166992) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2378000020980834961) ) ) {
                      sum += (double)0.5338324334952528893;
                    } else {
                      sum += (double)0.499908717885350129;
                    }
                  } else {
                    sum += (double)0.4254763926139372709;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.17869186401367188) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2889155000448226929) ) ) {
                      sum += (double)0.4019472837865463166;
                    } else {
                      sum += (double)0.4956443291088117875;
                    }
                  } else {
                    sum += (double)0.3289268119138661906;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2818.5594482421875) ) ) {
                sum += (double)0.6478417644977169099;
              } else {
                sum += (double)0.6064030133333332406;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.14204502105712891) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09335000067949295044) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0358500014990568161) ) ) {
                    sum += (double)0.5327909738199118062;
                  } else {
                    sum += (double)0.6067515223874858643;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6167500019073486328) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2144999951124191284) ) ) {
                      sum += (double)0.459693016892200379;
                    } else {
                      sum += (double)0.5575994051342749724;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6957000195980072021) ) ) {
                      sum += (double)0.5970768156695156481;
                    } else {
                      sum += (double)0.5496958780516780774;
                    }
                  }
                }
              } else {
                sum += (double)0.4801386858889978848;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950670033693313599) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.308899998664855957) ) ) {
              sum += (double)0.2566255415154320985;
            } else {
              sum += (double)0.05388980752542983643;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4051000028848648071) ) ) {
              sum += (double)0.1274734834147043527;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19911.0087890625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.26978302001953125) ) ) {
                  sum += (double)0.4642667858218408883;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.28234100341796875) ) ) {
                    sum += (double)0.3011470431959928362;
                  } else {
                    sum += (double)0.3828930148506420328;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15405.02294921875) ) ) {
                  sum += (double)0.1559219769676816192;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11774.2763671875) ) ) {
                    sum += (double)0.4572487398918208545;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.0402984619140625) ) ) {
                      sum += (double)0.1962757522857299375;
                    } else {
                      sum += (double)0.3334689530480615116;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.841967463493347168) ) ) {
          sum += (double)0.3063495399802746988;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.2262659157923740116;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06085000000894069672) ) ) {
              sum += (double)0.1891344400134140624;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3626739978790283203) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9283.9560546875) ) ) {
                  sum += (double)0.04453017989507933316;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2454500049352645874) ) ) {
                    sum += (double)0.01148304000000000165;
                  } else {
                    sum += (double)0.03181640659396892806;
                  }
                }
              } else {
                sum += (double)0.09443301867177426867;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6643044948577880859) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2135999947786331177) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.286122560501098633) ) ) {
            sum += (double)0.517372798385346111;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2471.7059326171875) ) ) {
              sum += (double)0.4149908268905171393;
            } else {
              sum += (double)0.1980190522012400534;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5205454826354980469) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.89390897750854492) ) ) {
                sum += (double)0.5886968712479290211;
              } else {
                sum += (double)0.6628412053356957934;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1591.704833984375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3868.938232421875) ) ) {
                  sum += (double)0.7279199692307691816;
                } else {
                  sum += (double)0.6963872886395443551;
                }
              } else {
                sum += (double)0.7710853647058821814;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.23066997528076172) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5748748779296875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5461210012435913086) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1441270485520362854) ) ) {
                    sum += (double)0.5641156377170786218;
                  } else {
                    sum += (double)0.6341824069013113352;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3564.5394287109375) ) ) {
                    sum += (double)0.6529200600053008952;
                  } else {
                    sum += (double)0.7027499274725274025;
                  }
                }
              } else {
                sum += (double)0.5409079104818460548;
              }
            } else {
              sum += (double)0.4789413072956871242;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09379999712109565735) ) ) {
              sum += (double)0.7938622409171075534;
            } else {
              sum += (double)0.734379032220595418;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7081622779369354248) ) ) {
                sum += (double)0.9133850856481482428;
              } else {
                sum += (double)0.867141517272727258;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3001.2060546875) ) ) {
                sum += (double)0.7870001267543860202;
              } else {
                sum += (double)0.8442241847429517998;
              }
            }
          }
        } else {
          sum += (double)0.6479281442495935517;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
        sum += (double)0.1348120027550586963;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
          sum += (double)0.5595098469622878934;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2557999938726425171) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1626.0377197265625) ) ) {
              sum += (double)0.3041066752998154432;
            } else {
              sum += (double)0.107281171987975793;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770173013210296631) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2947739958763122559) ) ) {
                sum += (double)0.3098064595044457969;
              } else {
                sum += (double)0.4247130668873408399;
              }
            } else {
              sum += (double)0.5295447609378475251;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8349999785423278809) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.5777592658996582) ) ) {
                    sum += (double)0.007537200000000001711;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196600005030632019) ) ) {
                      sum += (double)0.00430543401360544524;
                    } else {
                      sum += (double)0.006334876923076923627;
                    }
                  }
                } else {
                  sum += (double)0.0106668631578947376;
                }
              } else {
                sum += (double)0.01680665969498910603;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61250019073486328) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1525.62103271484375) ) ) {
                  sum += (double)0.09718078099703518491;
                } else {
                  sum += (double)0.007582940000000001554;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.144403502345085144) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)291.6507415771484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.65714263916015625) ) ) {
                      sum += (double)0.0403644727941176451;
                    } else {
                      sum += (double)0.008135487500000001745;
                    }
                  } else {
                    sum += (double)0.05542546666666667288;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5395244061946868896) ) ) {
                    sum += (double)0.01695520000000000013;
                  } else {
                    sum += (double)0.004795394285714286997;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1457414552569389343) ) ) {
              sum += (double)0.1162314218044736974;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2280279994010925293) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4248500019311904907) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001499999954830855131) ) ) {
                    sum += (double)0.07759633160276256658;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296499907970428467) ) ) {
                      sum += (double)0.02079464231816596786;
                    } else {
                      sum += (double)0.06380540739281358176;
                    }
                  }
                } else {
                  sum += (double)0.1022748955164351214;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5849999785423278809) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.63636398315429688) ) ) {
                    sum += (double)0.08170230708987404056;
                  } else {
                    sum += (double)0.1957694862733757313;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2850880026817321777) ) ) {
                    sum += (double)0.05210540802776624653;
                  } else {
                    sum += (double)0.02883055290423861688;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01654999982565641403) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44740867614746094) ) ) {
              sum += (double)0.1936546728735640266;
            } else {
              sum += (double)0.3876465691471572272;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7012635469436645508) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.30624771118164062) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.77941131591796875) ) ) {
                      sum += (double)0.03412504486885663962;
                    } else {
                      sum += (double)0.09164259617543316083;
                    }
                  } else {
                    sum += (double)0.0217012721509818457;
                  }
                } else {
                  sum += (double)0.1289888943328650062;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1318000033497810364) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                    sum += (double)0.05576721939130210165;
                  } else {
                    sum += (double)0.1297546810622514923;
                  }
                } else {
                  sum += (double)0.3021834383510488276;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3424610048532485962) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                  sum += (double)0.03117338885017421207;
                } else {
                  sum += (double)0.01487416632302405832;
                }
              } else {
                sum += (double)0.06175303021727263086;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1247.434326171875) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.59187984466552734) ) ) {
            sum += (double)0.4220104222260150362;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.117552101612091064) ) ) {
              sum += (double)0.1887207046965396762;
            } else {
              sum += (double)0.3248009441366451755;
            }
          }
        } else {
          sum += (double)0.1210159186868687009;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05289999954402446747) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.6085654251343354249;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5307999849319458008) ) ) {
                  sum += (double)0.4199315115150681899;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7360500097274780273) ) ) {
                    sum += (double)0.5089156616858733218;
                  } else {
                    sum += (double)0.5691975447230176455;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6026500165462493896) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.08915424346923828) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.452449992299079895) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5938941836357116699) ) ) {
                      sum += (double)0.2820867375861190185;
                    } else {
                      sum += (double)0.4893759259292991826;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.92672419548034668) ) ) {
                      sum += (double)0.5284724464699012136;
                    } else {
                      sum += (double)0.4784034685413557919;
                    }
                  }
                } else {
                  sum += (double)0.3316327310075736223;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3371517062187194824) ) ) {
                  sum += (double)0.2373387895768873379;
                } else {
                  sum += (double)0.4209933539666611546;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05520000122487545013) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
                sum += (double)0.6670547888888889165;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909982204437255859) ) ) {
                  sum += (double)0.5833398095150219564;
                } else {
                  sum += (double)0.6186084736986301458;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                sum += (double)0.5987523770531401057;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4526.05517578125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3285000026226043701) ) ) {
                    sum += (double)0.5664215833154667701;
                  } else {
                    sum += (double)0.4988160857217102118;
                  }
                } else {
                  sum += (double)0.4534747706005995971;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3711020052433013916) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05024999938905239105) ) ) {
                sum += (double)0.5084482675005732588;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2683185040950775146) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6698499917984008789) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19272.123046875) ) ) {
                      sum += (double)0.2828503457704135693;
                    } else {
                      sum += (double)0.09343232937784917702;
                    }
                  } else {
                    sum += (double)0.2727880168330141242;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13489.82373046875) ) ) {
                    sum += (double)0.4318358995559076763;
                  } else {
                    sum += (double)0.2797494313526953102;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2241999953985214233) ) ) {
                sum += (double)0.08643446286127692835;
              } else {
                sum += (double)0.226681792374647112;
              }
            }
          } else {
            sum += (double)0.5360217141899558113;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.3231135792381560345;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.2037829818779129387;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3626405000686645508) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21020.2197265625) ) ) {
                sum += (double)0.1001291682897445384;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4837999939918518066) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2945.02880859375) ) ) {
                      sum += (double)0.03544412954324586973;
                    } else {
                      sum += (double)0.01736447272727273047;
                    }
                  } else {
                    sum += (double)0.007279466666666666377;
                  }
                } else {
                  sum += (double)0.06645502074589153263;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.496999263763427734) ) ) {
                sum += (double)0.1639368689825350112;
              } else {
                sum += (double)0.07227893191584937316;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.22896480560302734) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5120110213756561279) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.141082048416137695) ) ) {
                  sum += (double)0.6202326115641482174;
                } else {
                  sum += (double)0.5508728850835039603;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3919.3726806640625) ) ) {
                  sum += (double)0.6192481187924477881;
                } else {
                  sum += (double)0.6844785156462586118;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08850000053644180298) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
                  sum += (double)0.7054217582855581981;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6097654998302459717) ) ) {
                    sum += (double)0.7576604971399175659;
                  } else {
                    sum += (double)0.7171366373833848451;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6359.28515625) ) ) {
                  sum += (double)0.6155572743076177522;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3459.4644775390625) ) ) {
                    sum += (double)0.6570761885447885531;
                  } else {
                    sum += (double)0.6977084105263158254;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4207654016994999968;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7036164999008178711) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                sum += (double)0.73445770884353756;
              } else {
                sum += (double)0.8115752558139534001;
              }
            } else {
              sum += (double)0.7160073183967243793;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.122565031051635742) ) ) {
                sum += (double)0.9022372000000001835;
              } else {
                sum += (double)0.8372725864550264463;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8253994882106781006) ) ) {
                sum += (double)0.7769295194577352515;
              } else {
                sum += (double)0.8420749232409380225;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08994999900460243225) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04079999960958957672) ) ) {
            sum += (double)0.411312545981319444;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1839.185791015625) ) ) {
              sum += (double)0.6111239517405293586;
            } else {
              sum += (double)0.4949222681801666579;
            }
          }
        } else {
          sum += (double)0.2865222521579223192;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.1485157858819453336;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9004999995231628418) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6780820488929748535) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2311.2880859375) ) ) {
                  sum += (double)0.04009575691806836067;
                } else {
                  sum += (double)0.1222425133200517322;
                }
              } else {
                sum += (double)0.0155387914285714298;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0718655027449131012) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.5777592658996582) ) ) {
                    sum += (double)0.008849843478260869742;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1414999961853027344) ) ) {
                      sum += (double)0.004149825954198475657;
                    } else {
                      sum += (double)0.00569012631578947551;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                    sum += (double)0.02540609610983982081;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3711515516042709351) ) ) {
                      sum += (double)0.01827054285714286089;
                    } else {
                      sum += (double)0.005355390909090911727;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2747970074415206909) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                    sum += (double)0.05291830294246815253;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14341.533203125) ) ) {
                      sum += (double)0.01192404358974359473;
                    } else {
                      sum += (double)0.02689686910370290077;
                    }
                  }
                } else {
                  sum += (double)0.08346160370194700973;
                }
              }
            }
          } else {
            sum += (double)0.1051475831176027498;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.10528087615966797) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2696.92529296875) ) ) {
              sum += (double)0.2121630315527396893;
            } else {
              sum += (double)0.08627125898465770604;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02209999971091747284) ) ) {
              sum += (double)0.3939588985866802062;
            } else {
              sum += (double)0.2511163317252543825;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14569.18603515625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.30853939056396484) ) ) {
              sum += (double)0.1281385700420419604;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5885865390300750732) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3559329509735107422) ) ) {
                    sum += (double)0.03470643005661348118;
                  } else {
                    sum += (double)0.07506547355277660982;
                  }
                } else {
                  sum += (double)0.1032630657348737879;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24046.02734375) ) ) {
                  sum += (double)0.0202926713997803633;
                } else {
                  sum += (double)0.04321061926604528175;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.42083358764648438) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005649999948218464851) ) ) {
                sum += (double)0.2418144118223653771;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2814500033855438232) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2149680033326148987) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.805000007152557373) ) ) {
                      sum += (double)0.02309993515613700116;
                    } else {
                      sum += (double)0.06024856501658101132;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.332179337739944458) ) ) {
                      sum += (double)0.1197036071947147479;
                    } else {
                      sum += (double)0.05289620903711020339;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.175693869590759277) ) ) {
                    sum += (double)0.2166368938336374617;
                  } else {
                    sum += (double)0.02340102500000000238;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315874993801116943) ) ) {
                sum += (double)0.1330555678102478545;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.722350001335144043) ) ) {
                  sum += (double)0.4144703891580110988;
                } else {
                  sum += (double)0.2344111710969411511;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6349999904632568359) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.32325001060962677) ) ) {
          sum += (double)0.2031172266835866991;
        } else {
          sum += (double)0.09917381335761303596;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-800.14727783203125) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.61940467357635498) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1757500022649765015) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.84743595123291016) ) ) {
                sum += (double)0.4527824738442199348;
              } else {
                sum += (double)0.269163346098022449;
              }
            } else {
              sum += (double)0.5673166845797501523;
            }
          } else {
            sum += (double)0.2732710952791154724;
          }
        } else {
          sum += (double)0.2073925937234152861;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3735890090465545654) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9987174868583679199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09288978576660156) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0142500000074505806) ) ) {
              sum += (double)0.5310763634978779013;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1745999976992607117) ) ) {
                  sum += (double)0.2641373101544539082;
                } else {
                  sum += (double)0.4016776191838006271;
                }
              } else {
                sum += (double)0.1900505878339727728;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2543951421976089478) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000207126140594) ) ) {
                  sum += (double)0.6297585972764490059;
                } else {
                  sum += (double)0.5530561205229245214;
                }
              } else {
                sum += (double)0.50339353553898325;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4290.341552734375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3223375082015991211) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.2936859130859375) ) ) {
                    sum += (double)0.4933886868424645078;
                  } else {
                    sum += (double)0.4408414738844489977;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.504083633422851562) ) ) {
                    sum += (double)0.5407659915508071791;
                  } else {
                    sum += (double)0.4974537276527905005;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.15000009536743164) ) ) {
                  sum += (double)0.4909526879287923196;
                } else {
                  sum += (double)0.2572089261057705634;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23770.072265625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.27436685562133789) ) ) {
                sum += (double)0.4753494535423017919;
              } else {
                sum += (double)0.3336049840344596507;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3122999966144561768) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6619499921798706055) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1752545014023780823) ) ) {
                    sum += (double)0.4419690046778361192;
                  } else {
                    sum += (double)0.3273208160285862589;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.19178009033203125) ) ) {
                    sum += (double)0.1316694775157029318;
                  } else {
                    sum += (double)0.3843329849126523312;
                  }
                }
              } else {
                sum += (double)0.1100006986689801708;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2241999953985214233) ) ) {
              sum += (double)0.05114044142709715801;
            } else {
              sum += (double)0.2015993673432369404;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29298.3828125) ) ) {
          sum += (double)0.2152785108077639731;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.506739377975463867) ) ) {
            sum += (double)0.1233035472805170812;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.725440025329589844) ) ) {
              sum += (double)0.02788211828540423584;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2944490015506744385) ) ) {
                sum += (double)0.01120663529411764815;
              } else {
                sum += (double)0.02199835416666667126;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04704713821411133) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04416179656982422) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5342000126838684082) ) ) {
                    sum += (double)0.5340437208769831523;
                  } else {
                    sum += (double)0.5833219156985870457;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.825117349624633789) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.738284707069396973) ) ) {
                      sum += (double)0.6560483374149660429;
                    } else {
                      sum += (double)0.6130102156049516138;
                    }
                  } else {
                    sum += (double)0.6951359409523808486;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7373000085353851318) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.1729736328125) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.08014154434204102) ) ) {
                      sum += (double)0.5494616591667339511;
                    } else {
                      sum += (double)0.6114562910242815619;
                    }
                  } else {
                    sum += (double)0.6328321628959274747;
                  }
                } else {
                  sum += (double)0.4997791108247648939;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3562.16748046875) ) ) {
                sum += (double)0.6520139124049676438;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0864193253219127655) ) ) {
                  sum += (double)0.7295059777462122863;
                } else {
                  sum += (double)0.7033886143772892785;
                }
              }
            }
          } else {
            sum += (double)0.3898676704840298712;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4370.133056640625) ) ) {
              sum += (double)0.7096562613261359065;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8262999951839447021) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1814296990633010864) ) ) {
                  sum += (double)0.7406801475552658998;
                } else {
                  sum += (double)0.7825863894736841964;
                }
              } else {
                sum += (double)0.8066878178428227297;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1788.03802490234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07745000347495079041) ) ) {
                sum += (double)0.8533558664021163587;
              } else {
                sum += (double)0.8173197466666667355;
              }
            } else {
              sum += (double)0.8775308589849107888;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.199175834655761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5981679856777191162) ) ) {
            sum += (double)0.4976159666554105798;
          } else {
            sum += (double)0.5604261697500685369;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.12062931060791016) ) ) {
              sum += (double)0.5218640611281438746;
            } else {
              sum += (double)0.3924113985106389424;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2502499967813491821) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1058499962091445923) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.697433412075042725) ) ) {
                  sum += (double)0.3688487249081000563;
                } else {
                  sum += (double)0.1345197610288511314;
                }
              } else {
                sum += (double)0.06420087932754182936;
              }
            } else {
              sum += (double)0.3967770428027390106;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          sum += (double)0.053689283866265404;
        } else {
          sum += (double)0.2005542776710746711;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-766.58837890625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473339855670928955) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3485690057277679443) ) ) {
              sum += (double)0.4470802586611867246;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4337590038776397705) ) ) {
                sum += (double)0.1857780844865081216;
              } else {
                sum += (double)0.3654541768008536806;
              }
            }
          } else {
            sum += (double)0.5759183635338281926;
          }
        } else {
          sum += (double)0.1988794645671718986;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2500165030360221863) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1457.7391357421875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.65882349014282227) ) ) {
                sum += (double)0.02255696918671248538;
              } else {
                sum += (double)0.1062752025421396657;
              }
            } else {
              sum += (double)0.0171421999999999998;
            }
          } else {
            sum += (double)0.1046430406647116118;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.265384674072265625) ) ) {
            sum += (double)0.06697536058686059945;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427690014243125916) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.27777862548828125) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.004000000000000001818;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.27000045776367188) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7267.355712890625) ) ) {
                      sum += (double)0.01928891296296296465;
                    } else {
                      sum += (double)0.01018280701754386078;
                    }
                  } else {
                    sum += (double)0.02356717485714286339;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004733721739130435438;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13330.40966796875) ) ) {
                      sum += (double)0.009584426666666668107;
                    } else {
                      sum += (double)0.004321428571428572417;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-75553.427734375) ) ) {
                    sum += (double)0.004868950000000000361;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1063919998705387115) ) ) {
                      sum += (double)0.01678107999999999683;
                    } else {
                      sum += (double)0.007272564705882353896;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.20454549789428711) ) ) {
                sum += (double)0.07499049494715559483;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2650000005960464478) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1735465005040168762) ) ) {
                    sum += (double)0.02138566153846153603;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4084.594482421875) ) ) {
                      sum += (double)0.009122530363543268628;
                    } else {
                      sum += (double)0.004371184000000001048;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647350013256072998) ) ) {
                    sum += (double)0.01979802857142857336;
                  } else {
                    sum += (double)0.04814364761904761647;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
            sum += (double)0.23775475586926198;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07825149968266487122) ) ) {
              sum += (double)0.2203031623099898084;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6862999796867370605) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2284979969263076782) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4016499966382980347) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.828125) ) ) {
                      sum += (double)0.05699134620996254563;
                    } else {
                      sum += (double)0.02350282027011921238;
                    }
                  } else {
                    sum += (double)0.1035601574640394734;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                    sum += (double)0.2102001173069179552;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5590769052505493164) ) ) {
                      sum += (double)0.1186102268785350911;
                    } else {
                      sum += (double)0.02567083434363407607;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2887104898691177368) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05790000036358833313) ) ) {
                    sum += (double)0.1443510123670777023;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9200000166893005371) ) ) {
                      sum += (double)0.03693948015607580876;
                    } else {
                      sum += (double)0.08818797545891128575;
                    }
                  }
                } else {
                  sum += (double)0.2546037645821671025;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2176.643310546875) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5058.96240234375) ) ) {
              sum += (double)0.2361747179546322128;
            } else {
              sum += (double)0.3822397387742864638;
            }
          } else {
            sum += (double)0.06960690483870969614;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.2788395881652832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0698000006377696991) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.948241949081420898) ) ) {
                sum += (double)0.4202187860324720914;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01295000035315752029) ) ) {
                  sum += (double)0.5966934179337232136;
                } else {
                  sum += (double)0.5079202731688446937;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.78874731063842773) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1653999984264373779) ) ) {
                  sum += (double)0.2866560108996867862;
                } else {
                  sum += (double)0.429892957062004033;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2136215046048164368) ) ) {
                  sum += (double)0.196750199119297059;
                } else {
                  sum += (double)0.2793284345449422723;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368515074253082275) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.776604175567626953) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4863999933004379272) ) ) {
                      sum += (double)0.4950815252862327265;
                    } else {
                      sum += (double)0.5436489155380374028;
                    }
                  } else {
                    sum += (double)0.4504859771722494188;
                  }
                } else {
                  sum += (double)0.5652896499438868627;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.28393650054931641) ) ) {
                  sum += (double)0.3796000989759831246;
                } else {
                  sum += (double)0.505942366805675392;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.602325439453125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4386169910430908203) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2188033908605575562) ) ) {
                    sum += (double)0.6149956260683761;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.125052690505981445) ) ) {
                      sum += (double)0.5901496881208968537;
                    } else {
                      sum += (double)0.5328261753957500568;
                    }
                  }
                } else {
                  sum += (double)0.640495942386831274;
                }
              } else {
                sum += (double)0.5188097623208623999;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.326752007007598877) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04179999977350234985) ) ) {
              sum += (double)0.3833778697771186295;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6753500103950500488) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.13528156280517578) ) ) {
                    sum += (double)0.1012465482653815557;
                  } else {
                    sum += (double)0.1585825910764636359;
                  }
                } else {
                  sum += (double)0.2630266145210327089;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2776360064744949341) ) ) {
                  sum += (double)0.4100259693143853967;
                } else {
                  sum += (double)0.2543725421080404447;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64350080490112305) ) ) {
              sum += (double)0.5087010456661110736;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3746999949216842651) ) ) {
                sum += (double)0.2551562373423015839;
              } else {
                sum += (double)0.4257450732934417448;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3811115026473999023) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32560.2060546875) ) ) {
            sum += (double)0.2224036896768458449;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4706.062744140625) ) ) {
                sum += (double)0.2182384635097525394;
              } else {
                sum += (double)0.07040370135262681572;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9173.3916015625) ) ) {
                sum += (double)0.0636514611942388675;
              } else {
                sum += (double)0.02484611729323308107;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4092330038547515869) ) ) {
            sum += (double)0.3968566780671387573;
          } else {
            sum += (double)0.2021138893254663949;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60194826126098633) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.486700013279914856) ) ) {
                sum += (double)0.4509214545635937821;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3031.41162109375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004859864711761475) ) ) {
                    sum += (double)0.6269502153686695722;
                  } else {
                    sum += (double)0.5674994161915905;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.14968633651733398) ) ) {
                    sum += (double)0.6123724300751880456;
                  } else {
                    sum += (double)0.7023653372549019114;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02735000010579824448) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5997329950332641602) ) ) {
                  sum += (double)0.7049041484088716114;
                } else {
                  sum += (double)0.7626024607650273568;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
                  sum += (double)0.6374406566282164732;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
                    sum += (double)0.7292532549783549145;
                  } else {
                    sum += (double)0.6584804550958300862;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4118273602808751876;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7741104960441589355) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04989999905228614807) ) ) {
              sum += (double)0.8285252453102454062;
            } else {
              sum += (double)0.7260365565488957618;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              sum += (double)0.908983671703703644;
            } else {
              sum += (double)0.8340971200000000252;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
          sum += (double)0.5288614428273887835;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.4143423052852415189;
          } else {
            sum += (double)0.1921122623211963254;
          }
        }
      }
    }
  }
  return sum;
}
