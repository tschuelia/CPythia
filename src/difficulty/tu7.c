#include "header.h"
double predict_margin_unit7(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2972870022058486938) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.13025236129760742) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1231920011341571808) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5086999833583831787) ) ) {
          sum += (double)0.1223508541666666755;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09604100137948989868) ) ) {
            sum += (double)0.005053814814814815669;
          } else {
            sum += (double)0.02140788235294117936;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5381.6572265625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007649999810382723808) ) ) {
            sum += (double)0.470701000000000036;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6201.883544921875) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8662.27685546875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.28076915442943573) ) ) {
                    sum += (double)0.1641100416666666784;
                  } else {
                    sum += (double)0.2819851136363636379;
                  }
                } else {
                  sum += (double)0.04774903846153845388;
                }
              } else {
                sum += (double)0.2964649264705882525;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4160000085830688477) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.989130496978759766) ) ) {
                  sum += (double)0.4127686634615385097;
                } else {
                  sum += (double)0.3314420952380952023;
                }
              } else {
                sum += (double)0.2222645000000000037;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.842499971389770508) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2394175082445144653) ) ) {
              sum += (double)0.3287249583333333169;
            } else {
              sum += (double)0.4108428124999999875;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9541923999786376953) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1589.66754150390625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01994999963790178299) ) ) {
                    sum += (double)0.3396488250000000986;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5967499911785125732) ) ) {
                      sum += (double)0.2387846574074073969;
                    } else {
                      sum += (double)0.1544180937499999851;
                    }
                  }
                } else {
                  sum += (double)0.09561332407407407974;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2981.335205078125) ) ) {
                  sum += (double)0.07463665322580644024;
                } else {
                  sum += (double)0.1612339861111111161;
                }
              }
            } else {
              sum += (double)0.01332369444444444703;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2529164999723434448) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84589385986328125) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8097.1044921875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0197999998927116394) ) ) {
              sum += (double)0.2686831250000000226;
            } else {
              sum += (double)0.1261902934782608565;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1973019987344741821) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4990.906982421875) ) ) {
                sum += (double)0.04128913333333333185;
              } else {
                sum += (double)0.01479138461538461596;
              }
            } else {
              sum += (double)0.06674454999999999971;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07418950274586677551) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1418999955058097839) ) ) {
              sum += (double)0.03702078571428570747;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7909158468246459961) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.57008552551269531) ) ) {
                  sum += (double)0.007510884615384615451;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05397449992597103119) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1902000010013580322) ) ) {
                      sum += (double)0.00272736328125000203;
                    } else {
                      sum += (double)0.004784617647058823746;
                    }
                  } else {
                    sum += (double)0.005501633928571428647;
                  }
                }
              } else {
                sum += (double)0.009685880000000000878;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4036500006914138794) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5235977470874786377) ) ) {
                sum += (double)0.0620034736842105319;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-116965.36328125) ) ) {
                  sum += (double)0.03576529687499999804;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3753499984741210938) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14786.31396484375) ) ) {
                      sum += (double)0.01339833333333333501;
                    } else {
                      sum += (double)0.004119720238095240031;
                    }
                  } else {
                    sum += (double)0.02769308823529412211;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.78636550903320312) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10292.85986328125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1642175018787384033) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.63459587097167969) ) ) {
                      sum += (double)0.03412028571428570717;
                    } else {
                      sum += (double)0.1030476896551724003;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.200446002185344696) ) ) {
                      sum += (double)0.2040988809523809622;
                    } else {
                      sum += (double)0.07473314285714284522;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4664999991655349731) ) ) {
                    sum += (double)0.09227305357142857878;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.30172348022460938) ) ) {
                      sum += (double)0.0125880500000000034;
                    } else {
                      sum += (double)0.04894942647058823926;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2485500052571296692) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6532500088214874268) ) ) {
                    sum += (double)0.003870071428571428881;
                  } else {
                    sum += (double)0.02127125000000000196;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31410.6142578125) ) ) {
                    sum += (double)0.05668171739130434261;
                  } else {
                    sum += (double)0.01823289473684210418;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5591000020503997803) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2816525101661682129) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2664140015840530396) ) ) {
              sum += (double)0.08679740789473683327;
            } else {
              sum += (double)0.1915285972222222077;
            }
          } else {
            sum += (double)0.02626552678571428268;
          }
        } else {
          sum += (double)0.2393854659090909054;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.78668498992919922) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4408644884824752808) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1126.63311767578125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09629999846220016479) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.604779362678527832) ) ) {
                      sum += (double)0.3855911363636363998;
                    } else {
                      sum += (double)0.4861461696428571178;
                    }
                  } else {
                    sum += (double)0.3655865714285714274;
                  }
                } else {
                  sum += (double)0.2567775874999999597;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628499805927276611) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.770978927612304688) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01374999992549419403) ) ) {
                      sum += (double)0.5606492500000000989;
                    } else {
                      sum += (double)0.4740137187500000349;
                    }
                  } else {
                    sum += (double)0.3468970909090909327;
                  }
                } else {
                  sum += (double)0.3254352222222222646;
                }
              }
            } else {
              sum += (double)0.2845961499999999922;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.034543275833129883) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.25) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.044230937957763672) ) ) {
                    sum += (double)0.5170740595238095816;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.488609999418258667) ) ) {
                      sum += (double)0.5415782272727273083;
                    } else {
                      sum += (double)0.6200248906249999914;
                    }
                  }
                } else {
                  sum += (double)0.499016431034482788;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.458931207656860352) ) ) {
                  sum += (double)0.5479314916666666591;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03170000016689300537) ) ) {
                    sum += (double)0.6738737799999999778;
                  } else {
                    sum += (double)0.6319178815789473491;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7266499996185302734) ) ) {
                sum += (double)0.5272037578124999513;
              } else {
                sum += (double)0.3669820499999999486;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.03917026519775391) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.30555582046508789) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9767.8310546875) ) ) {
                sum += (double)0.3589620694444443094;
              } else {
                sum += (double)0.1914053815789473478;
              }
            } else {
              sum += (double)0.3899448839285714619;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6369499862194061279) ) ) {
              sum += (double)0.1255323295454545407;
            } else {
              sum += (double)0.2841241833333333355;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            sum += (double)0.7158445000000001057;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7741999924182891846) ) ) {
              sum += (double)0.6939093958333333312;
            } else {
              sum += (double)0.6053781527777777338;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700851440429688) ) ) {
              sum += (double)0.8164185595238095949;
            } else {
              sum += (double)0.7742515568181819186;
            }
          } else {
            sum += (double)0.8736406624999999426;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5487999916076660156) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.52984774112701416) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1368.8526611328125) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.470213115215301514) ) ) {
              sum += (double)0.4228973749999999643;
            } else {
              sum += (double)0.3209254843750000141;
            }
          } else {
            sum += (double)0.1835125131578947133;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3790194988250732422) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
              sum += (double)0.1932616770833333331;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2451.3175048828125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3524024933576583862) ) ) {
                  sum += (double)0.02005104310344827528;
                } else {
                  sum += (double)0.06766891071428571269;
                }
              } else {
                sum += (double)0.007750846153846155037;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1989.45965576171875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.62967920303344727) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3410.78076171875) ) ) {
                  sum += (double)0.3890768166666666583;
                } else {
                  sum += (double)0.2290516442307692357;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.46477699279785156) ) ) {
                  sum += (double)0.05085613095238093739;
                } else {
                  sum += (double)0.198203220000000041;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.289007186889648438) ) ) {
                sum += (double)0.1197008749999999982;
              } else {
                sum += (double)0.04363540624999999451;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9918491840362548828) ) ) {
            sum += (double)0.6014336666666667552;
          } else {
            sum += (double)0.4317519047619047257;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.914313197135925293) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.558125317096710205) ) ) {
              sum += (double)0.4465468928571428853;
            } else {
              sum += (double)0.3747352596153845639;
            }
          } else {
            sum += (double)0.1839539411764705701;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301595002412796021) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2511.701416015625) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2697194963693618774) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.19108271598815918) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
                sum += (double)0.4387795108695652369;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2431045025587081909) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13015.6142578125) ) ) {
                    sum += (double)0.3088095588235293953;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6161.9482421875) ) ) {
                      sum += (double)0.1687368499999999938;
                    } else {
                      sum += (double)0.2755993026315789463;
                    }
                  }
                } else {
                  sum += (double)0.4152018333333333255;
                }
              }
            } else {
              sum += (double)0.09062859374999998607;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2128959968686103821) ) ) {
              sum += (double)0.09886850000000001193;
            } else {
              sum += (double)0.2349123541666666981;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3315.678955078125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2935855090618133545) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5896.412841796875) ) ) {
                sum += (double)0.3899494264705882229;
              } else {
                sum += (double)0.2425125535714285907;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5266999900341033936) ) ) {
                sum += (double)0.3584922500000000123;
              } else {
                sum += (double)0.4209407142857142792;
              }
            }
          } else {
            sum += (double)0.4668892416666666212;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.492727279663085938) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008849999867379665375) ) ) {
            sum += (double)0.3193564531249999394;
          } else {
            sum += (double)0.1781005138888889228;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.595652341842651367) ) ) {
              sum += (double)0.03577792857142857164;
            } else {
              sum += (double)0.006674904761904762972;
            }
          } else {
            sum += (double)0.1547913499999999942;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02545499801635742) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10664.23046875) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.82940864562988281) ) ) {
            sum += (double)0.4115315999999999974;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21561.6884765625) ) ) {
              sum += (double)0.281168397058823516;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2421500012278556824) ) ) {
                sum += (double)0.2226101699999999961;
              } else {
                sum += (double)0.1066853194444444403;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1349655017256736755) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.84315776824951172) ) ) {
              sum += (double)0.04057151086956521657;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                sum += (double)0.004134742424242425322;
              } else {
                sum += (double)0.02670136249999999906;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1473.0068359375) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7769110500812530518) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30689764022827148) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1719491928815841675) ) ) {
                    sum += (double)0.09468665217391306066;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.69576358795166016) ) ) {
                      sum += (double)0.1448090681818181846;
                    } else {
                      sum += (double)0.2301965624999999793;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07285000011324882507) ) ) {
                    sum += (double)0.04150395999999998559;
                  } else {
                    sum += (double)0.1487298076923077028;
                  }
                }
              } else {
                sum += (double)0.03596326562500000434;
              }
            } else {
              sum += (double)0.01490303571428571415;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.169916003942489624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.52410984039306641) ) ) {
            sum += (double)0.0778866982758620735;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07630600035190582275) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.51062774658203125) ) ) {
                sum += (double)0.03297823529411764154;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-41645.40234375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)57.69913864135742188) ) ) {
                    sum += (double)0.01825802941176470767;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7766686677932739258) ) ) {
                      sum += (double)0.002657456140350877502;
                    } else {
                      sum += (double)0.008848000000000001697;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.9444427490234375) ) ) {
                    sum += (double)0.005722000000000000523;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22) ) ) {
                      sum += (double)0.003317764705882353393;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31921.4296875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.9972915649414062) ) ) {
                  sum += (double)0.1015508055555555539;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)319.052520751953125) ) ) {
                    sum += (double)0.04033985227272727375;
                  } else {
                    sum += (double)0.005531520833333334469;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.18682861328125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1456689983606338501) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15882.47021484375) ) ) {
                      sum += (double)0.04452837500000000198;
                    } else {
                      sum += (double)0.01271241666666666527;
                    }
                  } else {
                    sum += (double)0.04252954347826087139;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.00566864013671875) ) ) {
                    sum += (double)0.01537145833333333766;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19361.5) ) ) {
                      sum += (double)0.01003525000000000077;
                    } else {
                      sum += (double)0.003216735294117647418;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.372500002384185791) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0879999995231628418) ) ) {
              sum += (double)0.106558625000000004;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7739124000072479248) ) ) {
                sum += (double)0.05032918939393939139;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2618574947118759155) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4368.82763671875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.991485595703125) ) ) {
                      sum += (double)0.0234808928571428599;
                    } else {
                      sum += (double)0.005584607142857142895;
                    }
                  } else {
                    sum += (double)0.003354690476190476823;
                  }
                } else {
                  sum += (double)0.03762786666666666224;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.132749997079372406) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4336083084344863892) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11090.091796875) ) ) {
                  sum += (double)0.04040788461538461634;
                } else {
                  sum += (double)0.09091292187499999677;
                }
              } else {
                sum += (double)0.0218766805555555624;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.309600830078125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20930.4169921875) ) ) {
                  sum += (double)0.2094364750000000108;
                } else {
                  sum += (double)0.1146255108695652114;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.41539382934570312) ) ) {
                  sum += (double)0.05118382142857141881;
                } else {
                  sum += (double)0.1008678365384615139;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5579606294631958008) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6223134994506835938) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.78668498992919922) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.763888835906982422) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.367844507098197937) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.302631616592407227) ) ) {
                  sum += (double)0.375991359374999945;
                } else {
                  sum += (double)0.4686464499999999367;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.35947704315185547) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.080534696578979492) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.21394801139831543) ) ) {
                      sum += (double)0.4616250156250000236;
                    } else {
                      sum += (double)0.5357259198113208942;
                    }
                  } else {
                    sum += (double)0.4624708000000000152;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2842.0924072265625) ) ) {
                    sum += (double)0.5138647500000000923;
                  } else {
                    sum += (double)0.6026964700000000397;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3341.1766357421875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1254300475120544434) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7995499968528747559) ) ) {
                    sum += (double)0.3549955375000000135;
                  } else {
                    sum += (double)0.4633752000000000426;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09125000238418579102) ) ) {
                    sum += (double)0.5653058906250000293;
                  } else {
                    sum += (double)0.4739155785714285751;
                  }
                }
              } else {
                sum += (double)0.3389657424242424333;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.70156550407409668) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.739361763000488281) ) ) {
                sum += (double)0.5833531999999999051;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5523974895477294922) ) ) {
                  sum += (double)0.6858145666666665141;
                } else {
                  sum += (double)0.6462832395833334465;
                }
              }
            } else {
              sum += (double)0.5170026111111108991;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4189799875020980835) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2863050699234008789) ) ) {
              sum += (double)0.3313473695652174311;
            } else {
              sum += (double)0.1785086874999999851;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.15524196624755859) ) ) {
              sum += (double)0.4166765000000000052;
            } else {
              sum += (double)0.2671467708333332691;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.34372711181640625) ) ) {
              sum += (double)0.6762441923076922823;
            } else {
              sum += (double)0.7287497499999999739;
            }
          } else {
            sum += (double)0.6406991842105261847;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.799142986536026001) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.359529733657836914) ) ) {
                sum += (double)0.7449707187499999828;
              } else {
                sum += (double)0.8219274318181819527;
              }
            } else {
              sum += (double)0.7174055769230769375;
            }
          } else {
            sum += (double)0.8816368749999999865;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5965064764022827148) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088721513748168945) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2874.37451171875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3447999954223632812) ) ) {
              sum += (double)0.4874354500000000479;
            } else {
              sum += (double)0.3610749464285714083;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.584411799907684326) ) ) {
              sum += (double)0.4018575000000000341;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
                sum += (double)0.1315962777777777704;
              } else {
                sum += (double)0.2141396375000000352;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9495573043823242188) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4480.211669921875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.28240776062011719) ) ) {
                sum += (double)0.410980368421052622;
              } else {
                sum += (double)0.2020853888888888561;
              }
            } else {
              sum += (double)0.1212861022727272642;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.66977691650390625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.45636749267578125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2810.13818359375) ) ) {
                  sum += (double)0.05064367647058823363;
                } else {
                  sum += (double)0.01304140384615384667;
                }
              } else {
                sum += (double)0.0917706893939393975;
              }
            } else {
              sum += (double)0.2271213333333333417;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6939889788627624512) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.324640274047851562) ) ) {
            sum += (double)0.4465631578947368285;
          } else {
            sum += (double)0.347296112499999976;
          }
        } else {
          sum += (double)0.6486955833333333254;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2078.4638671875) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2708204984664916992) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002450000029057264328) ) ) {
            sum += (double)0.4159877894736841997;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1224601194262504578) ) ) {
                sum += (double)0.3538705666666666638;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                  sum += (double)0.145615330000000015;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.49939107894897461) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2047924995422363281) ) ) {
                      sum += (double)0.2345297812499999857;
                    } else {
                      sum += (double)0.153959233333333334;
                    }
                  } else {
                    sum += (double)0.3319907941176470922;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2235425040125846863) ) ) {
                sum += (double)0.07302528125000000425;
              } else {
                sum += (double)0.2579957380952380697;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.823487401008605957) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01435000030323863029) ) ) {
              sum += (double)0.4904953690476190342;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243529319763183594) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4350617825984954834) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1402499973773956299) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06020000018179416656) ) ) {
                      sum += (double)0.419300906250000105;
                    } else {
                      sum += (double)0.351977562500000063;
                    }
                  } else {
                    sum += (double)0.4290703148148147794;
                  }
                } else {
                  sum += (double)0.3544329999999999981;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3346730023622512817) ) ) {
                  sum += (double)0.1789593235294117679;
                } else {
                  sum += (double)0.4167210156249999686;
                }
              }
            }
          } else {
            sum += (double)0.1786260892857142735;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2535524964332580566) ) ) {
            sum += (double)0.09121434259259257604;
          } else {
            sum += (double)0.2449236499999999928;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1668.53936767578125) ) ) {
            sum += (double)0.1224807499999999855;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2560619935393333435) ) ) {
              sum += (double)0.006751617647058823744;
            } else {
              sum += (double)0.02929714705882352846;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1082589998841285706) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.12853145599365234) ) ) {
          sum += (double)0.1029163611111111043;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.28977203369140625) ) ) {
              sum += (double)0.01362214999999999954;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03576799854636192322) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02213350031524896622) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.003065076923076923403;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.44202423095703125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12573.53271484375) ) ) {
                    sum += (double)0.009914195652173914478;
                  } else {
                    sum += (double)0.00394420833333333342;
                  }
                } else {
                  sum += (double)0.002718870370370369757;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16603.123046875) ) ) {
                sum += (double)0.07217459782608695584;
              } else {
                sum += (double)0.01136454761904761787;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.83823394775390625) ) ) {
                sum += (double)0.032326599999999997;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09668799862265586853) ) ) {
                  sum += (double)0.004238315789473684654;
                } else {
                  sum += (double)0.009864454545454547779;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33151340484619141) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8689.10595703125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2363299950957298279) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1493000015616416931) ) ) {
                sum += (double)0.3024482187499999419;
              } else {
                sum += (double)0.1530454687499999966;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.09090900421142578) ) ) {
                sum += (double)0.4056061805555555289;
              } else {
                sum += (double)0.2842118500000000436;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7748008370399475098) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1719491928815841675) ) ) {
                sum += (double)0.04765250000000000041;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.62045764923095703) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4688.002685546875) ) ) {
                    sum += (double)0.1338078999999999796;
                  } else {
                    sum += (double)0.06053386111111111467;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2109695002436637878) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.03425884246826172) ) ) {
                      sum += (double)0.1983945576923077103;
                    } else {
                      sum += (double)0.09934367857142856195;
                    }
                  } else {
                    sum += (double)0.2631845892857142544;
                  }
                }
              }
            } else {
              sum += (double)0.01549402777777777671;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2373487129807472229) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508874908089637756) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21297.1845703125) ) ) {
                sum += (double)0.1930312065217391349;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.9444427490234375) ) ) {
                  sum += (double)0.1140336388888888997;
                } else {
                  sum += (double)0.0384499687499999937;
                }
              }
            } else {
              sum += (double)0.3019066964285714305;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5302499830722808838) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2140045017004013062) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6697500050067901611) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4655499905347824097) ) ) {
                      sum += (double)0.1043805138888888734;
                    } else {
                      sum += (double)0.02372419444444444359;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-109690.890625) ) ) {
                      sum += (double)0.07666361666666667019;
                    } else {
                      sum += (double)0.02330434290540538828;
                    }
                  }
                } else {
                  sum += (double)0.08391140909090907818;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2816525101661682129) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2678020000457763672) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8457.668701171875) ) ) {
                      sum += (double)0.1127418124999999827;
                    } else {
                      sum += (double)0.01952782608695651997;
                    }
                  } else {
                    sum += (double)0.1762154299999999785;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7036.182373046875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.34152603149414062) ) ) {
                      sum += (double)0.08652984000000002451;
                    } else {
                      sum += (double)0.02205547500000000147;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2179999947547912598) ) ) {
                      sum += (double)0.02365705555555555617;
                    } else {
                      sum += (double)0.008528529411764707371;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5836661159992218018) ) ) {
                sum += (double)0.1802238250000000319;
              } else {
                sum += (double)0.0451483409090909088;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42352914810180664) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8548499941825866699) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09180000051856040955) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.541088581085205078) ) ) {
                    sum += (double)0.5204983260869564532;
                  } else {
                    sum += (double)0.4222271911764706176;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.41578292846679688) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4414194971323013306) ) ) {
                      sum += (double)0.5158361309523809002;
                    } else {
                      sum += (double)0.5742734666666665655;
                    }
                  } else {
                    sum += (double)0.6341087631578947725;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.07090663909912109) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.599218845367431641) ) ) {
                      sum += (double)0.4760413552631579392;
                    } else {
                      sum += (double)0.5503207999999999434;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1781499981880187988) ) ) {
                      sum += (double)0.3971653750000000427;
                    } else {
                      sum += (double)0.4994006000000000278;
                    }
                  }
                } else {
                  sum += (double)0.3742527343749999513;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05819590762257575989) ) ) {
                sum += (double)0.4968179500000000082;
              } else {
                sum += (double)0.2899966999999999961;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5501639842987060547) ) ) {
              sum += (double)0.6726141710526315487;
            } else {
              sum += (double)0.5773721499999999729;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8021.91357421875) ) ) {
            sum += (double)0.342990375000000014;
          } else {
            sum += (double)0.1554924833333332923;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.422727346420288086) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.382587671279907227) ) ) {
                sum += (double)0.6789767638888889456;
              } else {
                sum += (double)0.6152170555555555032;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.168746650218963623) ) ) {
                sum += (double)0.7443650185185184398;
              } else {
                sum += (double)0.6827095599999999376;
              }
            }
          } else {
            sum += (double)0.5091528666666667036;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.467915773391723633) ) ) {
              sum += (double)0.7354465468750002177;
            } else {
              sum += (double)0.7928006071428571611;
            }
          } else {
            sum += (double)0.8787089047619049964;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.772227883338928223) ) ) {
          sum += (double)0.3831269999999999398;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3952.905029296875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
              sum += (double)0.4295683281249999541;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.63956832885742188) ) ) {
                sum += (double)0.05462815384615383324;
              } else {
                sum += (double)0.1938949596774193762;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.405119180679321289) ) ) {
              sum += (double)0.1546545875000000236;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1619.51165771484375) ) ) {
                sum += (double)0.1018686547619047922;
              } else {
                sum += (double)0.0300070108695652156;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4090.5975341796875) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6806834936141967773) ) ) {
            sum += (double)0.5004764782608696061;
          } else {
            sum += (double)0.630033013888888771;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-674.362091064453125) ) ) {
              sum += (double)0.4025124891304348584;
            } else {
              sum += (double)0.459441187499999959;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1180.35150146484375) ) ) {
              sum += (double)0.3692403552631578489;
            } else {
              sum += (double)0.1245289736842105227;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.762670516967773438) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2267389968037605286) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3501.4981689453125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07255000248551368713) ) ) {
            sum += (double)0.3043929519230769154;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6279.40966796875) ) ) {
              sum += (double)0.145134433333333368;
            } else {
              sum += (double)0.2382148281250000277;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.83559799194335938) ) ) {
            sum += (double)0.1347921714285714168;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009999999892897903919) ) ) {
              sum += (double)0.1312987708333333281;
            } else {
              sum += (double)0.01434445652173913129;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9511805474758148193) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6493999958038330078) ) ) {
              sum += (double)0.5362861875000000111;
            } else {
              sum += (double)0.4443051249999999675;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.345141768455505371) ) ) {
                  sum += (double)0.3322915625000000261;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2704965025186538696) ) ) {
                    sum += (double)0.3457965394736842168;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03470000065863132477) ) ) {
                      sum += (double)0.4642967352941176351;
                    } else {
                      sum += (double)0.4111759527027027405;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1790999993681907654) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04065000079572200775) ) ) {
                    sum += (double)0.3475033437499999711;
                  } else {
                    sum += (double)0.2133865000000000067;
                  }
                } else {
                  sum += (double)0.3444870299999999719;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1958083286881446838) ) ) {
                sum += (double)0.4906100999999999379;
              } else {
                sum += (double)0.4113819687499999933;
              }
            }
          }
        } else {
          sum += (double)0.1199079310344827454;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551099956035614014) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.68441486358642578) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21578.3642578125) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1134454980492591858) ) ) {
              sum += (double)0.1530036785714285752;
            } else {
              sum += (double)0.300701045454545457;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4727.731689453125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005450000055134296417) ) ) {
                sum += (double)0.2238856363636363145;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1642175018787384033) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95979547500610352) ) ) {
                    sum += (double)0.09565324999999999522;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.53917503356933594) ) ) {
                      sum += (double)0.05851414999999999395;
                    } else {
                      sum += (double)0.01463881730769229887;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10350.0634765625) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.76295757293701172) ) ) {
                      sum += (double)0.2380706477272726829;
                    } else {
                      sum += (double)0.1018605277777777929;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.220145002007484436) ) ) {
                      sum += (double)0.05775792647058822921;
                    } else {
                      sum += (double)0.1485974761904761687;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.949834346771240234) ) ) {
                sum += (double)0.1318105760869565102;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1354185044765472412) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09801599755883216858) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.78205108642578125) ) ) {
                      sum += (double)0.004277157894736842089;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01219300000000000071;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2109.1898193359375) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7358402609825134277) ) ) {
                      sum += (double)0.02476306666666666656;
                    } else {
                      sum += (double)0.00543754545454545532;
                    }
                  } else {
                    sum += (double)0.06334014285714284487;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-37508.982421875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)108.207763671875) ) ) {
                  sum += (double)0.01736172368421052756;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5992454588413238525) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.005674000000000000224;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.7454071044921875) ) ) {
                  sum += (double)0.005442760000000002214;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.42832565307617188) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24638.212890625) ) ) {
                  sum += (double)0.09876276666666666815;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1771000027656555176) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5387365818023681641) ) ) {
                      sum += (double)0.02747155555555555115;
                    } else {
                      sum += (double)0.005919857142857143373;
                    }
                  } else {
                    sum += (double)0.05475673214285714518;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-63501.337890625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)350.640533447265625) ) ) {
                    sum += (double)0.04587637499999999702;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1918075010180473328) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24727.8515625) ) ) {
                      sum += (double)0.01220386764705882338;
                    } else {
                      sum += (double)0.005338543859649123868;
                    }
                  } else {
                    sum += (double)0.02134941666666666585;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6705474257469177246) ) ) {
              sum += (double)0.1306504333333333434;
            } else {
              sum += (double)0.05041956578947368733;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3322894275188446045) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3323754966259002686) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08080000057816505432) ) ) {
              sum += (double)0.1036292058823529566;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057004958391189575) ) ) {
                sum += (double)0.333030578947368372;
              } else {
                sum += (double)0.1921412236842105214;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1628499999642372131) ) ) {
              sum += (double)0.480758500000000033;
            } else {
              sum += (double)0.2407020921052631934;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.372500002384185791) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2743875086307525635) ) ) {
              sum += (double)0.165731750000000011;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8908.32470703125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.90384674072265625) ) ) {
                  sum += (double)0.1285477166666666449;
                } else {
                  sum += (double)0.0296527884615384596;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.87878799438476562) ) ) {
                  sum += (double)0.008126172413793103164;
                } else {
                  sum += (double)0.02660378571428571523;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4314.147705078125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.55714225769042969) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2729499936103820801) ) ) {
                  sum += (double)0.2276831029411764684;
                } else {
                  sum += (double)0.3307380500000000056;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3087500035762786865) ) ) {
                  sum += (double)0.09306096052631580851;
                } else {
                  sum += (double)0.1708513749999999998;
                }
              }
            } else {
              sum += (double)0.06656877586206894071;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5801205039024353027) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.83636379241943359) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860465049743652344) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.578846096992492676) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.205954313278198242) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4549739956855773926) ) ) {
                    sum += (double)0.4476734074074074088;
                  } else {
                    sum += (double)0.4855697166666666509;
                  }
                } else {
                  sum += (double)0.521627850000000115;
                }
              } else {
                sum += (double)0.3882353421052631703;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.193013668060302734) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.54248332977294922) ) ) {
                  sum += (double)0.5440648359374998799;
                } else {
                  sum += (double)0.6171467343750000056;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7037499845027923584) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4239085018634796143) ) ) {
                    sum += (double)0.5134268333333332768;
                  } else {
                    sum += (double)0.5856770178571428787;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4135.2757568359375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09048341214656829834) ) ) {
                      sum += (double)0.5211216250000000327;
                    } else {
                      sum += (double)0.4556093749999999831;
                    }
                  } else {
                    sum += (double)0.3381729264705882199;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5569750070571899414) ) ) {
              sum += (double)0.6639075714285714858;
            } else {
              sum += (double)0.5537798000000000442;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.6393890380859375) ) ) {
            sum += (double)0.1634530333333333585;
          } else {
            sum += (double)0.3263559910714285417;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6505499780178070068) ) ) {
              sum += (double)0.6142417625000000658;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1541.4549560546875) ) ) {
                sum += (double)0.6710165972222222885;
              } else {
                sum += (double)0.7128794761904762023;
              }
            }
          } else {
            sum += (double)0.4893938235294118533;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8121300041675567627) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.653274655342102051) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7035000026226043701) ) ) {
                sum += (double)0.6841507166666667139;
              } else {
                sum += (double)0.802459914062499946;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.477272748947143555) ) ) {
                sum += (double)0.6238411093749999248;
              } else {
                sum += (double)0.7434511052631578298;
              }
            }
          } else {
            sum += (double)0.8253744250000000227;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4780234992504119873) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.48774957656860352) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4901.7734375) ) ) {
              sum += (double)0.3656110192307692186;
            } else {
              sum += (double)0.3020250588235294242;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.691678524017333984) ) ) {
              sum += (double)0.197845088709677458;
            } else {
              sum += (double)0.08459947727272727758;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86713314056396484) ) ) {
            sum += (double)0.04199457352941176475;
          } else {
            sum += (double)0.1829639642857142923;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7006689906120300293) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05824184417724609) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.164028406143188477) ) ) {
              sum += (double)0.5024081630434782397;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.350865721702575684) ) ) {
                sum += (double)0.4156694999999999696;
              } else {
                sum += (double)0.195762392857142864;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5781860053539276123) ) ) {
              sum += (double)0.1187888947368420794;
            } else {
              sum += (double)0.3705014062499998873;
            }
          }
        } else {
          sum += (double)0.550912869999999999;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3882854878902435303) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.410460948944091797) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3039.9068603515625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410804986953735352) ) ) {
              sum += (double)0.153004882352941185;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6745.545654296875) ) ) {
                  sum += (double)0.3809020476190476123;
                } else {
                  sum += (double)0.2907003541666666191;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.11267709732055664) ) ) {
                  sum += (double)0.2982126739130435134;
                } else {
                  sum += (double)0.1941573846153846206;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2629522979259490967) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.27380943298339844) ) ) {
                sum += (double)0.0544582678571428544;
              } else {
                sum += (double)0.01896127500000000313;
              }
            } else {
              sum += (double)0.153067105263157921;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002449999912641942501) ) ) {
            sum += (double)0.5562706805555556189;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244408607482910156) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01319999992847442627) ) ) {
                  sum += (double)0.4664390312500000246;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7301000058650970459) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3942669332027435303) ) ) {
                      sum += (double)0.4334563510638297368;
                    } else {
                      sum += (double)0.3591181987179487556;
                    }
                  } else {
                    sum += (double)0.2896414473684210122;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.90476131439208984) ) ) {
                  sum += (double)0.2492505833333333309;
                } else {
                  sum += (double)0.3624273690476190746;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4328.322021484375) ) ) {
                sum += (double)0.3847730476190475701;
              } else {
                sum += (double)0.1373009375000000254;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.841967463493347168) ) ) {
          sum += (double)0.225529773809523798;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5047.049072265625) ) ) {
            sum += (double)0.1480146323529412111;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3289555013179779053) ) ) {
              sum += (double)0.01688437500000000008;
            } else {
              sum += (double)0.06258297058823529546;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2545465081930160522) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.62019252777099609) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001249999957508407533) ) ) {
            sum += (double)0.2577288833333333251;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13728.29248046875) ) ) {
              sum += (double)0.1892330208333333486;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1278524994850158691) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2883.43603515625) ) ) {
                    sum += (double)0.009452291666666667869;
                  } else {
                    sum += (double)0.004885904761904762313;
                  }
                } else {
                  sum += (double)0.02966691249999999641;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1961999982595443726) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05109999887645244598) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6684000194072723389) ) ) {
                      sum += (double)0.04645063333333333822;
                    } else {
                      sum += (double)0.1018264605263157624;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343678697943687439) ) ) {
                      sum += (double)0.1730006590909090869;
                    } else {
                      sum += (double)0.09526927083333334989;
                    }
                  }
                } else {
                  sum += (double)0.043577867187499994;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1456689983606338501) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0736270025372505188) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1458499953150749207) ) ) {
                sum += (double)0.02314484374999999788;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5721988379955291748) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04427749849855899811) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8429999947547912598) ) ) {
                      sum += (double)0.00258996428571428702;
                    } else {
                      sum += (double)0.004733805555555556203;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.33806991577148438) ) ) {
                      sum += (double)0.008793961538461540425;
                    } else {
                      sum += (double)0.003403900000000000502;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3220500051975250244) ) ) {
                    sum += (double)0.002850980000000000354;
                  } else {
                    sum += (double)0.00941285714285714295;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.57010269165039062) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11303.591796875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.47837448120117188) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0984710007905960083) ) ) {
                      sum += (double)0.06559013333333334195;
                    } else {
                      sum += (double)0.02122073076923076951;
                    }
                  } else {
                    sum += (double)0.09504918749999999306;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04255000129342079163) ) ) {
                    sum += (double)0.0061914250000000004;
                  } else {
                    sum += (double)0.02820510227272727752;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23383.673828125) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)133.1777725219726562) ) ) {
                    sum += (double)0.03608616071428571992;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)688.689208984375) ) ) {
                      sum += (double)0.0127961764705882379;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6248981356620788574) ) ) {
                    sum += (double)0.007504842105263159584;
                  } else {
                    sum += (double)0.002686763157894736347;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8456.478515625) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.7251968383789062) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42048.38671875) ) ) {
                  sum += (double)0.2062600961538461342;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10623.06103515625) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                      sum += (double)0.08686335937500001825;
                    } else {
                      sum += (double)0.02716129487179487489;
                    }
                  } else {
                    sum += (double)0.1456049999999999844;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.74806252121925354) ) ) {
                  sum += (double)0.01973180555555555798;
                } else {
                  sum += (double)0.005540468750000000255;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.71428585052490234) ) ) {
                sum += (double)0.04783611764705882063;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
                  sum += (double)0.02761543749999999589;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3927.7593994140625) ) ) {
                    sum += (double)0.01322064705882353142;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8169230222702026367) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2155.0770263671875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.7391319274902344) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09959999844431877136) ) ) {
                  sum += (double)0.08978394696969696498;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.06481456756591797) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510796517133712769) ) ) {
                      sum += (double)0.3694829843749999343;
                    } else {
                      sum += (double)0.2446157631578947389;
                    }
                  } else {
                    sum += (double)0.1993040555555555815;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3486104905605316162) ) ) {
                  sum += (double)0.4588227374999999664;
                } else {
                  sum += (double)0.3067749333333332773;
                }
              }
            } else {
              sum += (double)0.06500311538461536753;
            }
          } else {
            sum += (double)0.03042680263157894818;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5061000138521194458) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.90476179122924805) ) ) {
              sum += (double)0.005914347826086957007;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1643000021576881409) ) ) {
                sum += (double)0.06815957954545455444;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108105063438415527) ) ) {
                  sum += (double)0.009495705882352942565;
                } else {
                  sum += (double)0.04072528571428570693;
                }
              }
            }
          } else {
            sum += (double)0.09068925000000001291;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4716695547103881836) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468764901161193848) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)97.46117782592773438) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.56788933277130127) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1453482061624526978) ) ) {
              sum += (double)0.5818508125000000364;
            } else {
              sum += (double)0.4837782499999999097;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4210845082998275757) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2273586243391036987) ) ) {
                    sum += (double)0.4747422321428572123;
                  } else {
                    sum += (double)0.4155027205882352859;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.459182500839233398) ) ) {
                    sum += (double)0.5657015357142857193;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135500013828277588) ) ) {
                      sum += (double)0.5531443999999999805;
                    } else {
                      sum += (double)0.470067541666666644;
                    }
                  }
                }
              } else {
                sum += (double)0.3964048593749999738;
              }
            } else {
              sum += (double)0.3458389299999999889;
            }
          }
        } else {
          sum += (double)0.2817587499999999467;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.641608238220214844) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
                sum += (double)0.5586515781249998813;
              } else {
                sum += (double)0.6379582700000000495;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5907499790191650391) ) ) {
                sum += (double)0.6265164624999999265;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.80823850631713867) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.104217529296875) ) ) {
                    sum += (double)0.6968581750000000241;
                  } else {
                    sum += (double)0.6452795588235293867;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.56449317932128906) ) ) {
                    sum += (double)0.7447018421052632453;
                  } else {
                    sum += (double)0.671937406250000091;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4291635192307692304;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
              sum += (double)0.8857210374999999747;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                sum += (double)0.7873359761904762388;
              } else {
                sum += (double)0.8298745681818182618;
              }
            }
          } else {
            sum += (double)0.7247280740740742466;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5176739990711212158) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23302507400512695) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2556.642578125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3356999903917312622) ) ) {
              sum += (double)0.4796580125000000083;
            } else {
              sum += (double)0.3483548181818181266;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4379819929599761963) ) ) {
              sum += (double)0.08319671153846153189;
            } else {
              sum += (double)0.2762328951612903483;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.39651966094970703) ) ) {
            sum += (double)0.03309904464285714359;
          } else {
            sum += (double)0.248419414062500038;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.635166049003601074) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.374034225940704346) ) ) {
            sum += (double)0.5597426249999999381;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2645500004291534424) ) ) {
              sum += (double)0.4620702608695652636;
            } else {
              sum += (double)0.3869606833333333329;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2387499958276748657) ) ) {
              sum += (double)0.3738921086956522033;
            } else {
              sum += (double)0.5257700833333333046;
            }
          } else {
            sum += (double)0.1476558599999999999;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.3285369873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2415464967489242554) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.695556640625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
            sum += (double)0.4360909333333333748;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1085665002465248108) ) ) {
              sum += (double)0.01410039285714285821;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13015.6142578125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.18077945709228516) ) ) {
                  sum += (double)0.3288842631578947628;
                } else {
                  sum += (double)0.2038105555555555504;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.1627197265625) ) ) {
                  sum += (double)0.2539922931034482301;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.63956880569458008) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7155000269412994385) ) ) {
                      sum += (double)0.1829461818181818411;
                    } else {
                      sum += (double)0.1035792105263158014;
                    }
                  } else {
                    sum += (double)0.05874374999999999736;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.1852769843749999812;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5361500084400177002) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3672499954700469971) ) ) {
                sum += (double)0.03346323214285713832;
              } else {
                sum += (double)0.1931417656249999892;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1075564995408058167) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2066.71142578125) ) ) {
                  sum += (double)0.008803944444444445835;
                } else {
                  sum += (double)0.003141093750000000222;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.02622365951538086) ) ) {
                  sum += (double)0.02895522500000000457;
                } else {
                  sum += (double)0.05071706249999999999;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.642801284790039062) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3271615058183670044) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2056.26678466796875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.286803722381591797) ) ) {
                  sum += (double)0.3823505243902439177;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.603807449340820312) ) ) {
                    sum += (double)0.4704142173913042901;
                  } else {
                    sum += (double)0.3933797999999999462;
                  }
                }
              } else {
                sum += (double)0.2620067750000000251;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1940742135047912598) ) ) {
                sum += (double)0.5093013529411765106;
              } else {
                sum += (double)0.401195133333333398;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055999994277954102) ) ) {
                  sum += (double)0.4732481666666667475;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                    sum += (double)0.4142377368421052419;
                  } else {
                    sum += (double)0.3640038478260869681;
                  }
                }
              } else {
                sum += (double)0.2859776249999999576;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.207575798034667969) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7164500057697296143) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.57946300506591797) ) ) {
                    sum += (double)0.2919501562499999814;
                  } else {
                    sum += (double)0.4679573125000000555;
                  }
                } else {
                  sum += (double)0.2121533552631579278;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.22557497024536133) ) ) {
                  sum += (double)0.1086580648148148115;
                } else {
                  sum += (double)0.2266357115384615151;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5184.020751953125) ) ) {
            sum += (double)0.2361764342105263093;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.857517480850219727) ) ) {
              sum += (double)0.04168603124999999826;
            } else {
              sum += (double)0.01276432352941176719;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210749760270118713) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.03500513888888888425;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03454349935054779053) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8529999852180480957) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01553550036624073982) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23116.3203125) ) ) {
                      sum += (double)0.003941941176470588164;
                    } else {
                      sum += (double)0.002789625000000000004;
                    }
                  }
                } else {
                  sum += (double)0.006934333333333333148;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.8914527893066406) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3300798237323760986) ) ) {
                    sum += (double)0.01390082894736842031;
                  } else {
                    sum += (double)0.004217886363636364627;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)441.642852783203125) ) ) {
                    sum += (double)0.002499999999999999618;
                  } else {
                    sum += (double)0.003542961538461538665;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08126100152730941772) ) ) {
              sum += (double)0.07390442187500000093;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.16826248168945312) ) ) {
                sum += (double)0.04696723684210526301;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.201899997889995575) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09329999983310699463) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.89000034332275391) ) ) {
                      sum += (double)0.007393750000000000148;
                    } else {
                      sum += (double)0.003350666666666666724;
                    }
                  } else {
                    sum += (double)0.01615602941176470797;
                  }
                } else {
                  sum += (double)0.03435045192307692452;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2662331163883209229) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20595.7626953125) ) ) {
              sum += (double)0.2208759886363636238;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1593500003218650818) ) ) {
                sum += (double)0.1087440156250000234;
              } else {
                sum += (double)0.03970259999999999762;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.87719297409057617) ) ) {
              sum += (double)0.1064537222222222274;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24491.4970703125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.02521133422851562) ) ) {
                  sum += (double)0.1275694134615384667;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.3218650817871094) ) ) {
                    sum += (double)0.04701417647058822591;
                  } else {
                    sum += (double)0.01233372580645161407;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2043499946594238281) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.56981086730957031) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05525000020861625671) ) ) {
                      sum += (double)0.031613383333333335;
                    } else {
                      sum += (double)0.01028179545454545492;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1922145038843154907) ) ) {
                      sum += (double)0.003002062500000000824;
                    } else {
                      sum += (double)0.0105981875000000017;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13463.76220703125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.76846981048583984) ) ) {
                      sum += (double)0.03280035000000000589;
                    } else {
                      sum += (double)0.008965461538461536734;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8665.86181640625) ) ) {
                      sum += (double)0.09771283333333330434;
                    } else {
                      sum += (double)0.02865675806451612601;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7414813637733459473) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06284999847412109375) ) ) {
            sum += (double)0.0826124999999999915;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.97777748107910156) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2837940007448196411) ) ) {
                sum += (double)0.3136359861111111536;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
                  sum += (double)0.1418665961538461417;
                } else {
                  sum += (double)0.2541414166666666752;
                }
              }
            } else {
              sum += (double)0.1005395441176470395;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.1437995441176470601;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.027978003025054932) ) ) {
              sum += (double)0.06803759677419353447;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.01043510437011719) ) ) {
                sum += (double)0.02652710000000000484;
              } else {
                sum += (double)0.00810644117647058883;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6171754896640777588) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3087.5921630859375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7758499979972839355) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08184999972581863403) ) ) {
                    sum += (double)0.5513738999999999724;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1912777870893478394) ) ) {
                      sum += (double)0.4424759999999999804;
                    } else {
                      sum += (double)0.4995292391304347324;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7330.80224609375) ) ) {
                    sum += (double)0.4524151250000000291;
                  } else {
                    sum += (double)0.3889363125000000476;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.36085987091064453) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4235734939575195312) ) ) {
                    sum += (double)0.453920678571428482;
                  } else {
                    sum += (double)0.5448171250000000132;
                  }
                } else {
                  sum += (double)0.6367163522727272706;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4742144942283630371) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7836499810218811035) ) ) {
                  sum += (double)0.4430645999999999751;
                } else {
                  sum += (double)0.3576135277777777177;
                }
              } else {
                sum += (double)0.531120288461538359;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03185000084340572357) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.62892246246337891) ) ) {
                sum += (double)0.6178986666666665961;
              } else {
                sum += (double)0.6789603676470588045;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2096304744482040405) ) ) {
                sum += (double)0.5443716704545454865;
              } else {
                sum += (double)0.613789000000000029;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3781529217958450317) ) ) {
            sum += (double)0.3744638214285713751;
          } else {
            sum += (double)0.2123789342105262823;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7179419994354248047) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2039.78265380859375) ) ) {
              sum += (double)0.7029119264705881998;
            } else {
              sum += (double)0.7383284749999998731;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316110864281654358) ) ) {
              sum += (double)0.5288882656250000203;
            } else {
              sum += (double)0.6963179166666666475;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5729678571224212646) ) ) {
            sum += (double)0.8755023809523810874;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
              sum += (double)0.7252648375000000369;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07171247527003288269) ) ) {
                sum += (double)0.7452284722222221047;
              } else {
                sum += (double)0.827952718750000094;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5458705127239227295) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3496.088134765625) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.50454568862915039) ) ) {
            sum += (double)0.4076803026315789502;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.189224541187286377) ) ) {
              sum += (double)0.1520706470588235326;
            } else {
              sum += (double)0.2340990714285714203;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.400480747222900391) ) ) {
            sum += (double)0.307786346153846202;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.712418079376220703) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.433187544345855713) ) ) {
                sum += (double)0.2068727884615384482;
              } else {
                sum += (double)0.08052371249999998315;
              }
            } else {
              sum += (double)0.06005415217391302934;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3143.2950439453125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6908099949359893799) ) ) {
            sum += (double)0.4642493958333334114;
          } else {
            sum += (double)0.6426730972222222116;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6145164966583251953) ) ) {
              sum += (double)0.4134812361111110945;
            } else {
              sum += (double)0.4857770535714284743;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1588.35455322265625) ) ) {
              sum += (double)0.3808881428571428418;
            } else {
              sum += (double)0.1625481470588235056;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.08423900604248047) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2679979950189590454) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1351464986801147461) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7385.832275390625) ) ) {
            sum += (double)0.1544154558823529755;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1112500019371509552) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.59375) ) ) {
                sum += (double)0.03211623214285714428;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01055000023916363716) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  sum += (double)0.008380875000000001171;
                }
              }
            } else {
              sum += (double)0.06772327631578947682;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3548.2962646484375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00215000007301568985) ) ) {
              sum += (double)0.4714252596153846175;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.412903785705566406) ) ) {
                sum += (double)0.3899125595238094877;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.711162567138671875) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30474996566772461) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5691.20263671875) ) ) {
                      sum += (double)0.2885802399999999879;
                    } else {
                      sum += (double)0.1824145520833333478;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2255704998970031738) ) ) {
                      sum += (double)0.1052137499999999948;
                    } else {
                      sum += (double)0.2113090434782608495;
                    }
                  }
                } else {
                  sum += (double)0.09844482608695652448;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.463235378265380859) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7385500073432922363) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2754999995231628418) ) ) {
                  sum += (double)0.08290926923076921695;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06829999759793281555) ) ) {
                    sum += (double)0.3016779558823530216;
                  } else {
                    sum += (double)0.2495028593750000245;
                  }
                }
              } else {
                sum += (double)0.1024120948275862031;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999932646751404) ) ) {
                sum += (double)0.0172866500000000041;
              } else {
                sum += (double)0.09370114999999998306;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.734189510345458984) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3084481209516525269) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01374999992549419403) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8478499948978424072) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.147779703140258789) ) ) {
                    sum += (double)0.4668061323529412165;
                  } else {
                    sum += (double)0.5641954800000000825;
                  }
                } else {
                  sum += (double)0.416453983333333333;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4168944954872131348) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.07500004768371582) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.248934037983417511) ) ) {
                      sum += (double)0.4602232734375000245;
                    } else {
                      sum += (double)0.3950529333333333004;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.767094135284423828) ) ) {
                      sum += (double)0.3030887037037036658;
                    } else {
                      sum += (double)0.4302736730769230467;
                    }
                  }
                } else {
                  sum += (double)0.4703642899999999627;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.835357666015625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3575970083475112915) ) ) {
                  sum += (double)0.3612714814814814157;
                } else {
                  sum += (double)0.4851280000000000037;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4278.4208984375) ) ) {
                  sum += (double)0.3630019375000000936;
                } else {
                  sum += (double)0.2569148833333333437;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10097.61865234375) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3086500018835067749) ) ) {
                sum += (double)0.4101821500000001341;
              } else {
                sum += (double)0.3609745294117647219;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2972590029239654541) ) ) {
                sum += (double)0.1143936388888888711;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5399000048637390137) ) ) {
                  sum += (double)0.3120155568181818828;
                } else {
                  sum += (double)0.2361952142857142722;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
            sum += (double)0.2880516153846154337;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.682441353797912598) ) ) {
              sum += (double)0.2793222499999999386;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.214179039001464844) ) ) {
                sum += (double)0.08127319565217390462;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1955500021576881409) ) ) {
                  sum += (double)0.01054352083333333356;
                } else {
                  sum += (double)0.03911120000000000568;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2554450035095214844) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07496999949216842651) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1207500025629997253) ) ) {
            sum += (double)0.04967578846153845873;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8367500007152557373) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01553550036624073982) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.003241051724137931477;
                }
              } else {
                sum += (double)0.005325615384615385237;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)194.8787612915039062) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20761.998046875) ) ) {
                  sum += (double)0.01323978333333333292;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05069999955594539642) ) ) {
                    sum += (double)0.0027965555555555556;
                  } else {
                    sum += (double)0.009355800000000000921;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)123.9541168212890625) ) ) {
                  sum += (double)0.003786066666666666573;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2670808732509613037) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7869000136852264404) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03660000115633010864) ) ) {
                sum += (double)0.2434124166666666866;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1304979994893074036) ) ) {
                  sum += (double)0.009301343749999999716;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.63164520263671875) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6691499948501586914) ) ) {
                      sum += (double)0.06965425000000000089;
                    } else {
                      sum += (double)0.1291107638888888964;
                    }
                  } else {
                    sum += (double)0.2200519722222221974;
                  }
                }
              }
            } else {
              sum += (double)0.02570246739130434971;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4790999889373779297) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4031848758459091187) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3684286177158355713) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19944.5244140625) ) ) {
                    sum += (double)0.09069596153846155862;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.60576057434082031) ) ) {
                      sum += (double)0.03681059615384615208;
                    } else {
                      sum += (double)0.01245551562500000001;
                    }
                  }
                } else {
                  sum += (double)0.1400521499999999864;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6395000219345092773) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9853.21728515625) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.7251968383789062) ) ) {
                      sum += (double)0.03941966428571427872;
                    } else {
                      sum += (double)0.009229668749999999505;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5348712503910064697) ) ) {
                      sum += (double)0.01693853999999999846;
                    } else {
                      sum += (double)0.00470058333333333439;
                    }
                  }
                } else {
                  sum += (double)0.06748098684210525333;
                }
              }
            } else {
              sum += (double)0.1141291406249999862;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3844500035047531128) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02429999969899654388) ) ) {
            sum += (double)0.1100415769230769364;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500031352043152) ) ) {
              sum += (double)0.06416756896551722988;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3212660104036331177) ) ) {
                sum += (double)0.01062426470588235389;
              } else {
                sum += (double)0.03498198684210526016;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3467229902744293213) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2838999927043914795) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06284999847412109375) ) ) {
                sum += (double)0.03057596875000000158;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.96720695495605469) ) ) {
                  sum += (double)0.1732834499999999778;
                } else {
                  sum += (double)0.07693253260869564736;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.95506095886230469) ) ) {
                sum += (double)0.2758901388888888584;
              } else {
                sum += (double)0.1314761973684210328;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16410.8232421875) ) ) {
              sum += (double)0.343847600000000031;
            } else {
              sum += (double)0.1817668392857142989;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5603924989700317383) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.479411840438842773) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02840000111609697342) ) ) {
              sum += (double)0.6202644124999999731;
            } else {
              sum += (double)0.5186655192307692008;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.784899979829788208) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5095884799957275391) ) ) {
                sum += (double)0.5685610937499999684;
              } else {
                sum += (double)0.4536188000000000442;
              }
            } else {
              sum += (double)0.3954188145161290913;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8617999851703643799) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3440.8551025390625) ) ) {
              sum += (double)0.5677938928571428789;
            } else {
              sum += (double)0.6262205178571429443;
            }
          } else {
            sum += (double)0.6803801136363637481;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7384830117225646973) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.111979126930236816) ) ) {
            sum += (double)0.7465834374999998913;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7437499761581420898) ) ) {
              sum += (double)0.7117507386363635113;
            } else {
              sum += (double)0.6465278593750000136;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1530.0501708984375) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050172805786133) ) ) {
              sum += (double)0.7341273571428571509;
            } else {
              sum += (double)0.7971351458333334472;
            }
          } else {
            sum += (double)0.8801935104166666024;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.342492222785949707) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9141205251216888428) ) ) {
          sum += (double)0.6245540588235293233;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.009945094585418701) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.038797378540039062) ) ) {
              sum += (double)0.46625801724137933;
            } else {
              sum += (double)0.3757456666666667;
            }
          } else {
            sum += (double)0.2765431176470588559;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4158.9404296875) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.74656534194946289) ) ) {
            sum += (double)0.5465401578947366446;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42023.583984375) ) ) {
              sum += (double)0.3455440921052631009;
            } else {
              sum += (double)0.138020235294117638;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1780.69854736328125) ) ) {
            sum += (double)0.232332433823529444;
          } else {
            sum += (double)0.1082638958333333595;
          }
        }
      }
    }
  }
  return sum;
}
