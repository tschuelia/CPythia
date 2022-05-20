#include "header.h"
double predict_margin_unit12(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.986842155456542969) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2696644961833953857) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2635.854248046875) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1340090036392211914) ) ) {
            sum += (double)0.1090165238095237993;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03879999928176403046) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01065000006929039955) ) ) {
                sum += (double)0.3050924833333333308;
              } else {
                sum += (double)0.4040988666666667228;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.212793499231338501) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.10489845275878906) ) ) {
                  sum += (double)0.3568106956521738815;
                } else {
                  sum += (double)0.1921749583333333955;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.163896083831787109) ) ) {
                  sum += (double)0.2353049875000000346;
                } else {
                  sum += (double)0.1258079250000000149;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6816000044345855713) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6311034560203552246) ) ) {
              sum += (double)0.1859309899999999904;
            } else {
              sum += (double)0.0986942647058823147;
            }
          } else {
            sum += (double)0.0341050785714285612;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9576524496078491211) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.373944520950317383) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3589.443603515625) ) ) {
                  sum += (double)0.3918543000000000442;
                } else {
                  sum += (double)0.3102522307692308079;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2296859323978424072) ) ) {
                  sum += (double)0.4355865312499999642;
                } else {
                  sum += (double)0.3808468706896551148;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3538.6055908203125) ) ) {
                sum += (double)0.3641814519230769376;
              } else {
                sum += (double)0.1712630972222222714;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1158.0059814453125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8629499971866607666) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3484726846218109131) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08850000053644180298) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.056711912155151367) ) ) {
                      sum += (double)0.4837552812499998911;
                    } else {
                      sum += (double)0.5673072727272726601;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3934.425537109375) ) ) {
                      sum += (double)0.4286060131578947607;
                    } else {
                      sum += (double)0.5119478124999998769;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4802000075578689575) ) ) {
                    sum += (double)0.4399416956521739475;
                  } else {
                    sum += (double)0.3864026521739130637;
                  }
                }
              } else {
                sum += (double)0.3457224605263158335;
              }
            } else {
              sum += (double)0.3109652321428572064;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.2671410543478260902;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.978606700897216797) ) ) {
              sum += (double)0.1783304791666666389;
            } else {
              sum += (double)0.04706307499999999588;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.9052577018737793) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4420.158935546875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
              sum += (double)0.339062112500000068;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1368450000882148743) ) ) {
                sum += (double)0.04493332758620689066;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.55199480056762695) ) ) {
                  sum += (double)0.2491263240740740625;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6713500022888183594) ) ) {
                    sum += (double)0.1011544479166666677;
                  } else {
                    sum += (double)0.2121322058823529588;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1244999952614307404) ) ) {
              sum += (double)0.007882750000000002602;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1692200005054473877) ) ) {
                sum += (double)0.1000228124999999885;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.3403782844543457) ) ) {
                  sum += (double)0.02273429411764706087;
                } else {
                  sum += (double)0.06048696666666664862;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
              sum += (double)0.03770355263157894321;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02944599930197000504) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.021390499547123909) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  sum += (double)0.002767346153846154521;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)97.11563491821289062) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05950300022959709167) ) ) {
                    sum += (double)0.01370819444444444646;
                  } else {
                    sum += (double)0.00537247619047618967;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5860830247402191162) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23092.998046875) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.002760416666666666227;
                    }
                  } else {
                    sum += (double)0.006223071428571429371;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7275.24462890625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6583000123500823975) ) ) {
                    sum += (double)0.08743400000000001171;
                  } else {
                    sum += (double)0.2406180535714285973;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5518999993801116943) ) ) {
                      sum += (double)0.1571446527777777546;
                    } else {
                      sum += (double)0.06815900925925924558;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4880316108465194702) ) ) {
                      sum += (double)0.02760602822580645807;
                    } else {
                      sum += (double)0.08026657692307691272;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4743999987840652466) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.146192498505115509) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)152.9054489135742188) ) ) {
                      sum += (double)0.01529437500000000068;
                    } else {
                      sum += (double)0.004262555555555555889;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-116296.8984375) ) ) {
                      sum += (double)0.1363451428571428592;
                    } else {
                      sum += (double)0.03631177118644066115;
                    }
                  }
                } else {
                  sum += (double)0.1055397656250000038;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.96610832214355469) ) ) {
                sum += (double)0.04324776666666665936;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.216250002384185791) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3382.8251953125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5323.556396484375) ) ) {
                      sum += (double)0.01055229411764705902;
                    } else {
                      sum += (double)0.003154500000000001053;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6544665694236755371) ) ) {
                      sum += (double)0.03004519117647058354;
                    } else {
                      sum += (double)0.00303640000000000073;
                    }
                  }
                } else {
                  sum += (double)0.02200521874999999961;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7375432848930358887) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7792.081787109375) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.19331455230712891) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.39613533020019531) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3340245038270950317) ) ) {
                  sum += (double)0.3474131666666667728;
                } else {
                  sum += (double)0.4904672976190476152;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17850.2783203125) ) ) {
                  sum += (double)0.3719792624999999631;
                } else {
                  sum += (double)0.2213325238095238123;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5579499900341033936) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4219999909400939941) ) ) {
                  sum += (double)0.1350558382352941289;
                } else {
                  sum += (double)0.0555375468749999962;
                }
              } else {
                sum += (double)0.2284036086956522105;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05254999920725822449) ) ) {
              sum += (double)0.05491621323529411597;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3237830102443695068) ) ) {
                sum += (double)0.1718186931818181662;
              } else {
                sum += (double)0.2738271851851851735;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27254.8544921875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.34152603149414062) ) ) {
              sum += (double)0.221754571428571412;
            } else {
              sum += (double)0.06154402631578947264;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4252884984016418457) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.169858276844024658) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9238427877426147461) ) ) {
                  sum += (double)0.03962116666666666565;
                } else {
                  sum += (double)0.1282276124999999767;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5328.383056640625) ) ) {
                  sum += (double)0.02585532500000000192;
                } else {
                  sum += (double)0.008278890243902440466;
                }
              }
            } else {
              sum += (double)0.1364228541666666628;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4716695547103881836) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.21539163589477539) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4784124940633773804) ) ) {
              sum += (double)0.4126129861111111352;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3022.2926025390625) ) ) {
                sum += (double)0.5140223888888888482;
              } else {
                sum += (double)0.5597221399999999791;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3567.67431640625) ) ) {
                sum += (double)0.5162563068181819093;
              } else {
                sum += (double)0.6082933571428570385;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02139999996870756149) ) ) {
                sum += (double)0.6890631500000000687;
              } else {
                sum += (double)0.6159551250000000477;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5350.69482421875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33012580871582031) ) ) {
              sum += (double)0.5515401750000000769;
            } else {
              sum += (double)0.3658741363636363042;
            }
          } else {
            sum += (double)0.3555527763157895205;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7396534979343414307) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6768469810485839844) ) ) {
              sum += (double)0.7492945937499999598;
            } else {
              sum += (double)0.7087860499999999453;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.880581640624999995;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.639606714248657227) ) ) {
                sum += (double)0.788908541666666685;
              } else {
                sum += (double)0.8455450666666667336;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7615000009536743164) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.858775615692138672) ) ) {
              sum += (double)0.68889116666666661;
            } else {
              sum += (double)0.7500899500000000053;
            }
          } else {
            sum += (double)0.5797562666666667974;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.15000009536743164) ) ) {
          sum += (double)0.3629758928571428789;
        } else {
          sum += (double)0.195594913461538511;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1119999997317790985) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04004999995231628418) ) ) {
            sum += (double)0.414479037500000036;
          } else {
            sum += (double)0.1808990357142856997;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6021040081977844238) ) ) {
              sum += (double)0.5651054687500000062;
            } else {
              sum += (double)0.6612448846153846649;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3878999948501586914) ) ) {
              sum += (double)0.3178790952380952106;
            } else {
              sum += (double)0.5336795138888890122;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450540497899055481) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.290740966796875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4247.4609375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003999999957159161568) ) ) {
            sum += (double)0.4009518125000000044;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2123499959707260132) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174330495297908783) ) ) {
                sum += (double)0.1631320781249999963;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.711161375045776367) ) ) {
                  sum += (double)0.3363790131578947018;
                } else {
                  sum += (double)0.2356474615384615556;
                }
              }
            } else {
              sum += (double)0.1222067282608695904;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1686755046248435974) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3033.205810546875) ) ) {
              sum += (double)0.07546707352941176006;
            } else {
              sum += (double)0.01948986904761905101;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1725.7713623046875) ) ) {
              sum += (double)0.228588681034482738;
            } else {
              sum += (double)0.08856804687499998663;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9576524496078491211) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2082.9490966796875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.390132665634155273) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1483872085809707642) ) ) {
                  sum += (double)0.4545380760869564551;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3064.7276611328125) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4258.69384765625) ) ) {
                      sum += (double)0.3785483352272727142;
                    } else {
                      sum += (double)0.323469196428571415;
                    }
                  } else {
                    sum += (double)0.4228384800000000165;
                  }
                }
              } else {
                sum += (double)0.2842031309523809779;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.887783050537109375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8507499992847442627) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4468123912811279297) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
                      sum += (double)0.5472025441176469052;
                    } else {
                      sum += (double)0.456995925438596351;
                    }
                  } else {
                    sum += (double)0.4067511704545453965;
                  }
                } else {
                  sum += (double)0.3822023749999999831;
                }
              } else {
                sum += (double)0.5685769843750001495;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.459302425384521484) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7245500087738037109) ) ) {
                sum += (double)0.4180241125000000446;
              } else {
                sum += (double)0.2770787596153845844;
              }
            } else {
              sum += (double)0.129619923076923077;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2541.77099609375) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1105999983847141266) ) ) {
              sum += (double)0.3261091964285713907;
            } else {
              sum += (double)0.2011228281249999861;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.815078258514404297) ) ) {
              sum += (double)0.2473888281250000154;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.190494775772094727) ) ) {
                sum += (double)0.06122173863636364011;
              } else {
                sum += (double)0.02531678125000000334;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07213700190186500549) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
            sum += (double)0.0326447045454545462;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.375) ) ) {
              sum += (double)0.009008520833333333658;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8676000237464904785) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05278300121426582336) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1880999952554702759) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.22280502319335938) ) ) {
                      sum += (double)0.004060280000000000312;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.006030075000000000192;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3300798237323760986) ) ) {
                    sum += (double)0.01047466176470588164;
                  } else {
                    sum += (double)0.003298916666666667444;
                  }
                }
              } else {
                sum += (double)0.00984296875000000189;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006499999872175976634) ) ) {
            sum += (double)0.2527268552631579124;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972222328186035156) ) ) {
              sum += (double)0.1683613035714285611;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.85139846801757812) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20634.9921875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.50749301910400391) ) ) {
                    sum += (double)0.2075700333333333758;
                  } else {
                    sum += (double)0.1058092500000000075;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6884500086307525635) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.60535717010498047) ) ) {
                      sum += (double)0.07212527884615384244;
                    } else {
                      sum += (double)0.02304238249999999294;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1515255048871040344) ) ) {
                      sum += (double)0.02750806999999999905;
                    } else {
                      sum += (double)0.1426294062499999793;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-117964.01171875) ) ) {
                  sum += (double)0.05386619047619048417;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.428399994969367981) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2756499946117401123) ) ) {
                      sum += (double)0.008406376623376619547;
                    } else {
                      sum += (double)0.02221235483870967475;
                    }
                  } else {
                    sum += (double)0.04363589473684210962;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3718000054359436035) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7800.424560546875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.79848480224609375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8697622120380401611) ) ) {
                sum += (double)0.3379624499999999698;
              } else {
                sum += (double)0.1899738750000000143;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09515000134706497192) ) ) {
                sum += (double)0.1331880735294117546;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8385039567947387695) ) ) {
                  sum += (double)0.05027232352941177207;
                } else {
                  sum += (double)0.01544867500000000025;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631920456886291504) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.186517536640167236) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.36904716491699219) ) ) {
                  sum += (double)0.05783631944444443673;
                } else {
                  sum += (double)0.02042898148148146811;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.72772979736328125) ) ) {
                  sum += (double)0.003146949999999999921;
                } else {
                  sum += (double)0.01976072499999999982;
                }
              }
            } else {
              sum += (double)0.07872928571428570999;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151944875717163086) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16964292526245117) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8612.9306640625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.95003080368041992) ) ) {
                  sum += (double)0.3728394531249999977;
                } else {
                  sum += (double)0.2710728913043478072;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                  sum += (double)0.0732978260869565218;
                } else {
                  sum += (double)0.1818706607142857035;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7127.94775390625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460899293422698975) ) ) {
                    sum += (double)0.1230559107142856906;
                  } else {
                    sum += (double)0.05843062499999999992;
                  }
                } else {
                  sum += (double)0.02290443333333332804;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.91703891754150391) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2739829868078231812) ) ) {
                    sum += (double)0.3052904736842105282;
                  } else {
                    sum += (double)0.1351017333333333348;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3293000012636184692) ) ) {
                    sum += (double)0.0605169078947368419;
                  } else {
                    sum += (double)0.143754171875000003;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.44896888732910156) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5141499936580657959) ) ) {
                sum += (double)0.2597279741379310836;
              } else {
                sum += (double)0.378184137931034503;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2369667142629623413) ) ) {
                sum += (double)0.2688638452380952559;
              } else {
                sum += (double)0.08384190384615385072;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419721648097038269) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539371490478515625) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.42380905151367188) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.57499992847442627) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2445.2841796875) ) ) {
              sum += (double)0.514679526315789504;
            } else {
              sum += (double)0.6027626904761904658;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2597.6712646484375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5253.223876953125) ) ) {
                sum += (double)0.5023713275862068395;
              } else {
                sum += (double)0.5863312499999999705;
              }
            } else {
              sum += (double)0.4273407352941176462;
            }
          }
        } else {
          sum += (double)0.3481743250000000067;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.083902359008789062) ) ) {
              sum += (double)0.5903402857142856508;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6502065062522888184) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09144999831914901733) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.83052873611450195) ) ) {
                    sum += (double)0.6566760357142856774;
                  } else {
                    sum += (double)0.7012203214285716024;
                  }
                } else {
                  sum += (double)0.6185616413043478756;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05954999849200248718) ) ) {
                  sum += (double)0.7000502833333333008;
                } else {
                  sum += (double)0.7523446562500000212;
                }
              }
            }
          } else {
            sum += (double)0.5412914210526316161;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8970215022563934326) ) ) {
            sum += (double)0.8481548749999999748;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05558137223124504089) ) ) {
              sum += (double)0.7202638375000000037;
            } else {
              sum += (double)0.8109164134615386432;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            sum += (double)0.475150450000000002;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.286122560501098633) ) ) {
              sum += (double)0.4243645333333333491;
            } else {
              sum += (double)0.260903566666666642;
            }
          }
        } else {
          sum += (double)0.1285787758620689503;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.081818282604217529) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6589939892292022705) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.13385000079870224) ) ) {
              sum += (double)0.3073814545454545688;
            } else {
              sum += (double)0.5497740833333332189;
            }
          } else {
            sum += (double)0.6310693684210527676;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1114999987185001373) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068509817123413086) ) ) {
              sum += (double)0.3472213970588235443;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.13055515289306641) ) ) {
                sum += (double)0.4952037840909090938;
              } else {
                sum += (double)0.399127249999999989;
              }
            }
          } else {
            sum += (double)0.2890920416666666881;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.461220264434814453) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2431045025587081909) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1479744985699653625) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4116.89501953125) ) ) {
            sum += (double)0.2455622173913043493;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.300892829895019531) ) ) {
              sum += (double)0.1000911375000000103;
            } else {
              sum += (double)0.02419979166666666459;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3405.63720703125) ) ) {
              sum += (double)0.3580218026315789559;
            } else {
              sum += (double)0.2697963928571428527;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11755.62158203125) ) ) {
              sum += (double)0.3091803281249999591;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1454381570219993591) ) ) {
                  sum += (double)0.2127527916666666352;
                } else {
                  sum += (double)0.07809059615384614239;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2125445008277893066) ) ) {
                  sum += (double)0.287360187499999975;
                } else {
                  sum += (double)0.1604015000000000024;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2542.70361328125) ) ) {
              sum += (double)0.56539489285714295;
            } else {
              sum += (double)0.46660028333333331;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01580000016838312149) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.211111187934875488) ) ) {
                  sum += (double)0.413259486111111074;
                } else {
                  sum += (double)0.3080184999999999729;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1651.81793212890625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.936813235282897949) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4730.330810546875) ) ) {
                      sum += (double)0.3896404500000000271;
                    } else {
                      sum += (double)0.4713811089743589755;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3187.4805908203125) ) ) {
                      sum += (double)0.4236139696969696833;
                    } else {
                      sum += (double)0.3610138250000000104;
                    }
                  }
                } else {
                  sum += (double)0.5415489999999999471;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4751.380859375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3374990075826644897) ) ) {
                  sum += (double)0.3632450833333333295;
                } else {
                  sum += (double)0.4278124199999999711;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2979499995708465576) ) ) {
                  sum += (double)0.2175874838709677406;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2296.1324462890625) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6140500009059906006) ) ) {
                      sum += (double)0.2992892083333333342;
                    } else {
                      sum += (double)0.460505352941176449;
                    }
                  } else {
                    sum += (double)0.2568691029411764859;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2812.8260498046875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3672800064086914062) ) ) {
              sum += (double)0.196422116666666674;
            } else {
              sum += (double)0.3404995333333333263;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.708333373069763184) ) ) {
              sum += (double)0.1620908749999999954;
            } else {
              sum += (double)0.04123404464285714;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1472014933824539185) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.10500001907348633) ) ) {
            sum += (double)0.2715161190476190756;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.71789360046386719) ) ) {
              sum += (double)0.09043042647058821548;
            } else {
              sum += (double)0.005448450000000000515;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07754799723625183105) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.34421443939208984) ) ) {
              sum += (double)0.0180221000000000027;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04002549871802330017) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-51419.353515625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-139472.765625) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.006863099999999999583;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1537633463740348816) ) ) {
                    sum += (double)0.003034692307692307689;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.00126266479492188) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000174641609192) ) ) {
                    sum += (double)0.003668124999999999945;
                  } else {
                    sum += (double)0.01249063157894736778;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21111.7900390625) ) ) {
                    sum += (double)0.005494895833333333403;
                  } else {
                    sum += (double)0.002635869565217391439;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.32589626312255859) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4444958865642547607) ) ) {
                sum += (double)0.04010481818181817898;
              } else {
                sum += (double)0.1132448750000000087;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21659.8779296875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.26621723175048828) ) ) {
                  sum += (double)0.09019582812499998825;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4427233040332794189) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1873499974608421326) ) ) {
                      sum += (double)0.008775147058823529883;
                    } else {
                      sum += (double)0.01500770588235294037;
                    }
                  } else {
                    sum += (double)0.04461098437500000263;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3910.263427734375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.08536720275878906) ) ) {
                    sum += (double)0.02080472857142856916;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12115.4892578125) ) ) {
                      sum += (double)0.009745948275862070104;
                    } else {
                      sum += (double)0.002898020833333334045;
                    }
                  }
                } else {
                  sum += (double)0.04204896249999999502;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48809528350830078) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9570.9716796875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.68592119216918945) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11081.38720703125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                  sum += (double)0.2398520833333333546;
                } else {
                  sum += (double)0.3760846160714286235;
                }
              } else {
                sum += (double)0.4388713833333332537;
              }
            } else {
              sum += (double)0.216287828947368449;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60317468643188477) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6478519439697265625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.059800000861287117) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4351.128662109375) ) ) {
                    sum += (double)0.1967408055555555646;
                  } else {
                    sum += (double)0.02623533999999999242;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843759536743164) ) ) {
                    sum += (double)0.2434195757575757235;
                  } else {
                    sum += (double)0.07437081250000000809;
                  }
                }
              } else {
                sum += (double)0.0308893749999999967;
              }
            } else {
              sum += (double)0.3218079852941176378;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.220638670027256012) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17865.8623046875) ) ) {
              sum += (double)0.3013703076923076596;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.0801396369934082) ) ) {
                sum += (double)0.1713137083333333144;
              } else {
                sum += (double)0.04368830769230768601;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3513.2430419921875) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1548165008425712585) ) ) {
                  sum += (double)0.1203775000000000123;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3930500000715255737) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948949992656707764) ) ) {
                      sum += (double)0.0167956527777777774;
                    } else {
                      sum += (double)0.03978002777777777527;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4838169962167739868) ) ) {
                      sum += (double)0.03789526162790697594;
                    } else {
                      sum += (double)0.1026876973684210659;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.76570034027099609) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.51341342926025391) ) ) {
                    sum += (double)0.138872583333333327;
                  } else {
                    sum += (double)0.2696113823529411313;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3278848379850387573) ) ) {
                    sum += (double)0.1871505238095238222;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.63333511352539062) ) ) {
                      sum += (double)0.1031223571428571684;
                    } else {
                      sum += (double)0.02990780128205127592;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2604444921016693115) ) ) {
                sum += (double)0.002500000000000000052;
              } else {
                sum += (double)0.01842994696969697116;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212084412574768066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01069999998435378075) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396999895572662354) ) ) {
            sum += (double)0.5347345781250000263;
          } else {
            sum += (double)0.6699771696428572509;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.22777938842773438) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2616493105888366699) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5443184971809387207) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485868990421295166) ) ) {
                  sum += (double)0.5358705394736841265;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5916.149658203125) ) ) {
                    sum += (double)0.4951477916666667811;
                  } else {
                    sum += (double)0.4214166176470588998;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2671.9010009765625) ) ) {
                  sum += (double)0.550952718749999848;
                } else {
                  sum += (double)0.6013322708333331823;
                }
              }
            } else {
              sum += (double)0.6099610131578948602;
            }
          } else {
            sum += (double)0.3807977500000000459;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.660869598388671875) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7418999969959259033) ) ) {
            sum += (double)0.7238181250000000899;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8281752169132232666) ) ) {
              sum += (double)0.8522410972222221881;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6932689845561981201) ) ) {
                sum += (double)0.7447500999999997484;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.57857131958007812) ) ) {
                  sum += (double)0.7834470729166667091;
                } else {
                  sum += (double)0.8268748666666666525;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
            sum += (double)0.7151990869565217901;
          } else {
            sum += (double)0.5600101630434782818;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.625709176063537598) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06945000216364860535) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1815000027418136597) ) ) {
            sum += (double)0.4123624814814815243;
          } else {
            sum += (double)0.2025597727272727411;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.78269100189208984) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5394719839096069336) ) ) {
              sum += (double)0.468809552083333303;
            } else {
              sum += (double)0.5762526296296295314;
            }
          } else {
            sum += (double)0.3882559210526315696;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
          sum += (double)0.4349324404761903962;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05845000036060810089) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5461035072803497314) ) ) {
              sum += (double)0.09693370238095237734;
            } else {
              sum += (double)0.1921474499999999697;
            }
          } else {
            sum += (double)0.3233034027777777486;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.93996429443359375) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2083.4365234375) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2938529998064041138) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5378.1318359375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07255000248551368713) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3539178669452667236) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
                  sum += (double)0.3933536805555555849;
                } else {
                  sum += (double)0.3271685357142856687;
                }
              } else {
                sum += (double)0.4534688333333332655;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8573.837890625) ) ) {
                  sum += (double)0.2468673289473683752;
                } else {
                  sum += (double)0.1217620138888889092;
                }
              } else {
                sum += (double)0.3608924772727272745;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.081829309463500977) ) ) {
              sum += (double)0.4350147857142857566;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01805000007152557373) ) ) {
                sum += (double)0.2798728977272727514;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.61418247222900391) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500060558319092) ) ) {
                    sum += (double)0.05312443421052631676;
                  } else {
                    sum += (double)0.2136882327586206998;
                  }
                } else {
                  sum += (double)0.04806457142857143566;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01405000034719705582) ) ) {
            sum += (double)0.532650089999999965;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4253202527761459351) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1236499994993209839) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                  sum += (double)0.4259310267857143728;
                } else {
                  sum += (double)0.3278905000000000847;
                }
              } else {
                sum += (double)0.4415970151515151154;
              }
            } else {
              sum += (double)0.3287150576923077439;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.551407575607299805) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
            sum += (double)0.09867332894736842441;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431999802589416504) ) ) {
              sum += (double)0.1683580714285714541;
            } else {
              sum += (double)0.419417718749999946;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2464435026049613953) ) ) {
            sum += (double)0.02064504310344827606;
          } else {
            sum += (double)0.1104206388888888807;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2055095061659812927) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.12853145599365234) ) ) {
            sum += (double)0.06605083823529410425;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04502699896693229675) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8690000176429748535) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03576250001788139343) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02221600059419870377) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003143780000000000532;
                  }
                } else {
                  sum += (double)0.004950031250000000438;
                }
              } else {
                sum += (double)0.006513750000000000442;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.32678413391113281) ) ) {
                sum += (double)0.02018612499999999574;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20679.5390625) ) ) {
                  sum += (double)0.01008537500000000059;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.8578948974609375) ) ) {
                    sum += (double)0.006208468750000000445;
                  } else {
                    sum += (double)0.002664473684210526445;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004500000068219378591) ) ) {
            sum += (double)0.2248105000000000242;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.22790546715259552) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1734884977340698242) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1229124963283538818) ) ) {
                  sum += (double)0.01485465217391304313;
                } else {
                  sum += (double)0.0592214696969696891;
                }
              } else {
                sum += (double)0.2435769062500000026;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356008380651473999) ) ) {
                  sum += (double)0.03667166304347826283;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4669053852558135986) ) ) {
                    sum += (double)0.1682851964285713986;
                  } else {
                    sum += (double)0.05366028571428570898;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12945.79150390625) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)133.7333297729492188) ) ) {
                      sum += (double)0.05216006402439024581;
                    } else {
                      sum += (double)0.02130579591836733941;
                    }
                  } else {
                    sum += (double)0.1148226764705882336;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000004291534424) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                      sum += (double)0.01020409090909091092;
                    } else {
                      sum += (double)0.002884671428571429757;
                    }
                  } else {
                    sum += (double)0.01637298333333333036;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.157867431640625) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.3970184326171875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17966.021484375) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23839.0419921875) ) ) {
                sum += (double)0.3002778583333333695;
              } else {
                sum += (double)0.3959326166666666258;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2138.00994873046875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4039500057697296143) ) ) {
                  sum += (double)0.3188202222222222271;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2990144938230514526) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7535.16015625) ) ) {
                      sum += (double)0.1662492888888889297;
                    } else {
                      sum += (double)0.08062243918918919616;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.53629779815673828) ) ) {
                      sum += (double)0.3171174411764705603;
                    } else {
                      sum += (double)0.2156830468750000063;
                    }
                  }
                }
              } else {
                sum += (double)0.03203324999999999922;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)68.40288352966308594) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25032.13671875) ) ) {
                sum += (double)0.2045486363636363214;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000124931335449) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.344850003719329834) ) ) {
                    sum += (double)0.1089659687500000029;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1819999963045120239) ) ) {
                      sum += (double)0.01697092857142857084;
                    } else {
                      sum += (double)0.08340332352941176586;
                    }
                  }
                } else {
                  sum += (double)0.1453270499999999854;
                }
              }
            } else {
              sum += (double)0.03713730833333333398;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08655000105500221252) ) ) {
            sum += (double)0.0738347999999999921;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.576317310333251953) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2035000026226043701) ) ) {
                sum += (double)0.01132178846153846126;
              } else {
                sum += (double)0.00333406250000000022;
              }
            } else {
              sum += (double)0.01916880952380952199;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.622563481330871582) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5057889819145202637) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1172.25115966796875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
                sum += (double)0.575092267857142958;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4559770077466964722) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3784.2598876953125) ) ) {
                    sum += (double)0.4162627300000000252;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.644634723663330078) ) ) {
                      sum += (double)0.465085749999999909;
                    } else {
                      sum += (double)0.5330125340909090959;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.168182373046875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05045000091195106506) ) ) {
                      sum += (double)0.4079873392857142345;
                    } else {
                      sum += (double)0.5191397016129032371;
                    }
                  } else {
                    sum += (double)0.5713370588235294756;
                  }
                }
              }
            } else {
              sum += (double)0.3929321842105262808;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.56214594841003418) ) ) {
              sum += (double)0.5437356249999999447;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8339000046253204346) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05045000091195106506) ) ) {
                  sum += (double)0.6826439545454546787;
                } else {
                  sum += (double)0.6311549210526316012;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.595029234886169434) ) ) {
                  sum += (double)0.6454073552631578448;
                } else {
                  sum += (double)0.5058484218750000094;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.694749981164932251) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5046874880790710449) ) ) {
              sum += (double)0.3145310147058824057;
            } else {
              sum += (double)0.1886021944444444542;
            }
          } else {
            sum += (double)0.3887191785714285142;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.78940200805664062) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2440.659912109375) ) ) {
                sum += (double)0.6655132321428572917;
              } else {
                sum += (double)0.7185124999999999984;
              }
            } else {
              sum += (double)0.749436238095238072;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8550899922847747803) ) ) {
                sum += (double)0.8139177300000000059;
              } else {
                sum += (double)0.8785612142857140983;
              }
            } else {
              sum += (double)0.7325327833333333816;
            }
          }
        } else {
          sum += (double)0.563201279411764788;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5522460043430328369) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.75) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.4297972426470588192;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4275265038013458252) ) ) {
              sum += (double)0.04794782291666666724;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.476446002721786499) ) ) {
                sum += (double)0.196062924999999999;
              } else {
                sum += (double)0.3364382115384615957;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4894144982099533081) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1450000032782554626) ) ) {
              sum += (double)0.1623603749999999735;
            } else {
              sum += (double)0.05064644444444443144;
            }
          } else {
            sum += (double)0.1781144861111111366;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7571980059146881104) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-483.599456787109375) ) ) {
              sum += (double)0.4330965925925926996;
            } else {
              sum += (double)0.4846520833333333722;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1588.35455322265625) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03309999965131282806) ) ) {
                sum += (double)0.4768639558823528635;
              } else {
                sum += (double)0.3822330874999999573;
              }
            } else {
              sum += (double)0.1172185357142857126;
            }
          }
        } else {
          sum += (double)0.574705616666666641;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.1796875) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4768949896097183228) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.267892003059387207) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3888.4378662109375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05855000019073486328) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006299999775364995003) ) ) {
              sum += (double)0.4123383888888888515;
            } else {
              sum += (double)0.2889621826923076675;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2352029979228973389) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                sum += (double)0.2144296375000000199;
              } else {
                sum += (double)0.1197006136363636397;
              }
            } else {
              sum += (double)0.2793677307692308265;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.3045235795454545591;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2482860013842582703) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.65320110321044922) ) ) {
                sum += (double)0.1141233437499999948;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.138888835906982422) ) ) {
                  sum += (double)0.05332744117647058441;
                } else {
                  sum += (double)0.01258794444444444501;
                }
              }
            } else {
              sum += (double)0.1871513863636363739;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3675854951143264771) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
              sum += (double)0.5080490833333333178;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.341767549514770508) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.39692306518554688) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7411499917507171631) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036939948797225952) ) ) {
                      sum += (double)0.3467421381578947859;
                    } else {
                      sum += (double)0.4200370958333331517;
                    }
                  } else {
                    sum += (double)0.2787400875000000111;
                  }
                } else {
                  sum += (double)0.483724968749999984;
                }
              } else {
                sum += (double)0.2859323369565217599;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.253616824746131897) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.200156576931476593) ) ) {
                  sum += (double)0.5182613012820512788;
                } else {
                  sum += (double)0.5688070833333332965;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.638198614120483398) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01209999993443489075) ) ) {
                    sum += (double)0.451977765625000083;
                  } else {
                    sum += (double)0.527244825000000028;
                  }
                } else {
                  sum += (double)0.3854899821428571238;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                sum += (double)0.5119135865384614181;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3104.9818115234375) ) ) {
                  sum += (double)0.4523057142857142554;
                } else {
                  sum += (double)0.2636786071428571243;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3483.4307861328125) ) ) {
            sum += (double)0.3290215441176470024;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
              sum += (double)0.2272794375000000144;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3766809999942779541) ) ) {
                sum += (double)0.02361229545454545872;
              } else {
                sum += (double)0.09789578571428568521;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5325800478458404541) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1754.94049072265625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8314499855041503906) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1377379894256591797) ) ) {
                  sum += (double)0.578420552631578988;
                } else {
                  sum += (double)0.5071508500000000419;
                }
              } else {
                sum += (double)0.4192717000000000804;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.649303197860717773) ) ) {
                sum += (double)0.5342980694444443568;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.429985165596008301) ) ) {
                  sum += (double)0.6347413676470587962;
                } else {
                  sum += (double)0.5814362272727273684;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1308966800570487976) ) ) {
              sum += (double)0.6926351562500000503;
            } else {
              sum += (double)0.5581514499999999934;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7179419994354248047) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.647769808769226074) ) ) {
              sum += (double)0.7130540441176470567;
            } else {
              sum += (double)0.6657138409090908038;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.205824196338653564) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8281752169132232666) ) ) {
                sum += (double)0.856959347222222223;
              } else {
                sum += (double)0.8134079687500000988;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8078870177268981934) ) ) {
                sum += (double)0.7383583452380951817;
              } else {
                sum += (double)0.8084638026315789094;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          sum += (double)0.5584837375000000215;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.765894293785095215) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6098825037479400635) ) ) {
              sum += (double)0.3896662692307692466;
            } else {
              sum += (double)0.4804810357142857979;
            }
          } else {
            sum += (double)0.2124311041666666622;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5455529987812042236) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.36127758026123047) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4875.364990234375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0344000011682510376) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1048084981739521027) ) ) {
                sum += (double)0.0981196249999999881;
              } else {
                sum += (double)0.2858605535714285328;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1380414962768554688) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1184634976089000702) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08831200003623962402) ) ) {
                    sum += (double)0.005605531250000000271;
                  } else {
                    sum += (double)0.01773397619047619236;
                  }
                } else {
                  sum += (double)0.03700753333333333533;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.659550011157989502) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12143.49072265625) ) ) {
                    sum += (double)0.1107241785714285637;
                  } else {
                    sum += (double)0.048663096153846154;
                  }
                } else {
                  sum += (double)0.1645648333333333269;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                  sum += (double)0.008433840909090909929;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6830499768257141113) ) ) {
                    sum += (double)0.003231208333333332895;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                sum += (double)0.01981939062500000237;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508787155151367) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08570000156760215759) ) ) {
                  sum += (double)0.05041208749999999406;
                } else {
                  sum += (double)0.09433167857142857327;
                }
              } else {
                sum += (double)0.01166747619047619165;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07671299949288368225) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.72115325927734375) ) ) {
              sum += (double)0.02161657692307692238;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04489400051534175873) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)95.70531845092773438) ) ) {
                  sum += (double)0.004905961538461539595;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1503999978303909302) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003303249999999999763;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5112999975681304932) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.01314638095238095453;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21919.9287109375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.99867057800292969) ) ) {
                sum += (double)0.1049190131578947166;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3515000045299530029) ) ) {
                  sum += (double)0.05852493333333332742;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)316.6353302001953125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-47213.59375) ) ) {
                      sum += (double)0.039508519230769229;
                    } else {
                      sum += (double)0.01059127500000000069;
                    }
                  } else {
                    sum += (double)0.004574021739130434971;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.88247871398925781) ) ) {
                sum += (double)0.02649894230769230669;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.193939208984375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.135499998927116394) ) ) {
                    sum += (double)0.005299357142857142981;
                  } else {
                    sum += (double)0.01925179411764706139;
                  }
                } else {
                  sum += (double)0.003323375000000000374;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7498322725296020508) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3275610059499740601) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.205894172191619873) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8612.9306640625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1120096743106842041) ) ) {
                  sum += (double)0.2250915625000000087;
                } else {
                  sum += (double)0.351290420454545449;
                }
              } else {
                sum += (double)0.1272770657894736757;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09715000167489051819) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.12247323989868164) ) ) {
                  sum += (double)0.1115068571428571437;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24364500492811203) ) ) {
                    sum += (double)0.03026796000000000347;
                  } else {
                    sum += (double)0.06896057407407407691;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.45555591583251953) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2766999900341033936) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441904991865158081) ) ) {
                      sum += (double)0.1629683529411764809;
                    } else {
                      sum += (double)0.2201590156250000097;
                    }
                  } else {
                    sum += (double)0.2865139047619047474;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3500839024782180786) ) ) {
                    sum += (double)0.1615688977272727311;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2513474971055984497) ) ) {
                      sum += (double)0.03237127631578947534;
                    } else {
                      sum += (double)0.1279260000000000119;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7749.022216796875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.33131217956542969) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2710050493478775024) ) ) {
                  sum += (double)0.3598057380952380813;
                } else {
                  sum += (double)0.5081489000000000145;
                }
              } else {
                sum += (double)0.1569336562499999699;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.417631000280380249) ) ) {
                sum += (double)0.1110907222222222157;
              } else {
                sum += (double)0.2428655555555555567;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4245499968528747559) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05370000004768371582) ) ) {
              sum += (double)0.1129834629629629661;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3837545067071914673) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02524999994784593582) ) ) {
                  sum += (double)0.08505610000000000948;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18621.4052734375) ) ) {
                    sum += (double)0.05323869736842105904;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                      sum += (double)0.03566573684210525702;
                    } else {
                      sum += (double)0.01005917647058823111;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2157999947667121887) ) ) {
                  sum += (double)0.04673756034482757366;
                } else {
                  sum += (double)0.1172978676470588233;
                }
              }
            }
          } else {
            sum += (double)0.1370621999999999674;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.699848473072052002) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1511500030755996704) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1277499962598085403) ) ) {
            sum += (double)0.3339094843750000097;
          } else {
            sum += (double)0.2033270535714285787;
          }
        } else {
          sum += (double)0.4610469673913044075;
        }
      } else {
        sum += (double)0.6418361923076923992;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831595033407211304) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1856.134033203125) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1508779972791671753) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4116.6485595703125) ) ) {
              sum += (double)0.2067153064516128735;
            } else {
              sum += (double)0.02835423529411764884;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05718076229095459) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03490000031888484955) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5399.415771484375) ) ) {
                  sum += (double)0.451757791666666686;
                } else {
                  sum += (double)0.3271391323529411754;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.118689298629760742) ) ) {
                  sum += (double)0.3687686590909091122;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4918.664306640625) ) ) {
                    sum += (double)0.2608757962962962584;
                  } else {
                    sum += (double)0.1566639886363636602;
                  }
                }
              }
            } else {
              sum += (double)0.07877360714285715215;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9928456246852874756) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01740000024437904358) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.518010854721069336) ) ) {
                sum += (double)0.4689979444444445367;
              } else {
                sum += (double)0.5460650795454544681;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.58608055114746094) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.616540074348449707) ) ) {
                    sum += (double)0.3897552053571428643;
                  } else {
                    sum += (double)0.4588495340909091169;
                  }
                } else {
                  sum += (double)0.3619119814814814595;
                }
              } else {
                sum += (double)0.2684715795454545861;
              }
            }
          } else {
            sum += (double)0.2080713478260869664;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.052631616592407227) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2891269922256469727) ) ) {
            sum += (double)0.1539684624999999585;
          } else {
            sum += (double)0.2736269090909091428;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8622066974639892578) ) ) {
            sum += (double)0.07089495689655170296;
          } else {
            sum += (double)0.01080452941176470762;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1725399941205978394) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.44172954559326172) ) ) {
            sum += (double)0.04787657500000000454;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02168099954724311829) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1314.3897705078125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2734.7891845703125) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.00318383333333333322;
                }
              } else {
                sum += (double)0.008974458333333336021;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)156.9863662719726562) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18141.3857421875) ) ) {
                  sum += (double)0.01980750806451613;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.20454597473144531) ) ) {
                    sum += (double)0.01240952499999999938;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3424787521362304688) ) ) {
                      sum += (double)0.004666312500000000321;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)110.3782501220703125) ) ) {
                  sum += (double)0.003069138888888889478;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
            sum += (double)0.1595486323529411721;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4719999879598617554) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1856106668710708618) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0344000011682510376) ) ) {
                  sum += (double)0.1386008333333333398;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13264.98291015625) ) ) {
                    sum += (double)0.06394511764705881895;
                  } else {
                    sum += (double)0.03589641666666666675;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.150150001049041748) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23916.427734375) ) ) {
                    sum += (double)0.03297749999999998599;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.41929817199707031) ) ) {
                      sum += (double)0.03360390000000000599;
                    } else {
                      sum += (double)0.007999341772151894597;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2918500006198883057) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19118.681640625) ) ) {
                      sum += (double)0.09009437962962962843;
                    } else {
                      sum += (double)0.0344864600000000035;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.8111419677734375) ) ) {
                      sum += (double)0.03135683870967741205;
                    } else {
                      sum += (double)0.01088090476190476524;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1298963333333333359;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4061000049114227295) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4872388243675231934) ) ) {
            sum += (double)0.1633700735294117412;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.14357227087020874) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2074499949812889099) ) ) {
                sum += (double)0.1015236000000000055;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.17581748962402344) ) ) {
                  sum += (double)0.06767508999999999331;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.80555343627929688) ) ) {
                    sum += (double)0.006270088235294117573;
                  } else {
                    sum += (double)0.02242423148148147902;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1278499998152256012) ) ) {
                  sum += (double)0.04739164583333332903;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.57894706726074219) ) ) {
                    sum += (double)0.02022161363636363479;
                  } else {
                    sum += (double)0.003847309523809524113;
                  }
                }
              } else {
                sum += (double)0.005368656250000001032;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.47499990463256836) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7729.809326171875) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6004000008106231689) ) ) {
                sum += (double)0.4170413152173912952;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2921674996614456177) ) ) {
                  sum += (double)0.2204584999999999739;
                } else {
                  sum += (double)0.3126573874999999947;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4357.235107421875) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5528.4384765625) ) ) {
                  sum += (double)0.1018606346153846237;
                } else {
                  sum += (double)0.2028236710526315767;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2269189655780792236) ) ) {
                  sum += (double)0.0462270999999999932;
                } else {
                  sum += (double)0.1349181607142856953;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)97.29999923706054688) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.71372509002685547) ) ) {
                  sum += (double)0.04594754166666666778;
                } else {
                  sum += (double)0.02317466666666667327;
                }
              } else {
                sum += (double)0.09012435416666664256;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.87923717498779297) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7089000046253204346) ) ) {
                  sum += (double)0.2637286022727272639;
                } else {
                  sum += (double)0.140570324999999996;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22102.33203125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.13927078247070312) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4855499863624572754) ) ) {
                      sum += (double)0.2144091250000000337;
                    } else {
                      sum += (double)0.1500002500000000016;
                    }
                  } else {
                    sum += (double)0.0558353333333333271;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.50487136840820312) ) ) {
                    sum += (double)0.03283080681818181107;
                  } else {
                    sum += (double)0.1181155833333333294;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5112900435924530029) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539371490478515625) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.2056846618652344) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
            sum += (double)0.375634156249999962;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.54248332977294922) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2440002039074897766) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4542175084352493286) ) ) {
                    sum += (double)0.4828068088235294431;
                  } else {
                    sum += (double)0.5630611730769230494;
                  }
                } else {
                  sum += (double)0.4127121874999999385;
                }
              } else {
                sum += (double)0.5869506590909090438;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.8166656494140625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1278000026941299438) ) ) {
                  sum += (double)0.4348692870370370334;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4351.010986328125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745550006628036499) ) ) {
                      sum += (double)0.457926557692307723;
                    } else {
                      sum += (double)0.489176269230769345;
                    }
                  } else {
                    sum += (double)0.550661781249999871;
                  }
                }
              } else {
                sum += (double)0.3369449782608695543;
              }
            }
          }
        } else {
          sum += (double)0.3089225178571428643;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6581094861030578613) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.367253541946411133) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396499931812286377) ) ) {
              sum += (double)0.5709835555555556885;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02900000009685754776) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.644927501678466797) ) ) {
                  sum += (double)0.7074217159090910867;
                } else {
                  sum += (double)0.6635985166666666935;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.982558250427246094) ) ) {
                  sum += (double)0.603945500000000024;
                } else {
                  sum += (double)0.6636772604166666367;
                }
              }
            }
          } else {
            sum += (double)0.479751659090909166;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6645500063896179199) ) ) {
              sum += (double)0.709481136363636411;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9553999900817871094) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397920191287994385) ) ) {
                  sum += (double)0.7575765156249999466;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8970215022563934326) ) ) {
                    sum += (double)0.8351470921052632779;
                  } else {
                    sum += (double)0.7948905357142855843;
                  }
                }
              } else {
                sum += (double)0.8604638269230769909;
              }
            }
          } else {
            sum += (double)0.66696346093750003;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5304344892501831055) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.46750688552856445) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2825.5277099609375) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4357000142335891724) ) ) {
              sum += (double)0.4436570808823528944;
            } else {
              sum += (double)0.344313823529411811;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.023707866668701172) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1217999979853630066) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4531719982624053955) ) ) {
                  sum += (double)0.1020723281250000003;
                } else {
                  sum += (double)0.2672072500000000628;
                }
              } else {
                sum += (double)0.3255647999999999875;
              }
            } else {
              sum += (double)0.08594388636363635425;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2573500126600265503) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.192499995231628418) ) ) {
              sum += (double)0.09769215217391302719;
            } else {
              sum += (double)0.0201702083333333386;
            }
          } else {
            sum += (double)0.1658260681818181925;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3206.296630859375) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
            sum += (double)0.5705309374999999461;
          } else {
            sum += (double)0.4047763181818181955;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.731029748916625977) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.881829261779785156) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9427835941314697266) ) ) {
                sum += (double)0.4781068035714285958;
              } else {
                sum += (double)0.4288693624999999621;
              }
            } else {
              sum += (double)0.3638579166666667253;
            }
          } else {
            sum += (double)0.1714866500000000182;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.662373542785644531) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2278250008821487427) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2343.62744140625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1492550000548362732) ) ) {
              sum += (double)0.1497637884615384551;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06590000167489051819) ) ) {
                sum += (double)0.3909235156249999954;
              } else {
                sum += (double)0.2551972343750000261;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.625) ) ) {
              sum += (double)0.1625084558823528813;
            } else {
              sum += (double)0.02552710526315789957;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.4638671875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              sum += (double)0.5466170000000000195;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2947520017623901367) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4599.54443359375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7950.183837890625) ) ) {
                    sum += (double)0.3599225526315789625;
                  } else {
                    sum += (double)0.4317830624999999811;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3064.7276611328125) ) ) {
                    sum += (double)0.2587757500000000266;
                  } else {
                    sum += (double)0.3699116527777777663;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.51201343536376953) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3312.6978759765625) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.09652614593505859) ) ) {
                      sum += (double)0.3938231442307691954;
                    } else {
                      sum += (double)0.4438787307692307338;
                    }
                  } else {
                    sum += (double)0.4664092258064516106;
                  }
                } else {
                  sum += (double)0.3263683000000000001;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3255925029516220093) ) ) {
              sum += (double)0.2278440760869565318;
            } else {
              sum += (double)0.4149816052631579155;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.293749809265136719) ) ) {
          sum += (double)0.2468928392857142884;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
            sum += (double)0.1377087750000000055;
          } else {
            sum += (double)0.02087468000000000309;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.13558950275182724) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.26955699920654297) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
            sum += (double)0.2690763666666666776;
          } else {
            sum += (double)0.04418240624999999339;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.66541337966918945) ) ) {
              sum += (double)0.02298936249999999903;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                sum += (double)0.01030508333333333276;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0218420000746846199) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09840000048279762268) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004996500000000000941;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)97.68828582763671875) ) ) {
                    sum += (double)0.01194796428571428745;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5811499953269958496) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004667552631578948154;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21659.8779296875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.10022926330566406) ) ) {
                sum += (double)0.1366999210526315678;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)378.0294189453125) ) ) {
                  sum += (double)0.02337787068965516829;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.91249847412109375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.90555572509765625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04165000095963478088) ) ) {
                    sum += (double)0.00907317592592592724;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08719999715685844421) ) ) {
                      sum += (double)0.02802311666666666701;
                    } else {
                      sum += (double)0.01549548000000000071;
                    }
                  }
                } else {
                  sum += (double)0.03570088235294117257;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9231.883056640625) ) ) {
                  sum += (double)0.006225382352941176076;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7760.676513671875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.24843740463256836) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3281764984130859375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13660.58154296875) ) ) {
                  sum += (double)0.333132218750000042;
                } else {
                  sum += (double)0.1881640769230769061;
                }
              } else {
                sum += (double)0.5023380576923077712;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19397.1982421875) ) ) {
                sum += (double)0.3009469500000000464;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.57570838928222656) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10342.49951171875) ) ) {
                    sum += (double)0.1673264605263158067;
                  } else {
                    sum += (double)0.04799584615384615977;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7326999902725219727) ) ) {
                    sum += (double)0.2705399499999999735;
                  } else {
                    sum += (double)0.1483578552631578673;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.46666622161865234) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09824999794363975525) ) ) {
                sum += (double)0.01341902777777777798;
              } else {
                sum += (double)0.04394519444444443257;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07919999957084655762) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1797269880771636963) ) ) {
                  sum += (double)0.1815816785714285397;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4652500003576278687) ) ) {
                    sum += (double)0.1134928500000000062;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2915692329406738281) ) ) {
                      sum += (double)0.06869960999999998041;
                    } else {
                      sum += (double)0.01867638095238095125;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.20526313781738281) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.65209999680519104) ) ) {
                    sum += (double)0.1895901176470588256;
                  } else {
                    sum += (double)0.09847857500000001263;
                  }
                } else {
                  sum += (double)0.2808900326086956611;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4948.07861328125) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.0332794189453125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-43883.498046875) ) ) {
                sum += (double)0.2640822272727272324;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2507845014333724976) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907999962568283081) ) ) {
                      sum += (double)0.04819941176470586564;
                    } else {
                      sum += (double)0.110051514705882314;
                    }
                  } else {
                    sum += (double)0.01246954761904761969;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4304306358098983765) ) ) {
                    sum += (double)0.1823255833333333464;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2941924929618835449) ) ) {
                      sum += (double)0.1120277500000000093;
                    } else {
                      sum += (double)0.06430621250000000122;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08580000326037406921) ) ) {
                sum += (double)0.1107228611111110983;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)111.9640769958496094) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32129.02734375) ) ) {
                    sum += (double)0.08087674999999999725;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8781290352344512939) ) ) {
                      sum += (double)0.0251857567567567546;
                    } else {
                      sum += (double)0.003838400000000000058;
                    }
                  }
                } else {
                  sum += (double)0.0117716060606060588;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2666459977626800537) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.20714378356933594) ) ) {
                sum += (double)0.002500000000000000486;
              } else {
                sum += (double)0.005918233333333333332;
              }
            } else {
              sum += (double)0.02951973076923076339;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212084412574768066) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6062864959239959717) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.3571434020996094) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5382795035839080811) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000178217887878) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1941.93548583984375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                  sum += (double)0.6535650312499999837;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.537549257278442383) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4542175084352493286) ) ) {
                      sum += (double)0.5034693269230768875;
                    } else {
                      sum += (double)0.5470988125000000313;
                    }
                  } else {
                    sum += (double)0.5964569791666668452;
                  }
                }
              } else {
                sum += (double)0.4434319021739130395;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.99242448806762695) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.7584075927734375) ) ) {
                  sum += (double)0.4816878928571428631;
                } else {
                  sum += (double)0.5531843750000000615;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4213535040616989136) ) ) {
                  sum += (double)0.3295773846153846609;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
                    sum += (double)0.5060349347826086364;
                  } else {
                    sum += (double)0.4292330000000000312;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0610499996691942215) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7572000026702880859) ) ) {
                sum += (double)0.6260575952380952325;
              } else {
                sum += (double)0.6822631842105263411;
              }
            } else {
              sum += (double)0.5682127596153845328;
            }
          }
        } else {
          sum += (double)0.3377805192307692383;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8627499938011169434) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
              sum += (double)0.6144708500000001239;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7094555199146270752) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.937209248542785645) ) ) {
                  sum += (double)0.6390056333333333782;
                } else {
                  sum += (double)0.7073781029411764232;
                }
              } else {
                sum += (double)0.7114296805555555547;
              }
            }
          } else {
            sum += (double)0.7603038157894737026;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
            sum += (double)0.8435427121212122348;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.840149998664855957) ) ) {
              sum += (double)0.8123519687499999309;
            } else {
              sum += (double)0.744876868421052718;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6592045128345489502) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8240259885787963867) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.36666679382324219) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4125999957323074341) ) ) {
              sum += (double)0.5227676759259259898;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3817.0164794921875) ) ) {
                sum += (double)0.4627743899999999244;
              } else {
                sum += (double)0.2629198500000000105;
              }
            }
          } else {
            sum += (double)0.1848479821428571646;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242127418518066406) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
                sum += (double)0.3796696071428571906;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.533619403839111328) ) ) {
                  sum += (double)0.3193351346153845971;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4311324954032897949) ) ) {
                    sum += (double)0.1100842019230769131;
                  } else {
                    sum += (double)0.2082867499999999927;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.375544905662536621) ) ) {
                sum += (double)0.0992585795454545422;
              } else {
                sum += (double)0.02907077083333332868;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1812.7314453125) ) ) {
              sum += (double)0.390892904761904747;
            } else {
              sum += (double)0.281025828947368439;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.386647224426269531) ) ) {
          sum += (double)0.6086511730769230688;
        } else {
          sum += (double)0.3831498095238095591;
        }
      }
    }
  }
  return sum;
}
