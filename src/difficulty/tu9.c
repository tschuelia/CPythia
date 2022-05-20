#include "header.h"
double predict_margin_unit9(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3225450068712234497) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2697004973888397217) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4294.59814453125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01725000049918889999) ) ) {
            sum += (double)0.4354028333333332945;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3439999967813491821) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1804774999618530273) ) ) {
                sum += (double)0.1844209444444444568;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1316999979317188263) ) ) {
                  sum += (double)0.2888523999999999536;
                } else {
                  sum += (double)0.3525351785714286312;
                }
              }
            } else {
              sum += (double)0.08370384722222221074;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            sum += (double)0.2634515526315789335;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114495038986206055) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3033.205810546875) ) ) {
                sum += (double)0.06270179687500000709;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03210000041872262955) ) ) {
                  sum += (double)0.007281630434782609962;
                } else {
                  sum += (double)0.01768882894736842348;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
                sum += (double)0.05569364473684211558;
              } else {
                sum += (double)0.216309365384615343;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2093.3089599609375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01319999992847442627) ) ) {
            sum += (double)0.4682836956521739813;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7023999989032745361) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4622500091791152954) ) ) {
                sum += (double)0.3232422211538461543;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.598749995231628418) ) ) {
                  sum += (double)0.4428508020833333281;
                } else {
                  sum += (double)0.3856055999999999373;
                }
              }
            } else {
              sum += (double)0.2691746000000000416;
            }
          }
        } else {
          sum += (double)0.1868084117647058895;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1314854994416236877) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07204350084066390991) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6835850775241851807) ) ) {
              sum += (double)0.09540891666666666271;
            } else {
              sum += (double)0.003148323529411765041;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03436249867081642151) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.427032470703125) ) ) {
                sum += (double)0.00348294736842105334;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.6884918212890625) ) ) {
                  sum += (double)0.002767346153846154087;
                } else {
                  sum += (double)0.002500000000000001353;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)156.9863662719726562) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16567.13330078125) ) ) {
                  sum += (double)0.01647573809523809538;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3763.1646728515625) ) ) {
                    sum += (double)0.009084172413793101947;
                  } else {
                    sum += (double)0.004494947368421053219;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29102.6904296875) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.003181346153846153525;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999919673427939) ) ) {
            sum += (double)0.11888415384615382;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.201899997889995575) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.39284038543701172) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.76666641235351562) ) ) {
                  sum += (double)0.02174765000000000031;
                } else {
                  sum += (double)0.03790476470588236002;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-61420.484375) ) ) {
                  sum += (double)0.01670374999999999985;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.93963623046875) ) ) {
                    sum += (double)0.01381845833333333363;
                  } else {
                    sum += (double)0.004377625000000000439;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7223899960517883301) ) ) {
                sum += (double)0.09754097916666666646;
              } else {
                sum += (double)0.01201933333333333499;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.72712421417236328) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10342.49951171875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.82293128967285156) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.66394710540771484) ) ) {
                sum += (double)0.2885241875000000289;
              } else {
                sum += (double)0.173593354166666658;
              }
            } else {
              sum += (double)0.3538490294117646595;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3517.2071533203125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02555000036954879761) ) ) {
                sum += (double)0.2272096413043478147;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195315062999725342) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1981955021619796753) ) ) {
                    sum += (double)0.03060084523809523602;
                  } else {
                    sum += (double)0.08875693749999997995;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.74859142303466797) ) ) {
                    sum += (double)0.1056574375000000066;
                  } else {
                    sum += (double)0.2041661249999999761;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
                sum += (double)0.06172169999999999046;
              } else {
                sum += (double)0.02051012500000000058;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6946.903564453125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1925434991717338562) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.89281749725341797) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.440549999475479126) ) ) {
                  sum += (double)0.04577001388888889133;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1922500059008598328) ) ) {
                    sum += (double)0.06961148214285714508;
                  } else {
                    sum += (double)0.1489527321428571471;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-43800.35546875) ) ) {
                  sum += (double)0.07861781578947367455;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1675809994339942932) ) ) {
                    sum += (double)0.01928627500000000203;
                  } else {
                    sum += (double)0.007558760000000000305;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3454653173685073853) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21983.5849609375) ) ) {
                  sum += (double)0.2526272500000000254;
                } else {
                  sum += (double)0.1469530749999999886;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.44927597045898438) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20203.748046875) ) ) {
                    sum += (double)0.2001974583333333557;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11879.0234375) ) ) {
                      sum += (double)0.04370352777777777864;
                    } else {
                      sum += (double)0.1193300384615384596;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2456170022487640381) ) ) {
                    sum += (double)0.02546530434782608501;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2883214950561523438) ) ) {
                      sum += (double)0.1226212205882352968;
                    } else {
                      sum += (double)0.03450544642857143046;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2657994925975799561) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.71428585052490234) ) ) {
                sum += (double)0.03695630000000000442;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4384.77099609375) ) ) {
                  sum += (double)0.01496047058823529383;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1731314957141876221) ) ) {
                    sum += (double)0.01219290000000000131;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2148009985685348511) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004870441176470588669;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.04817069047619047112;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3258903324604034424) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.49362850189208984) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4449169933795928955) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
              sum += (double)0.5691357083333331568;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801319897174835205) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7535499930381774902) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3434974998235702515) ) ) {
                      sum += (double)0.3862259285714286228;
                    } else {
                      sum += (double)0.4557779868421052982;
                    }
                  } else {
                    sum += (double)0.5031464583333333795;
                  }
                } else {
                  sum += (double)0.5512712343750000299;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.78338527679443359) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6486499905586242676) ) ) {
                    sum += (double)0.3862266666666667181;
                  } else {
                    sum += (double)0.4958660499999999471;
                  }
                } else {
                  sum += (double)0.3233120166666666462;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.540466010570526123) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675984978675842285) ) ) {
                    sum += (double)0.5586809444444444939;
                  } else {
                    sum += (double)0.4635129673913044868;
                  }
                } else {
                  sum += (double)0.5859902083333333733;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3446.002197265625) ) ) {
                  sum += (double)0.5809978906249999575;
                } else {
                  sum += (double)0.6330010227272726553;
                }
              }
            } else {
              sum += (double)0.4435363695652174143;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.55406379699707031) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35453367233276367) ) ) {
              sum += (double)0.327754088235294061;
            } else {
              sum += (double)0.4277358660714286054;
            }
          } else {
            sum += (double)0.2278331911764705509;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52560997009277344) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.074468135833740234) ) ) {
              sum += (double)0.6507035277777776239;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                sum += (double)0.7008610000000000673;
              } else {
                sum += (double)0.7403061842105262969;
              }
            }
          } else {
            sum += (double)0.6086675833333333729;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.8702177717391303968;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0860590226948261261) ) ) {
                sum += (double)0.7698207416666665859;
              } else {
                sum += (double)0.8648196153846152701;
              }
            }
          } else {
            sum += (double)0.7284347631578946825;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5482874810695648193) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.39827585220336914) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9621358513832092285) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3623910099267959595) ) ) {
              sum += (double)0.3274170399999999925;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0299500003457069397) ) ) {
                sum += (double)0.4078370874999999174;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4541274905204772949) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1753500029444694519) ) ) {
                    sum += (double)0.4831452812500000582;
                  } else {
                    sum += (double)0.4443991875000000147;
                  }
                } else {
                  sum += (double)0.5258615714285714837;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
              sum += (double)0.3469029799999999719;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.127035975456237793) ) ) {
                sum += (double)0.2924374000000000695;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.596519351005554199) ) ) {
                  sum += (double)0.05315365441176469335;
                } else {
                  sum += (double)0.1482421911764706113;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9495573043823242188) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4659.559814453125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.19463920593261719) ) ) {
                sum += (double)0.3351245119047619458;
              } else {
                sum += (double)0.1401151704545454402;
              }
            } else {
              sum += (double)0.0611719583333333386;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3860584944486618042) ) ) {
              sum += (double)0.02052085714285714624;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4153.7310791015625) ) ) {
                sum += (double)0.05197951785714285261;
              } else {
                sum += (double)0.1156308522727272775;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6908099949359893799) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.34494781494140625) ) ) {
              sum += (double)0.5294417499999999333;
            } else {
              sum += (double)0.3458663240740740275;
            }
          } else {
            sum += (double)0.6370022794117646825;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.958144009113311768) ) ) {
            sum += (double)0.4472442717391305056;
          } else {
            sum += (double)0.2819405540540541599;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714009970426559448) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2709535062313079834) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4232.335693359375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1492889970541000366) ) ) {
              sum += (double)0.3502155588235294492;
            } else {
              sum += (double)0.5219963676470588121;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410134956240653992) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1205499991774559021) ) ) {
                sum += (double)0.03314295454545454489;
              } else {
                sum += (double)0.0761801406250000035;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.476351499557495117) ) ) {
                  sum += (double)0.368030328125000028;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4577737748622894287) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3006476461887359619) ) ) {
                      sum += (double)0.2109490928571428336;
                    } else {
                      sum += (double)0.3444263863636363721;
                    }
                  } else {
                    sum += (double)0.1730234758064516376;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.78214168548583984) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9139.2216796875) ) ) {
                    sum += (double)0.1146746999999999767;
                  } else {
                    sum += (double)0.06199995312500000688;
                  }
                } else {
                  sum += (double)0.1997384772727272551;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            sum += (double)0.2827760199999999613;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3081163167953491211) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09604100137948989868) ) ) {
                  sum += (double)0.003190303571428571797;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.66666603088378906) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07619999721646308899) ) ) {
                      sum += (double)0.01213219047619047697;
                    } else {
                      sum += (double)0.02848050000000000234;
                    }
                  } else {
                    sum += (double)0.04682036764705881787;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7312069833278656006) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06399999931454658508) ) ) {
                    sum += (double)0.05113120833333332366;
                  } else {
                    sum += (double)0.1334489464285714133;
                  }
                } else {
                  sum += (double)0.02014561111111111413;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6638999879360198975) ) ) {
                sum += (double)0.1304517031249999848;
              } else {
                sum += (double)0.2331016250000000067;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244408607482910156) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.5312235735294117411;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1475.3360595703125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4350617825984954834) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3009179979562759399) ) ) {
                      sum += (double)0.4448685775862070146;
                    } else {
                      sum += (double)0.4097700357142857741;
                    }
                  } else {
                    sum += (double)0.3588409285714286301;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0778499990701675415) ) ) {
                    sum += (double)0.267090099999999997;
                  } else {
                    sum += (double)0.3869793999999999734;
                  }
                }
              } else {
                sum += (double)0.2691770312500000317;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0758500024676322937) ) ) {
              sum += (double)0.1390861551724137668;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.256648063659667969) ) ) {
                sum += (double)0.2535199583333332951;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3000107854604721069) ) ) {
                  sum += (double)0.4222075999999999052;
                } else {
                  sum += (double)0.3737774687500000081;
                }
              }
            }
          }
        } else {
          sum += (double)0.09059774218749999664;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1087980009615421295) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.51129913330078125) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06702649965882301331) ) ) {
            sum += (double)0.01502281666666666765;
          } else {
            sum += (double)0.09072981666666667111;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.67195892333984375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15421.60498046875) ) ) {
                sum += (double)0.02096071052631579001;
              } else {
                sum += (double)0.00355538461538461607;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8422999978065490723) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.00486520588235294163;
                }
              } else {
                sum += (double)0.005007833333333334622;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.8534088134765625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19993.9189453125) ) ) {
                sum += (double)0.06064634999999999471;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5075000077486038208) ) ) {
                  sum += (double)0.02956049999999999997;
                } else {
                  sum += (double)0.007480115384615384534;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09362250193953514099) ) ) {
                sum += (double)0.002500000000000000052;
              } else {
                sum += (double)0.008382107142857144269;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1452376097440719604) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18645.26171875) ) ) {
            sum += (double)0.2848361249999999956;
          } else {
            sum += (double)0.09684541666666665605;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8089.1904296875) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.64000034332275391) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30438.173828125) ) ) {
                  sum += (double)0.1501082840909090665;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11605.50927734375) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925999969244003296) ) ) {
                      sum += (double)0.02168520588235293978;
                    } else {
                      sum += (double)0.08182239393939395866;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.15715599060058594) ) ) {
                      sum += (double)0.03831350000000000033;
                    } else {
                      sum += (double)0.1687776176470588418;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-108144.5859375) ) ) {
                  sum += (double)0.08594621153846151995;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.6170578002929688) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3170499950647354126) ) ) {
                      sum += (double)0.01521019531250000084;
                    } else {
                      sum += (double)0.03462716176470587853;
                    }
                  } else {
                    sum += (double)0.005928171052631579958;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1826840043067932129) ) ) {
                  sum += (double)0.02201686764705881871;
                } else {
                  sum += (double)0.07543774999999999786;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5007768869400024414) ) ) {
                  sum += (double)0.01261345000000000174;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2796.81298828125) ) ) {
                    sum += (double)0.003668687500000000507;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
                sum += (double)0.2828238593749999863;
              } else {
                sum += (double)0.1083533478260869376;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2723495066165924072) ) ) {
                sum += (double)0.1185458225806451382;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8708.91357421875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8804205954074859619) ) ) {
                    sum += (double)0.1030193482142857109;
                  } else {
                    sum += (double)0.06135886607142856247;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.107704102993011475) ) ) {
                    sum += (double)0.04252627083333332392;
                  } else {
                    sum += (double)0.01462065909090909388;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.15350866317749023) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355575084686279297) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1904.32720947265625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05557066015899181366) ) ) {
                  sum += (double)0.4394890694444444357;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                    sum += (double)0.4735552499999999831;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.109810352325439453) ) ) {
                      sum += (double)0.5521584375000000433;
                    } else {
                      sum += (double)0.6113554374999999874;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007749999873340129852) ) ) {
                  sum += (double)0.3446818749999999709;
                } else {
                  sum += (double)0.4723409659090908597;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.47879886627197266) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2646.23583984375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4642.25390625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4557985067367553711) ) ) {
                      sum += (double)0.4334407812500000734;
                    } else {
                      sum += (double)0.4963371029411765556;
                    }
                  } else {
                    sum += (double)0.375993135416666624;
                  }
                } else {
                  sum += (double)0.5195344456521738818;
                }
              } else {
                sum += (double)0.2674954583333333247;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1249069347977638245) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01655000029131770134) ) ) {
                sum += (double)0.69107833333333335;
              } else {
                sum += (double)0.6117715555555555129;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06919999979436397552) ) ) {
                sum += (double)0.5100676136363636592;
              } else {
                sum += (double)0.5850274411764705418;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2060999944806098938) ) ) {
            sum += (double)0.1607098299999999702;
          } else {
            sum += (double)0.3037110714285713997;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.633001923561096191) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1850.73907470703125) ) ) {
              sum += (double)0.7183303846153845651;
            } else {
              sum += (double)0.6789627656250000198;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7615000009536743164) ) ) {
              sum += (double)0.6651611400000000396;
            } else {
              sum += (double)0.5394977666666667115;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.40386962890625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.361916422843933105) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0755500011146068573) ) ) {
                sum += (double)0.8449362692307691436;
              } else {
                sum += (double)0.7365628571428571858;
              }
            } else {
              sum += (double)0.7167381176470587478;
            }
          } else {
            sum += (double)0.8594718750000001073;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925795048475265503) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.288064956665039062) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            sum += (double)0.4348769558823529779;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.691678524017333984) ) ) {
              sum += (double)0.257142275862069003;
            } else {
              sum += (double)0.1447773124999999772;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4430529922246932983) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.43269157409667969) ) ) {
              sum += (double)0.1842624347826087028;
            } else {
              sum += (double)0.07297056250000000244;
            }
          } else {
            sum += (double)0.03749129166666666929;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2888.6907958984375) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2406499981880187988) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01604999974370002747) ) ) {
              sum += (double)0.5144983461538461533;
            } else {
              sum += (double)0.3012420588235294461;
            }
          } else {
            sum += (double)0.5293763611111110823;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.052555203437805176) ) ) {
              sum += (double)0.4641833750000000647;
            } else {
              sum += (double)0.4077611964285714485;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1417.17144775390625) ) ) {
              sum += (double)0.3301761578947368103;
            } else {
              sum += (double)0.1581912058823529699;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.3285369873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315154969692230225) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.3611713951612903761;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.335714340209960938) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.41836404800415039) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.178099997341632843) ) ) {
                  sum += (double)0.2421311666666666751;
                } else {
                  sum += (double)0.3314089117647058824;
                }
              } else {
                sum += (double)0.1842793369565217387;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1349734961986541748) ) ) {
                sum += (double)0.03586037499999999989;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1935499981045722961) ) ) {
                  sum += (double)0.2041171206896551515;
                } else {
                  sum += (double)0.07426127941176469127;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.20361995697021484) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2170500010251998901) ) ) {
              sum += (double)0.05087940000000000518;
            } else {
              sum += (double)0.3002662500000000123;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.788888931274414062) ) ) {
              sum += (double)0.141593013888888869;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.15731000155210495) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09604100137948989868) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000005140900612) ) ) {
                    sum += (double)0.003432499999999999787;
                  } else {
                    sum += (double)0.009016611111111112395;
                  }
                } else {
                  sum += (double)0.02632883695652173811;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958375051617622375) ) ) {
                  sum += (double)0.1109044000000000002;
                } else {
                  sum += (double)0.01701737500000000125;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.910048007965087891) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.4970000781249999666;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.94024658203125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2760.055419921875) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4372419863939285278) ) ) {
                      sum += (double)0.4147801500000000141;
                    } else {
                      sum += (double)0.3734037187499999466;
                    }
                  } else {
                    sum += (double)0.4840053750000000155;
                  }
                } else {
                  sum += (double)0.3298062222222222228;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.965280532836914062) ) ) {
                  sum += (double)0.3044369166666666682;
                } else {
                  sum += (double)0.3932484259259259596;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6159.728759765625) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6044500172138214111) ) ) {
                sum += (double)0.4427554999999999685;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2877244949340820312) ) ) {
                  sum += (double)0.2289653100000000052;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1795216426253318787) ) ) {
                    sum += (double)0.3884309285714286353;
                  } else {
                    sum += (double)0.3146251578947368288;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1279999986290931702) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.154356002807617188) ) ) {
                  sum += (double)0.2357164891304347754;
                } else {
                  sum += (double)0.08223328378378380599;
                }
              } else {
                sum += (double)0.280047847826086993;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.370220422744750977) ) ) {
            sum += (double)0.1640786203703703539;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4417.037353515625) ) ) {
              sum += (double)0.09496248333333331959;
            } else {
              sum += (double)0.01913346969696969394;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03509999997913837433) ) ) {
            sum += (double)0.2097244629629630153;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.70892429351806641) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.64553022384643555) ) ) {
                sum += (double)0.09266048387096774419;
              } else {
                sum += (double)0.02322046551724137736;
              }
            } else {
              sum += (double)0.1536706527777777498;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4803999960422515869) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.4357147216796875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21998.7939453125) ) ) {
                sum += (double)0.2052002700000000179;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12398.7353515625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1024000011384487152) ) ) {
                    sum += (double)0.01062144736842105322;
                  } else {
                    sum += (double)0.07322212499999999902;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07246400043368339539) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.375) ) ) {
                      sum += (double)0.003718750000000000267;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.93263435363769531) ) ) {
                      sum += (double)0.005774267857142858021;
                    } else {
                      sum += (double)0.01742905555555555527;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1949409991502761841) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                  sum += (double)0.03160079545454545086;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09597899764776229858) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21052.3662109375) ) ) {
                      sum += (double)0.005920010775862065422;
                    } else {
                      sum += (double)0.002500000000000000919;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23053.8740234375) ) ) {
                      sum += (double)0.01816853389830508023;
                    } else {
                      sum += (double)0.007069946808510640945;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2076945006847381592) ) ) {
                  sum += (double)0.07572344999999998383;
                } else {
                  sum += (double)0.01273161666666666747;
                }
              }
            }
          } else {
            sum += (double)0.1050733666666666538;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3738.986328125) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.11746025085449219) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.041284739971160889) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7890000045299530029) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.73787879943847656) ) ) {
                  sum += (double)0.1715931847826087098;
                } else {
                  sum += (double)0.3249084499999999598;
                }
              } else {
                sum += (double)0.09051266176470589009;
              }
            } else {
              sum += (double)0.04879065625000000156;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2426000013947486877) ) ) {
              sum += (double)0.03748552083333333423;
            } else {
              sum += (double)0.1074383333333333301;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.75) ) ) {
            sum += (double)0.0542743437499999884;
          } else {
            sum += (double)0.01393833333333333556;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3979768604040145874) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6145009994506835938) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.54369354248046875) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4757584929466247559) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1796.00299072265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09748411178588867) ) ) {
                  sum += (double)0.494548571428571393;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2649.2835693359375) ) ) {
                    sum += (double)0.6180496029411763903;
                  } else {
                    sum += (double)0.5501750499999999988;
                  }
                }
              } else {
                sum += (double)0.4194571666666666032;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1691978499293327332) ) ) {
                sum += (double)0.3114079687500000415;
              } else {
                sum += (double)0.4258206500000000228;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.687480926513671875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.312225580215454102) ) ) {
                sum += (double)0.5370708333333332751;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5477110147476196289) ) ) {
                  sum += (double)0.6099959117647059115;
                } else {
                  sum += (double)0.6845675972222222683;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7364000082015991211) ) ) {
                sum += (double)0.5548219907407406781;
              } else {
                sum += (double)0.4963974074074073983;
              }
            }
          }
        } else {
          sum += (double)0.3202967374999999839;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7899999916553497314) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09565000236034393311) ) ) {
              sum += (double)0.641680511904761941;
            } else {
              sum += (double)0.7052717380952381321;
            }
          } else {
            sum += (double)0.7319106785714285524;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5831313729286193848) ) ) {
            sum += (double)0.8754822352941176167;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.989513397216796875) ) ) {
              sum += (double)0.7764651973684211228;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05511769279837608337) ) ) {
                sum += (double)0.7763389166666666563;
              } else {
                sum += (double)0.8355357812499999426;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985099971294403076) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.946224212646484375) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.002782374620437622) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.527668356895446777) ) ) {
              sum += (double)0.482381020833333285;
            } else {
              sum += (double)0.5533291111111110494;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4845700114965438843) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06075000017881393433) ) ) {
                sum += (double)0.1252735781249999791;
              } else {
                sum += (double)0.2457942142857142964;
              }
            } else {
              sum += (double)0.3903891086956521872;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2175.5294189453125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.47017765045166016) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.3661189079284668) ) ) {
                sum += (double)0.3140615781249999627;
              } else {
                sum += (double)0.4820962187499999718;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10482.3525390625) ) ) {
                sum += (double)0.2946017613636363053;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4574.41796875) ) ) {
                  sum += (double)0.0379223970588235329;
                } else {
                  sum += (double)0.2294809124999999672;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.75) ) ) {
              sum += (double)0.09422150925925924791;
            } else {
              sum += (double)0.03396247222222222029;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
          sum += (double)0.5773092870370369889;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
            sum += (double)0.3073291818181818069;
          } else {
            sum += (double)0.437834282608695613;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348525017499923706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.287614822387695312) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1970.0625) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2697004973888397217) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003899999894201755524) ) ) {
              sum += (double)0.4632516999999999885;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3913500010967254639) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2057824954390525818) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4783000051975250244) ) ) {
                    sum += (double)0.3001174062499999962;
                  } else {
                    sum += (double)0.1712429736842105421;
                  }
                } else {
                  sum += (double)0.3306242777777778086;
                }
              } else {
                sum += (double)0.1127495576923076837;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.380365371704101562) ) ) {
              sum += (double)0.2159014907407407202;
            } else {
              sum += (double)0.08867351041666665656;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008400000166147947311) ) ) {
            sum += (double)0.4964579000000000075;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4863999933004379272) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4249.919921875) ) ) {
                sum += (double)0.3552599166666666197;
              } else {
                sum += (double)0.2324677500000000563;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.252304315567016602) ) ) {
                sum += (double)0.4350335606060606319;
              } else {
                sum += (double)0.3472107651515151661;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.625) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
            sum += (double)0.1264015434782608527;
          } else {
            sum += (double)0.2832739772727272953;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1243.06707763671875) ) ) {
            sum += (double)0.08069902380952380383;
          } else {
            sum += (double)0.01492686111111111297;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050034984946250916) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.54999923706054688) ) ) {
          sum += (double)0.1148606022727272635;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07213700190186500549) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8632999956607818604) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1657500043511390686) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.31944465637207031) ) ) {
                    sum += (double)0.002792642857142856819;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                } else {
                  sum += (double)0.003552312500000000348;
                }
              } else {
                sum += (double)0.004578593750000000198;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.37163543701171875) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7642.7451171875) ) ) {
                  sum += (double)0.01890032608695652386;
                } else {
                  sum += (double)0.006631772727272727472;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2134999930858612061) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)47.35808372497558594) ) ) {
                    sum += (double)0.003802638888888888388;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  sum += (double)0.009151236842105264085;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07574350014328956604) ) ) {
              sum += (double)0.1146918593749999965;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7528499960899353027) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                  sum += (double)0.01878432894736841927;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11508.9462890625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09455100074410438538) ) ) {
                      sum += (double)0.005792833333333333862;
                    } else {
                      sum += (double)0.01234769444444444586;
                    }
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              } else {
                sum += (double)0.06354262499999999148;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2281983122229576111) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1734884977340698242) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.744450002908706665) ) ) {
              sum += (double)0.1921805535714285751;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8336000144481658936) ) ) {
                sum += (double)0.02437060294117647172;
              } else {
                sum += (double)0.06707631249999999878;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9648.677734375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)92.98411178588867188) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.5490570068359375) ) ) {
                  sum += (double)0.2549903552631578862;
                } else {
                  sum += (double)0.3445868970588235047;
                }
              } else {
                sum += (double)0.1724844531250000201;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1712931767106056213) ) ) {
                sum += (double)0.1121032386363636363;
              } else {
                sum += (double)0.247813892857142809;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33151340484619141) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12606.69873046875) ) ) {
              sum += (double)0.3421099666666666539;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4342.843017578125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.557490915060043335) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2081554979085922241) ) ) {
                    sum += (double)0.03519383333333333391;
                  } else {
                    sum += (double)0.1477976124999999807;
                  }
                } else {
                  sum += (double)0.2513081184210526065;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4709499925374984741) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2836500108242034912) ) ) {
                    sum += (double)0.006287416666666666848;
                  } else {
                    sum += (double)0.02574301250000000235;
                  }
                } else {
                  sum += (double)0.1457088823529411603;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1792500019073486328) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1363689973950386047) ) ) {
                  sum += (double)0.04762879347826085713;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.52421760559082031) ) ) {
                    sum += (double)0.03716561111111112148;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12659.392578125) ) ) {
                      sum += (double)0.02110933823529411932;
                    } else {
                      sum += (double)0.007001263636363637757;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8161128759384155273) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.48081398010253906) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20366.4208984375) ) ) {
                      sum += (double)0.1605586973684210439;
                    } else {
                      sum += (double)0.0614948857142857061;
                    }
                  } else {
                    sum += (double)0.0369398362068965383;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.16949176788330078) ) ) {
                    sum += (double)0.05167850000000000915;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2222500070929527283) ) ) {
                      sum += (double)0.01958623529411764735;
                    } else {
                      sum += (double)0.006042166666666666172;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5728.1005859375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2846674919128417969) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4691499918699264526) ) ) {
                    sum += (double)0.228603930555555529;
                  } else {
                    sum += (double)0.1158464285714285724;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4746134430170059204) ) ) {
                    sum += (double)0.1046694117647058997;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2679000049829483032) ) ) {
                      sum += (double)0.04771278333333332788;
                    } else {
                      sum += (double)0.01651372727272727367;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2382.465576171875) ) ) {
                  sum += (double)0.0225857307692307642;
                } else {
                  sum += (double)0.003068718750000000266;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4264215826988220215) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2082.9490966796875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
              sum += (double)0.6481711730769230684;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450732499361038208) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8333500027656555176) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3736329972743988037) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.024358987808227539) ) ) {
                      sum += (double)0.4674794062500000624;
                    } else {
                      sum += (double)0.3947446323529411605;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06560000032186508179) ) ) {
                      sum += (double)0.5393325208333332732;
                    } else {
                      sum += (double)0.4662774487179487393;
                    }
                  }
                } else {
                  sum += (double)0.390858269230769273;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.19097232818603516) ) ) {
                  sum += (double)0.4931894687500000263;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5594.947265625) ) ) {
                    sum += (double)0.5016565657894735963;
                  } else {
                    sum += (double)0.5904706818181817418;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.664864778518676758) ) ) {
              sum += (double)0.4759115681818181787;
            } else {
              sum += (double)0.2706680555555555645;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7423500120639801025) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.30850982666015625) ) ) {
              sum += (double)0.3140452115384615439;
            } else {
              sum += (double)0.3765117031249999857;
            }
          } else {
            sum += (double)0.2166763437499999723;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.269365459680557251) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1346.31195068359375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6486239731311798096) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0828863196074962616) ) ) {
                  sum += (double)0.6613616206896552052;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                    sum += (double)0.566046249999999973;
                  } else {
                    sum += (double)0.6159757750000000032;
                  }
                }
              } else {
                sum += (double)0.6934124516129033244;
              }
            } else {
              sum += (double)0.7140164326923077454;
            }
          } else {
            sum += (double)0.5425757236842104758;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.784722208976745605) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04414661228656768799) ) ) {
                sum += (double)0.880518985294117762;
              } else {
                sum += (double)0.8274704999999997757;
              }
            } else {
              sum += (double)0.7565438833333331115;
            }
          } else {
            sum += (double)0.6604047968749999775;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4779460132122039795) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7474934756755828857) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.285937309265136719) ) ) {
            sum += (double)0.3954463125000000079;
          } else {
            sum += (double)0.2567656250000000528;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127567529678344727) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.3791202261904761395;
            } else {
              sum += (double)0.15897104629629627;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3539.998046875) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409500017762184143) ) ) {
                sum += (double)0.2143000138888888906;
              } else {
                sum += (double)0.094846899999999984;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1766.89532470703125) ) ) {
                sum += (double)0.06739456666666666929;
              } else {
                sum += (double)0.01992203000000000029;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.690724492073059082) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17043304443359375) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.154937982559204102) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5439620018005371094) ) ) {
                sum += (double)0.474541374999999932;
              } else {
                sum += (double)0.5902536739130433974;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
                sum += (double)0.4123119761904761593;
              } else {
                sum += (double)0.2390885357142857603;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18746.4541015625) ) ) {
              sum += (double)0.4157476111111110817;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.67499923706054688) ) ) {
                sum += (double)0.2547380588235294008;
              } else {
                sum += (double)0.1349816964285714405;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.137833654880523682) ) ) {
            sum += (double)0.6850198392857144158;
          } else {
            sum += (double)0.4571695535714285774;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2476689964532852173) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1231920011341571808) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.2371826171875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.51773834228515625) ) ) {
              sum += (double)0.08408669642857143078;
            } else {
              sum += (double)0.02783878333333333552;
            }
          } else {
            sum += (double)0.008653437500000001406;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003999999957159161568) ) ) {
              sum += (double)0.4543709411764704775;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.29373264312744141) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.49939107894897461) ) ) {
                  sum += (double)0.2461208863636363542;
                } else {
                  sum += (double)0.3666266764705882752;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2169800028204917908) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6176.078369140625) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9033.97021484375) ) ) {
                      sum += (double)0.163923865384615397;
                    } else {
                      sum += (double)0.0476121911764705863;
                    }
                  } else {
                    sum += (double)0.1966078421052631642;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
                    sum += (double)0.2099003888888889002;
                  } else {
                    sum += (double)0.2496917166666666743;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.460684299468994141) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6432999968528747559) ) ) {
                sum += (double)0.2395748611111111204;
              } else {
                sum += (double)0.1059077583333333378;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4627000093460083008) ) ) {
                sum += (double)0.0180679062500000015;
              } else {
                sum += (double)0.10764446052631578;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9385171830654144287) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2502.2772216796875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4438201934099197388) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3318.81396484375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5842500030994415283) ) ) {
                    sum += (double)0.3913176333333333035;
                  } else {
                    sum += (double)0.4447795454545454552;
                  }
                } else {
                  sum += (double)0.4772755166666666771;
                }
              } else {
                sum += (double)0.359213800000000083;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3255925029516220093) ) ) {
                sum += (double)0.3237385468750000328;
              } else {
                sum += (double)0.4080287375000000161;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.608642578125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.26771974563598633) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56305122375488281) ) ) {
                  sum += (double)0.3654287068965517138;
                } else {
                  sum += (double)0.4704866166666666349;
                }
              } else {
                sum += (double)0.2678965096153845815;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.154356002807617188) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7189500033855438232) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03234999906271696091) ) ) {
                    sum += (double)0.3859021923076922933;
                  } else {
                    sum += (double)0.2864561124999999708;
                  }
                } else {
                  sum += (double)0.1992178043478261273;
                }
              } else {
                sum += (double)0.1424720795454545441;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3035.47314453125) ) ) {
            sum += (double)0.1693393874999999382;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631305098533630371) ) ) {
              sum += (double)0.008924394736842106851;
            } else {
              sum += (double)0.08489678124999999742;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.13558950275182724) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
            sum += (double)0.08982741666666665958;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07204350084066390991) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04489400051534175873) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.22280502319335938) ) ) {
                  sum += (double)0.004954589285714286993;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959500014781951904) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.002895527777777777683;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.23636436462402344) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14438.5947265625) ) ) {
                    sum += (double)0.01460034615384615299;
                  } else {
                    sum += (double)0.004721903225806452914;
                  }
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31921.4296875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)160.9301528930664062) ) ) {
                  sum += (double)0.1218036458333333211;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)378.0294189453125) ) ) {
                    sum += (double)0.0364774125000000074;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13615.01806640625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5742000043392181396) ) ) {
                    sum += (double)0.04100733928571427545;
                  } else {
                    sum += (double)0.01412780000000000112;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1085529997944831848) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08630049973726272583) ) ) {
                      sum += (double)0.007474499999999999374;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5850000083446502686) ) ) {
                      sum += (double)0.009230021739130435388;
                    } else {
                      sum += (double)0.0185555416666666681;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6853500008583068848) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.96142387390136719) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4893000125885009766) ) ) {
                sum += (double)0.1926638690476190907;
              } else {
                sum += (double)0.03121770192307691746;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29549.560546875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.8195037841796875) ) ) {
                  sum += (double)0.1412022142857142781;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)108.8245086669921875) ) ) {
                    sum += (double)0.04062651785714286451;
                  } else {
                    sum += (double)0.005532394736842105067;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9816.90673828125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05128192901611328) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662285029888153076) ) ) {
                      sum += (double)0.03152539130434781761;
                    } else {
                      sum += (double)0.06127933695652174745;
                    }
                  } else {
                    sum += (double)0.0136204687500000015;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2124499976634979248) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4882.724609375) ) ) {
                      sum += (double)0.005445809523809524641;
                    } else {
                      sum += (double)0.002855347826086956919;
                    }
                  } else {
                    sum += (double)0.01197988333333333336;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7548000216484069824) ) ) {
              sum += (double)0.1909251099999999535;
            } else {
              sum += (double)0.07345325833333332666;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4405913949012756348) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0610499996691942215) ) ) {
            sum += (double)0.06202593750000000294;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)100.5259742736816406) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9317.884765625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16381.51171875) ) ) {
                  sum += (double)0.309900091666666655;
                } else {
                  sum += (double)0.2006227656249999769;
                }
              } else {
                sum += (double)0.3746115666666665622;
              }
            } else {
              sum += (double)0.1618166538461538739;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3738.986328125) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240500092506408691) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11477.89111328125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.13036537170410156) ) ) {
                  sum += (double)0.1138814843750000083;
                } else {
                  sum += (double)0.04980269696969696902;
                }
              } else {
                sum += (double)0.202465513888888865;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4159500002861022949) ) ) {
                sum += (double)0.01257729545454545558;
              } else {
                sum += (double)0.09332823863636363626;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.58333301544189453) ) ) {
              sum += (double)0.04421520833333333206;
            } else {
              sum += (double)0.01024330952380952606;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45101499557495117) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1953.70166015625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00155000001541338861) ) ) {
              sum += (double)0.6061689342105264222;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4163989871740341187) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3978164941072463989) ) ) {
                  sum += (double)0.4755759523809524048;
                } else {
                  sum += (double)0.4208040357142856513;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4488.84423828125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1336500011384487152) ) ) {
                    sum += (double)0.4440482083333334162;
                  } else {
                    sum += (double)0.5154422840909090864;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7377000153064727783) ) ) {
                    sum += (double)0.5083249125000001145;
                  } else {
                    sum += (double)0.5801575833333333376;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4324948951612904158;
          }
        } else {
          sum += (double)0.3127360441176470496;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.81875038146972656) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558600008487701416) ) ) {
              sum += (double)0.5271793437499999735;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1379.94000244140625) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                  sum += (double)0.6083923875000001313;
                } else {
                  sum += (double)0.669644306818181767;
                }
              } else {
                sum += (double)0.71761610000000009;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1262.20928955078125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.617940068244934082) ) ) {
                    sum += (double)0.6957066874999998651;
                  } else {
                    sum += (double)0.7757308749999999309;
                  }
                } else {
                  sum += (double)0.6884981842105263317;
                }
              } else {
                sum += (double)0.808834881578947229;
              }
            } else {
              sum += (double)0.8471107272727270709;
            }
          }
        } else {
          sum += (double)0.4735369090909090639;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.217606782913208008) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4767065048217773438) ) ) {
            sum += (double)0.3394096607142856881;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1596999987959861755) ) ) {
              sum += (double)0.4194427166666666595;
            } else {
              sum += (double)0.4692029318181817898;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05749999918043613434) ) ) {
              sum += (double)0.132380767857142867;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.47017765045166016) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4515945017337799072) ) ) {
                  sum += (double)0.4506153611111110568;
                } else {
                  sum += (double)0.560961299999999996;
                }
              } else {
                sum += (double)0.3039660357142858205;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2859.90234375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.40334552526473999) ) ) {
                sum += (double)0.1408729999999999705;
              } else {
                sum += (double)0.313077666666666643;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
                sum += (double)0.04751130172413793595;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1321.2176513671875) ) ) {
                  sum += (double)0.2160358055555555712;
                } else {
                  sum += (double)0.08987863157894736277;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          sum += (double)0.6676718055555554976;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.818192660808563232) ) ) {
            sum += (double)0.4713206562500000252;
          } else {
            sum += (double)0.3770797678571429223;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.1796875) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1162029989063739777) ) ) {
            sum += (double)0.03140209999999999529;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2697.6461181640625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01779999956488609314) ) ) {
                sum += (double)0.4004762314814814816;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.19540214538574219) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1679759994149208069) ) ) {
                    sum += (double)0.2291027499999999939;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2087280005216598511) ) ) {
                      sum += (double)0.3454822361111111184;
                    } else {
                      sum += (double)0.2634601964285713804;
                    }
                  }
                } else {
                  sum += (double)0.1332609500000000169;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04485000018030405045) ) ) {
                sum += (double)0.08305831818181817761;
              } else {
                sum += (double)0.2473207065217390976;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3606865108013153076) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2476.0946044921875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3122.8629150390625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01309999963268637657) ) ) {
                  sum += (double)0.4669054499999999441;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1612500026822090149) ) ) {
                      sum += (double)0.3606031447368421294;
                    } else {
                      sum += (double)0.4122733281249999493;
                    }
                  } else {
                    sum += (double)0.2862771617647059674;
                  }
                }
              } else {
                sum += (double)0.4633261612903225024;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.682275295257568359) ) ) {
                sum += (double)0.3486600603448276603;
              } else {
                sum += (double)0.1678132900000000038;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1172.25115966796875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.355555534362792969) ) ) {
                  sum += (double)0.4594601458333333333;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2539.494873046875) ) ) {
                    sum += (double)0.6024832166666665989;
                  } else {
                    sum += (double)0.5265763529411764399;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  sum += (double)0.5098561666666666659;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6573499739170074463) ) ) {
                    sum += (double)0.4339109218750000219;
                  } else {
                    sum += (double)0.355932499999999985;
                  }
                }
              }
            } else {
              sum += (double)0.3581783846153845929;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.039836645126342773) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2250.46112060546875) ) ) {
            sum += (double)0.3322523437500000676;
          } else {
            sum += (double)0.1325415909090909283;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3627160042524337769) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3842.13720703125) ) ) {
              sum += (double)0.1145457500000000017;
            } else {
              sum += (double)0.01729860714285714335;
            }
          } else {
            sum += (double)0.1528340208333333339;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24091300368309021) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1048084981739521027) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.05039787292480469) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01190000027418136597) ) ) {
              sum += (double)0.1091772105263157933;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4576.538330078125) ) ) {
                sum += (double)0.01903232500000000271;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2666.22265625) ) ) {
                  sum += (double)0.002849928571428571398;
                } else {
                  sum += (double)0.01003897500000000033;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.84375) ) ) {
                sum += (double)0.0136505312499999986;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04634150117635726929) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02221600059419870377) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003036483333333334002;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.258331298828125) ) ) {
                      sum += (double)0.006854144230769230496;
                    } else {
                      sum += (double)0.002635869565217391439;
                    }
                  }
                } else {
                  sum += (double)0.01053725862068965492;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02359999995678663254) ) ) {
                sum += (double)0.005533543478260871153;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09270749986171722412) ) ) {
                  sum += (double)0.03065629761904760733;
                } else {
                  sum += (double)0.0096708333333333351;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2122134342789649963) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03090000059455633163) ) ) {
              sum += (double)0.2820819696969696921;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488875001668930054) ) ) {
                sum += (double)0.0306094444444444426;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5553.028564453125) ) ) {
                  sum += (double)0.1345439479166666841;
                } else {
                  sum += (double)0.0441398437500000046;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48786640167236328) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10622.55810546875) ) ) {
                sum += (double)0.2488237500000000102;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
                  sum += (double)0.0293504482758620705;
                } else {
                  sum += (double)0.1238377647058823555;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6215499937534332275) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5664281845092773438) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1905914992094039917) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4562217891216278076) ) ) {
                      sum += (double)0.02110538679245282587;
                    } else {
                      sum += (double)0.05853600000000000469;
                    }
                  } else {
                    sum += (double)0.09453789999999999416;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.57091236114501953) ) ) {
                    sum += (double)0.04077378409090910011;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)79.43859481811523438) ) ) {
                      sum += (double)0.02006905769230768119;
                    } else {
                      sum += (double)0.004660914285714287675;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29890.3486328125) ) ) {
                  sum += (double)0.1675709166666666528;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2697118371725082397) ) ) {
                    sum += (double)0.09082459722222220588;
                  } else {
                    sum += (double)0.01174305769230769327;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7413459122180938721) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7760.676513671875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.99587154388427734) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1442296653985977173) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13700.22119140625) ) ) {
                  sum += (double)0.31939302631578953;
                } else {
                  sum += (double)0.1746184558823529187;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3405715078115463257) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.03315353393554688) ) ) {
                    sum += (double)0.3739823088235293413;
                  } else {
                    sum += (double)0.2674142941176470556;
                  }
                } else {
                  sum += (double)0.4549585599999999563;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.66111183166503906) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22046.443359375) ) ) {
                  sum += (double)0.2100894264705882308;
                } else {
                  sum += (double)0.1321361413043478372;
                }
              } else {
                sum += (double)0.0672367625000000052;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05309999920427799225) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4477.67138671875) ) ) {
                sum += (double)0.1103296093750000123;
              } else {
                sum += (double)0.01416168421052631417;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.13275814056396484) ) ) {
                sum += (double)0.1248279210526315741;
              } else {
                sum += (double)0.2351566964285714267;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8875.2109375) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2888000011444091797) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                sum += (double)0.08068262499999999393;
              } else {
                sum += (double)0.02373791666666666758;
              }
            } else {
              sum += (double)0.2071147638888888864;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.132420837879180908) ) ) {
                sum += (double)0.07121277500000000593;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2698.156005859375) ) ) {
                  sum += (double)0.01461553225806451646;
                } else {
                  sum += (double)0.002499999999999999618;
                }
              }
            } else {
              sum += (double)0.0787495370370370068;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.47508847713470459) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1295367702841758728) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5293074846267700195) ) ) {
              sum += (double)0.5798304868421052527;
            } else {
              sum += (double)0.6653689199999999193;
            }
          } else {
            sum += (double)0.5334494500000001027;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1919.49127197265625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33012580871582031) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.84113693237304688) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1115093007683753967) ) ) {
                  sum += (double)0.4639480294117647174;
                } else {
                  sum += (double)0.5251293854166666497;
                }
              } else {
                sum += (double)0.589658636363636468;
              }
            } else {
              sum += (double)0.3858063500000000201;
            }
          } else {
            sum += (double)0.3398906875000000105;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7899999916553497314) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2048145830631256104) ) ) {
              sum += (double)0.6759099062500001365;
            } else {
              sum += (double)0.6204411764705881627;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.792082130908966064) ) ) {
              sum += (double)0.7626387352941176312;
            } else {
              sum += (double)0.6905743928571428381;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.865800261904761892;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7910380065441131592) ) ) {
                sum += (double)0.8229242500000000238;
              } else {
                sum += (double)0.7842591710526314319;
              }
            }
          } else {
            sum += (double)0.711097630952380988;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1588.35455322265625) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.16964244842529297) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4996239840984344482) ) ) {
            sum += (double)0.3722771826923076954;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.717613697052001953) ) ) {
              sum += (double)0.4077325416666666147;
            } else {
              sum += (double)0.5796704913793103708;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42400.00390625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6368684768676757812) ) ) {
              sum += (double)0.3503674464285713719;
            } else {
              sum += (double)0.5007313333333333061;
            }
          } else {
            sum += (double)0.1885814456521739124;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.206399202346801758) ) ) {
          sum += (double)0.415611203703703691;
        } else {
          sum += (double)0.1212031515151515138;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4385659992694854736) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947972774505615234) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2277995049953460693) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4204.657958984375) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004099999903701245785) ) ) {
            sum += (double)0.4077618541666666041;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1417634934186935425) ) ) {
              sum += (double)0.0690928500000000112;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                  sum += (double)0.3251999107142857226;
                } else {
                  sum += (double)0.2458295789473684545;
                }
              } else {
                sum += (double)0.1683492222222222057;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.1850079687500000014;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.11785697937011719) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5626392364501953125) ) ) {
                sum += (double)0.1078784299999999835;
              } else {
                sum += (double)0.06224460000000000409;
              }
            } else {
              sum += (double)0.02715974999999999639;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
            sum += (double)0.551815265151515133;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7177.92822265625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.275503501296043396) ) ) {
                  sum += (double)0.42254732291666669;
                } else {
                  sum += (double)0.3665117045454545641;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.742063522338867188) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2511.701416015625) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3327.4100341796875) ) ) {
                      sum += (double)0.3625378684210526226;
                    } else {
                      sum += (double)0.4859602692307692928;
                    }
                  } else {
                    sum += (double)0.2739198257575757856;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6392500102519989014) ) ) {
                    sum += (double)0.09643561904761903392;
                  } else {
                    sum += (double)0.2108225833333333687;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.792022705078125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.141514062881469727) ) ) {
                      sum += (double)0.3731341428571428032;
                    } else {
                      sum += (double)0.4602075689655171775;
                    }
                  } else {
                    sum += (double)0.3077645294117646868;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07584999874234199524) ) ) {
                    sum += (double)0.5141435151515150181;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3257.8267822265625) ) ) {
                      sum += (double)0.4628259523809524212;
                    } else {
                      sum += (double)0.3250004230769230618;
                    }
                  }
                }
              } else {
                sum += (double)0.2907644821428571613;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2589999884366989136) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.795594692230224609) ) ) {
              sum += (double)0.08996560227272726307;
            } else {
              sum += (double)0.03146621428571427792;
            }
          } else {
            sum += (double)0.1862733965517241186;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.85851192474365234) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8089.1904296875) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007100000279024243355) ) ) {
            sum += (double)0.4610441413043478986;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2550875097513198853) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.92422676086425781) ) ) {
                sum += (double)0.2019607187499999901;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16149.30517578125) ) ) {
                  sum += (double)0.1786636323529411652;
                } else {
                  sum += (double)0.07007762096774193539;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.47954559326171875) ) ) {
                  sum += (double)0.4194672613636363789;
                } else {
                  sum += (double)0.3418187352941176038;
                }
              } else {
                sum += (double)0.2451738355263157199;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1313244998455047607) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.40350866317749023) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4448.579833984375) ) ) {
                sum += (double)0.02067765624999999899;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.62272739410400391) ) ) {
                  sum += (double)0.002500000000000000486;
                } else {
                  sum += (double)0.00919314285714285806;
                }
              }
            } else {
              sum += (double)0.0353905972222222226;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.169858276844024658) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2729000002145767212) ) ) {
                sum += (double)0.2309396833333333676;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05184999853372573853) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2855.684326171875) ) ) {
                    sum += (double)0.0792187717391304308;
                  } else {
                    sum += (double)0.01792357894736841886;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2223310023546218872) ) ) {
                    sum += (double)0.1049699357142857142;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2136500030755996704) ) ) {
                      sum += (double)0.2894480192307692379;
                    } else {
                      sum += (double)0.1329753076923076704;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2215999960899353027) ) ) {
                sum += (double)0.008003368421052634019;
              } else {
                sum += (double)0.04237435937499999666;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.15273571014404297) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.20698833465576172) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1322000026702880859) ) ) {
                  sum += (double)0.2063677968749999814;
                } else {
                  sum += (double)0.1017507874999999951;
                }
              } else {
                sum += (double)0.02037563750000000173;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8082.197509765625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1447074934840202332) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.43620872497558594) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12756.70166015625) ) ) {
                      sum += (double)0.01373193749999999762;
                    } else {
                      sum += (double)0.005563566666666667007;
                    }
                  } else {
                    sum += (double)0.04507859999999999645;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13510.373046875) ) ) {
                    sum += (double)0.04708836111111111555;
                  } else {
                    sum += (double)0.122583652777777774;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06951799988746643066) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.002199999988079071045) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.003174961538461538394;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                    sum += (double)0.02432426086956521183;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.79642868041992188) ) ) {
                      sum += (double)0.00450723076923076945;
                    } else {
                      sum += (double)0.01035512500000000148;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1498659998178482056) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.36353874206542969) ) ) {
                sum += (double)0.02092885294117647135;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04489400051534175873) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8289999961853027344) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1600999981164932251) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.004303964285714286832;
                    }
                  } else {
                    sum += (double)0.01044553571428571623;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5058876723051071167) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08502500131726264954) ) ) {
                      sum += (double)0.02175555555555555576;
                    } else {
                      sum += (double)0.01164546000000000157;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24321.33203125) ) ) {
                      sum += (double)0.008915819444444446698;
                    } else {
                      sum += (double)0.002500000000000000919;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.50223541259765625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.68333244323730469) ) ) {
                  sum += (double)0.01685526666666666354;
                } else {
                  sum += (double)0.05338118421052630985;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6148858964443206787) ) ) {
                  sum += (double)0.02620579999999999785;
                } else {
                  sum += (double)0.007660580645161292612;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.132749997079372406) ) ) {
              sum += (double)0.1163453295454545261;
            } else {
              sum += (double)0.2638971195652173862;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802810013294219971) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7171.659423828125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200000017881393433) ) ) {
                    sum += (double)0.1826155000000000139;
                  } else {
                    sum += (double)0.09039114166666666061;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2909040004014968872) ) ) {
                    sum += (double)0.09292076785714283027;
                  } else {
                    sum += (double)0.03096701923076923546;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3240.664794921875) ) ) {
                  sum += (double)0.04504393478260869388;
                } else {
                  sum += (double)0.009041411764705882884;
                }
              }
            } else {
              sum += (double)0.1774986296296296451;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321519970893859863) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005499999970197677612) ) ) {
              sum += (double)0.4327383653846154088;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004859864711761475) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.34166717529296875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07499999925494194031) ) ) {
                    sum += (double)0.4955300526315788989;
                  } else {
                    sum += (double)0.5324531000000000125;
                  }
                } else {
                  sum += (double)0.5729946666666666522;
                }
              } else {
                sum += (double)0.473442812499999921;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
              sum += (double)0.5514811413043477772;
            } else {
              sum += (double)0.6589747166666667377;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2350522205233573914) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1065657660365104675) ) ) {
              sum += (double)0.4264001153846154191;
            } else {
              sum += (double)0.295515100000000086;
            }
          } else {
            sum += (double)0.514607375000000089;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.41611862182617188) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7125905156135559082) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
              sum += (double)0.6284062678571429306;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6801815032958984375) ) ) {
                sum += (double)0.7330603749999999863;
              } else {
                sum += (double)0.6780309722222220836;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.467915773391723633) ) ) {
                sum += (double)0.7937617499999999326;
              } else {
                sum += (double)0.8526632631578947574;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8030934929847717285) ) ) {
                sum += (double)0.7396387500000000115;
              } else {
                sum += (double)0.7785253333333332915;
              }
            }
          }
        } else {
          sum += (double)0.5330845937499999465;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474214851856231689) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07297277450561523) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9347115755081176758) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5711800456047058105) ) ) {
              sum += (double)0.5255343833333332437;
            } else {
              sum += (double)0.4094114891304347359;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1877500042319297791) ) ) {
              sum += (double)0.1918314078947368218;
            } else {
              sum += (double)0.37700108333333332;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.404633998870849609) ) ) {
            sum += (double)0.211601880434782591;
          } else {
            sum += (double)0.05471161111111109976;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09269999712705612183) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.190721631050109863) ) ) {
            sum += (double)0.4409953977272728087;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4387.794189453125) ) ) {
              sum += (double)0.3508229166666667065;
            } else {
              sum += (double)0.2307149166666666307;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6166909933090209961) ) ) {
              sum += (double)0.5454380517241378401;
            } else {
              sum += (double)0.6886057500000001275;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3740000128746032715) ) ) {
              sum += (double)0.3313907249999999971;
            } else {
              sum += (double)0.4786940769230769721;
            }
          }
        }
      }
    }
  }
  return sum;
}
