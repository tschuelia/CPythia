#include "header.h"
double predict_margin_unit6(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.370881006121635437) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.088732719421386719) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.4638671875) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2456184998154640198) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
            sum += (double)0.4060542031250000128;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1409819945693016052) ) ) {
              sum += (double)0.06053908333333334058;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.27991724014282227) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4208000004291534424) ) ) {
                    sum += (double)0.2802864666666666782;
                  } else {
                    sum += (double)0.3235522321428571102;
                  }
                } else {
                  sum += (double)0.2272822083333333187;
                }
              } else {
                sum += (double)0.1772736538461538447;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.236059486865997314) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              sum += (double)0.5395088333333332153;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.106028556823730469) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.16407871246337891) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7189500033855438232) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2935855090618133545) ) ) {
                      sum += (double)0.3527428333333333943;
                    } else {
                      sum += (double)0.421424945833333231;
                    }
                  } else {
                    sum += (double)0.2907259333333334084;
                  }
                } else {
                  sum += (double)0.4545015657894737049;
                }
              } else {
                sum += (double)0.2802362812499999967;
              }
            }
          } else {
            sum += (double)0.1291022500000000017;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78649044036865234) ) ) {
            sum += (double)0.1283365892857142587;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005800000042654573917) ) ) {
              sum += (double)0.05092377500000000445;
            } else {
              sum += (double)0.01428301086956521894;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.45384597778320312) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3245500028133392334) ) ) {
              sum += (double)0.04406963157894736027;
            } else {
              sum += (double)0.1855651547619047714;
            }
          } else {
            sum += (double)0.3849177608695651953;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195315062999725342) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8603.06005859375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006799999959184788167) ) ) {
              sum += (double)0.2751776666666666538;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6578000187873840332) ) ) {
                sum += (double)0.047775183333333332;
              } else {
                sum += (double)0.1478458586956521714;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6326399743556976318) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267609968781471252) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.53125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                    sum += (double)0.009798431034482760205;
                  } else {
                    sum += (double)0.02550931944444444557;
                  }
                } else {
                  sum += (double)0.002500000000000000052;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7059500217437744141) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500009596347809) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2955896556377410889) ) ) {
                      sum += (double)0.03325122619047619216;
                    } else {
                      sum += (double)0.01089060000000000028;
                    }
                  } else {
                    sum += (double)0.05789540624999999635;
                  }
                } else {
                  sum += (double)0.1182399558823529345;
                }
              }
            } else {
              sum += (double)0.1284513823529411791;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.01785659790039062) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32723.6474609375) ) ) {
              sum += (double)0.1330942750000000119;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006500000017695128918) ) ) {
                sum += (double)0.09019286249999999838;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24936.94140625) ) ) {
                  sum += (double)0.06685165217391303427;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1528000012040138245) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
                      sum += (double)0.003144187500000000714;
                    } else {
                      sum += (double)0.01173539156626505348;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.22750282287597656) ) ) {
                      sum += (double)0.02110843125000000028;
                    } else {
                      sum += (double)0.05954437999999999398;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1148280017077922821) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04002549871802330017) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1488.8948974609375) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  sum += (double)0.00603152272727272825;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4499483108520507812) ) ) {
                  sum += (double)0.01637797500000000295;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.54761886596679688) ) ) {
                    sum += (double)0.006277187499999999781;
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.584338754415512085) ) ) {
                sum += (double)0.03272760483870968545;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8783564567565917969) ) ) {
                  sum += (double)0.01282599999999999886;
                } else {
                  sum += (double)0.003622320000000000921;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4479165971279144287) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.03280067443847656) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2991515100002288818) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10771.20361328125) ) ) {
                sum += (double)0.306032184782608685;
              } else {
                sum += (double)0.1250777307692307605;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.602099984884262085) ) ) {
                sum += (double)0.418137233333333358;
              } else {
                sum += (double)0.3152521250000001052;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09715000167489051819) ) ) {
              sum += (double)0.04769000000000000322;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.85647964477539062) ) ) {
                sum += (double)0.1973330781250000054;
              } else {
                sum += (double)0.1546147187500000186;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9647.53759765625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.67347621917724609) ) ) {
              sum += (double)0.2943453666666666635;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24439.951171875) ) ) {
                  sum += (double)0.1982308235294117649;
                } else {
                  sum += (double)0.09009832291666665383;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.215700000524520874) ) ) {
                  sum += (double)0.06098036666666666744;
                } else {
                  sum += (double)0.01596497916666666725;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.09465491771697998) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.47142791748046875) ) ) {
                sum += (double)0.1065590000000000148;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3738.986328125) ) ) {
                  sum += (double)0.08121642857142856442;
                } else {
                  sum += (double)0.01981175806451612037;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.576317310333251953) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.63257598876953125) ) ) {
                  sum += (double)0.01167805555555555784;
                } else {
                  sum += (double)0.004150588235294118584;
                }
              } else {
                sum += (double)0.032366999999999993;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4077123850584030151) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.657142877578735352) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4442269951105117798) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3535.0400390625) ) ) {
              sum += (double)0.3654278750000000131;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                sum += (double)0.5453179032258065329;
              } else {
                sum += (double)0.4054058099999999776;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.39482021331787109) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2046.3153076171875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.649303197860717773) ) ) {
                  sum += (double)0.4965646785714285527;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1301954686641693115) ) ) {
                    sum += (double)0.5935348461538461073;
                  } else {
                    sum += (double)0.5352218478260870604;
                  }
                }
              } else {
                sum += (double)0.4112492916666666831;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7484.0576171875) ) ) {
                sum += (double)0.5039711428571429508;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.542604982852935791) ) ) {
                  sum += (double)0.5932967361111111115;
                } else {
                  sum += (double)0.6617730625000000089;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7366000115871429443) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10754.9267578125) ) ) {
              sum += (double)0.4279249736842103968;
            } else {
              sum += (double)0.5371784558823529121;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.52401399612426758) ) ) {
              sum += (double)0.3098069210526315787;
            } else {
              sum += (double)0.1633077352941176286;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.61412239074707031) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.601585626602172852) ) ) {
              sum += (double)0.5987008552631579716;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.703571438789367676) ) ) {
                sum += (double)0.713937677083333333;
              } else {
                sum += (double)0.6473085416666666259;
              }
            }
          } else {
            sum += (double)0.5105925208333331744;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3242.07958984375) ) ) {
            sum += (double)0.7310025795454545561;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008399999700486660004) ) ) {
              sum += (double)0.7591787500000000133;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
                sum += (double)0.80576893269230776;
              } else {
                sum += (double)0.8560441333333331793;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.591358184814453125) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5020507872104644775) ) ) {
              sum += (double)0.4845928611111110507;
            } else {
              sum += (double)0.4224111166666666972;
            }
          } else {
            sum += (double)0.308154789473684243;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.772227883338928223) ) ) {
            sum += (double)0.4090754078947368422;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8745341300964355469) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3285527229309082) ) ) {
                sum += (double)0.3604541153846154145;
              } else {
                sum += (double)0.1758897386363636184;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2764.2154541015625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
                  sum += (double)0.3161563125000000363;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3132499977946281433) ) ) {
                    sum += (double)0.1898421833333333308;
                  } else {
                    sum += (double)0.05006930681818182183;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4388139992952346802) ) ) {
                  sum += (double)0.05223233999999999516;
                } else {
                  sum += (double)0.1820007058823529533;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06945000216364860535) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02779999934136867523) ) ) {
            sum += (double)0.4150679250000000597;
          } else {
            sum += (double)0.1537563750000000007;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.6026763916015625) ) ) {
              sum += (double)0.5689793583333333515;
            } else {
              sum += (double)0.6787387166666666305;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-974.56011962890625) ) ) {
              sum += (double)0.4312725833333333481;
            } else {
              sum += (double)0.2863939999999999819;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4174484908580780029) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.662373542785644531) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.268880501389503479) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1208685003221035004) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2991.6090087890625) ) ) {
            sum += (double)0.09123301250000000195;
          } else {
            sum += (double)0.02285092307692308117;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.05718076229095459) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.64678955078125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02235000021755695343) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4362.22216796875) ) ) {
                  sum += (double)0.4488417976190475223;
                } else {
                  sum += (double)0.3284185666666667447;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6689999997615814209) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.6067352294921875) ) ) {
                    sum += (double)0.3532015624999999548;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4307.449462890625) ) ) {
                      sum += (double)0.2969835217391303961;
                    } else {
                      sum += (double)0.2142944750000000675;
                    }
                  }
                } else {
                  sum += (double)0.1364485673076923089;
                }
              }
            } else {
              sum += (double)0.1197028636363636073;
            }
          } else {
            sum += (double)0.06204744999999999705;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6520303189754486084) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
            sum += (double)0.5153031810344826935;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3606180101633071899) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2035.82476806640625) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2953102290630340576) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1763221621513366699) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.04222202301025391) ) ) {
                      sum += (double)0.3371850909090908788;
                    } else {
                      sum += (double)0.4068853437499999615;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3371.9754638671875) ) ) {
                      sum += (double)0.410078178571428531;
                    } else {
                      sum += (double)0.4932396710526316674;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4369595199823379517) ) ) {
                    sum += (double)0.3040504166666667119;
                  } else {
                    sum += (double)0.3789906125000000459;
                  }
                }
              } else {
                sum += (double)0.2689301562499999965;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3955029994249343872) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.321931988000869751) ) ) {
                  sum += (double)0.5288195294117646883;
                } else {
                  sum += (double)0.465521842105263095;
                }
              } else {
                sum += (double)0.3885871527777777223;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4505.860595703125) ) ) {
            sum += (double)0.3569872968749999709;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.795577049255371094) ) ) {
              sum += (double)0.2125794545454545437;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3637000024318695068) ) ) {
                sum += (double)0.03753407142857142359;
              } else {
                sum += (double)0.1027806315789473596;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001249999957508407533) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07969449833035469055) ) ) {
              sum += (double)0.1362005576923076833;
            } else {
              sum += (double)0.3742996666666666417;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1359035000205039978) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86363601684570312) ) ) {
                sum += (double)0.08166099999999999748;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3735.3189697265625) ) ) {
                    sum += (double)0.01364367857142857222;
                  } else {
                    sum += (double)0.003937000000000000395;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.20238065719604492) ) ) {
                    sum += (double)0.02165188750000000134;
                  } else {
                    sum += (double)0.06252411538461538631;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872999966144561768) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1735909953713417053) ) ) {
                  sum += (double)0.1212760370370370294;
                } else {
                  sum += (double)0.01683804166666666782;
                }
              } else {
                sum += (double)0.1990456979166667084;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0736270025372505188) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8433499932289123535) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.25469999760389328) ) ) {
                  sum += (double)0.003087964285714285464;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.44202423095703125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12573.53271484375) ) ) {
                    sum += (double)0.01108040384615384746;
                  } else {
                    sum += (double)0.004175785714285714344;
                  }
                } else {
                  sum += (double)0.002736380000000000062;
                }
              }
            } else {
              sum += (double)0.009626607142857141614;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1818514987826347351) ) ) {
              sum += (double)0.1026951129032258048;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4660000056028366089) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1020999997854232788) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02689999993890523911) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.77272701263427734) ) ) {
                      sum += (double)0.00631172727272727354;
                    } else {
                      sum += (double)0.00262555357142857165;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5386942625045776367) ) ) {
                      sum += (double)0.01716786000000000006;
                    } else {
                      sum += (double)0.006781675000000000897;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4464543163776397705) ) ) {
                      sum += (double)0.02330629999999999508;
                    } else {
                      sum += (double)0.07587551249999999192;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3228999972343444824) ) ) {
                      sum += (double)0.004676294117647059739;
                    } else {
                      sum += (double)0.01687634782608695566;
                    }
                  }
                }
              } else {
                sum += (double)0.0759234687500000005;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5368886590003967285) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3109924942255020142) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4379.823974609375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5206000208854675293) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.438245624303817749) ) ) {
                  sum += (double)0.2688779696969696986;
                } else {
                  sum += (double)0.16308214285714287;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.72119235992431641) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10204.7578125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
                      sum += (double)0.1520748552631578931;
                    } else {
                      sum += (double)0.2868231590909091078;
                    }
                  } else {
                    sum += (double)0.1158735446428571514;
                  }
                } else {
                  sum += (double)0.08517851249999999763;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.557799994945526123) ) ) {
                sum += (double)0.1201812499999999895;
              } else {
                sum += (double)0.03171085344827585112;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7614000141620635986) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3032126426696777344) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7245500087738037109) ) ) {
                  sum += (double)0.4164002380952380178;
                } else {
                  sum += (double)0.3380348478260869483;
                }
              } else {
                sum += (double)0.2366714166666666619;
              }
            } else {
              sum += (double)0.1512577833333333677;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8977.38916015625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.91703891754150391) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21626.9033203125) ) ) {
                sum += (double)0.3067598500000000006;
              } else {
                sum += (double)0.1306956944444444546;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1004000008106231689) ) ) {
                sum += (double)0.1641924078947368248;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4230500012636184692) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3173500001430511475) ) ) {
                    sum += (double)0.04190111363636363218;
                  } else {
                    sum += (double)0.008161150000000000695;
                  }
                } else {
                  sum += (double)0.08424860576923078048;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3513.2430419921875) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.139535129070281982) ) ) {
                sum += (double)0.1154736477272727407;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2439849972724914551) ) ) {
                  sum += (double)0.01314730555555555618;
                } else {
                  sum += (double)0.05049258333333333376;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.36904716491699219) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82013607025146484) ) ) {
                  sum += (double)0.01130791304347826196;
                } else {
                  sum += (double)0.04147922727272726484;
                }
              } else {
                sum += (double)0.003167714285714286725;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4688950031995773315) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6142930090427398682) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.604429006576538086) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4957814961671829224) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.14807891845703125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7470000088214874268) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280472755432128906) ) ) {
                  sum += (double)0.5437819531249999949;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4495279937982559204) ) ) {
                    sum += (double)0.5331440357142857023;
                  } else {
                    sum += (double)0.4231099999999999861;
                  }
                }
              } else {
                sum += (double)0.5631291759259258178;
              }
            } else {
              sum += (double)0.4292265657894736575;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.46953916549682617) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3038.22998046875) ) ) {
                sum += (double)0.5055898611111111496;
              } else {
                sum += (double)0.6086599464285713523;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6971.048095703125) ) ) {
                sum += (double)0.5769610294117647475;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3868.938232421875) ) ) {
                  sum += (double)0.6932228088235293795;
                } else {
                  sum += (double)0.6308582734375001166;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.95000076293945312) ) ) {
            sum += (double)0.4529358548387096284;
          } else {
            sum += (double)0.3034993749999999602;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.183879852294921875) ) ) {
              sum += (double)0.6591472833333333892;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7139790058135986328) ) ) {
                sum += (double)0.7242014204545453859;
              } else {
                sum += (double)0.7955741874999999741;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
              sum += (double)0.7076972400000001162;
            } else {
              sum += (double)0.6102617812499999683;
            }
          }
        } else {
          sum += (double)0.8527354038461538721;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6908049881458282471) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.964855581521987915) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1181000024080276489) ) ) {
            sum += (double)0.1860142083333333474;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5485669970512390137) ) ) {
              sum += (double)0.3724308660714285568;
            } else {
              sum += (double)0.5414187083333333872;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212082743644714355) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.117181062698364258) ) ) {
              sum += (double)0.4319566590909090786;
            } else {
              sum += (double)0.3404272666666666725;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3572.1585693359375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06070000119507312775) ) ) {
                sum += (double)0.3859905526315789426;
              } else {
                sum += (double)0.1931451842105262884;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1408500000834465027) ) ) {
                sum += (double)0.1852414099999999952;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.711229324340820312) ) ) {
                  sum += (double)0.1836492142857142906;
                } else {
                  sum += (double)0.04499602941176470555;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.732091009616851807) ) ) {
          sum += (double)0.6087192647058823347;
        } else {
          sum += (double)0.4032870192307692614;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4385659992694854736) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2431045025587081909) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3175.5850830078125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.838888883590698242) ) ) {
              sum += (double)0.3785771111111110865;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5297.811767578125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
                  sum += (double)0.3708555576923077135;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3570519983768463135) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.66916465759277344) ) ) {
                      sum += (double)0.215843375000000004;
                    } else {
                      sum += (double)0.1642478500000000285;
                    }
                  } else {
                    sum += (double)0.2962724999999999942;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6921000182628631592) ) ) {
                  sum += (double)0.1752268166666666738;
                } else {
                  sum += (double)0.06946098076923076792;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.29093790054321289) ) ) {
              sum += (double)0.2573432352941176227;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1832289993762969971) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1123280003666877747) ) ) {
                  sum += (double)0.009853000000000000647;
                } else {
                  sum += (double)0.02239183333333333303;
                }
              } else {
                sum += (double)0.1124566500000000052;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000029057264328) ) ) {
            sum += (double)0.5440437499999998261;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1074.5780029296875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2946670055389404297) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.122619152069091797) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3506.4442138671875) ) ) {
                      sum += (double)0.3671802375000000063;
                    } else {
                      sum += (double)0.4301544705882354158;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.037488937377929688) ) ) {
                      sum += (double)0.2295801904761904655;
                    } else {
                      sum += (double)0.3871652236842105244;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1611000001430511475) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7657999992370605469) ) ) {
                      sum += (double)0.476192272388059723;
                    } else {
                      sum += (double)0.3978906916666665738;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.580230236053466797) ) ) {
                      sum += (double)0.4179979285714284787;
                    } else {
                      sum += (double)0.3306369107142857477;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6005.170166015625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3460749983787536621) ) ) {
                    sum += (double)0.3484086458333333636;
                  } else {
                    sum += (double)0.4329476184210527268;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5684500038623809814) ) ) {
                    sum += (double)0.1534165108695652036;
                  } else {
                    sum += (double)0.2989247222222222167;
                  }
                }
              }
            } else {
              sum += (double)0.1705261624999999948;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2541.77099609375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3642030060291290283) ) ) {
            sum += (double)0.1220707758620689504;
          } else {
            sum += (double)0.2820046923076923173;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.293749809265136719) ) ) {
            sum += (double)0.0775468970588235329;
          } else {
            sum += (double)0.03228250892857142257;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2564915120601654053) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1114525012671947479) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.02561378479003906) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3173500001430511475) ) ) {
              sum += (double)0.1585499047619047808;
            } else {
              sum += (double)0.009043189655172412938;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06700949743390083313) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04136249981820583344) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02583499997854232788) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.99404716491699219) ) ) {
                      sum += (double)0.0032890384615384613;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.003917916666666667637;
                  }
                } else {
                  sum += (double)0.006359115384615384933;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5214000046253204346) ) ) {
                  sum += (double)0.00281250000000000033;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.697799980640411377) ) ) {
                    sum += (double)0.01513253409090909059;
                  } else {
                    sum += (double)0.006810000000000000948;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.53571319580078125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.04605197906494141) ) ) {
                  sum += (double)0.01541264999999999996;
                } else {
                  sum += (double)0.06283391666666666986;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1315139308571815491) ) ) {
                  sum += (double)0.02993405555555555403;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23318.8720703125) ) ) {
                    sum += (double)0.01059118269230769141;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9766.04443359375) ) ) {
                      sum += (double)0.006572833333333334173;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35871362686157227) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3919.619873046875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03625000081956386566) ) ) {
                sum += (double)0.2982321875000000233;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11067.33203125) ) ) {
                  sum += (double)0.2065323888888888904;
                } else {
                  sum += (double)0.1042877946428571179;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
                sum += (double)0.08374624999999999431;
              } else {
                sum += (double)0.0217858181818181805;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219502776861190796) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7548000216484069824) ) ) {
                sum += (double)0.1671552500000000052;
              } else {
                sum += (double)0.03786881250000000143;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.21702194213867188) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25050.177734375) ) ) {
                  sum += (double)0.186933705882352974;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8363747298717498779) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193599998950958252) ) ) {
                      sum += (double)0.04119534139784944426;
                    } else {
                      sum += (double)0.08045997826086953575;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4490.586181640625) ) ) {
                      sum += (double)0.01405350000000000175;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-109368.3203125) ) ) {
                  sum += (double)0.05460056521739129615;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3052500039339065552) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.10130882263183594) ) ) {
                      sum += (double)0.02065459374999999848;
                    } else {
                      sum += (double)0.007527294871794873617;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23333.6748046875) ) ) {
                      sum += (double)0.04166214062499999649;
                    } else {
                      sum += (double)0.007617636363636365489;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4216979891061782837) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315237000584602356) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.132749997079372406) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05715000070631504059) ) ) {
                sum += (double)0.04090712499999999557;
              } else {
                sum += (double)0.1669952058823528929;
              }
            } else {
              sum += (double)0.3370481590909090719;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.82550048828125) ) ) {
              sum += (double)0.4166455399999998699;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15424.068359375) ) ) {
                sum += (double)0.3805712187499999954;
              } else {
                sum += (double)0.1893664264705882394;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3160.5521240234375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.324303328990936279) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10309.31201171875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4534999877214431763) ) ) {
                    sum += (double)0.3546661500000000133;
                  } else {
                    sum += (double)0.1781798653846154157;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3168350011110305786) ) ) {
                    sum += (double)0.1612352000000000229;
                  } else {
                    sum += (double)0.1078174705882352924;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1832500025629997253) ) ) {
                  sum += (double)0.1470688437500000112;
                } else {
                  sum += (double)0.03319365277777777679;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1014499999582767487) ) ) {
                sum += (double)0.09522060000000000246;
              } else {
                sum += (double)0.0277496470588235282;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2554499953985214233) ) ) {
              sum += (double)0.004422780000000001155;
            } else {
              sum += (double)0.02219534821428570739;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007451236248016357) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845070183277130127) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.645604372024536133) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007000000186963006854) ) ) {
            sum += (double)0.6424738124999999078;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1524.44354248046875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5345174968242645264) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098678819835186005) ) ) {
                  sum += (double)0.4731551666666666822;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169156000018119812) ) ) {
                    sum += (double)0.5978311739130434121;
                  } else {
                    sum += (double)0.5009974833333333821;
                  }
                }
              } else {
                sum += (double)0.6075955086206895617;
              }
            } else {
              sum += (double)0.4225626833333333554;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10004.5654296875) ) ) {
            sum += (double)0.4279557884615384777;
          } else {
            sum += (double)0.3841766029411765038;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.62627506256103516) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2853.806884765625) ) ) {
              sum += (double)0.6382005000000000594;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1254.77166748046875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.926025450229644775) ) ) {
                  sum += (double)0.6640640312499999087;
                } else {
                  sum += (double)0.7049098750000000191;
                }
              } else {
                sum += (double)0.7411060666666666741;
              }
            }
          } else {
            sum += (double)0.5430349531250000528;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8502727746963500977) ) ) {
              sum += (double)0.8766210952380953936;
            } else {
              sum += (double)0.8095956874999999942;
            }
          } else {
            sum += (double)0.7387031136363636508;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474214851856231689) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9602659344673156738) ) ) {
            sum += (double)0.4686567692307692656;
          } else {
            sum += (double)0.2501439218750000082;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6333.853759765625) ) ) {
            sum += (double)0.2051318369565217625;
          } else {
            sum += (double)0.06397286904761904924;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500022709369659) ) ) {
            sum += (double)0.3683938333333333648;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2216499969363212585) ) ) {
              sum += (double)0.6725098194444444344;
            } else {
              sum += (double)0.5624591973684210933;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
            sum += (double)0.4464691637931035295;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1714.56365966796875) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03814999945461750031) ) ) {
                sum += (double)0.4781303076923076878;
              } else {
                sum += (double)0.3306947291666666455;
              }
            } else {
              sum += (double)0.1452860526315789269;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211225062608718872) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.730263233184814453) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2103.7935791015625) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.19108271598815918) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1189859993755817413) ) ) {
              sum += (double)0.1051359999999999933;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.0699005126953125) ) ) {
                sum += (double)0.3472993333333333488;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2117189988493919373) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.358683109283447266) ) ) {
                    sum += (double)0.1416563472222222286;
                  } else {
                    sum += (double)0.2474861704545455454;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5526.148193359375) ) ) {
                    sum += (double)0.3481313157894736499;
                  } else {
                    sum += (double)0.2509989642857143322;
                  }
                }
              }
            }
          } else {
            sum += (double)0.09578663333333332919;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.023700088262557983) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008300000103190541267) ) ) {
              sum += (double)0.5026620887096774348;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5625500082969665527) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3651000112295150757) ) ) {
                      sum += (double)0.3593820178571429103;
                    } else {
                      sum += (double)0.403066914062500059;
                    }
                  } else {
                    sum += (double)0.4497232045454545024;
                  }
                } else {
                  sum += (double)0.2942581796874999545;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                  sum += (double)0.4922856397058824052;
                } else {
                  sum += (double)0.3901593636363636097;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3378.784423828125) ) ) {
              sum += (double)0.2895613166666666793;
            } else {
              sum += (double)0.1005133750000000159;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1796499937772750854) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07725000008940696716) ) ) {
            sum += (double)0.02391856521739130562;
          } else {
            sum += (double)0.1015577124999999803;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3280370086431503296) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1746900007128715515) ) ) {
              sum += (double)0.02433447368421053081;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323471069335938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.48215198516845703) ) ) {
                  sum += (double)0.128933472222222234;
                } else {
                  sum += (double)0.2784150166666666815;
                }
              } else {
                sum += (double)0.1041061964285714264;
              }
            }
          } else {
            sum += (double)0.4114711195652173692;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2548594921827316284) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006499999944935552776) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8442.551025390625) ) ) {
              sum += (double)0.3994130441176469426;
            } else {
              sum += (double)0.1276026413043478136;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1464665010571479797) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4016137421131134033) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1089744977653026581) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3989.5208740234375) ) ) {
                    sum += (double)0.01160361764705882329;
                  } else {
                    sum += (double)0.004263677419354839487;
                  }
                } else {
                  sum += (double)0.03213124999999999315;
                }
              } else {
                sum += (double)0.06624163095238093379;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4705.922119140625) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.47499990463256836) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13467.18603515625) ) ) {
                    sum += (double)0.249769083333333336;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3408222049474716187) ) ) {
                      sum += (double)0.1693623583333333238;
                    } else {
                      sum += (double)0.07828684210526316856;
                    }
                  }
                } else {
                  sum += (double)0.05171392857142857041;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1964560002088546753) ) ) {
                  sum += (double)0.1039373593749999963;
                } else {
                  sum += (double)0.03914075999999999667;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.141049996018409729) ) ) {
                sum += (double)0.02988209999999999478;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67195892333984375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9869.357666015625) ) ) {
                    sum += (double)0.009068166666666667083;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1141000017523765564) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)189.375) ) ) {
                      sum += (double)0.004881156250000000078;
                    } else {
                      sum += (double)0.002684919354838710085;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8082.197509765625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69309520721435547) ) ) {
                    sum += (double)0.1595934230769230633;
                  } else {
                    sum += (double)0.04705483823529411913;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.21702194213867188) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1688970029354095459) ) ) {
                      sum += (double)0.03406115697674417381;
                    } else {
                      sum += (double)0.07677923837209300884;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2672000080347061157) ) ) {
                      sum += (double)0.01718325862068964885;
                    } else {
                      sum += (double)0.004382133333333333887;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5313.2392578125) ) ) {
                  sum += (double)0.02098824999999999996;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.494212418794631958) ) ) {
                    sum += (double)0.007377937500000000814;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1943499967455863953) ) ) {
                      sum += (double)0.004190115384615385012;
                    } else {
                      sum += (double)0.002500000000000000919;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.1101709919354838668;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
            sum += (double)0.09476864843749997769;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7830500006675720215) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.36176490783691406) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.52727270126342773) ) ) {
                  sum += (double)0.2554326176470588239;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6963499784469604492) ) ) {
                    sum += (double)0.3485050803571428935;
                  } else {
                    sum += (double)0.4135562500000000141;
                  }
                }
              } else {
                sum += (double)0.1836704642857142911;
              }
            } else {
              sum += (double)0.1421725172413793037;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3887.3070068359375) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7413459122180938721) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213385045528411865) ) ) {
                sum += (double)0.1091659416666666549;
              } else {
                sum += (double)0.254657776315789508;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
                sum += (double)0.1481618064516129207;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3488499969244003296) ) ) {
                    sum += (double)0.03121231250000000221;
                  } else {
                    sum += (double)0.01741015909090909072;
                  }
                } else {
                  sum += (double)0.0937324270833333334;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3780899941921234131) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7504533827304840088) ) ) {
                sum += (double)0.01351942307692307818;
              } else {
                sum += (double)0.003888425925925927552;
              }
            } else {
              sum += (double)0.05108930357142856676;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5385445058345794678) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1942.0135498046875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.22777938842773438) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1147592365741729736) ) ) {
                  sum += (double)0.6277537205882353089;
                } else {
                  sum += (double)0.5538734242424242504;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4950319975614547729) ) ) {
                  sum += (double)0.4986965800000000559;
                } else {
                  sum += (double)0.4383201730769231141;
                }
              }
            } else {
              sum += (double)0.3878027205882352835;
            }
          } else {
            sum += (double)0.3901275865384615238;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
              sum += (double)0.5591102374999998847;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03170000016689300537) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.678737141304347924;
                } else {
                  sum += (double)0.7138660749999998778;
                }
              } else {
                sum += (double)0.621484960526315966;
              }
            }
          } else {
            sum += (double)0.4646891973684210142;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.205824196338653564) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06292375177145004272) ) ) {
            sum += (double)0.8644310374999999436;
          } else {
            sum += (double)0.7760872211538460963;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.77499997615814209) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.950202226638793945) ) ) {
              sum += (double)0.6809404444444444593;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05104145780205726624) ) ) {
                sum += (double)0.7142341500000000121;
              } else {
                sum += (double)0.8098597794117647908;
              }
            }
          } else {
            sum += (double)0.6806821931818182181;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985099971294403076) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.01566410064697266) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2812.8260498046875) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4902155101299285889) ) ) {
              sum += (double)0.4209774782608695642;
            } else {
              sum += (double)0.5691293666666666917;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.097202777862548828) ) ) {
              sum += (double)0.408713041666666721;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1748000010848045349) ) ) {
                sum += (double)0.112616571428571427;
              } else {
                sum += (double)0.2969923382352941399;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2387500032782554626) ) ) {
            sum += (double)0.07803723148148146438;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1186999976634979248) ) ) {
              sum += (double)0.09440185416666667384;
            } else {
              sum += (double)0.3013831447368420791;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745615005493164062) ) ) {
            sum += (double)0.5160880769230768994;
          } else {
            sum += (double)0.6751323088235293701;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
            sum += (double)0.4436412282608696578;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
              sum += (double)0.4517633906249999276;
            } else {
              sum += (double)0.2537244400000001066;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.135397911071777344) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322624996304512024) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4176.525390625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004299999913200736046) ) ) {
            sum += (double)0.4145571071428570953;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
              sum += (double)0.2896234333333333466;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6574000120162963867) ) ) {
                sum += (double)0.2120449375000000025;
              } else {
                sum += (double)0.08355812499999999698;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1162029989063739777) ) ) {
            sum += (double)0.03184610000000000218;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2754999995231628418) ) ) {
              sum += (double)0.07023017105263157367;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1656.650146484375) ) ) {
                sum += (double)0.2409475083333333656;
              } else {
                sum += (double)0.07975908928571427692;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.5003409861111109969;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.485294103622436523) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.167307615280151367) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.225694537162780762) ) ) {
                    sum += (double)0.3386340999999999379;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2298460304737091064) ) ) {
                      sum += (double)0.4438928369565217635;
                    } else {
                      sum += (double)0.3859402699999999742;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.107785224914550781) ) ) {
                    sum += (double)0.2243611538461538213;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.572797060012817383) ) ) {
                      sum += (double)0.3728682499999999567;
                    } else {
                      sum += (double)0.3242117692307692201;
                    }
                  }
                }
              } else {
                sum += (double)0.1925364444444444545;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1158.0059814453125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.999999747378751636e-05) ) ) {
                sum += (double)0.5982550892857142477;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0944689624011516571) ) ) {
                  sum += (double)0.3603902999999999968;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4195740073919296265) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2552237734198570251) ) ) {
                      sum += (double)0.4715184722222220959;
                    } else {
                      sum += (double)0.4078228863636362833;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07564999908208847046) ) ) {
                      sum += (double)0.5415664374999999975;
                    } else {
                      sum += (double)0.4876377647058823817;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.3219361029411764163;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.906093955039978027) ) ) {
            sum += (double)0.2896987599999999996;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2761.4869384765625) ) ) {
              sum += (double)0.2421791447368420724;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3766809999942779541) ) ) {
                sum += (double)0.03232220588235293346;
              } else {
                sum += (double)0.0989514699999999997;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2344710007309913635) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4727.731689453125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01205000001937150955) ) ) {
              sum += (double)0.3857011718750000262;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1764914989471435547) ) ) {
                sum += (double)0.06534715833333332169;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.65877437591552734) ) ) {
                  sum += (double)0.1512462604166666669;
                } else {
                  sum += (double)0.2241620000000000001;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.19238090515136719) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1099705696105957) ) ) {
                sum += (double)0.02876692500000000569;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3276766985654830933) ) ) {
                  sum += (double)0.004012192307692307759;
                } else {
                  sum += (double)0.01300106521739130376;
                }
              }
            } else {
              sum += (double)0.07385818421052628424;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.00822639465332031) ) ) {
              sum += (double)0.03795764473684209994;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03464949876070022583) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-52465.236328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-186198.859375) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.005637305555555555993;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.45833396911621094) ) ) {
                    sum += (double)0.002748249999999999825;
                  } else {
                    sum += (double)0.002500000000000001787;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.37163543701171875) ) ) {
                  sum += (double)0.009463705882352943521;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05367800034582614899) ) ) {
                    sum += (double)0.00282044642857142867;
                  } else {
                    sum += (double)0.005262052631578947696;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2656224519014358521) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000012218952179) ) ) {
                sum += (double)0.1553430119047618796;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1748259961605072021) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500023007392883) ) ) {
                    sum += (double)0.04478252272727272637;
                  } else {
                    sum += (double)0.01375894736842105115;
                  }
                } else {
                  sum += (double)0.1001687976190476087;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4522999972105026245) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.61505985260009766) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24161.912109375) ) ) {
                    sum += (double)0.1015850119047619071;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7422136962413787842) ) ) {
                      sum += (double)0.03406120789473682936;
                    } else {
                      sum += (double)0.009393057142857144312;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.24025726318359375) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23096.388671875) ) ) {
                      sum += (double)0.04438850000000000434;
                    } else {
                      sum += (double)0.01371657812500000004;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6411821246147155762) ) ) {
                      sum += (double)0.01511605487804877981;
                    } else {
                      sum += (double)0.004006988095238096445;
                    }
                  }
                }
              } else {
                sum += (double)0.08869961458333334992;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.586304783821105957) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301595002412796021) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1097499988973140717) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4332.2734375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2673729956150054932) ) ) {
                  sum += (double)0.1960925735294117844;
                } else {
                  sum += (double)0.0962398200000000037;
                }
              } else {
                sum += (double)0.03228283333333333699;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.90826892852783203) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                  sum += (double)0.3684991093749999669;
                } else {
                  sum += (double)0.2526411250000000219;
                }
              } else {
                sum += (double)0.09590444318181820527;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4477.67138671875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.58854484558105469) ) ) {
                sum += (double)0.4084446203703704925;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12787.05615234375) ) ) {
                  sum += (double)0.2219657499999999895;
                } else {
                  sum += (double)0.3411368281250000689;
                }
              }
            } else {
              sum += (double)0.2010696538461538563;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.432500004768371582) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05985000170767307281) ) ) {
              sum += (double)0.1885177187499999518;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3435.3092041015625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.3970184326171875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.84556102752685547) ) ) {
                    sum += (double)0.07291637500000000549;
                  } else {
                    sum += (double)0.155375383333333339;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.505729794502258301) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1697499975562095642) ) ) {
                      sum += (double)0.04298502777777777478;
                    } else {
                      sum += (double)0.008340328125000000953;
                    }
                  } else {
                    sum += (double)0.09422926562500000269;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3441070020198822021) ) ) {
                  sum += (double)0.003967060606060606766;
                } else {
                  sum += (double)0.02464873999999999885;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.74840354919433594) ) ) {
              sum += (double)0.2247813839285714155;
            } else {
              sum += (double)0.0733382386363636285;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4716695547103881836) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6142930090427398682) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.751275539398193359) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5180985033512115479) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3143.6741943359375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1242299787700176239) ) ) {
                sum += (double)0.4504780333333333053;
              } else {
                sum += (double)0.5510205882352940954;
              }
            } else {
              sum += (double)0.5623035576923076651;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
              sum += (double)0.5548513706896551767;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.7026578125000000341;
              } else {
                sum += (double)0.6340395899999999862;
              }
            }
          }
        } else {
          sum += (double)0.4186083020833332724;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.595028400421142578) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.6628658333333332653;
            } else {
              sum += (double)0.7209627687499998716;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704944297671318054) ) ) {
              sum += (double)0.5823729021739131317;
            } else {
              sum += (double)0.6776996562500000598;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.259391546249389648) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500026226043701) ) ) {
              sum += (double)0.7849352812500000054;
            } else {
              sum += (double)0.8576251022727273687;
            }
          } else {
            sum += (double)0.7601309130434783512;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1389.970458984375) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.56942903995513916) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.44355440139770508) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5369710028171539307) ) ) {
              sum += (double)0.4689386527777777425;
            } else {
              sum += (double)0.6030958173076922391;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18078.712890625) ) ) {
              sum += (double)0.4863322395833333811;
            } else {
              sum += (double)0.2471928382352941156;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.09658515453338623) ) ) {
            sum += (double)0.2383995576923076676;
          } else {
            sum += (double)0.3686013055555556472;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.23130345344543457) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.962744355201721191) ) ) {
            sum += (double)0.4606061874999999861;
          } else {
            sum += (double)0.3722088375000000005;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-999.417694091796875) ) ) {
            sum += (double)0.2079154000000000002;
          } else {
            sum += (double)0.1049658166666666559;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831795006990432739) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.26910400390625) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410134956240653992) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8036.1923828125) ) ) {
            sum += (double)0.1689475833333333732;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116264984011650085) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3222142010927200317) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.261111259460449219) ) ) {
                  sum += (double)0.0113494705882352942;
                } else {
                  sum += (double)0.002952799999999999783;
                }
              } else {
                sum += (double)0.03483365000000000766;
              }
            } else {
              sum += (double)0.09873845588235292958;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3143.8194580078125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001399999950081110001) ) ) {
              sum += (double)0.4619372124999999718;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5513.560302734375) ) ) {
                  sum += (double)0.3563989531250000287;
                } else {
                  sum += (double)0.2938660416666666886;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6475077569484710693) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3028513491153717041) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.81830215454101562) ) ) {
                      sum += (double)0.1523358888888889096;
                    } else {
                      sum += (double)0.2383963750000000215;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5280499905347824097) ) ) {
                      sum += (double)0.2210155312500000357;
                    } else {
                      sum += (double)0.3281928599999999752;
                    }
                  }
                } else {
                  sum += (double)0.08205954545454546833;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.948511123657226562) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5289336740970611572) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2557062357664108276) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7626999914646148682) ) ) {
                    sum += (double)0.08623304411764705357;
                  } else {
                    sum += (double)0.174197545454545466;
                  }
                } else {
                  sum += (double)0.2969110769230769442;
                }
              } else {
                sum += (double)0.1004895476190476172;
              }
            } else {
              sum += (double)0.03255528999999999368;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7491518259048461914) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
            sum += (double)0.5211333636363636446;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.225694537162780762) ) ) {
                  sum += (double)0.3610755499999999674;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3271.983642578125) ) ) {
                    sum += (double)0.3925627794117647062;
                  } else {
                    sum += (double)0.4527337159090908392;
                  }
                }
              } else {
                sum += (double)0.4819029999999999148;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
                sum += (double)0.1575887638888888997;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3303960114717483521) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.143799997866153717) ) ) {
                    sum += (double)0.2075332499999999747;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.364130496978759766) ) ) {
                      sum += (double)0.3956033269230768701;
                    } else {
                      sum += (double)0.3497770000000000046;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6341.727294921875) ) ) {
                    sum += (double)0.4444622583333333043;
                  } else {
                    sum += (double)0.3346201052631578854;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2716.798095703125) ) ) {
            sum += (double)0.221454625000000016;
          } else {
            sum += (double)0.02830228260869565096;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.17105197906494141) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18323.6982421875) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2740170657634735107) ) ) {
              sum += (double)0.2203604673913043821;
            } else {
              sum += (double)0.03593533333333333302;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.63783788681030273) ) ) {
              sum += (double)0.06803705000000000169;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10272.328125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4782204926013946533) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2496183142066001892) ) ) {
                    sum += (double)0.00657444736842105297;
                  } else {
                    sum += (double)0.0394136911764705819;
                  }
                } else {
                  sum += (double)0.1005796333333333209;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07303249835968017578) ) ) {
                  sum += (double)0.002785793103448276371;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4495754390954971313) ) ) {
                    sum += (double)0.009722150000000000583;
                  } else {
                    sum += (double)0.02692006818181818736;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4593500047922134399) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4152000099420547485) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4954834580421447754) ) ) {
                sum += (double)0.06157247058823529101;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-122293.81640625) ) ) {
                  sum += (double)0.04619629629629629086;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.72727203369140625) ) ) {
                    sum += (double)0.02381305555555555606;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
                      sum += (double)0.003484593023255815047;
                    } else {
                      sum += (double)0.01897709375000000351;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1161219999194145203) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8570999801158905029) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1464499980211257935) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003912545454545454139;
                    }
                  } else {
                    sum += (double)0.007698666666666667026;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)198.5346145629882812) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24727.8515625) ) ) {
                      sum += (double)0.01533602380952380981;
                    } else {
                      sum += (double)0.006750571428571429562;
                    }
                  } else {
                    sum += (double)0.003253249999999999632;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.72907829284667969) ) ) {
                  sum += (double)0.02294458035714285263;
                } else {
                  sum += (double)0.008095343750000000976;
                }
              }
            }
          } else {
            sum += (double)0.07297051666666666547;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3930500000715255737) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09960000216960906982) ) ) {
            sum += (double)0.1326550113636363881;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688499972224235535) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3128.0732421875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.98443222045898438) ) ) {
                  sum += (double)0.1365144687499999787;
                } else {
                  sum += (double)0.03622542857142857509;
                }
              } else {
                sum += (double)0.02393984090909090715;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.00641059875488281) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3808999955654144287) ) ) {
                  sum += (double)0.01524700000000000014;
                } else {
                  sum += (double)0.03898178124999999994;
                }
              } else {
                sum += (double)0.006119397058823530626;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2838499993085861206) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3323068767786026001) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549024969339370728) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6986500024795532227) ) ) {
                  sum += (double)0.08772071428571427687;
                } else {
                  sum += (double)0.1512080000000000091;
                }
              } else {
                sum += (double)0.2397409736842105454;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.23237228393554688) ) ) {
                sum += (double)0.07600087499999999552;
              } else {
                sum += (double)0.03595554999999998891;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.46325492858886719) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2730900049209594727) ) ) {
                sum += (double)0.2166079124999999994;
              } else {
                sum += (double)0.3061121249999999572;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.277158007025718689) ) ) {
                sum += (double)0.07081736538461537445;
              } else {
                sum += (double)0.1513761052631578952;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.605323493480682373) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2513464391231536865) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4858189970254898071) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8122999966144561768) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.284993171691894531) ) ) {
                    sum += (double)0.4961670000000000247;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1416326165199279785) ) ) {
                      sum += (double)0.5418265714285713797;
                    } else {
                      sum += (double)0.60043114285714283;
                    }
                  }
                } else {
                  sum += (double)0.4929389791666666798;
                }
              } else {
                sum += (double)0.4684618088235293354;
              }
            } else {
              sum += (double)0.4498654464285713472;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02249999996274709702) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.6732511979166666549;
              } else {
                sum += (double)0.5948880749999999606;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.837002038955688477) ) ) {
                sum += (double)0.5695163194444443633;
              } else {
                sum += (double)0.4714494117647060056;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.72527503967285156) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1974976956844329834) ) ) {
              sum += (double)0.3794353749999999081;
            } else {
              sum += (double)0.5108350138888888559;
            }
          } else {
            sum += (double)0.2956760108695651312;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07579908519983291626) ) ) {
            sum += (double)0.7327207727272727622;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1007790975272655487) ) ) {
              sum += (double)0.6258167500000000327;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192535549402236938) ) ) {
                sum += (double)0.7158901481481481088;
              } else {
                sum += (double)0.6601070166666666017;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
              sum += (double)0.766401930000000009;
            } else {
              sum += (double)0.8445563124999999616;
            }
          } else {
            sum += (double)0.69216295312499998;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6748605072498321533) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.41014003753662109) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3208.8759765625) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3435499966144561768) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4458499997854232788) ) ) {
                sum += (double)0.5812666093750000762;
              } else {
                sum += (double)0.5069100131578947455;
              }
            } else {
              sum += (double)0.4202305882352940225;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212082743644714355) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5294750034809112549) ) ) {
                sum += (double)0.2794332916666666944;
              } else {
                sum += (double)0.4558382656249999609;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
                sum += (double)0.3324218303571428446;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.393684148788452148) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1701499968767166138) ) ) {
                    sum += (double)0.1261449130434782739;
                  } else {
                    sum += (double)0.284912323529411815;
                  }
                } else {
                  sum += (double)0.06646888235294119707;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4893674999475479126) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.26190471649169922) ) ) {
                sum += (double)0.03433955555555554678;
              } else {
                sum += (double)0.1161211057692307647;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4369.10009765625) ) ) {
                sum += (double)0.2252025416666666446;
              } else {
                sum += (double)0.1346493392857142646;
              }
            }
          } else {
            sum += (double)0.3584577968749999566;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.537678837776184082) ) ) {
          sum += (double)0.6652461499999999806;
        } else {
          sum += (double)0.4221567954545454304;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.997630119323730469) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2727259993553161621) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4797.262939453125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
            sum += (double)0.4363720277777777823;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1403499990701675415) ) ) {
              sum += (double)0.07652013235294118088;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4103499948978424072) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2186255007982254028) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1974449977278709412) ) ) {
                    sum += (double)0.309508975000000075;
                  } else {
                    sum += (double)0.1456429736842105305;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                    sum += (double)0.3299784999999999524;
                  } else {
                    sum += (double)0.406900824999999966;
                  }
                }
              } else {
                sum += (double)0.1405128333333333368;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.472727298736572266) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.233606338500976562) ) ) {
              sum += (double)0.3294226249999999689;
            } else {
              sum += (double)0.2033345999999999765;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06275000050663948059) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2407274991273880005) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1514080017805099487) ) ) {
                    sum += (double)0.03321789705882352561;
                  } else {
                    sum += (double)0.07594493749999998988;
                  }
                } else {
                  sum += (double)0.0122677692307692314;
                }
              } else {
                sum += (double)0.1104964375000000026;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500060558319092) ) ) {
                sum += (double)0.02433067187500000117;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.53125) ) ) {
                  sum += (double)0.2846028124999999687;
                } else {
                  sum += (double)0.1768764218750000505;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7543508708477020264) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3168849945068359375) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.06727147102355957) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.373944520950317383) ) ) {
                sum += (double)0.2868047499999999417;
              } else {
                sum += (double)0.4137274444444444255;
              }
            } else {
              sum += (double)0.2192943369565217293;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9152500033378601074) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08444999903440475464) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3383146971464157104) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801319897174835205) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1768983826041221619) ) ) {
                      sum += (double)0.5383845588235293134;
                    } else {
                      sum += (double)0.4364005113636364452;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525651663541793823) ) ) {
                      sum += (double)0.4853977159090909765;
                    } else {
                      sum += (double)0.5816829038461538426;
                    }
                  }
                } else {
                  sum += (double)0.3851528815789473925;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  sum += (double)0.4797255781249999962;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3315.48876953125) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2935499995946884155) ) ) {
                      sum += (double)0.4462061964285713445;
                    } else {
                      sum += (double)0.3622590937500000385;
                    }
                  } else {
                    sum += (double)0.3163240178571428696;
                  }
                }
              }
            } else {
              sum += (double)0.3152307499999999485;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.3510738365384614701;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.815078258514404297) ) ) {
              sum += (double)0.1981512666666666589;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0355500001460313797) ) ) {
                sum += (double)0.06314820312500001032;
              } else {
                sum += (double)0.03059683035714285543;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1119664981961250305) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
          sum += (double)0.09278235416666665014;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07178550213575363159) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000114552676678) ) ) {
                sum += (double)0.0293074583333333312;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4059811234474182129) ) ) {
                  sum += (double)0.01449392857142857254;
                } else {
                  sum += (double)0.004001652173913044196;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04431349970400333405) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8637999892234802246) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1973999962210655212) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.004030636363636363843;
                  }
                } else {
                  sum += (double)0.004347638888888889601;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.258331298828125) ) ) {
                  sum += (double)0.009948874999999999386;
                } else {
                  sum += (double)0.00336123913043478344;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07586650177836418152) ) ) {
              sum += (double)0.06870221666666666283;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1939499974250793457) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
                  sum += (double)0.002500000000000000486;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21760.7216796875) ) ) {
                    sum += (double)0.02630021874999999634;
                  } else {
                    sum += (double)0.007363403846153846778;
                  }
                }
              } else {
                sum += (double)0.04299329000000000345;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3850499987602233887) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
            sum += (double)0.2265421547619047293;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05704999901354312897) ) ) {
              sum += (double)0.1390034907407407261;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.24682235717773438) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14319.9345703125) ) ) {
                  sum += (double)0.1507933269230769258;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.179508090019226074) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81467151641845703) ) ) {
                      sum += (double)0.102782195652173905;
                    } else {
                      sum += (double)0.03261046341463413878;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4407.076904296875) ) ) {
                      sum += (double)0.02854875999999999595;
                    } else {
                      sum += (double)0.008701000000000002135;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-49131.1328125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)291.7464752197265625) ) ) {
                    sum += (double)0.03827712499999999518;
                  } else {
                    sum += (double)0.01550550000000000019;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9062663912773132324) ) ) {
                    sum += (double)0.02104481578947368578;
                  } else {
                    sum += (double)0.004217946428571429408;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3285745084285736084) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.220257982611656189) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8043999969959259033) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16559.876953125) ) ) {
                  sum += (double)0.3279874130434782264;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.04398155212402344) ) ) {
                    sum += (double)0.2532660400000000256;
                  } else {
                    sum += (double)0.1163536071428571406;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1199417114257812) ) ) {
                  sum += (double)0.04219910294117647925;
                } else {
                  sum += (double)0.1194491607142856987;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06165000051259994507) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.17786550521850586) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4297.91455078125) ) ) {
                    sum += (double)0.1057647261904761798;
                  } else {
                    sum += (double)0.03207359210526315035;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1991994976997375488) ) ) {
                    sum += (double)0.008243166666666667738;
                  } else {
                    sum += (double)0.03342541666666666578;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.196094997227191925) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.31298542022705078) ) ) {
                    sum += (double)0.1774983541666666775;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33858.240234375) ) ) {
                      sum += (double)0.1046513478260869545;
                    } else {
                      sum += (double)0.023195456140350873;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.34951019287109375) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2981500029563903809) ) ) {
                      sum += (double)0.1280838478260869773;
                    } else {
                      sum += (double)0.2652992031249999938;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.66360092163085938) ) ) {
                      sum += (double)0.05020481944444444428;
                    } else {
                      sum += (double)0.1335212870370370286;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.29755210876464844) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4840999990701675415) ) ) {
                sum += (double)0.2093328906249999899;
              } else {
                sum += (double)0.426537089285714266;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3669786453247070312) ) ) {
                sum += (double)0.23769531249999995;
              } else {
                sum += (double)0.1295887692307692018;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4056834876537322998) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.605323493480682373) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430997848510742188) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000006216578186) ) ) {
            sum += (double)0.6533535526315790154;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.22975540161132812) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5131184756755828857) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1531746909022331238) ) ) {
                  sum += (double)0.5389417058823529061;
                } else {
                  sum += (double)0.4519723999999999964;
                }
              } else {
                sum += (double)0.5456523583333331429;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8474000096321105957) ) ) {
                sum += (double)0.6261185178571427867;
              } else {
                sum += (double)0.5190753229166665816;
              }
            }
          }
        } else {
          sum += (double)0.4467132321428571307;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7634499967098236084) ) ) {
              sum += (double)0.6679931093750000048;
            } else {
              sum += (double)0.7318125178571428524;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7741999924182891846) ) ) {
              sum += (double)0.6984298970588236344;
            } else {
              sum += (double)0.5809624999999999373;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01594999991357326508) ) ) {
            sum += (double)0.8587340760869565104;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.213553845882415771) ) ) {
              sum += (double)0.8051168452380951246;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237499892711639404) ) ) {
                sum += (double)0.7967728970588234816;
              } else {
                sum += (double)0.7214380147058823134;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6085674762725830078) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94285726547241211) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6683313548564910889) ) ) {
            sum += (double)0.5219388611111109855;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
              sum += (double)0.399779447916666586;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.593137264251708984) ) ) {
                sum += (double)0.1501295119047618976;
              } else {
                sum += (double)0.3107357352941176321;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5202024877071380615) ) ) {
            sum += (double)0.2446595882352941287;
          } else {
            sum += (double)0.1311646923076922877;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          sum += (double)0.6431649583333333142;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.762895941734313965) ) ) {
            sum += (double)0.4682258289473684165;
          } else {
            sum += (double)0.3640952613636364021;
          }
        }
      }
    }
  }
  return sum;
}
