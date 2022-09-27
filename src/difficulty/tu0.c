#include "prediction.h"
double predict_margin_unit0(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.379999995231628418) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1676684990525245667) ) ) {
            sum += (double)0.01680557647058823767;
          } else {
            sum += (double)0.07774446665362351461;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3410000056028366089) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2306.18896484375) ) ) {
              sum += (double)0.2092349739030985312;
            } else {
              sum += (double)0.04750367592518085769;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08353962376713752747) ) ) {
                sum += (double)0.187669779732277886;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.568425655364990234) ) ) {
                  sum += (double)0.3423062617030205868;
                } else {
                  sum += (double)0.231600144321598117;
                }
              }
            } else {
              sum += (double)0.4701461610157401938;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
            sum += (double)0.086465393688899439;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61250019073486328) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.127262502908706665) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0256000002846121788) ) ) {
                  sum += (double)0.006776860000000000002;
                } else {
                  sum += (double)0.02084892857142857728;
                }
              } else {
                sum += (double)0.05951904515745692209;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2137999981641769409) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005941066666666667238;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    sum += (double)0.01333758518518518565;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01654999982565641403) ) ) {
                  sum += (double)0.03803960073260072988;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)197.5512771606445312) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6620510518550872803) ) ) {
                      sum += (double)0.0094414042553191517;
                    } else {
                      sum += (double)0.005001550000000001307;
                    }
                  } else {
                    sum += (double)0.01474023707823507792;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7362234294414520264) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3738500028848648071) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.04878044128417969) ) ) {
                  sum += (double)0.1285096041883578011;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2184704989194869995) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1834224313497543335) ) ) {
                      sum += (double)0.05717657943188531738;
                    } else {
                      sum += (double)0.02569641425896463174;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3454246222972869873) ) ) {
                      sum += (double)0.1357080040796493359;
                    } else {
                      sum += (double)0.05247676500722547183;
                    }
                  }
                }
              } else {
                sum += (double)0.1444555762908296126;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151144981384277344) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02625000011175870895) ) ) {
                  sum += (double)0.2449394590345826128;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.244750000536441803) ) ) {
                      sum += (double)0.0416243313159069539;
                    } else {
                      sum += (double)0.1078181247120384434;
                    }
                  } else {
                    sum += (double)0.1438737340781963969;
                  }
                }
              } else {
                sum += (double)0.2640934175174025622;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.305000007152557373) ) ) {
                  sum += (double)0.004474399999999999905;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
                    sum += (double)0.03162453522267206357;
                  } else {
                    sum += (double)0.0147544938775510219;
                  }
                }
              } else {
                sum += (double)0.1436234069241459355;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                sum += (double)0.006096651162790699997;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2916000038385391235) ) ) {
                  sum += (double)0.01490590400000000107;
                } else {
                  sum += (double)0.03215623790087463602;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.287581682205200195) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1930999979376792908) ) ) {
          sum += (double)0.3576702396661116667;
        } else {
          sum += (double)0.5372967287764799371;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2125499993562698364) ) ) {
          sum += (double)0.3637260185065869789;
        } else {
          sum += (double)0.1355593859067110996;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760489910840988159) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72046709060668945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.291973501443862915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.5743836060916860387;
              } else {
                sum += (double)0.4827508317540739058;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.2282781695560983926;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2163860052824020386) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1959124952554702759) ) ) {
                      sum += (double)0.3741383204832473552;
                    } else {
                      sum += (double)0.4550375095184145957;
                    }
                  } else {
                    sum += (double)0.253369495538950773;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                    sum += (double)0.5338688163974779632;
                  } else {
                    sum += (double)0.4072004134352454896;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.570413589477539062) ) ) {
                    sum += (double)0.4109686062719600241;
                  } else {
                    sum += (double)0.2065050954220191692;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3102449923753738403) ) ) {
                sum += (double)0.547428332212417379;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.207272768020629883) ) ) {
                  sum += (double)0.511207496184814425;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.216927655041217804) ) ) {
                    sum += (double)0.471215415085306788;
                  } else {
                    sum += (double)0.3852638500814595246;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
                sum += (double)0.6706986032429409494;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.126016139984130859) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.370241507887840271) ) ) {
                      sum += (double)0.5549425009835494693;
                    } else {
                      sum += (double)0.6010878322242136917;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2545559778809547424) ) ) {
                      sum += (double)0.582442520407363995;
                    } else {
                      sum += (double)0.5077674688745946741;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233576387166976929) ) ) {
                    sum += (double)0.4442722246649718487;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3399971872568130493) ) ) {
                      sum += (double)0.5892404681938271382;
                    } else {
                      sum += (double)0.5022156868161671284;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.83492279052734375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7327499985694885254) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3251755088567733765) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.21417760848999023) ) ) {
                    sum += (double)0.2107375024018048049;
                  } else {
                    sum += (double)0.3336756642152741148;
                  }
                } else {
                  sum += (double)0.4613966400031815351;
                }
              } else {
                sum += (double)0.1625310413798525255;
              }
            } else {
              sum += (double)0.4605015829541376227;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6695129871368408203) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2475515007972717285) ) ) {
                sum += (double)0.05654505067021311365;
              } else {
                sum += (double)0.176685224061332663;
              }
            } else {
              sum += (double)0.2446348234831653146;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            sum += (double)0.3996258847908532585;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4292009919881820679) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08190000057220458984) ) ) {
                sum += (double)0.03115055384615384587;
              } else {
                sum += (double)0.1082076460080134972;
              }
            } else {
              sum += (double)0.2849459088412223395;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.170259535312652588) ) ) {
            sum += (double)0.2255622482317682087;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16832.20703125) ) ) {
              sum += (double)0.110430935988818979;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.30347633361816406) ) ) {
                sum += (double)0.03988395234718000726;
              } else {
                sum += (double)0.01211598095238095203;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6070390045642852783) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5145229995250701904) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.57076728343963623) ) ) {
                  sum += (double)0.6154001020701515001;
                } else {
                  sum += (double)0.4927504747141132624;
                }
              } else {
                sum += (double)0.6336852934224505018;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2116163298487663269) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.521043777465820312) ) ) {
                    sum += (double)0.7627067692307691882;
                  } else {
                    sum += (double)0.7107135277777778537;
                  }
                } else {
                  sum += (double)0.6593220927272727128;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3580.77685546875) ) ) {
                  sum += (double)0.5981979178394684071;
                } else {
                  sum += (double)0.6817760138888888655;
                }
              }
            }
          } else {
            sum += (double)0.4767368215249975782;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3091.280029296875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.594594478607177734) ) ) {
                sum += (double)0.7263030537414965071;
              } else {
                sum += (double)0.6587479812865497664;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01620000042021274567) ) ) {
                sum += (double)0.7040603380101920772;
              } else {
                sum += (double)0.7670939922061597027;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1553.44091796875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000031590461731) ) ) {
                  sum += (double)0.8593959409897290458;
                } else {
                  sum += (double)0.8238925666666666592;
                }
              } else {
                sum += (double)0.8823895739244296266;
              }
            } else {
              sum += (double)0.798420749874696245;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.542853412998527074;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4547988231460793895;
          } else {
            sum += (double)0.1981190643959894748;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.523571252822875977) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
          sum += (double)0.1610703943594134768;
        } else {
          sum += (double)0.3546667998657282994;
        }
      } else {
        sum += (double)0.5343699132959432996;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2248129993677139282) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03576799854636192322) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.36538457870483398) ) ) {
                sum += (double)0.007437266666666668587;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  sum += (double)0.005541435294117648576;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)441.642852783203125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03160000033676624298) ) ) {
                  sum += (double)0.004000000000000001818;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.65000057220458984) ) ) {
                    sum += (double)0.008385713520408162244;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              } else {
                sum += (double)0.01256103333333333238;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1678.080322265625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
                sum += (double)0.05025919798893916518;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8609499931335449219) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                    sum += (double)0.02955756970803383871;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2732499986886978149) ) ) {
                      sum += (double)0.01077761585938121457;
                    } else {
                      sum += (double)0.02250693333333333296;
                    }
                  }
                } else {
                  sum += (double)0.04498259393939393891;
                }
              }
            } else {
              sum += (double)0.0532528446421584381;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.17532491683959961) ) ) {
            sum += (double)0.1337591100947969069;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
              sum += (double)0.008545218181818184031;
            } else {
              sum += (double)0.05671856054274363595;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5979785025119781494) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              sum += (double)0.1257708685208477339;
            } else {
              sum += (double)0.3333410561396504823;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6849499940872192383) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6136000156402587891) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2292639985680580139) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.384036064147949219) ) ) {
                    sum += (double)0.1381330043583537392;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7574189603328704834) ) ) {
                      sum += (double)0.04544942907573913671;
                    } else {
                      sum += (double)0.01206750478700044545;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5849999785423278809) ) ) {
                    sum += (double)0.2785896355951035241;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6073614060878753662) ) ) {
                      sum += (double)0.1176983942675070283;
                    } else {
                      sum += (double)0.03023598913469556504;
                    }
                  }
                }
              } else {
                sum += (double)0.193921181112615193;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.930952310562133789) ) ) {
                sum += (double)0.2797443930838314774;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1617795005440711975) ) ) {
                  sum += (double)0.03927301661881187761;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7229500114917755127) ) ) {
                    sum += (double)0.2216267192993767732;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.42572498321533203) ) ) {
                      sum += (double)0.09688225649437667841;
                    } else {
                      sum += (double)0.1488312237664485005;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3937211897037448116;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9109495282173156738) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5364569329811195164;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2211224287748336792) ) ) {
                sum += (double)0.1428870115883359715;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11889.39697265625) ) ) {
                  sum += (double)0.4342738409741218608;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.238888740539550781) ) ) {
                    sum += (double)0.3992686827128797411;
                  } else {
                    sum += (double)0.2036778984483057497;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.716250002384185791) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4591999948024749756) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4979.864501953125) ) ) {
                    sum += (double)0.4932889191046040955;
                  } else {
                    sum += (double)0.3908649597866032943;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3627.9508056640625) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05929999984800815582) ) ) {
                      sum += (double)0.5355880794126507416;
                    } else {
                      sum += (double)0.4614224000465166897;
                    }
                  } else {
                    sum += (double)0.5751440634138041963;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06775000318884849548) ) ) {
                  sum += (double)0.4486859270233964914;
                } else {
                  sum += (double)0.3642943782083720161;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.73177719116210938) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
                    sum += (double)0.6395727867857141646;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05234999954700469971) ) ) {
                      sum += (double)0.5448265228045789943;
                    } else {
                      sum += (double)0.6110702367971209137;
                    }
                  }
                } else {
                  sum += (double)0.6554537526083114019;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1251996532082557678) ) ) {
                  sum += (double)0.4282707209980972651;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6171999871730804443) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                      sum += (double)0.538933780609649582;
                    } else {
                      sum += (double)0.4764959357427779318;
                    }
                  } else {
                    sum += (double)0.5900044065658086589;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351285010576248169) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1731655001640319824) ) ) {
                sum += (double)0.3737434575376268331;
              } else {
                sum += (double)0.2332761791893227799;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.308899998664855957) ) ) {
                  sum += (double)0.2019005885406811862;
                } else {
                  sum += (double)0.04144988871997567353;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5329936593770980835) ) ) {
                  sum += (double)0.311624656373872877;
                } else {
                  sum += (double)0.1997273757620873502;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
              sum += (double)0.4652989965248958693;
            } else {
              sum += (double)0.2879463727869816525;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.3465349504650209744;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.325380623340606689) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3093589991331100464) ) ) {
              sum += (double)0.2841532288822710695;
            } else {
              sum += (double)0.1360709518886231983;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.702820301055908203) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2005290708514028131;
              } else {
                sum += (double)0.03706783037977513101;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1181500032544136047) ) ) {
                sum += (double)0.07320118324194126169;
              } else {
                sum += (double)0.02118043929313929291;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468100011348724365) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.68378257751464844) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4667980223894119263) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07317381724715232849) ) ) {
                  sum += (double)0.5370052869399719597;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094980001449584961) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3778.521484375) ) ) {
                      sum += (double)0.6648090575091576415;
                    } else {
                      sum += (double)0.5884507432018650785;
                    }
                  } else {
                    sum += (double)0.6967142849295775431;
                  }
                }
              } else {
                sum += (double)0.7086930408607886589;
              }
            } else {
              sum += (double)0.4834608019397934053;
            }
          } else {
            sum += (double)0.3483811326760695715;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7665.83203125) ) ) {
              sum += (double)0.6028629376122708328;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1320.23370361328125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.918919086456298828) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08254999667406082153) ) ) {
                    sum += (double)0.7056565300858762546;
                  } else {
                    sum += (double)0.6281041306189213413;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.815599977970123291) ) ) {
                    sum += (double)0.7596635809523809568;
                  } else {
                    sum += (double)0.6961864680203101452;
                  }
                }
              } else {
                sum += (double)0.7691919168975068777;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07740000262856483459) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8073364794254302979) ) ) {
                sum += (double)0.8424822782608695215;
              } else {
                sum += (double)0.8819649971683710676;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7968119978904724121) ) ) {
                sum += (double)0.7378097013230899837;
              } else {
                sum += (double)0.8116516421052630825;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.5300461889586841613;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2617.1973876953125) ) ) {
            sum += (double)0.4580197191727385375;
          } else {
            sum += (double)0.173157581572373015;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001300000003539025784) ) ) {
            sum += (double)0.1751072095866918199;
          } else {
            sum += (double)0.09461582508233409849;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3485690057277679443) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2790039926767349243) ) ) {
              sum += (double)0.3130837842405088667;
            } else {
              sum += (double)0.4554230347772265097;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.962962985038757324) ) ) {
              sum += (double)0.2788955555227573546;
            } else {
              sum += (double)0.1506887836058112551;
            }
          }
        }
      } else {
        sum += (double)0.5890841489509676121;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
            sum += (double)0.04646526838235293805;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.23571586608886719) ) ) {
                sum += (double)0.009459904761904763121;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8829500079154968262) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8068626821041107178) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004674854545454546102;
                    }
                  } else {
                    sum += (double)0.006346800000000000531;
                  }
                } else {
                  sum += (double)0.009073288046647230015;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                sum += (double)0.02970100937628351867;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7459500133991241455) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.529049992561340332) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0822485014796257019) ) ) {
                      sum += (double)0.004000000000000000951;
                    } else {
                      sum += (double)0.004823233333333333712;
                    }
                  } else {
                    sum += (double)0.006723695238095239723;
                  }
                } else {
                  sum += (double)0.02196525291607396776;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.73214340209960938) ) ) {
            sum += (double)0.106782405627617441;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3284215033054351807) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                sum += (double)0.07547386120023767686;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6510999798774719238) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                    sum += (double)0.03469215555555554831;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3038500100374221802) ) ) {
                      sum += (double)0.005768539130434784112;
                    } else {
                      sum += (double)0.01978651239911959417;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7707.475830078125) ) ) {
                      sum += (double)0.03583692679738562786;
                    } else {
                      sum += (double)0.0131831157894736848;
                    }
                  } else {
                    sum += (double)0.07944923757953230303;
                  }
                }
              }
            } else {
              sum += (double)0.08022991055687785089;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9288.591796875) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1022877953946590424) ) ) {
              sum += (double)0.1579369987545787557;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08984800055623054504) ) ) {
                sum += (double)0.1562494089621713489;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2756000012159347534) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2573764175176620483) ) ) {
                    sum += (double)0.04672155364018871354;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                      sum += (double)0.02053267774447774252;
                    } else {
                      sum += (double)0.03188058559019640859;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5897000133991241455) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86403560638427734) ) ) {
                      sum += (double)0.07214097462213213408;
                    } else {
                      sum += (double)0.02988967310929810731;
                    }
                  } else {
                    sum += (double)0.1096573012635196492;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.99374961853027344) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5959614217281341553) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.15714263916015625) ) ) {
                  sum += (double)0.2249920736730557091;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                    sum += (double)0.02959546666666666714;
                  } else {
                    sum += (double)0.09390352708709018281;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                  sum += (double)0.05352318979797979909;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8400000035762786865) ) ) {
                      sum += (double)0.01343064615384615725;
                    } else {
                      sum += (double)0.006174323809523810623;
                    }
                  } else {
                    sum += (double)0.02996902626321735694;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2922.6168212890625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.24166679382324219) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5018.7197265625) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                      sum += (double)0.04493497223264541346;
                    } else {
                      sum += (double)0.1641504452716232576;
                    }
                  } else {
                    sum += (double)0.2256451969283291004;
                  }
                } else {
                  sum += (double)0.3626949416285247252;
                }
              } else {
                sum += (double)0.4295858372019203952;
              }
            }
          }
        } else {
          sum += (double)0.3598371799146235506;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9330400824546813965) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811504900455474854) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6275500059127807617) ) ) {
                sum += (double)0.4706587740520917773;
              } else {
                sum += (double)0.5502188260481536419;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12944.76416015625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2104915007948875427) ) ) {
                  sum += (double)0.3712239506856770954;
                } else {
                  sum += (double)0.4750309760405638237;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2342735007405281067) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2223000004887580872) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4917500019073486328) ) ) {
                      sum += (double)0.3428366248052887588;
                    } else {
                      sum += (double)0.2250211428639939948;
                    }
                  } else {
                    sum += (double)0.1176942126326451649;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                    sum += (double)0.4992929627979772467;
                  } else {
                    sum += (double)0.2852059366077194791;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3700859993696212769) ) ) {
                sum += (double)0.5616356757821328038;
              } else {
                sum += (double)0.6443104284923980574;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42348003387451172) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036939948797225952) ) ) {
                    sum += (double)0.4365449463968983368;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5439.9404296875) ) ) {
                      sum += (double)0.4920649957646222594;
                    } else {
                      sum += (double)0.5509116453789144607;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9175.11376953125) ) ) {
                    sum += (double)0.4571306283317889685;
                  } else {
                    sum += (double)0.3336183412629822875;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1603500023484230042) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2351251393556594849) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.520138740539550781) ) ) {
                      sum += (double)0.5700850650844500045;
                    } else {
                      sum += (double)0.4571814833032422642;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.31967496871948242) ) ) {
                      sum += (double)0.5663317398532495828;
                    } else {
                      sum += (double)0.6316635413318242298;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2357614338397979736) ) ) {
                    sum += (double)0.5449455531505016381;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5446999967098236084) ) ) {
                      sum += (double)0.5368971276826902672;
                    } else {
                      sum += (double)0.3935285266865933274;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1818514987826347351) ) ) {
            sum += (double)0.3539245207579250208;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12317.3447265625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2714000046253204346) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22931.6943359375) ) ) {
                  sum += (double)0.08168777817925616802;
                } else {
                  sum += (double)0.2093372452208742684;
                }
              } else {
                sum += (double)0.2605767701788707091;
              }
            } else {
              sum += (double)0.3110957615121192066;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.861360907554626465) ) ) {
          sum += (double)0.4020295117996536272;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3453.2696533203125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.546538352966308594) ) ) {
              sum += (double)0.4355292575636424135;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.299170434474945068) ) ) {
                sum += (double)0.1893529384097359103;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.78614711761474609) ) ) {
                  sum += (double)0.06723167773279351001;
                } else {
                  sum += (double)0.02118176216596343378;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.816392838954925537) ) ) {
              sum += (double)0.02532540738916256098;
            } else {
              sum += (double)0.08764280481448538662;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6726120114326477051) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1588499993085861206) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.942850291728973389) ) ) {
            sum += (double)0.5342612518547982248;
          } else {
            sum += (double)0.2809070729287854729;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700002610683441162) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355660021305084229) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1103710345923900604) ) ) {
                  sum += (double)0.5572216020901775702;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34320163726806641) ) ) {
                    sum += (double)0.6037734425829388574;
                  } else {
                    sum += (double)0.655148408144796357;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.521043777465820312) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6218225061893463135) ) ) {
                    sum += (double)0.7134803812055823258;
                  } else {
                    sum += (double)0.8014414833333333155;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8176499903202056885) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.061298131942749023) ) ) {
                      sum += (double)0.657691312940357764;
                    } else {
                      sum += (double)0.755758863101604339;
                    }
                  } else {
                    sum += (double)0.6509341369075367645;
                  }
                }
              }
            } else {
              sum += (double)0.5435415538750287823;
            }
          } else {
            sum += (double)0.4523691063711789973;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              sum += (double)0.8024460875957254435;
            } else {
              sum += (double)0.6938861569587027045;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06044910475611686707) ) ) {
                sum += (double)0.8562573875000000223;
              } else {
                sum += (double)0.7959883635510833777;
              }
            } else {
              sum += (double)0.8906811845454545296;
            }
          }
        } else {
          sum += (double)0.6786406340727378916;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.205263137817382812) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.208057500422000885) ) ) {
        sum += (double)0.09876491820423502488;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1128.2769775390625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3975134938955307007) ) ) {
              sum += (double)0.4432205218201748509;
            } else {
              sum += (double)0.2521937608174905088;
            }
          } else {
            sum += (double)0.1446218561616304799;
          }
        } else {
          sum += (double)0.512410756399132028;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1082589998841285706) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8352999985218048096) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.70833206176757812) ) ) {
                    sum += (double)0.005462342857142857798;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1743999943137168884) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004794072727272728068;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12629.94921875) ) ) {
                    sum += (double)0.0103425333333333324;
                  } else {
                    sum += (double)0.005225600000000001251;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.39136695861816406) ) ) {
                  sum += (double)0.02108169503850123444;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08854600042104721069) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1989500001072883606) ) ) {
                      sum += (double)0.006417585185185185719;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  } else {
                    sum += (double)0.01131189090909090651;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06974849849939346313) ) ) {
                sum += (double)0.04588438088824755429;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.140750005841255188) ) ) {
                  sum += (double)0.01931683529411764785;
                } else {
                  sum += (double)0.01212916521739130539;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.498016357421875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.122800000011920929) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3966999948024749756) ) ) {
                      sum += (double)0.06360395749191985471;
                    } else {
                      sum += (double)0.01574814035087719263;
                    }
                  } else {
                    sum += (double)0.0853278842965023987;
                  }
                } else {
                  sum += (double)0.1057337601384173847;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8054935336112976074) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02900000009685754776) ) ) {
                      sum += (double)0.03139190588235294538;
                    } else {
                      sum += (double)0.01268394042553191645;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1950000002980232239) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.008037091454442557917;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.05315399169921875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                      sum += (double)0.03574071884057970772;
                    } else {
                      sum += (double)0.01611572307692307401;
                    }
                  } else {
                    sum += (double)0.08454298353260293608;
                  }
                }
              }
            } else {
              sum += (double)0.1078462188674327304;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.24464273452758789) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02660000044852495193) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.76838207244873047) ) ) {
                sum += (double)0.1738363984943959439;
              } else {
                sum += (double)0.3112997894392832143;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947741985321044922) ) ) {
                  sum += (double)0.1635561127833114747;
                } else {
                  sum += (double)0.07544828392715546839;
                }
              } else {
                sum += (double)0.1914627091664377057;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4130438566207885742) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3418510109186172485) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.62743854522705078) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.53285408020019531) ) ) {
                    sum += (double)0.06848204240829829093;
                  } else {
                    sum += (double)0.09920300604934943756;
                  }
                } else {
                  sum += (double)0.02482997401828161352;
                }
              } else {
                sum += (double)0.1589462102419608724;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.91911697387695312) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2591499984264373779) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.519159168004989624) ) ) {
                    sum += (double)0.05333447330754882698;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8805069029331207275) ) ) {
                      sum += (double)0.02614643076923077111;
                    } else {
                      sum += (double)0.004772945454545454887;
                    }
                  }
                } else {
                  sum += (double)0.06191738458416304325;
                }
              } else {
                sum += (double)0.009690603719848884384;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1866.98406982421875) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4929.848876953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)77.00000190734863281) ) ) {
              sum += (double)0.1079220895684896847;
            } else {
              sum += (double)0.3106002697858267769;
            }
          } else {
            sum += (double)0.3775814074453176516;
          }
        } else {
          sum += (double)0.06204531285907075727;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3835249990224838257) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8332356512546539307) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5439785629105985398;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162330001592636108) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.2029835312640220213;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1454000025987625122) ) ) {
                    sum += (double)0.2685789850613256036;
                  } else {
                    sum += (double)0.4463027762364737971;
                  }
                }
              } else {
                sum += (double)0.166769123910685102;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.07500004768371582) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4565397650003433228) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711329221725463867) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3028449863195419312) ) ) {
                    sum += (double)0.5264514372374315965;
                  } else {
                    sum += (double)0.4773669399571420224;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2303118780255317688) ) ) {
                    sum += (double)0.5936352162253527576;
                  } else {
                    sum += (double)0.5098789210408929407;
                  }
                }
              } else {
                sum += (double)0.4417319797240513712;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5083.18603515625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05384999886155128479) ) ) {
                  sum += (double)0.5897592566411239412;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2521999925374984741) ) ) {
                    sum += (double)0.4151965128095250201;
                  } else {
                    sum += (double)0.5048929848789008856;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07644999772310256958) ) ) {
                  sum += (double)0.2846854826748563827;
                } else {
                  sum += (double)0.4570284168912154277;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3509401381015777588) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1310500055551528931) ) ) {
                sum += (double)0.3382640722584797643;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.89713287353515625) ) ) {
                  sum += (double)0.1663169348154426019;
                } else {
                  sum += (double)0.2860170991823000608;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.31451988220214844) ) ) {
                sum += (double)0.2130246676995773691;
              } else {
                sum += (double)0.08058024572345574843;
              }
            }
          } else {
            sum += (double)0.4023761836988745122;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          sum += (double)0.2100487078004138197;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03930000029504299164) ) ) {
            sum += (double)0.1677297820123878069;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5770500004291534424) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2903524935245513916) ) ) {
                  sum += (double)0.02418980573639924192;
                } else {
                  sum += (double)0.07517166517148927973;
                }
              } else {
                sum += (double)0.008141718518518518966;
              }
            } else {
              sum += (double)0.1013917175027744672;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5748748779296875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1951474398374557495) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.111742258071899414) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02630000002682209015) ) ) {
                      sum += (double)0.6760979567346938612;
                    } else {
                      sum += (double)0.6231004066284157039;
                    }
                  } else {
                    sum += (double)0.5454027851867135901;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2393.98193359375) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3579.0439453125) ) ) {
                      sum += (double)0.5722596120303028444;
                    } else {
                      sum += (double)0.4959469037441891492;
                    }
                  } else {
                    sum += (double)0.6292759314285714112;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2724.4854736328125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1041111834347248077) ) ) {
                    sum += (double)0.6907008044928217849;
                  } else {
                    sum += (double)0.6173735716910875304;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5598469972610473633) ) ) {
                    sum += (double)0.7406403250000000993;
                  } else {
                    sum += (double)0.6893716226981352335;
                  }
                }
              }
            } else {
              sum += (double)0.4971506932210308372;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1491499990224838257) ) ) {
              sum += (double)0.3117087960351196951;
            } else {
              sum += (double)0.513490504775618084;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.544594526290893555) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
                sum += (double)0.7849812814814813855;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.636171817779541016) ) ) {
                  sum += (double)0.7000726643892339895;
                } else {
                  sum += (double)0.7578245597883597195;
                }
              }
            } else {
              sum += (double)0.655054967810786648;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8970215022563934326) ) ) {
                sum += (double)0.9118083325102881442;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06707561388611793518) ) ) {
                  sum += (double)0.8308577366208670378;
                } else {
                  sum += (double)0.8632900800000001817;
                }
              }
            } else {
              sum += (double)0.7867642407630081047;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
            sum += (double)0.4755629221517654881;
          } else {
            sum += (double)0.5703039138497847382;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4490.690185546875) ) ) {
            sum += (double)0.3879982902603570927;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.631818294525146484) ) ) {
              sum += (double)0.2903284560872648745;
            } else {
              sum += (double)0.08960500632064953563;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.523571252822875977) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        sum += (double)0.2304992786170161623;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776080101728439331) ) ) {
          sum += (double)0.3919108319802351859;
        } else {
          sum += (double)0.5311065773394879619;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3915744870901107788) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
            sum += (double)0.129422334078016843;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1123495027422904968) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08244450017809867859) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02929999958723783493) ) ) {
                      sum += (double)0.005367453333333335221;
                    } else {
                      sum += (double)0.01021102857142857159;
                    }
                  } else {
                    sum += (double)0.02162660612244898459;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7086000144481658936) ) ) {
                    sum += (double)0.0752648927762048503;
                  } else {
                    sum += (double)0.02150022679680568122;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07200650125741958618) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004457154430379749697;
                    } else {
                      sum += (double)0.007280750000000000763;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                      sum += (double)0.01514363200000000236;
                    } else {
                      sum += (double)0.004790824000000001685;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14218.35888671875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)128.3033676147460938) ) ) {
                      sum += (double)0.009611835294117646034;
                    } else {
                      sum += (double)0.004687693333333335481;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4625.572021484375) ) ) {
                      sum += (double)0.02838834356261022915;
                    } else {
                      sum += (double)0.008294905263157896502;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7869500219821929932) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3801500052213668823) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3132860064506530762) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09996850043535232544) ) ) {
                      sum += (double)0.04374233712108325373;
                    } else {
                      sum += (double)0.02182236746339423841;
                    }
                  } else {
                    sum += (double)0.0791152684629462255;
                  }
                } else {
                  sum += (double)0.09334204483159116994;
                }
              } else {
                sum += (double)0.09930223565914268746;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3970661163330078125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01014999998733401299) ) ) {
              sum += (double)0.356683467966208867;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1646514981985092163) ) ) {
                sum += (double)0.04206403970625517685;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.96875) ) ) {
                  sum += (double)0.2254859742803565215;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.56818199157714844) ) ) {
                    sum += (double)0.09121265039125468765;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.51388883590698242) ) ) {
                      sum += (double)0.2389236674264575699;
                    } else {
                      sum += (double)0.1398338018522882753;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7809357941150665283) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7745.342529296875) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19359.9921875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4402499943971633911) ) ) {
                    sum += (double)0.02449197527345119835;
                  } else {
                    sum += (double)0.05140808126412595158;
                  }
                } else {
                  sum += (double)0.08264774713603117995;
                }
              } else {
                sum += (double)0.2054032690855277787;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.436650007963180542) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
                  sum += (double)0.00663090000000000207;
                } else {
                  sum += (double)0.02327393350537634159;
                }
              } else {
                sum += (double)0.0525967956328194236;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59875297546386719) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53749990463256836) ) ) {
            sum += (double)0.2404910620681383893;
          } else {
            sum += (double)0.0604875719648094029;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4929.848876953125) ) ) {
            sum += (double)0.1939071669645447693;
          } else {
            sum += (double)0.38370597249166144;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2800485044717788696) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              sum += (double)0.5212350058894877902;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1840915009379386902) ) ) {
                  sum += (double)0.2566119720398488679;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.440637588500976562) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2493734955787658691) ) ) {
                      sum += (double)0.4453541850205061103;
                    } else {
                      sum += (double)0.5289670906394843275;
                    }
                  } else {
                    sum += (double)0.3875395310204480248;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1586499959230422974) ) ) {
                  sum += (double)0.2412806110891718148;
                } else {
                  sum += (double)0.3254179537335393224;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
              sum += (double)0.6299961132989858603;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.226981163024902344) ) ) {
                  sum += (double)0.4396982572177807747;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3936.9281005859375) ) ) {
                    sum += (double)0.4740428433195192359;
                  } else {
                    sum += (double)0.5417719957523337015;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2442.576416015625) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3209.9976806640625) ) ) {
                      sum += (double)0.5739548736353932146;
                    } else {
                      sum += (double)0.5053344456649229155;
                    }
                  } else {
                    sum += (double)0.6197892004127966148;
                  }
                } else {
                  sum += (double)0.4849420394246083399;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240121498703956604) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2152500003576278687) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12516.45166015625) ) ) {
                sum += (double)0.1915148610329850953;
              } else {
                sum += (double)0.3717510260009799228;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19061.87109375) ) ) {
                sum += (double)0.1470921813376131482;
              } else {
                sum += (double)0.05008473658536585771;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16459.994140625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.36071586608886719) ) ) {
                  sum += (double)0.5124950126069662826;
                } else {
                  sum += (double)0.3642325519712698023;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.21417760848999023) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2761873751878738403) ) ) {
                    sum += (double)0.3560412549540398763;
                  } else {
                    sum += (double)0.410568970196522276;
                  }
                } else {
                  sum += (double)0.234546093998545313;
                }
              }
            } else {
              sum += (double)0.1849234136424114106;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.782791495323181152) ) ) {
          sum += (double)0.2947793101507412694;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05709999985992908478) ) ) {
            sum += (double)0.1677950697315287454;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.123808443546295166) ) ) {
              sum += (double)0.2081849213800632536;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.967259228229522705) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11762.462890625) ) ) {
                  sum += (double)0.07200055690070798764;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2318999990820884705) ) ) {
                    sum += (double)0.006890033333333333426;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.625993192195892334) ) ) {
                      sum += (double)0.03433436045977011908;
                    } else {
                      sum += (double)0.01796749271137026288;
                    }
                  }
                }
              } else {
                sum += (double)0.08972415877458073119;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033862948417663574) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00664999987930059433) ) ) {
              sum += (double)0.7196510327445649891;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5470145046710968018) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5208895206451416016) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.45707035064697266) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08640000224113464355) ) ) {
                      sum += (double)0.57912588767570361;
                    } else {
                      sum += (double)0.6301080823233653483;
                    }
                  } else {
                    sum += (double)0.6548936068376068897;
                  }
                } else {
                  sum += (double)0.5587541214318519911;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2749.1190185546875) ) ) {
                  sum += (double)0.6469535710670281103;
                } else {
                  sum += (double)0.704943567581136965;
                }
              }
            }
          } else {
            sum += (double)0.4651011416772038998;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08224999904632568359) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6958000063896179199) ) ) {
                sum += (double)0.7377035351536737062;
              } else {
                sum += (double)0.8008030296296295703;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
                sum += (double)0.7385559977277366128;
              } else {
                sum += (double)0.6650580278236774001;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4505.7581787109375) ) ) {
              sum += (double)0.7760856672374112364;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
                sum += (double)0.8834544436363637177;
              } else {
                sum += (double)0.8340918571428571626;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653530001640319824) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.709255695343017578) ) ) {
            sum += (double)0.4622161836028116366;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.4151083507095121305;
            } else {
              sum += (double)0.1755749092028863201;
            }
          }
        } else {
          sum += (double)0.616090042706900376;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
        sum += (double)0.5326923299122645616;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.737396538257598877) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
              sum += (double)0.131709383853011841;
            } else {
              sum += (double)0.2033522668794304766;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.851818323135375977) ) ) {
              sum += (double)0.4351416630250481976;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3812309950590133667) ) ) {
                sum += (double)0.3164687946860287315;
              } else {
                sum += (double)0.1874435414944115863;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.805861711502075195) ) ) {
            sum += (double)0.04025035287465575373;
          } else {
            sum += (double)0.2362861549217960822;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8690000176429748535) ) ) {
                    sum += (double)0.005855850000000000118;
                  } else {
                    sum += (double)0.005096589473684210239;
                  }
                }
              } else {
                sum += (double)0.007855583333333334209;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1093754991888999939) ) ) {
                sum += (double)0.02779369183673469426;
              } else {
                sum += (double)0.007049512925170068993;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.14545440673828125) ) ) {
              sum += (double)0.07011954000441397716;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007999999797903001308) ) ) {
                sum += (double)0.04723872029495558567;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8450999855995178223) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4074999988079071045) ) ) {
                      sum += (double)0.03526844166666667085;
                    } else {
                      sum += (double)0.01148027777777777675;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1400000005960464478) ) ) {
                      sum += (double)0.004172814285714287683;
                    } else {
                      sum += (double)0.008511386191284664449;
                    }
                  }
                } else {
                  sum += (double)0.03899308717948719166;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.743600010871887207) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.62983798980712891) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.112549997866153717) ) ) {
                sum += (double)0.03229463157894737341;
              } else {
                sum += (double)0.1069248588870354427;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3330499976873397827) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1918054968118667603) ) ) {
                  sum += (double)0.006149076923076923773;
                } else {
                  sum += (double)0.009019472727272727017;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2146169990301132202) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09892150014638900757) ) ) {
                    sum += (double)0.05082694200831847087;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3650000095367431641) ) ) {
                      sum += (double)0.008276260869565219003;
                    } else {
                      sum += (double)0.01929030666666666644;
                    }
                  }
                } else {
                  sum += (double)0.08264474557859294301;
                }
              }
            }
          } else {
            sum += (double)0.1162722701733095165;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5949037671089172363) ) ) {
            sum += (double)0.3749715651703556252;
          } else {
            sum += (double)0.1132638017429193761;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5941435098648071289) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7020.048828125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1987259984016418457) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.23401260375976562) ) ) {
                      sum += (double)0.02091668160919540193;
                    } else {
                      sum += (double)0.06721407136410968708;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1500255018472671509) ) ) {
                      sum += (double)0.04453655816249451477;
                    } else {
                      sum += (double)0.1033993936769734973;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.31788444519042969) ) ) {
                    sum += (double)0.03612043912240686661;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13859.44482421875) ) ) {
                      sum += (double)0.1137305253086659806;
                    } else {
                      sum += (double)0.2187943674460675891;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2705275118350982666) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1247999966144561768) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04979999922215938568) ) ) {
                      sum += (double)0.04700073115424707043;
                    } else {
                      sum += (double)0.1230594786251034134;
                    }
                  } else {
                    sum += (double)0.1979751189201522377;
                  }
                } else {
                  sum += (double)0.2434380660733705959;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3892499953508377075) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.680000007152557373) ) ) {
                  sum += (double)0.053520688307734883;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7516148090362548828) ) ) {
                    sum += (double)0.03131119592948455183;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.80263137817382812) ) ) {
                      sum += (double)0.008920104761904764853;
                    } else {
                      sum += (double)0.02443776222567228124;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                  sum += (double)0.1560281851247573293;
                } else {
                  sum += (double)0.02958968754297417944;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2125499993562698364) ) ) {
              sum += (double)0.3889667282352692323;
            } else {
              sum += (double)0.1954790296961550211;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9330400824546813965) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02034999988973140717) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.528322458267211914) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.28221149742603302) ) ) {
                  sum += (double)0.467581120364885916;
                } else {
                  sum += (double)0.5428717560522832164;
                }
              } else {
                sum += (double)0.5866135586312957173;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.08915424346923828) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2612629979848861694) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.178099997341632843) ) ) {
                    sum += (double)0.3793598644669176623;
                  } else {
                    sum += (double)0.462445351894813228;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3049720674753189087) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3904.772216796875) ) ) {
                      sum += (double)0.5058935939682539518;
                    } else {
                      sum += (double)0.5738015334265734735;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4899500012397766113) ) ) {
                      sum += (double)0.4942547506801791557;
                    } else {
                      sum += (double)0.436470035926690092;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2356070056557655334) ) ) {
                  sum += (double)0.178241471237734983;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6005.170166015625) ) ) {
                    sum += (double)0.5179163659552746823;
                  } else {
                    sum += (double)0.3153968196139262936;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2817500084638595581) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.3828277587890625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.987257957458496094) ) ) {
                  sum += (double)0.5512009591301793021;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.2343902587890625) ) ) {
                    sum += (double)0.6228322031891390109;
                  } else {
                    sum += (double)0.5653749052377941009;
                  }
                }
              } else {
                sum += (double)0.6675401372649573117;
              }
            } else {
              sum += (double)0.4626452015104408066;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3418017476797103882) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1268499940633773804) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.93958139419555664) ) ) {
                sum += (double)0.5049665138353839344;
              } else {
                sum += (double)0.3962434442659498179;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2386270016431808472) ) ) {
                sum += (double)0.1649933394303692569;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14742.8818359375) ) ) {
                  sum += (double)0.4342121206017863777;
                } else {
                  sum += (double)0.2899341707527876566;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349875062704086304) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693499982357025146) ) ) {
                sum += (double)0.1361646779964101328;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.9523158073425293) ) ) {
                  sum += (double)0.3367630908015830649;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.647256702184677124) ) ) {
                    sum += (double)0.1349940648062507575;
                  } else {
                    sum += (double)0.222566833192937491;
                  }
                }
              }
            } else {
              sum += (double)0.357399955139567127;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
          sum += (double)0.3061361737044267506;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
            sum += (double)0.2482448242825336937;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
              sum += (double)0.2297677513039851904;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3626739978790283203) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3942.275146484375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.78264236450195312) ) ) {
                    sum += (double)0.05935807764805438314;
                  } else {
                    sum += (double)0.03027017647058824132;
                  }
                } else {
                  sum += (double)0.01612501176470588701;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.511862754821777344) ) ) {
                  sum += (double)0.1788000134539089181;
                } else {
                  sum += (double)0.04731371092436974929;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.60194826126098633) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2544.429443359375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                    sum += (double)0.6413017300263679221;
                  } else {
                    sum += (double)0.5736400910664958275;
                  }
                } else {
                  sum += (double)0.5165722312064279231;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4607.9423828125) ) ) {
                  sum += (double)0.5900246428650502972;
                } else {
                  sum += (double)0.6756702173913042841;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1049031242728233337) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5838395059108734131) ) ) {
                  sum += (double)0.6956246138795986189;
                } else {
                  sum += (double)0.760515981333333313;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1406000033020973206) ) ) {
                  sum += (double)0.6480216673037678676;
                } else {
                  sum += (double)0.6762197513343798372;
                }
              }
            }
          } else {
            sum += (double)0.437358448921402243;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2415.3333740234375) ) ) {
              sum += (double)0.7252020345340465246;
            } else {
              sum += (double)0.7862211381805471744;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5058.159912109375) ) ) {
              sum += (double)0.7633674242175273461;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.9146844235294117054;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.392909824848175049) ) ) {
                  sum += (double)0.8387014383838384823;
                } else {
                  sum += (double)0.8691784428571428522;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
          sum += (double)0.5356168355593452501;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567900180816650391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07864999771118164062) ) ) {
              sum += (double)0.1993685452555641613;
            } else {
              sum += (double)0.3155742973731216483;
            }
          } else {
            sum += (double)0.5179954939134409075;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
          sum += (double)0.05529180217179716778;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0656500011682510376) ) ) {
              sum += (double)0.1712979892953407912;
            } else {
              sum += (double)0.3103148171639907305;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
              sum += (double)0.2433948513537101122;
            } else {
              sum += (double)0.4343191058872881705;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.3947215396386365427;
        } else {
          sum += (double)0.5467675507164314608;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1123495027422904968) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.87527656555175781) ) ) {
              sum += (double)0.02684825386996904373;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.55555343627929688) ) ) {
                sum += (double)0.008520381818181819653;
              } else {
                sum += (double)0.004264705882352941291;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1413654983043670654) ) ) {
              sum += (double)0.1096098492557103926;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.26000022888183594) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0327500002458691597) ) ) {
                  sum += (double)0.01349212000000000154;
                } else {
                  sum += (double)0.04533117356321839791;
                }
              } else {
                sum += (double)0.08596822076996024631;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
              sum += (double)0.01302927058823529632;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3171.5555419921875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2114999964833259583) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.004582320000000000837;
                  }
                } else {
                  sum += (double)0.006172640000000001806;
                }
              } else {
                sum += (double)0.01150975999999999909;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7692335546016693115) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                sum += (double)0.0451665905675118981;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03350000083446502686) ) ) {
                    sum += (double)0.02372866148440930939;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07512049749493598938) ) ) {
                      sum += (double)0.005407704347826087533;
                    } else {
                      sum += (double)0.01466873043478261057;
                    }
                  }
                } else {
                  sum += (double)0.03337789473684210639;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1805000007152557373) ) ) {
                sum += (double)0.01417627868437697745;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3339499980211257935) ) ) {
                  sum += (double)0.004000000000000000951;
                } else {
                  sum += (double)0.008007493333333334101;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6866090893745422363) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1775438487529754639) ) ) {
                  sum += (double)0.1584208710129176856;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1883939951658248901) ) ) {
                      sum += (double)0.02031983311253880362;
                    } else {
                      sum += (double)0.05664176156530984635;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4093097150325775146) ) ) {
                      sum += (double)0.09290504762700164954;
                    } else {
                      sum += (double)0.03944747834123345231;
                    }
                  }
                }
              } else {
                sum += (double)0.1632601009470290576;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.3236846923828125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2868.1590576171875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1978764981031417847) ) ) {
                      sum += (double)0.02062484052287581748;
                    } else {
                      sum += (double)0.07665177914533903569;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3267895281314849854) ) ) {
                      sum += (double)0.1150190516491966658;
                    } else {
                      sum += (double)0.2914763225101805189;
                    }
                  }
                } else {
                  sum += (double)0.2692773429038161082;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7705000042915344238) ) ) {
                  sum += (double)0.3900322922992593977;
                } else {
                  sum += (double)0.1835727897483351023;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3915744870901107788) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5169000029563903809) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1718000024557113647) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06969999894499778748) ) ) {
                      sum += (double)0.01351163473444118822;
                    } else {
                      sum += (double)0.04676501250000000831;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2546399980783462524) ) ) {
                      sum += (double)0.01057800000000000233;
                    } else {
                      sum += (double)0.005925115789473685106;
                    }
                  }
                } else {
                  sum += (double)0.04287419537452369367;
                }
              } else {
                sum += (double)0.06402905880898049351;
              }
            } else {
              sum += (double)0.1318371867581557833;
            }
          }
        } else {
          sum += (double)0.2870078842859585255;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3639300018548965454) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.972251415252685547) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4103.586669921875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                  sum += (double)0.4458612600689698113;
                } else {
                  sum += (double)0.289910101642886997;
                }
              } else {
                sum += (double)0.549548517272981929;
              }
            } else {
              sum += (double)0.2286416703530577688;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3151829987764358521) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2877554893493652344) ) ) {
                  sum += (double)0.5478227049710344687;
                } else {
                  sum += (double)0.4813603785317318029;
                }
              } else {
                sum += (double)0.5544542945932497968;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4317.9140625) ) ) {
                sum += (double)0.4961814861769151541;
              } else {
                sum += (double)0.366714060763209504;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1092777885496616364) ) ) {
              sum += (double)0.1639031051881283951;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1008500009775161743) ) ) {
                sum += (double)0.5274587260221259566;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12989.1435546875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2462000027298927307) ) ) {
                    sum += (double)0.2813848613843412116;
                  } else {
                    sum += (double)0.4682246295103679179;
                  }
                } else {
                  sum += (double)0.2196399333277785637;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.03244924545288086) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9932.76318359375) ) ) {
                sum += (double)0.3669650837531140963;
              } else {
                sum += (double)0.1598041043700950681;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3499500006437301636) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17091.0517578125) ) ) {
                  sum += (double)0.06549772251974966819;
                } else {
                  sum += (double)0.1539658852985947846;
                }
              } else {
                sum += (double)0.1836407140084067025;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25155.5751953125) ) ) {
          sum += (double)0.2144740758347624954;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.671597480773925781) ) ) {
            sum += (double)0.1145629392991867057;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2672355026006698608) ) ) {
              sum += (double)0.07047669067376392815;
            } else {
              sum += (double)0.01713573793103448373;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.794265061616897583) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.734189510345458984) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4643076509237289429) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
                sum += (double)0.7085509285714284289;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1405.20916748046875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1894816607236862183) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3560.574462890625) ) ) {
                      sum += (double)0.593596989902002381;
                    } else {
                      sum += (double)0.6251565838289504518;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.230829387903213501) ) ) {
                      sum += (double)0.5137191251500282663;
                    } else {
                      sum += (double)0.5895306494116182572;
                    }
                  }
                } else {
                  sum += (double)0.6818404399999999921;
                }
              }
            } else {
              sum += (double)0.5085839059790439043;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.655950009822845459) ) ) {
              sum += (double)0.4393783703088702253;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1572116538882255554) ) ) {
                sum += (double)0.4710263067282419169;
              } else {
                sum += (double)0.5766168640258030331;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.38541603088378906) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7125905156135559082) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.265974998474121094) ) ) {
                sum += (double)0.6606609462479319239;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.153846085071563721) ) ) {
                  sum += (double)0.8081651368421052251;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.52657794952392578) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1367512419819831848) ) ) {
                      sum += (double)0.6717615993922775308;
                    } else {
                      sum += (double)0.7280352354679801019;
                    }
                  } else {
                    sum += (double)0.7468675487445887162;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09685000032186508179) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8111500144004821777) ) ) {
                  sum += (double)0.8754155360623780968;
                } else {
                  sum += (double)0.8275942474587141273;
                }
              } else {
                sum += (double)0.7734053900780368807;
              }
            }
          } else {
            sum += (double)0.5945713844870265108;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06249999813735485077) ) ) {
              sum += (double)0.4095204339834079277;
            } else {
              sum += (double)0.5371265597165075789;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1764.81591796875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.24266815185546875) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4296485036611557007) ) ) {
                  sum += (double)0.2829867658506287076;
                } else {
                  sum += (double)0.4392089499582683132;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.171698868274688721) ) ) {
                  sum += (double)0.3042472001397928949;
                } else {
                  sum += (double)0.05960767308337613229;
                }
              }
            } else {
              sum += (double)0.1236472306755420358;
            }
          }
        } else {
          sum += (double)0.6387675878577626642;
        }
      }
    }
  }
  return sum;
}
