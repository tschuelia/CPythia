#include "prediction.h"
double predict_margin_unit4(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.05357074737548828) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.251733154058456421) ) ) {
            sum += (double)0.1341412173913043571;
          } else {
            sum += (double)0.2294049852941176804;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849000036716461182) ) ) {
            sum += (double)0.3527663333333333484;
          } else {
            sum += (double)0.211082249999999999;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2003000043332576752) ) ) {
          sum += (double)0.351591144736842165;
        } else {
          sum += (double)0.5423017222222221712;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2250704988837242126) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09359900280833244324) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-233636.6328125) ) ) {
                sum += (double)0.008289566666666667999;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)502.25) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1301.65118408203125) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003232678571428571242;
                    }
                  } else {
                    sum += (double)0.003253250000000000933;
                  }
                } else {
                  sum += (double)0.003690625000000000329;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4232000112533569336) ) ) {
                sum += (double)0.02648170000000000038;
              } else {
                sum += (double)0.005739055555555555403;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4590000063180923462) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.29100608825683594) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7749999761581420898) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                    sum += (double)0.08164649999999999685;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.5555572509765625) ) ) {
                      sum += (double)0.02677000663716812973;
                    } else {
                      sum += (double)0.06081480952380950711;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04164999909698963165) ) ) {
                    sum += (double)0.1449344642857142706;
                  } else {
                    sum += (double)0.04270907499999999912;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8003227114677429199) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3606999963521957397) ) ) {
                    sum += (double)0.05012841666666665447;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60238170623779297) ) ) {
                      sum += (double)0.03568061428571427801;
                    } else {
                      sum += (double)0.0136974999999999944;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2077500000596046448) ) ) {
                    sum += (double)0.00334458928571428624;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2477499991655349731) ) ) {
                      sum += (double)0.0176951578947368432;
                    } else {
                      sum += (double)0.007328285714285715999;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.09669951666666667944;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447162598371505737) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8432.82568359375) ) ) {
              sum += (double)0.1258786710526315911;
            } else {
              sum += (double)0.291759250000000081;
            }
          } else {
            sum += (double)0.02909259166666666729;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05250000022351741791) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1670.1795654296875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.42999982833862305) ) ) {
                    sum += (double)0.1126260124999999973;
                  } else {
                    sum += (double)0.0420873000000000011;
                  }
                } else {
                  sum += (double)0.006933875000000001669;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9070.30126953125) ) ) {
                  sum += (double)0.08340884090909089776;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15) ) ) {
                    sum += (double)0.1410082222222222292;
                  } else {
                    sum += (double)0.3079995138888889095;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5236.330322265625) ) ) {
                sum += (double)0.1411434852941176599;
              } else {
                sum += (double)0.3599321624999999858;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.953110396862030029) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3853085041046142578) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4182000011205673218) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5399999916553497314) ) ) {
                    sum += (double)0.003303040000000000576;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.018523246049880981) ) ) {
                      sum += (double)0.04728498749999999334;
                    } else {
                      sum += (double)0.0161169147727272706;
                    }
                  }
                } else {
                  sum += (double)0.07585182692307691765;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2066000029444694519) ) ) {
                  sum += (double)0.06116303333333331788;
                } else {
                  sum += (double)0.1519518365384615322;
                }
              }
            } else {
              sum += (double)0.2064107624999999557;
            }
          }
        } else {
          sum += (double)0.3007639038461538683;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4511609971523284912) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.49341392517089844) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4383.736083984375) ) ) {
                  sum += (double)0.419004249999999967;
                } else {
                  sum += (double)0.3735579807692307464;
                }
              } else {
                sum += (double)0.4766179779411765516;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2203340008854866028) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4752000123262405396) ) ) {
                  sum += (double)0.3533899347826086057;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6035999953746795654) ) ) {
                    sum += (double)0.2288281249999999378;
                  } else {
                    sum += (double)0.1360909444444444449;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.388118743896484375) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1630000025033950806) ) ) {
                      sum += (double)0.3182049659090909199;
                    } else {
                      sum += (double)0.3766616309523809214;
                    }
                  } else {
                    sum += (double)0.423358879999999882;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6398.06689453125) ) ) {
                    sum += (double)0.3552260624999999949;
                  } else {
                    sum += (double)0.2353587166666666897;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02020000014454126358) ) ) {
              sum += (double)0.5444326785714285188;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2919.195556640625) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4506257176399230957) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6493999958038330078) ) ) {
                    sum += (double)0.4366735294117646271;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1278000026941299438) ) ) {
                      sum += (double)0.4695818076923077289;
                    } else {
                      sum += (double)0.5001060681818181308;
                    }
                  }
                } else {
                  sum += (double)0.4148164404761904289;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3928724974393844604) ) ) {
                  sum += (double)0.4924633928571428565;
                } else {
                  sum += (double)0.5199817115384615107;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2680875062942504883) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01965000014752149582) ) ) {
              sum += (double)0.3214192812500000218;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1832548975944519043) ) ) {
                sum += (double)0.1064332875000000012;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-36445.59375) ) ) {
                  sum += (double)0.1242876499999999995;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19397.1982421875) ) ) {
                    sum += (double)0.274341041666666674;
                  } else {
                    sum += (double)0.1730175096153845904;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5212999880313873291) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351494967937469482) ) ) {
                sum += (double)0.1392844090909090837;
              } else {
                sum += (double)0.2671056617647059039;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1221077144145965576) ) ) {
                sum += (double)0.2610775250000000325;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2562000006437301636) ) ) {
                  sum += (double)0.4330057916666666395;
                } else {
                  sum += (double)0.3407323181818182056;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.63289952278137207) ) ) {
          sum += (double)0.241470916666666674;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3821935057640075684) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2949054986238479614) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.566734552383422852) ) ) {
                sum += (double)0.1678062916666666349;
              } else {
                sum += (double)0.0712557763157894708;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.56689548492431641) ) ) {
                sum += (double)0.01275503125000000161;
              } else {
                sum += (double)0.04731159000000000059;
              }
            }
          } else {
            sum += (double)0.1827906120689654912;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6696245074272155762) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5120110213756561279) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4952546656131744385) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.47998428344726562) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.24618434906005859) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1500495895743370056) ) ) {
                    sum += (double)0.5541968750000000332;
                  } else {
                    sum += (double)0.4812054519230768435;
                  }
                } else {
                  sum += (double)0.5934149130434783759;
                }
              } else {
                sum += (double)0.4493124666666666878;
              }
            } else {
              sum += (double)0.3452406875000000319;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2790.8548583984375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5828500092029571533) ) ) {
                sum += (double)0.4825188499999999436;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5801205039024353027) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1648500040173530579) ) ) {
                    sum += (double)0.5902846710526316043;
                  } else {
                    sum += (double)0.5265845357142856509;
                  }
                } else {
                  sum += (double)0.6409104027777777768;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1390.50323486328125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1572569683194160461) ) ) {
                  sum += (double)0.6029913749999998851;
                } else {
                  sum += (double)0.6808807499999999235;
                }
              } else {
                sum += (double)0.7102109166666665807;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
            sum += (double)0.4218989423076923151;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2712.0164794921875) ) ) {
              sum += (double)0.3229861718750000055;
            } else {
              sum += (double)0.1686093750000000058;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5541938543319702148) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7003479897975921631) ) ) {
              sum += (double)0.7360205000000000775;
            } else {
              sum += (double)0.6554781041666667418;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8562259972095489502) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05693181231617927551) ) ) {
                  sum += (double)0.8383025166666666639;
                } else {
                  sum += (double)0.8077347833333333726;
                }
              } else {
                sum += (double)0.8936261153846152272;
              }
            } else {
              sum += (double)0.7575083095238095421;
            }
          }
        } else {
          sum += (double)0.6006763482142856159;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.240384578704833984) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274629995226860046) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2991.6090087890625) ) ) {
          sum += (double)0.1761996160714285609;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.640350341796875) ) ) {
            sum += (double)0.1014414473684210477;
          } else {
            sum += (double)0.006784166666666666644;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.3084416389465332) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1131999976933002472) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.66756749153137207) ) ) {
                sum += (double)0.1667063833333333467;
              } else {
                sum += (double)0.05898567105263157612;
              }
            } else {
              sum += (double)0.311784681818181808;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1464.72674560546875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.84782600402832031) ) ) {
                sum += (double)0.2067288369565217221;
              } else {
                sum += (double)0.3254296041666666639;
              }
            } else {
              sum += (double)0.3858761071428571388;
            }
          }
        } else {
          sum += (double)0.432374095238095224;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3915744870901107788) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.67030239105224609) ) ) {
                sum += (double)0.0169307083333333358;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.39925384521484375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3671393692493438721) ) ) {
                      sum += (double)0.006893326923076923893;
                    } else {
                      sum += (double)0.003145137931034482689;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                      sum += (double)0.002623723021582735279;
                    } else {
                      sum += (double)0.004055312500000000757;
                    }
                  }
                } else {
                  sum += (double)0.007122958333333334439;
                }
              }
            } else {
              sum += (double)0.01710466964285714195;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2506.53955078125) ) ) {
                  sum += (double)0.05348751388888888653;
                } else {
                  sum += (double)0.1412784423076922924;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3200000077486038208) ) ) {
                  sum += (double)0.05022714999999999819;
                } else {
                  sum += (double)0.02037237500000000159;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1036614999175071716) ) ) {
                sum += (double)0.04668153571428571708;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6210120618343353271) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1992515027523040771) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1337740048766136169) ) ) {
                      sum += (double)0.009912852941176471602;
                    } else {
                      sum += (double)0.02074802083333333186;
                    }
                  } else {
                    sum += (double)0.03849555434782608865;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5463.33447265625) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)126.102691650390625) ) ) {
                      sum += (double)0.02218489285714286136;
                    } else {
                      sum += (double)0.004932473684210525629;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1513999998569488525) ) ) {
                      sum += (double)0.003571593749999999682;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
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
                  sum += (double)0.09916492857142855666;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2483280003070831299) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1317149996757507324) ) ) {
                      sum += (double)0.01540425000000000127;
                    } else {
                      sum += (double)0.03621827232142856706;
                    }
                  } else {
                    sum += (double)0.08041186538461538025;
                  }
                }
              } else {
                sum += (double)0.1049749374999999763;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96306800842285156) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                  sum += (double)0.03806311956521740009;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5018.7197265625) ) ) {
                    sum += (double)0.09267187037037036279;
                  } else {
                    sum += (double)0.1659837272727272828;
                  }
                }
              } else {
                sum += (double)0.2333270416666666236;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.075013816356658936) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4742.5205078125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)55.92789268493652344) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2584999948740005493) ) ) {
                    sum += (double)0.01802334999999999701;
                  } else {
                    sum += (double)0.0532334999999999961;
                  }
                } else {
                  sum += (double)0.00817674999999999999;
                }
              } else {
                sum += (double)0.109139749999999966;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6666.935302734375) ) ) {
                sum += (double)0.0305067368421052601;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2191334962844848633) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.01089363043478261059;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.62857151031494141) ) ) {
          sum += (double)0.1000990083333333086;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
            sum += (double)0.1787513369565217336;
          } else {
            sum += (double)0.3569963214285714059;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.34090900421142578) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3598954975605010986) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.5172606874999999826;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7307.54345703125) ) ) {
                    sum += (double)0.229056523809523821;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2069549933075904846) ) ) {
                      sum += (double)0.2940022884615384746;
                    } else {
                      sum += (double)0.3548531136363636262;
                    }
                  }
                } else {
                  sum += (double)0.1556046250000000242;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.041002750396728516) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                      sum += (double)0.3738828425925926346;
                    } else {
                      sum += (double)0.4236210326086956579;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4331.488525390625) ) ) {
                      sum += (double)0.3672225204081632777;
                    } else {
                      sum += (double)0.2884654621212121017;
                    }
                  }
                } else {
                  sum += (double)0.4668060468750000469;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.694798469543457031) ) ) {
                sum += (double)0.4769105000000000705;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01814999990165233612) ) ) {
                  sum += (double)0.618795972222222157;
                } else {
                  sum += (double)0.5466671944444444486;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                sum += (double)0.4866923951612903143;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.263685226440429688) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7212000191211700439) ) ) {
                    sum += (double)0.3392548611111110834;
                  } else {
                    sum += (double)0.40970224999999999;
                  }
                } else {
                  sum += (double)0.4643390781250000265;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
            sum += (double)0.0839356785714285708;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.17966499924659729) ) ) {
              sum += (double)0.1024627499999999913;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20063.3896484375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.08610820770263672) ) ) {
                    sum += (double)0.3322781249999999797;
                  } else {
                    sum += (double)0.2236395937499999764;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5815999805927276611) ) ) {
                    sum += (double)0.1170543392857142789;
                  } else {
                    sum += (double)0.198426515624999994;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
                  sum += (double)0.3921604999999999674;
                } else {
                  sum += (double)0.2874676818181818305;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.009433984756469727) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
            sum += (double)0.1083024848484848285;
          } else {
            sum += (double)0.2833274444444444651;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
            sum += (double)0.1646167727272727088;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.67684412002563477) ) ) {
              sum += (double)0.05942362499999999381;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.01043510437011719) ) ) {
                sum += (double)0.03056863636363636727;
              } else {
                sum += (double)0.01598773076923077144;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700002610683441162) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6373544931411743164) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.38656806945800781) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02444999944418668747) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2040.5130615234375) ) ) {
                sum += (double)0.6254685869565218548;
              } else {
                sum += (double)0.6872893586956522194;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5805689990520477295) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6584.76708984375) ) ) {
                  sum += (double)0.5144966354166666811;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860613346099853516) ) ) {
                    sum += (double)0.5160527916666667325;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061000004410743713) ) ) {
                      sum += (double)0.5670224264705882034;
                    } else {
                      sum += (double)0.6184884047619048086;
                    }
                  }
                }
              } else {
                sum += (double)0.6416088749999998564;
              }
            }
          } else {
            sum += (double)0.350021267857142937;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1763974651694297791) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2415.3333740234375) ) ) {
                sum += (double)0.6562194166666667217;
              } else {
                sum += (double)0.7057098833333331767;
              }
            } else {
              sum += (double)0.7250369374999999783;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.8727343295454544903;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0860590226948261261) ) ) {
                sum += (double)0.7669288913043478262;
              } else {
                sum += (double)0.8471401333333333783;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
            sum += (double)0.4897112589285715356;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
              sum += (double)0.4175583200000000383;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2552.708984375) ) ) {
                sum += (double)0.342757616666666709;
              } else {
                sum += (double)0.1317667968749999807;
              }
            }
          }
        } else {
          sum += (double)0.5619464519230770172;
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
              sum += (double)0.00982794444444444644;
            } else {
              sum += (double)0.1191725000000000145;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1157240010797977448) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.682208627462387085) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.89999961853027344) ) ) {
                    sum += (double)0.003103382352941176734;
                  } else {
                    sum += (double)0.002500000000000001787;
                  }
                } else {
                  sum += (double)0.006167909090909091084;
                }
              } else {
                sum += (double)0.01327300000000000008;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
                sum += (double)0.0501429782608695529;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07293700054287910461) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.20454597473144531) ) ) {
                      sum += (double)0.011122763157894738;
                    } else {
                      sum += (double)0.004409924528301887442;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1974000036716461182) ) ) {
                      sum += (double)0.0130682209302325561;
                    } else {
                      sum += (double)0.0257204764150943295;
                    }
                  }
                } else {
                  sum += (double)0.04279243269230767477;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2051995024085044861) ) ) {
              sum += (double)0.07826352678571427135;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2453135028481483459) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84999990463256836) ) ) {
                  sum += (double)0.01489438157894736742;
                } else {
                  sum += (double)0.00309285714285714242;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6160414516925811768) ) ) {
                  sum += (double)0.04353401315789473536;
                } else {
                  sum += (double)0.0107204375000000008;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2922531664371490479) ) ) {
              sum += (double)0.1837964814814814773;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.504999995231628418) ) ) {
                sum += (double)0.1146717500000000028;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3584.8118896484375) ) ) {
                  sum += (double)0.05819301562499999692;
                } else {
                  sum += (double)0.02406975000000000434;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.248263835906982422) ) ) {
            sum += (double)0.1049265703125000088;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009399999864399433136) ) ) {
              sum += (double)0.3801721911764706086;
            } else {
              sum += (double)0.2706792068965516718;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01300000026822090149) ) ) {
            sum += (double)0.2385894230769230462;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2211309969425201416) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.58844566345214844) ) ) {
                    sum += (double)0.06180539062499999792;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3167457729578018188) ) ) {
                      sum += (double)0.03838378125000000557;
                    } else {
                      sum += (double)0.01785898000000000346;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8662.28662109375) ) ) {
                    sum += (double)0.08384616304347826399;
                  } else {
                    sum += (double)0.2065861250000000093;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4062000066041946411) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2986775040626525879) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8999.86083984375) ) ) {
                      sum += (double)0.01309684210526315673;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  } else {
                    sum += (double)0.02444178999999999796;
                  }
                } else {
                  sum += (double)0.04471686764705882361;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7272500097751617432) ) ) {
                sum += (double)0.2350550499999999876;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  sum += (double)0.1488938749999999811;
                } else {
                  sum += (double)0.08491521428571427443;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.657265007495880127) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.630882501602172852) ) ) {
          sum += (double)0.3651669375000000106;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.58741188049316406) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4848904907703399658) ) ) {
              sum += (double)0.1803545394736842111;
            } else {
              sum += (double)0.09037044117647057007;
            }
          } else {
            sum += (double)0.2701721015625000444;
          }
        }
      } else {
        sum += (double)0.4212274687500001114;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5279635190963745117) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01355000026524066925) ) ) {
                sum += (double)0.4291185714285713493;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.29373264312744141) ) ) {
                  sum += (double)0.3179546851851852152;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2159790024161338806) ) ) {
                    sum += (double)0.1531967499999999927;
                  } else {
                    sum += (double)0.2481175749999999791;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.4907096842105262424;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.298264980316162109) ) ) {
                    sum += (double)0.3624266477272726772;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.523627996444702148) ) ) {
                      sum += (double)0.4328705914634146112;
                    } else {
                      sum += (double)0.3830100681818182085;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2341386154294013977) ) ) {
                    sum += (double)0.3850096499999999811;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.05790901184082031) ) ) {
                      sum += (double)0.2308419166666666467;
                    } else {
                      sum += (double)0.3777086911764706012;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
                sum += (double)0.303694815789473771;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.204797498881816864) ) ) {
                  sum += (double)0.1139736590909090769;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6256500184535980225) ) ) {
                    sum += (double)0.1711149722222222169;
                  } else {
                    sum += (double)0.2715563611111111442;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.13115406036376953) ) ) {
                sum += (double)0.07412364285714286016;
              } else {
                sum += (double)0.1119410625000000076;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4302622675895690918) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.452494502067565918) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
                  sum += (double)0.5444325859374998799;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3636019974946975708) ) ) {
                      sum += (double)0.4239175416666666751;
                    } else {
                      sum += (double)0.5080515255102039385;
                    }
                  } else {
                    sum += (double)0.3847126199999999496;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.78960609436035156) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4957814961671829224) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.469152495265007019) ) ) {
                      sum += (double)0.5733058999999999239;
                    } else {
                      sum += (double)0.4780262395833334566;
                    }
                  } else {
                    sum += (double)0.5706893552631577826;
                  }
                } else {
                  sum += (double)0.5861744374999999785;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.266666889190673828) ) ) {
                sum += (double)0.4685142954545454819;
              } else {
                sum += (double)0.3402188281249999835;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879500001668930054) ) ) {
              sum += (double)0.4384591874999999583;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5634999871253967285) ) ) {
                sum += (double)0.2401237499999999969;
              } else {
                sum += (double)0.359324790000000005;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.920685410499572754) ) ) {
          sum += (double)0.3159543152173913128;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
              sum += (double)0.1653187343749999982;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3847860097885131836) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2800389975309371948) ) ) {
                    sum += (double)0.03174228846153846761;
                  } else {
                    sum += (double)0.1061297368421052489;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3261809945106506348) ) ) {
                    sum += (double)0.01152933333333333414;
                  } else {
                    sum += (double)0.02893232142857142877;
                  }
                }
              } else {
                sum += (double)0.1149953235294117748;
              }
            }
          } else {
            sum += (double)0.2247130200000000133;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.079657256603240967) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6839055120944976807) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08224999904632568359) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006150000030174851418) ) ) {
                sum += (double)0.6619087777777777903;
              } else {
                sum += (double)0.6030377105263159399;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8398000001907348633) ) ) {
                sum += (double)0.6655530312500000933;
              } else {
                sum += (double)0.7480778214285714878;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6313.486328125) ) ) {
              sum += (double)0.495326178571428577;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.901477336883544922) ) ) {
                sum += (double)0.5574635476190475947;
              } else {
                sum += (double)0.6073898645833333276;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7088715136051177979) ) ) {
              sum += (double)0.741996326923076932;
            } else {
              sum += (double)0.7038419705882352773;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3763.4678955078125) ) ) {
              sum += (double)0.7307007647058824107;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.884259223937988281) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03655000030994415283) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
                    sum += (double)0.847333171874999902;
                  } else {
                    sum += (double)0.7995862499999999429;
                  }
                } else {
                  sum += (double)0.7815232954545454636;
                }
              } else {
                sum += (double)0.8533869605263157965;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
          sum += (double)0.5025481666666666847;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
            sum += (double)0.4312573035714284964;
          } else {
            sum += (double)0.1423101406250000256;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.205263137817382812) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2087.90069580078125) ) ) {
          sum += (double)0.3106568913043478153;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.35267829895019531) ) ) {
            sum += (double)0.1165789655172413952;
          } else {
            sum += (double)0.2215161770833333488;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.3278165156250000267;
        } else {
          sum += (double)0.486587999999999965;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4749999940395355225) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035654962062835693) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.92529439926147461) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7017000019550323486) ) ) {
                sum += (double)0.01907027272727272738;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01110000023618340492) ) ) {
                  sum += (double)0.002946428571428571629;
                } else {
                  sum += (double)0.009280710526315788869;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.37672805786132812) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4609796106815338135) ) ) {
                  sum += (double)0.01552620370370370352;
                } else {
                  sum += (double)0.07102776785714284835;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958375051617622375) ) ) {
                  sum += (double)0.1452264038461538453;
                } else {
                  sum += (double)0.05228045652173912705;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8880499899387359619) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.128962390124797821) ) ) {
                    sum += (double)0.006456333333333333889;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2116.4490966796875) ) ) {
                      sum += (double)0.002862797709923665685;
                    } else {
                      sum += (double)0.006506538461538462909;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6913881301879882812) ) ) {
                    sum += (double)0.02367834615384615399;
                  } else {
                    sum += (double)0.003068718750000000266;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.46299457550048828) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5658999979496002197) ) ) {
                    sum += (double)0.03486160714285713863;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11863.0478515625) ) ) {
                      sum += (double)0.01601227272727272916;
                    } else {
                      sum += (double)0.004495526315789474987;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2817000001668930054) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.40073394775390625) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.004150607142857142516;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4213000088930130005) ) ) {
                      sum += (double)0.02269913333333333297;
                    } else {
                      sum += (double)0.008811110576923077489;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.03810396666666666238;
            }
          }
        } else {
          sum += (double)0.1008163100000000201;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.59567299485206604) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.684472203254699707) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7064.3173828125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2083069980144500732) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03565000090748071671) ) ) {
                  sum += (double)0.1449707352941176364;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.1279754638671875) ) ) {
                      sum += (double)0.02077717788461538526;
                    } else {
                      sum += (double)0.04375063461538460097;
                    }
                  } else {
                    sum += (double)0.05809371153846154545;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.560849994421005249) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                    sum += (double)0.110686958333333349;
                  } else {
                    sum += (double)0.04854626851851851638;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    sum += (double)0.1768693392857142721;
                  } else {
                    sum += (double)0.1172787187500000106;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.62907600402832031) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4575500041246414185) ) ) {
                    sum += (double)0.185337802631578924;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.948511123657226562) ) ) {
                      sum += (double)0.1238091750000000074;
                    } else {
                      sum += (double)0.05101554999999999979;
                    }
                  }
                } else {
                  sum += (double)0.2314426499999999998;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2666805088520050049) ) ) {
                  sum += (double)0.1790820192307692738;
                } else {
                  sum += (double)0.3353318100000000079;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05764999985694885254) ) ) {
              sum += (double)0.1767921999999999827;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1543.048583984375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4038.4913330078125) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1749000027775764465) ) ) {
                    sum += (double)0.03326887500000001024;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2661500126123428345) ) ) {
                      sum += (double)0.006306187500000001896;
                    } else {
                      sum += (double)0.02413083064516128445;
                    }
                  }
                } else {
                  sum += (double)0.04961206451612903273;
                }
              } else {
                sum += (double)0.0047187200000000009;
              }
            }
          }
        } else {
          sum += (double)0.4078878181818181847;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16583919525146484) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.4706749687500000334;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                  sum += (double)0.3562312717391304395;
                } else {
                  sum += (double)0.4438683409090909415;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2395025044679641724) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.12961339950561523) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.44224119186401367) ) ) {
                    sum += (double)0.2648756250000000034;
                  } else {
                    sum += (double)0.366249210526315816;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3471561670303344727) ) ) {
                    sum += (double)0.2055859416666666606;
                  } else {
                    sum += (double)0.1470269107142856968;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.879807710647583008) ) ) {
                    sum += (double)0.3639931499999999875;
                  } else {
                    sum += (double)0.4079264519230768604;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529499977827072144) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8028.033203125) ) ) {
                      sum += (double)0.3371363875000000232;
                    } else {
                      sum += (double)0.2496202934782608407;
                    }
                  } else {
                    sum += (double)0.3814285546875000321;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3525566458702087402) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6832000017166137695) ) ) {
                sum += (double)0.3256298750000000131;
              } else {
                sum += (double)0.225594013157894735;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2557999938726425171) ) ) {
                sum += (double)0.1047822023809523995;
              } else {
                sum += (double)0.1766781956521738806;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.87053585052490234) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3255999982357025146) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08200000226497650146) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                  sum += (double)0.57506235294117658;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05910000018775463104) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.68990373611450195) ) ) {
                      sum += (double)0.4583040588235294255;
                    } else {
                      sum += (double)0.5088859300000000419;
                    }
                  } else {
                    sum += (double)0.5535441190476189099;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.304013252258300781) ) ) {
                  sum += (double)0.3967894999999999617;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.657142877578735352) ) ) {
                    sum += (double)0.5084488152173912701;
                  } else {
                    sum += (double)0.4415804736842105505;
                  }
                }
              }
            } else {
              sum += (double)0.3494277625000000165;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10849.38427734375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22101.369140625) ) ) {
                sum += (double)0.2819848928571428437;
              } else {
                sum += (double)0.4365958124999999579;
              }
            } else {
              sum += (double)0.2719245468750000061;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.387154996395111084) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4706.062744140625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
              sum += (double)0.2431341666666666512;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25567.3564453125) ) ) {
                sum += (double)0.1766051250000000017;
              } else {
                sum += (double)0.03201359615384614943;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.832792282104492188) ) ) {
              sum += (double)0.02761313888888888846;
            } else {
              sum += (double)0.01030556250000000049;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1988.43060302734375) ) ) {
            sum += (double)0.278259273809523866;
          } else {
            sum += (double)0.1279193374999999799;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.485707506537437439) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.45311546325683594) ) ) {
                sum += (double)0.5415095520833332898;
              } else {
                sum += (double)0.6118621785714286609;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                sum += (double)0.5530182374999998984;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6231000125408172607) ) ) {
                  sum += (double)0.520878647058823474;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.62963008880615234) ) ) {
                    sum += (double)0.4850167727272726714;
                  } else {
                    sum += (double)0.3767168035714286156;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2807.538330078125) ) ) {
                  sum += (double)0.5548902031250000366;
                } else {
                  sum += (double)0.6383661805555554958;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5868855118751525879) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5567849874496459961) ) ) {
                    sum += (double)0.6784865833333332263;
                  } else {
                    sum += (double)0.6208769722222222676;
                  }
                } else {
                  sum += (double)0.7111766300000000873;
                }
              }
            } else {
              sum += (double)0.5574487416666666917;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1638311371207237244) ) ) {
              sum += (double)0.7083258660714285559;
            } else {
              sum += (double)0.6609063214285714194;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
                sum += (double)0.819843732758620769;
              } else {
                sum += (double)0.8591498240740740311;
              }
            } else {
              sum += (double)0.7157318157894737576;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.776128768920898438) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
              sum += (double)0.42477668478260866;
            } else {
              sum += (double)0.3230581428571429048;
            }
          } else {
            sum += (double)0.2062429100000000293;
          }
        } else {
          sum += (double)0.4974662870370370471;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2469635009765625) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4899999946355819702) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7735500037670135498) ) ) {
            sum += (double)0.1436951800000000057;
          } else {
            sum += (double)0.0305917031249999978;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2306.18896484375) ) ) {
              sum += (double)0.1909373125000000115;
            } else {
              sum += (double)0.05749118269230769213;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2760.4827880859375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03899999894201755524) ) ) {
                sum += (double)0.2672535952380952207;
              } else {
                sum += (double)0.2022275526315789607;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                sum += (double)0.2826325312500000408;
              } else {
                sum += (double)0.3554441250000000552;
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
                  sum += (double)0.007929388888888890333;
                } else {
                  sum += (double)0.003762323529411765004;
                }
              } else {
                sum += (double)0.02281951666666666434;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02920000068843364716) ) ) {
                sum += (double)0.01444926923076923081;
              } else {
                sum += (double)0.1079938250000000016;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1005499996244907379) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.6741371154785156) ) ) {
                      sum += (double)0.005145845238095238423;
                    } else {
                      sum += (double)0.002798883720930233753;
                    }
                  }
                } else {
                  sum += (double)0.009755557692307693582;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6257069408893585205) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04234999977052211761) ) ) {
                    sum += (double)0.02650865384615384499;
                  } else {
                    sum += (double)0.008129880952380952666;
                  }
                } else {
                  sum += (double)0.002933309523809524665;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8338.1943359375) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.66793060302734375) ) ) {
                    sum += (double)0.01242308823529411806;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-54875.837890625) ) ) {
                      sum += (double)0.01093510869565217369;
                    } else {
                      sum += (double)0.003403804347826087234;
                    }
                  }
                } else {
                  sum += (double)0.02156394642857143232;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4843.90966796875) ) ) {
                  sum += (double)0.05183498529411764005;
                } else {
                  sum += (double)0.004335868421052632531;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02485000062733888626) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6750000119209289551) ) ) {
                sum += (double)0.1103487499999999955;
              } else {
                sum += (double)0.2089740833333333381;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6829999983310699463) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4384500086307525635) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.01923084259033203) ) ) {
                    sum += (double)0.06086004999999998499;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.41568374633789062) ) ) {
                      sum += (double)0.02743696511627905996;
                    } else {
                      sum += (double)0.01274077631578947496;
                    }
                  }
                } else {
                  sum += (double)0.0779708666666666661;
                }
              } else {
                sum += (double)0.08537399999999999156;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05709999985992908478) ) ) {
                sum += (double)0.08258256250000001186;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8988.73779296875) ) ) {
                  sum += (double)0.1379013017241379202;
                } else {
                  sum += (double)0.2873434916666666172;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631920456886291504) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
                  sum += (double)0.09550863392857140977;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2792354971170425415) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7414.750244140625) ) ) {
                      sum += (double)0.02224195000000000338;
                    } else {
                      sum += (double)0.004044307692307693401;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.90476179122924805) ) ) {
                      sum += (double)0.01972777941176470651;
                    } else {
                      sum += (double)0.05370343965517242191;
                    }
                  }
                }
              } else {
                sum += (double)0.1608780769230769292;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3405084908008575439) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5062452934782608605;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                  sum += (double)0.3384280595238094991;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7459.79833984375) ) ) {
                    sum += (double)0.1654215374999999932;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.818111419677734375) ) ) {
                      sum += (double)0.2197899772727272827;
                    } else {
                      sum += (double)0.2998756093749999629;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.3548167500000000141;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3039920032024383545) ) ) {
                      sum += (double)0.4416415178571429512;
                    } else {
                      sum += (double)0.3938381900000000324;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.168400004506111145) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0497500002384185791) ) ) {
                      sum += (double)0.3435207916666666583;
                    } else {
                      sum += (double)0.2384242272727273015;
                    }
                  } else {
                    sum += (double)0.3831005899999999631;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.115257561206817627) ) ) {
                sum += (double)0.6043202656250000748;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.41615867614746094) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5226500034332275391) ) ) {
                    sum += (double)0.4507280468750000102;
                  } else {
                    sum += (double)0.4976404583333333687;
                  }
                } else {
                  sum += (double)0.5323381944444444125;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7313500046730041504) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.622750014066696167) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.898351669311523438) ) ) {
                    sum += (double)0.4540683823529411689;
                  } else {
                    sum += (double)0.4210343076923077077;
                  }
                } else {
                  sum += (double)0.493991693548387123;
                }
              } else {
                sum += (double)0.3804118888888888272;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.269385993480682373) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
                sum += (double)0.2834998690476190908;
              } else {
                sum += (double)0.1598518300000000281;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7429499924182891846) ) ) {
                sum += (double)0.3809677499999999384;
              } else {
                sum += (double)0.2427355833333333379;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12325.5283203125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.262700006365776062) ) ) {
                sum += (double)0.07982428750000000739;
              } else {
                sum += (double)0.1655374807692307493;
              }
            } else {
              sum += (double)0.2675931875000000515;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.681742429733276367) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1840.76361083984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
              sum += (double)0.1127523888888888881;
            } else {
              sum += (double)0.2526097777777777664;
            }
          } else {
            sum += (double)0.07366167307692307598;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29298.3828125) ) ) {
            sum += (double)0.1442949062499999657;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3403999954462051392) ) ) {
              sum += (double)0.06674474166666666264;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.283356010913848877) ) ) {
                sum += (double)0.03130255882352941249;
              } else {
                sum += (double)0.008711599999999999899;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5796644985675811768) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.578846096992492676) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.889307260513305664) ) ) {
              sum += (double)0.4809795468750000524;
            } else {
              sum += (double)0.5693501527777777849;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05434999987483024597) ) ) {
              sum += (double)0.3113584078947367884;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4843115061521530151) ) ) {
                sum += (double)0.5786355892857144578;
              } else {
                sum += (double)0.4350427000000000044;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08599999919533729553) ) ) {
            sum += (double)0.6448399249999999805;
          } else {
            sum += (double)0.5153333392857143425;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.638506770133972168) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.367918252944946289) ) ) {
                sum += (double)0.6275682058823529585;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01765000075101852417) ) ) {
                  sum += (double)0.7032463260869564747;
                } else {
                  sum += (double)0.7397838452380953722;
                }
              }
            } else {
              sum += (double)0.7969156750000000455;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
              sum += (double)0.6834292812499999092;
            } else {
              sum += (double)0.5750876590909090869;
            }
          }
        } else {
          sum += (double)0.8598813303571429811;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7006689906120300293) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1110500022768974304) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.351531386375427246) ) ) {
            sum += (double)0.4336226944444445119;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1700.31976318359375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.592886507511138916) ) ) {
                sum += (double)0.2407362884615384391;
              } else {
                sum += (double)0.3719091718749999442;
              }
            } else {
              sum += (double)0.09736599999999999422;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8670485317707061768) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5088259875774383545) ) ) {
              sum += (double)0.4417730625000000355;
            } else {
              sum += (double)0.5548008472222221155;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5454215109348297119) ) ) {
              sum += (double)0.2710891249999999864;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4623000025749206543) ) ) {
                sum += (double)0.3692746293103448818;
              } else {
                sum += (double)0.4809849027777777786;
              }
            }
          }
        }
      } else {
        sum += (double)0.6142902946428572264;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2368500009179115295) ) ) {
            sum += (double)0.164196486842105277;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1279319971799850464) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08897649869322776794) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02929999958723783493) ) ) {
                  sum += (double)0.003633326923076923582;
                } else {
                  sum += (double)0.01527313636363636547;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04790000058710575104) ) ) {
                  sum += (double)0.06233313333333333206;
                } else {
                  sum += (double)0.01589909999999999934;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54004383087158203) ) ) {
                  sum += (double)0.09911740441176472571;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7599999904632568359) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.192691996693611145) ) ) {
                      sum += (double)0.02735780434782607642;
                    } else {
                      sum += (double)0.01410091666666666611;
                    }
                  } else {
                    sum += (double)0.05938609375000000745;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.980000019073486328) ) ) {
                  sum += (double)0.2094131176470588329;
                } else {
                  sum += (double)0.1099759374999999956;
                }
              }
            }
          }
        } else {
          sum += (double)0.1907162884615385134;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1975499987602233887) ) ) {
              sum += (double)0.02505327777777777848;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7014.650146484375) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5843744277954101562) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003454770270270271244;
                    }
                  } else {
                    sum += (double)0.005213708333333334083;
                  }
                } else {
                  sum += (double)0.006842175000000000687;
                }
              } else {
                sum += (double)0.00845772916666666548;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1040449999272823334) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                sum += (double)0.05515854166666666475;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07675099745392799377) ) ) {
                  sum += (double)0.01049867647058823697;
                } else {
                  sum += (double)0.039995433333333337;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.54244041442871094) ) ) {
                sum += (double)0.02043286363636363789;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21395.5732421875) ) ) {
                  sum += (double)0.01317967391304347875;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13675.6025390625) ) ) {
                    sum += (double)0.004090700000000000065;
                  } else {
                    sum += (double)0.002499999999999999618;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2969500124454498291) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.65022182464599609) ) ) {
              sum += (double)0.005634296296296297836;
            } else {
              sum += (double)0.01776981250000000262;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.78636550903320312) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.22750282287597656) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1962999999523162842) ) ) {
                  sum += (double)0.04524492424242423927;
                } else {
                  sum += (double)0.1056857205882352768;
                }
              } else {
                sum += (double)0.1545620833333333499;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3885000050067901611) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.29411697387695312) ) ) {
                  sum += (double)0.02532060526315789428;
                } else {
                  sum += (double)0.01248057142857143115;
                }
              } else {
                sum += (double)0.06902139285714285755;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5692634880542755127) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3292670994997024536) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09834655001759529114) ) ) {
            sum += (double)0.3257771500000000708;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7712000012397766113) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2868.1590576171875) ) ) {
                sum += (double)0.1800938749999999866;
              } else {
                sum += (double)0.3082491875000000214;
              }
            } else {
              sum += (double)0.1114568624999999757;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.66676020622253418) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4247134923934936523) ) ) {
              sum += (double)0.196134035714285726;
            } else {
              sum += (double)0.289552647058823498;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2620075047016143799) ) ) {
              sum += (double)0.1892441666666666855;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2750000059604644775) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8506430983543395996) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7020.048828125) ) ) {
                      sum += (double)0.07004508620689656184;
                    } else {
                      sum += (double)0.1546544416666666422;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09914999827742576599) ) ) {
                      sum += (double)0.00591950000000000115;
                    } else {
                      sum += (double)0.04687363513513513602;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.84666681289672852) ) ) {
                  sum += (double)0.09473249999999996951;
                } else {
                  sum += (double)0.1971713382352941191;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.861176490783691406) ) ) {
          sum += (double)0.5093914999999998861;
        } else {
          sum += (double)0.2827984583333333357;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878414928913116455) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.63115787506103516) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2438655048608779907) ) ) {
              sum += (double)0.4666026578947368164;
            } else {
              sum += (double)0.5568790833333333579;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2278250008821487427) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.365909099578857422) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5967499911785125732) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.449443340301513672) ) ) {
                    sum += (double)0.2764659852941176443;
                  } else {
                    sum += (double)0.348383833333333337;
                  }
                } else {
                  sum += (double)0.2429299062499999939;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.60056304931640625) ) ) {
                  sum += (double)0.1274522500000000169;
                } else {
                  sum += (double)0.2492912205882352739;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4289.52099609375) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8292.779296875) ) ) {
                      sum += (double)0.3619159423076923066;
                    } else {
                      sum += (double)0.4171095757575757901;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5722999870777130127) ) ) {
                      sum += (double)0.3907107631578947138;
                    } else {
                      sum += (double)0.3229641515151515652;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12766.01708984375) ) ) {
                    sum += (double)0.3583965446428570845;
                  } else {
                    sum += (double)0.2249598166666667287;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.0628204345703125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08669999986886978149) ) ) {
                    sum += (double)0.4990781052631578785;
                  } else {
                    sum += (double)0.4398657678571428198;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3589345067739486694) ) ) {
                    sum += (double)0.4566518552631578243;
                  } else {
                    sum += (double)0.3289582500000000076;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2724000066518783569) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.60852241516113281) ) ) {
              sum += (double)0.1673109807692307605;
            } else {
              sum += (double)0.0777644565217391337;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2806075066328048706) ) ) {
              sum += (double)0.1683787321428571737;
            } else {
              sum += (double)0.2919277638888889137;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            sum += (double)0.21077717187500003;
          } else {
            sum += (double)0.05539524999999998617;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19266.078125) ) ) {
            sum += (double)0.09251041666666667829;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.78266429901123047) ) ) {
              sum += (double)0.03808958750000000781;
            } else {
              sum += (double)0.01399555555555555796;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6070390045642852783) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4634777456521987915) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007499999774154275656) ) ) {
                  sum += (double)0.62800931578947361;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                      sum += (double)0.5130556779661018529;
                    } else {
                      sum += (double)0.5854730000000000212;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2646.23583984375) ) ) {
                      sum += (double)0.4700471535087720198;
                    } else {
                      sum += (double)0.5486858194444443892;
                    }
                  }
                }
              } else {
                sum += (double)0.408293166666666596;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08874613046646118164) ) ) {
                sum += (double)0.6659207763157893867;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5790629982948303223) ) ) {
                  sum += (double)0.5642752299999999055;
                } else {
                  sum += (double)0.6109800595238094045;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6753500103950500488) ) ) {
              sum += (double)0.2961213068181818286;
            } else {
              sum += (double)0.4480223333333333002;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52560997009277344) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.11048555374145508) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2134.150390625) ) ) {
                  sum += (double)0.6990370972222222923;
                } else {
                  sum += (double)0.6187580178571429057;
                }
              } else {
                sum += (double)0.7477050882352940242;
              }
            } else {
              sum += (double)0.6329149342105263587;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052500009536743164) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8328820168972015381) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700851440429688) ) ) {
                  sum += (double)0.8147162749999999898;
                } else {
                  sum += (double)0.7650721666666665532;
                }
              } else {
                sum += (double)0.8716509000000000063;
              }
            } else {
              sum += (double)0.7005413194444445324;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.220192313194274902) ) ) {
            sum += (double)0.4060946854838708431;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2404.224365234375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1435000002384185791) ) ) {
                sum += (double)0.3490496710526315716;
              } else {
                sum += (double)0.1228475555555555571;
              }
            } else {
              sum += (double)0.09465249107142859053;
            }
          }
        } else {
          sum += (double)0.505933500000000036;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4583019912242889404) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
          sum += (double)0.02530917045454545225;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.90476131439208984) ) ) {
            sum += (double)0.1502760833333333101;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8718500137329101562) ) ) {
                sum += (double)0.3171531323529411805;
              } else {
                sum += (double)0.1389092115384615023;
              }
            } else {
              sum += (double)0.3939574051724137882;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.888888835906982422) ) ) {
              sum += (double)0.04303172222222220733;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3030499964952468872) ) ) {
                  sum += (double)0.03727290789473683419;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                    sum += (double)0.004858140000000000375;
                  } else {
                    sum += (double)0.01579089189189188808;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1119984984397888184) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8701000213623046875) ) ) {
                      sum += (double)0.00289087430167597921;
                    } else {
                      sum += (double)0.006631447368421053597;
                    }
                  } else {
                    sum += (double)0.01070496875000000181;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1754919961094856262) ) ) {
                    sum += (double)0.02306339999999999779;
                  } else {
                    sum += (double)0.004041619047619048229;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7545999884605407715) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.149349994957447052) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.91212177276611328) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3151.1885986328125) ) ) {
                    sum += (double)0.06046896153846152006;
                  } else {
                    sum += (double)0.02104001562500000186;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2766499966382980347) ) ) {
                    sum += (double)0.003800826086956521615;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4234500080347061157) ) ) {
                      sum += (double)0.02424091071428571831;
                    } else {
                      sum += (double)0.008741337500000001537;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2204499989748001099) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6762483119964599609) ) ) {
                    sum += (double)0.1317375263157894716;
                  } else {
                    sum += (double)0.01491868750000000139;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8944.646484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)95.23717880249023438) ) ) {
                      sum += (double)0.02563364705882353184;
                    } else {
                      sum += (double)0.006884339285714284433;
                    }
                  } else {
                    sum += (double)0.06244216176470588492;
                  }
                }
              }
            } else {
              sum += (double)0.08457004464285713952;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2061147689819335938) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1616740673780441284) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8950000107288360596) ) ) {
                sum += (double)0.1809666875000000008;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1227269284427165985) ) ) {
                  sum += (double)0.06287445588235295035;
                } else {
                  sum += (double)0.1245555000000000134;
                }
              }
            } else {
              sum += (double)0.2417779305555555758;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.51743698120117188) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3093.520751953125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2373590022325515747) ) ) {
                  sum += (double)0.2378763552631578682;
                } else {
                  sum += (double)0.112233058823529408;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.949505150318145752) ) ) {
                  sum += (double)0.06091647368421052727;
                } else {
                  sum += (double)0.02502303947368421377;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5499500036239624023) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6733288764953613281) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925999969244003296) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713389992713928223) ) ) {
                      sum += (double)0.03330555821917807746;
                    } else {
                      sum += (double)0.09664080263157895367;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5753999948501586914) ) ) {
                      sum += (double)0.05567445833333333621;
                    } else {
                      sum += (double)0.1338627499999999748;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7649999856948852539) ) ) {
                    sum += (double)0.05796556249999999105;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2349095046520233154) ) ) {
                      sum += (double)0.0137267894736842113;
                    } else {
                      sum += (double)0.0244157699999999929;
                    }
                  }
                }
              } else {
                sum += (double)0.1288393833333333349;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2454945072531700134) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0142500000074505806) ) ) {
              sum += (double)0.4558996527777778307;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.44224119186401367) ) ) {
                  sum += (double)0.2086160624999999769;
                } else {
                  sum += (double)0.3462875869565216758;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359000205993652344) ) ) {
                  sum += (double)0.153368629999999978;
                } else {
                  sum += (double)0.2599390740740740724;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.79599189758300781) ) ) {
                sum += (double)0.5427858076923077757;
              } else {
                sum += (double)0.6125213749999999235;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3286.3988037109375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3387420028448104858) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04260000027716159821) ) ) {
                      sum += (double)0.4137611145833333115;
                    } else {
                      sum += (double)0.3627198479729729086;
                    }
                  } else {
                    sum += (double)0.4253423095238095253;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.298687174916267395) ) ) {
                    sum += (double)0.3722185625000000164;
                  } else {
                    sum += (double)0.2708411315789474028;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5216102004051208496) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.311781644821166992) ) ) {
                      sum += (double)0.4621653749999998784;
                    } else {
                      sum += (double)0.5417733548387096976;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1304810121655464172) ) ) {
                      sum += (double)0.3590712500000000085;
                    } else {
                      sum += (double)0.452171992647058818;
                    }
                  }
                } else {
                  sum += (double)0.3518928815789474362;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.222882002592086792) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1196999996900558472) ) ) {
              sum += (double)0.282052117647058842;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.0772705078125) ) ) {
                sum += (double)0.05323374137931033423;
              } else {
                sum += (double)0.1670825476190476166;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3271740078926086426) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19925.775390625) ) ) {
                  sum += (double)0.3047625760869565048;
                } else {
                  sum += (double)0.2067880735294117811;
                }
              } else {
                sum += (double)0.3688098333333332812;
              }
            } else {
              sum += (double)0.08655051249999998197;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.194907665252685547) ) ) {
          sum += (double)0.2501423906249999884;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24728.45703125) ) ) {
            sum += (double)0.1258451333333333311;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.007034778594970703) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3676.5296630859375) ) ) {
                sum += (double)0.1373942115384615414;
              } else {
                sum += (double)0.04274009615384614935;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.753016114234924316) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.503048837184906006) ) ) {
                  sum += (double)0.0061653999999999997;
                } else {
                  sum += (double)0.01906500000000000208;
                }
              } else {
                sum += (double)0.03944981944444445054;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2097.2220458984375) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1373744606971740723) ) ) {
                sum += (double)0.4631335599999999442;
              } else {
                sum += (double)0.5308859886363637148;
              }
            } else {
              sum += (double)0.5782466527777777587;
            }
          } else {
            sum += (double)0.385654578125000036;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.188086748123168945) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.16306614875793457) ) ) {
              sum += (double)0.5738518333333333388;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5593884885311126709) ) ) {
                sum += (double)0.6932267794117646931;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.6212020568181818581;
                } else {
                  sum += (double)0.6723696057692307715;
                }
              }
            }
          } else {
            sum += (double)0.5028132321428570028;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8275499939918518066) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6741120219230651855) ) ) {
              sum += (double)0.7263933333333333353;
            } else {
              sum += (double)0.6530152875000000412;
            }
          } else {
            sum += (double)0.7625135568181817813;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.8915307000000001203;
            } else {
              sum += (double)0.8158209880952381754;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138479888439178467) ) ) {
              sum += (double)0.7604365394736841699;
            } else {
              sum += (double)0.8207033333333334513;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759344935417175293) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.51978015899658203) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430303096771240234) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6632487475872039795) ) ) {
              sum += (double)0.5111736388888888927;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5731519758701324463) ) ) {
                  sum += (double)0.3873642833333333368;
                } else {
                  sum += (double)0.427460692307692347;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1524.52996826171875) ) ) {
                  sum += (double)0.327118312500000008;
                } else {
                  sum += (double)0.1219223000000000112;
                }
              }
            }
          } else {
            sum += (double)0.5795153289473684577;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03684999980032444) ) ) {
            sum += (double)0.4007756718749999614;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10427.32373046875) ) ) {
              sum += (double)0.2377085624999999702;
            } else {
              sum += (double)0.1009453839285714277;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.439812958240509033) ) ) {
          sum += (double)0.6305321847826087511;
        } else {
          sum += (double)0.4122156805555556303;
        }
      }
    }
  }
  return sum;
}
