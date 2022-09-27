#include "prediction.h"
double predict_margin_unit8(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
          sum += (double)0.04949195537275389439;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2538.3482666015625) ) ) {
              sum += (double)0.2908008610179946274;
            } else {
              sum += (double)0.1423693035546373109;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3440310060977935791) ) ) {
              sum += (double)0.390721233170108484;
            } else {
              sum += (double)0.2581337256279340742;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.620915055274963379) ) ) {
          sum += (double)0.5510258776754005661;
        } else {
          sum += (double)0.3846324536820407425;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.921427130699157715) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.08423900604248047) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.78889083862304688) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06365000084042549133) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.37016201019287109) ) ) {
                    sum += (double)0.02355789735449735633;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.775700002908706665) ) ) {
                      sum += (double)0.005741505882352941625;
                    } else {
                      sum += (double)0.01436128888888889114;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1685.10784912109375) ) ) {
                    sum += (double)0.04375343751312187057;
                  } else {
                    sum += (double)0.1361406268830953892;
                  }
                }
              } else {
                sum += (double)0.09183935045570476574;
              }
            } else {
              sum += (double)0.2113705826280512234;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.60714340209960938) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4321036487817764282) ) ) {
                    sum += (double)0.01963890504680504759;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.009605581818181819359;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196600005030632019) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005154340000000001178;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04002549871802330017) ) ) {
                      sum += (double)0.004531155555555556672;
                    } else {
                      sum += (double)0.009730666666666665243;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05785000137984752655) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                    sum += (double)0.01298012307692307868;
                  } else {
                    sum += (double)0.005081492307692308218;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2832999974489212036) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3893499970436096191) ) ) {
                      sum += (double)0.05781919378985097419;
                    } else {
                      sum += (double)0.02365795809523809495;
                    }
                  } else {
                    sum += (double)0.006902533333333333784;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3680000007152557373) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009499999869149178267) ) ) {
                  sum += (double)0.06872625980392156608;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.011869698762893677) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5643000006675720215) ) ) {
                      sum += (double)0.03737667627922713204;
                    } else {
                      sum += (double)0.02022990397255327449;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                      sum += (double)0.007357604395604396691;
                    } else {
                      sum += (double)0.01904942857142857479;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.57241630554199219) ) ) {
                  sum += (double)0.1172332503966003331;
                } else {
                  sum += (double)0.05781896561234818599;
                }
              }
            }
          }
        } else {
          sum += (double)0.2154548986897369678;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02224999945610761642) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5796098411083221436) ) ) {
            sum += (double)0.4101242629489142977;
          } else {
            sum += (double)0.1683678745551924483;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4623619914054870605) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.34398460388183594) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3748439252376556396) ) ) {
                  sum += (double)0.09634503371234647007;
                } else {
                  sum += (double)0.271176858113013286;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489500045776367188) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2417684942483901978) ) ) {
                    sum += (double)0.02986487819088846918;
                  } else {
                    sum += (double)0.08047943355615480576;
                  }
                } else {
                  sum += (double)0.1129392387049472229;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2916000038385391235) ) ) {
                sum += (double)0.01380946989247311581;
              } else {
                sum += (double)0.03650284871088229494;
              }
            }
          } else {
            sum += (double)0.2267529253722326832;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.012146264314651489) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002949999994598329067) ) ) {
              sum += (double)0.5973259155464152315;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2332654967904090881) ) ) {
                  sum += (double)0.3710392360486146068;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3286.3988037109375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2796591222286224365) ) ) {
                      sum += (double)0.4781141594876195944;
                    } else {
                      sum += (double)0.5369625591363837991;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.29114437103271484) ) ) {
                      sum += (double)0.4706619940224053278;
                    } else {
                      sum += (double)0.393283055989876229;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4272.447998046875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55247068405151367) ) ) {
                    sum += (double)0.456692312032856762;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1191499978303909302) ) ) {
                      sum += (double)0.4459462517775201751;
                    } else {
                      sum += (double)0.277849509392612104;
                    }
                  }
                } else {
                  sum += (double)0.2503325011999865124;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5571127235889434814) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2442.576416015625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2624.0433349609375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
                    sum += (double)0.6602523866403320341;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39061737060546875) ) ) {
                      sum += (double)0.5630627120594829949;
                    } else {
                      sum += (double)0.635565039645447194;
                    }
                  }
                } else {
                  sum += (double)0.4762841433816463188;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70989513397216797) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07544999942183494568) ) ) {
                    sum += (double)0.5864003080640288745;
                  } else {
                    sum += (double)0.6426976066889272809;
                  }
                } else {
                  sum += (double)0.6977653089285713595;
                }
              }
            } else {
              sum += (double)0.4840957541934073349;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.51003932952880859) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2589544951915740967) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09210000187158584595) ) ) {
                  sum += (double)0.4212227401304397545;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2035560011863708496) ) ) {
                    sum += (double)0.1434657111711435118;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2668499946594238281) ) ) {
                      sum += (double)0.1971307606202880314;
                    } else {
                      sum += (double)0.2894963723381780429;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                  sum += (double)0.4688186126152654731;
                } else {
                  sum += (double)0.2664743496359204267;
                }
              }
            } else {
              sum += (double)0.1233754699684163902;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22567.392578125) ) ) {
              sum += (double)0.3129196215387783919;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137999966740608215) ) ) {
                sum += (double)0.6356946388422035632;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12224.78662109375) ) ) {
                  sum += (double)0.5615359095717358251;
                } else {
                  sum += (double)0.3863822050590006163;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.764249086380004883) ) ) {
          sum += (double)0.4013420736977397207;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904369920492172241) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2157704979181289673) ) ) {
              sum += (double)0.1279190811754333801;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.007034778594970703) ) ) {
                sum += (double)0.07442423284823579399;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
                  sum += (double)0.06700109997557997243;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5047.049072265625) ) ) {
                    sum += (double)0.02933131314345549523;
                  } else {
                    sum += (double)0.0101146352941176472;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.569433927536010742) ) ) {
              sum += (double)0.2792298187359849582;
            } else {
              sum += (double)0.1022534425711097983;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7109369933605194092) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.77136754989624023) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700002610683441162) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.153750002384185791) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.181228756904602051) ) ) {
                    sum += (double)0.7728554947368420081;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.37998104095458984) ) ) {
                      sum += (double)0.7078772701291988767;
                    } else {
                      sum += (double)0.7649107647058823733;
                    }
                  }
                } else {
                  sum += (double)0.6748042609623363663;
                }
              } else {
                sum += (double)0.6598201616046300844;
              }
            } else {
              sum += (double)0.6026199368365898756;
            }
          } else {
            sum += (double)0.4307964715630671626;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5530.912109375) ) ) {
            sum += (double)0.7507409626923936541;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8140759766101837158) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.205824196338653564) ) ) {
                sum += (double)0.8584937999999998626;
              } else {
                sum += (double)0.8092697310335222882;
              }
            } else {
              sum += (double)0.8823428500000000119;
            }
          }
        }
      } else {
        sum += (double)0.3565288967547364241;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242690086364746094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.487012863159179688) ) ) {
          sum += (double)0.1763397320964749659;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3501.4981689453125) ) ) {
            sum += (double)0.1178727083599836467;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01500000013038516045) ) ) {
              sum += (double)0.009440844444444445108;
            } else {
              sum += (double)0.07641529779811266632;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0966259390115737915) ) ) {
              sum += (double)0.402478321960492047;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3078615069389343262) ) ) {
                sum += (double)0.3142455759594251496;
              } else {
                sum += (double)0.1713454773678464715;
              }
            }
          } else {
            sum += (double)0.5599614895424136485;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.943595051765441895) ) ) {
            sum += (double)0.4188509623655329861;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2232000008225440979) ) ) {
              sum += (double)0.1816565261652272334;
            } else {
              sum += (double)0.06900661318144220291;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5723760128021240234) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.19934558868408203) ) ) {
              sum += (double)0.07103902145120341571;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165290027856826782) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7014.650146484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.07738113403320312) ) ) {
                      sum += (double)0.00861523636363636415;
                    } else {
                      sum += (double)0.004444308000000002715;
                    }
                  } else {
                    sum += (double)0.01117011428571428912;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07297449931502342224) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                      sum += (double)0.005654842857142858628;
                    } else {
                      sum += (double)0.01402137588383838528;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1299999989569187164) ) ) {
                      sum += (double)0.04163664696356275674;
                    } else {
                      sum += (double)0.0119179333333333335;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04020000062882900238) ) ) {
                    sum += (double)0.02412656470588235569;
                  } else {
                    sum += (double)0.09377241071564730579;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2971214950084686279) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                      sum += (double)0.02322567154471544965;
                    } else {
                      sum += (double)0.006823785185185186376;
                    }
                  } else {
                    sum += (double)0.04314717494830438982;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.49047470092773438) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4792.638671875) ) ) {
                sum += (double)0.0648698572561645509;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3527500033378601074) ) ) {
                  sum += (double)0.04228584848484848169;
                } else {
                  sum += (double)0.01536136296296296451;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19944.1396484375) ) ) {
                sum += (double)0.04268256000000000827;
              } else {
                sum += (double)0.1382934937326107949;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8202.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.00380945205688477) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  sum += (double)0.06345727527472526386;
                } else {
                  sum += (double)0.2000547171711995753;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1982000023126602173) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.89814853668212891) ) ) {
                      sum += (double)0.0607427502621688542;
                    } else {
                      sum += (double)0.0278294956794972459;
                    }
                  } else {
                    sum += (double)0.1047805371238944433;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5440020859241485596) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2875500023365020752) ) ) {
                      sum += (double)0.08983966607786975089;
                    } else {
                      sum += (double)0.04400461631990003342;
                    }
                  } else {
                    sum += (double)0.1517778125987833127;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.06695652008056641) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1423500031232833862) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2496364936232566833) ) ) {
                    sum += (double)0.1396464250573186683;
                  } else {
                    sum += (double)0.05594772189657326589;
                  }
                } else {
                  sum += (double)0.2704209086704853493;
                }
              } else {
                sum += (double)0.3745351468791926486;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2602500021457672119) ) ) {
                sum += (double)0.1288381546994412929;
              } else {
                sum += (double)0.03211851153846153467;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4060000032186508179) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2936124950647354126) ) ) {
                  sum += (double)0.006237361926961928517;
                } else {
                  sum += (double)0.02270834109890109906;
                }
              } else {
                sum += (double)0.05008373735508776792;
              }
            }
          }
        }
      } else {
        sum += (double)0.4002004636250601766;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.617357832277526275;
              } else {
                sum += (double)0.4634166733316251729;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6026500165462493896) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12007.724609375) ) ) {
                  sum += (double)0.4829717468490391519;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.259416103363037109) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4815500080585479736) ) ) {
                      sum += (double)0.3524992874058062164;
                    } else {
                      sum += (double)0.4834914270483483545;
                    }
                  } else {
                    sum += (double)0.2819967688057455901;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5374.223876953125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2460445016622543335) ) ) {
                    sum += (double)0.2576405766997607039;
                  } else {
                    sum += (double)0.4508728437981667225;
                  }
                } else {
                  sum += (double)0.1278294574699714026;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.215776920318603516) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.751306533813476562) ) ) {
                    sum += (double)0.5244036732939425516;
                  } else {
                    sum += (double)0.5855944677538148513;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.07059717178344727) ) ) {
                    sum += (double)0.4956645737335106383;
                  } else {
                    sum += (double)0.412011297568869006;
                  }
                }
              } else {
                sum += (double)0.3774954675826046047;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.705384731292724609) ) ) {
                  sum += (double)0.5699128295812201372;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3973195105791091919) ) ) {
                    sum += (double)0.6801273455877789864;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.131780624389648438) ) ) {
                      sum += (double)0.6179284666666665649;
                    } else {
                      sum += (double)0.6517641703576865231;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.125) ) ) {
                  sum += (double)0.5905761237319214763;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7107999920845031738) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4142140001058578491) ) ) {
                      sum += (double)0.5805296661265287872;
                    } else {
                      sum += (double)0.4759655205180005622;
                    }
                  } else {
                    sum += (double)0.4585555856374674555;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3642604947090148926) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5857999920845031738) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3071500062942504883) ) ) {
                sum += (double)0.3046995847366663623;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                  sum += (double)0.1655395045911966789;
                } else {
                  sum += (double)0.08451208736997202486;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1511500030755996704) ) ) {
                  sum += (double)0.3000580166720824837;
                } else {
                  sum += (double)0.1533021350834797014;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17324.61328125) ) ) {
                  sum += (double)0.409387907704628129;
                } else {
                  sum += (double)0.2857326918748802069;
                }
              }
            }
          } else {
            sum += (double)0.4221407357517120151;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3816034942865371704) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30516.80859375) ) ) {
            sum += (double)0.2376178042053030404;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
                sum += (double)0.2749805195363390076;
              } else {
                sum += (double)0.04615769925925926331;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1365500018000602722) ) ) {
                sum += (double)0.03781054897651367486;
              } else {
                sum += (double)0.0129321739130434793;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3058.9739990234375) ) ) {
            sum += (double)0.3808520333305081551;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807593107223510742) ) ) {
              sum += (double)0.2977292427322679735;
            } else {
              sum += (double)0.1054099363349828011;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.115455865859985352) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.071795940399169922) ) ) {
                  sum += (double)0.599305621279162315;
                } else {
                  sum += (double)0.6788816355326244834;
                }
              } else {
                sum += (double)0.5471507408932858585;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
                sum += (double)0.6589158108336915509;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1344500035047531128) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.849080920219421387) ) ) {
                    sum += (double)0.7125476342737722124;
                  } else {
                    sum += (double)0.6556475003045556527;
                  }
                } else {
                  sum += (double)0.7359837831501832017;
                }
              }
            }
          } else {
            sum += (double)0.4607492363539874014;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6771034896373748779) ) ) {
              sum += (double)0.7903626758771929994;
            } else {
              sum += (double)0.7362537823396451131;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05879907682538032532) ) ) {
                sum += (double)0.9011363428571428358;
              } else {
                sum += (double)0.8594696398412698946;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.626961052417755127) ) ) {
                sum += (double)0.7943552693495022909;
              } else {
                sum += (double)0.8370109333333333179;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5181746232266882801;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2481.459228515625) ) ) {
              sum += (double)0.403605858072601742;
            } else {
              sum += (double)0.2111909055847892847;
            }
          }
        } else {
          sum += (double)0.6750905350962870255;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7504999935626983643) ) ) {
          sum += (double)0.1775370462228512136;
        } else {
          sum += (double)0.1020019780729153613;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.877565383911132812) ) ) {
          sum += (double)0.5132567610158146332;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.13333320617675781) ) ) {
            sum += (double)0.1723872831896295643;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.331621512770652771) ) ) {
              sum += (double)0.4569024641056230185;
            } else {
              sum += (double)0.3073857614846582376;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8984000086784362793) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2078500017523765564) ) ) {
                sum += (double)0.01813602666666666932;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0608299989253282547) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.41592025756835938) ) ) {
                    sum += (double)0.00577560000000000226;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008249999955296516418) ) ) {
                    sum += (double)0.01664214285714285882;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09465150162577629089) ) ) {
                      sum += (double)0.007353475862068968236;
                    } else {
                      sum += (double)0.004000000000000000083;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.44345283508300781) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1664.1246337890625) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5474.392578125) ) ) {
                    sum += (double)0.06278951731192468355;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846349984407424927) ) ) {
                      sum += (double)0.01739426432364886074;
                    } else {
                      sum += (double)0.04801911868686868645;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1035.43597412109375) ) ) {
                    sum += (double)0.1212922890694874412;
                  } else {
                    sum += (double)0.01686735555555556043;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)68.4865570068359375) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1283999979496002197) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.244946502149105072) ) ) {
                      sum += (double)0.01055667714063714124;
                    } else {
                      sum += (double)0.02569704732394366767;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1686500012874603271) ) ) {
                      sum += (double)0.05294786807017543701;
                    } else {
                      sum += (double)0.01903323501400560822;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1694395020604133606) ) ) {
                    sum += (double)0.004249170370370371555;
                  } else {
                    sum += (double)0.007041628571428572292;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1164947205409060105;
          }
        } else {
          sum += (double)0.1275882465463108739;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5766755044460296631) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004850000143051147461) ) ) {
            sum += (double)0.2937104494269592303;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09915671870112419128) ) ) {
              sum += (double)0.1935016841013259548;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.175000190734863281) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.814102649688720703) ) ) {
                  sum += (double)0.1057895855652492556;
                } else {
                  sum += (double)0.2494295720764153901;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5849999785423278809) ) ) {
                  sum += (double)0.181140390591474465;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431597292423248291) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.36495189368724823) ) ) {
                      sum += (double)0.06893353344351423051;
                    } else {
                      sum += (double)0.2019953645619992355;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                      sum += (double)0.08248458086738966188;
                    } else {
                      sum += (double)0.0345007143957024795;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3687260512932895029;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.279776811599731445) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6591095030307769775) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.067805290222167969) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5012550055980682373) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3608525097370147705) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2328494936227798462) ) ) {
                sum += (double)0.4022728247401032298;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6965999901294708252) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.449650004506111145) ) ) {
                    sum += (double)0.4830505052231144902;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3198149949312210083) ) ) {
                      sum += (double)0.5238537762665160802;
                    } else {
                      sum += (double)0.5812715681313979088;
                    }
                  }
                } else {
                  sum += (double)0.4176595817935163657;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001650000049266964197) ) ) {
                sum += (double)0.6590656375000000233;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06729999929666519165) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1951474398374557495) ) ) {
                    sum += (double)0.610968416159039851;
                  } else {
                    sum += (double)0.5471504316213374741;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4467009902000427246) ) ) {
                    sum += (double)0.5748430846579813958;
                  } else {
                    sum += (double)0.5000226647759387077;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.265974998474121094) ) ) {
              sum += (double)0.6333287689837457934;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08734999969601631165) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01500000059604644775) ) ) {
                  sum += (double)0.7047323461818690848;
                } else {
                  sum += (double)0.7599463181818181257;
                }
              } else {
                sum += (double)0.6428650318782572759;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4871665090322494507) ) ) {
            sum += (double)0.2053968985211020448;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.776479601860046387) ) ) {
              sum += (double)0.5337510210848326331;
            } else {
              sum += (double)0.3984220560761757013;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4092302173376083374) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7384830117225646973) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8303000032901763916) ) ) {
              sum += (double)0.7428307248015872943;
            } else {
              sum += (double)0.7881900724256734048;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
              sum += (double)0.8856888786916786716;
            } else {
              sum += (double)0.8143167197149263625;
            }
          }
        } else {
          sum += (double)0.6233452351378685474;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7703810334205627441) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.383684009313583374) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05010000057518482208) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4713499993085861206) ) ) {
              sum += (double)0.6221667381406659203;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2726547867059707642) ) ) {
                sum += (double)0.526528752734685912;
              } else {
                sum += (double)0.4035614115181115347;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2543364912271499634) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.64443635940551758) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1141499988734722137) ) ) {
                  sum += (double)0.3905726100534469003;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5743499994277954102) ) ) {
                    sum += (double)0.2185123177234155056;
                  } else {
                    sum += (double)0.3065345168374971063;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3111499994993209839) ) ) {
                  sum += (double)0.2090070004590159902;
                } else {
                  sum += (double)0.08042653947887455634;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.08610820770263672) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6236.558837890625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28477859497070312) ) ) {
                    sum += (double)0.5388810476604115607;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13036.7744140625) ) ) {
                      sum += (double)0.482602729998189206;
                    } else {
                      sum += (double)0.280439823465856608;
                    }
                  }
                } else {
                  sum += (double)0.3444749614272160643;
                }
              } else {
                sum += (double)0.1741622521292807424;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.61666679382324219) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3240499943494796753) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4557909965515136719) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2351251393556594849) ) ) {
                  sum += (double)0.5266853541153567742;
                } else {
                  sum += (double)0.6205653817332310584;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.228623412549495697) ) ) {
                  sum += (double)0.7200575426562828563;
                } else {
                  sum += (double)0.639420729241145569;
                }
              }
            } else {
              sum += (double)0.5182446626105832177;
            }
          } else {
            sum += (double)0.4172271636458598221;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.660180509090423584) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.94588661193847656) ) ) {
              sum += (double)0.3275952452190492581;
            } else {
              sum += (double)0.1746931312748701559;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05709999985992908478) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.868667423725128174) ) ) {
                sum += (double)0.2394957447824785646;
              } else {
                sum += (double)0.1164558153863735623;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.716450214385986328) ) ) {
                sum += (double)0.1382107535558141365;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
                  sum += (double)0.08537218186036896195;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38420963287353516) ) ) {
                    sum += (double)0.02797399312602291341;
                  } else {
                    sum += (double)0.01052296551724137864;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.52417834819881437;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4365565031766891479) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.01064878629737609807;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2620.5687255859375) ) ) {
              sum += (double)0.1383604994646484843;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1563.31512451171875) ) ) {
                sum += (double)0.02101021043478261061;
              } else {
                sum += (double)0.0830115947803499038;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.02380943298339844) ) ) {
            sum += (double)0.07301223757275542015;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                sum += (double)0.01198969365079365253;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3171.5555419921875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2055.9091796875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1344762891530990601) ) ) {
                      sum += (double)0.004593872000000001447;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.006854250000000000967;
                  }
                } else {
                  sum += (double)0.009006506666666665509;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.81272697448730469) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)126.7719802856445312) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4517000019550323486) ) ) {
                    sum += (double)0.03576619634270862547;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.03090906143188477) ) ) {
                      sum += (double)0.02761899469696969811;
                    } else {
                      sum += (double)0.01226596790123456876;
                    }
                  }
                } else {
                  sum += (double)0.05905940503190080376;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4308000057935714722) ) ) {
                    sum += (double)0.03676591465201465431;
                  } else {
                    sum += (double)0.01086201592851592998;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20458.3232421875) ) ) {
                    sum += (double)0.009624484269215451138;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2341999933123588562) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.005021976470588235958;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.741173475980758667) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2705275118350982666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03374999947845935822) ) ) {
                sum += (double)0.2301303606972854021;
              } else {
                sum += (double)0.1533187641679441271;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8400000035762786865) ) ) {
                sum += (double)0.2646843102111786639;
              } else {
                sum += (double)0.4143943580189683451;
              }
            }
          } else {
            sum += (double)0.06288977543413266924;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19826.455078125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
              sum += (double)0.06821467035436326598;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)110.3232383728027344) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)147.9347915649414062) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.652359694242477417) ) ) {
                    sum += (double)0.0183320012121212135;
                  } else {
                    sum += (double)0.03629524272010725694;
                  }
                } else {
                  sum += (double)0.05770697808302807652;
                }
              } else {
                sum += (double)0.00809473600000000168;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.58333206176757812) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948219984769821167) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36916446685791016) ) ) {
                    sum += (double)0.05903957862433862475;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8205.232421875) ) ) {
                      sum += (double)0.02167989923469388486;
                    } else {
                      sum += (double)0.005061600000000001168;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
                    sum += (double)0.01957083201243201356;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                      sum += (double)0.1712192653607088888;
                    } else {
                      sum += (double)0.05714375756487305447;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6677944958209991455) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92798900604248047) ) ) {
                    sum += (double)0.0999829975872016663;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10867.90966796875) ) ) {
                      sum += (double)0.1246217770656738028;
                    } else {
                      sum += (double)0.2365372496001805769;
                    }
                  }
                } else {
                  sum += (double)0.03315373324907333608;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9038.6455078125) ) ) {
                sum += (double)0.1360364037590622577;
              } else {
                sum += (double)0.2948265684293740474;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5569700002670288086) ) ) {
          sum += (double)0.1225526799840006981;
        } else {
          sum += (double)0.2574869762180245769;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2541999965906143188) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.17969357967376709) ) ) {
            sum += (double)0.4264632446833583335;
          } else {
            sum += (double)0.3296135504042351227;
          }
        } else {
          sum += (double)0.5300879639307543023;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5245204753415331211;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11885.71044921875) ) ) {
                sum += (double)0.3975187953146765429;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5278.861572265625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.4140625) ) ) {
                    sum += (double)0.3283038063675541296;
                  } else {
                    sum += (double)0.2528398854450953359;
                  }
                } else {
                  sum += (double)0.181692601235441259;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335030078887939453) ) ) {
                sum += (double)0.6078635602843159846;
              } else {
                sum += (double)0.6831090222222221398;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.30450439453125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3472.111083984375) ) ) {
                      sum += (double)0.4958984384132725243;
                    } else {
                      sum += (double)0.5586498830624759826;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3547.6265869140625) ) ) {
                      sum += (double)0.5079460867172232996;
                    } else {
                      sum += (double)0.3951410135697713266;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9238.90087890625) ) ) {
                    sum += (double)0.5073498879186365551;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2957680076360702515) ) ) {
                      sum += (double)0.3144747828697374015;
                    } else {
                      sum += (double)0.4262824777944075327;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08579999953508377075) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                    sum += (double)0.5804693116746409975;
                  } else {
                    sum += (double)0.6270416633484163782;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    sum += (double)0.5853215335180341761;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2849733829498291016) ) ) {
                      sum += (double)0.4390113086096571471;
                    } else {
                      sum += (double)0.5450475402004585357;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.326752007007598877) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19925.775390625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37664699554443359) ) ) {
                  sum += (double)0.4237085207392141672;
                } else {
                  sum += (double)0.2303042956085895876;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6698499917984008789) ) ) {
                  sum += (double)0.1232416346497201554;
                } else {
                  sum += (double)0.2446463095142969169;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
                sum += (double)0.4722791033211681255;
              } else {
                sum += (double)0.2779645687317597869;
              }
            }
          } else {
            sum += (double)0.1117976868728246531;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.596799999475479126) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01754999998956918716) ) ) {
            sum += (double)0.2292589928356980888;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
              sum += (double)0.1615430729464005233;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.866363763809204102) ) ) {
                sum += (double)0.09348168135886598951;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.926470756530761719) ) ) {
                  sum += (double)0.04014747085387346953;
                } else {
                  sum += (double)0.02009281233082706522;
                }
              }
            }
          }
        } else {
          sum += (double)0.2882200915688409859;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6176975071430206299) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7906000018119812012) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5668291151523590088) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.746478796005249023) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.069852828979492188) ) ) {
                      sum += (double)0.6185740504687854413;
                    } else {
                      sum += (double)0.5719681902329076806;
                    }
                  } else {
                    sum += (double)0.6519669613412228948;
                  }
                } else {
                  sum += (double)0.683525263668207872;
                }
              } else {
                sum += (double)0.5494034107419278889;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5259000062942504883) ) ) {
                sum += (double)0.6451627206287643412;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006249999860301613808) ) ) {
                  sum += (double)0.7443480924999998916;
                } else {
                  sum += (double)0.7021841484445080495;
                }
              }
            }
          } else {
            sum += (double)0.4644790147202359498;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1191200204193592072) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.924035906791687012) ) ) {
                sum += (double)0.7974910974274765918;
              } else {
                sum += (double)0.7619396452881928017;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.41917324066162109) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.737757682800292969) ) ) {
                  sum += (double)0.7200397241280855898;
                } else {
                  sum += (double)0.7513277009615385582;
                }
              } else {
                sum += (double)0.6879143576147405126;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
              sum += (double)0.8913991160173160289;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6665.795166015625) ) ) {
                sum += (double)0.7761841058823529815;
              } else {
                sum += (double)0.8225070915332634014;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.773106992244720459) ) ) {
            sum += (double)0.5057520972179412322;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3891479314398617606;
            } else {
              sum += (double)0.1687053834214214121;
            }
          }
        } else {
          sum += (double)0.5658590015923967709;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3849999904632568359) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
        sum += (double)0.1015572970131386615;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6321.466796875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85347986221313477) ) ) {
                sum += (double)0.007092000000000001081;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.02884674072265625) ) ) {
                  sum += (double)0.005331022222222221892;
                } else {
                  sum += (double)0.004000000000000002685;
                }
              }
            } else {
              sum += (double)0.007773740000000002939;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4232000112533569336) ) ) {
              sum += (double)0.01873966000000000173;
            } else {
              sum += (double)0.004469235492457853363;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93333339691162109) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383999958634376526) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07355000078678131104) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4145499914884567261) ) ) {
                  sum += (double)0.08350866078431372352;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.60717010498046875) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                      sum += (double)0.02046980000000000327;
                    } else {
                      sum += (double)0.007926293333333335814;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.68333339691162109) ) ) {
                      sum += (double)0.09279842527423094733;
                    } else {
                      sum += (double)0.02854089090909090951;
                    }
                  }
                }
              } else {
                sum += (double)0.09382188681037882672;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.08269214630126953) ) ) {
                sum += (double)0.03492897228260869597;
              } else {
                sum += (double)0.00919220952380952333;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.81047439575195312) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                sum += (double)0.017025484480431851;
              } else {
                sum += (double)0.06652513421393421722;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-51926.83984375) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2185499966144561768) ) ) {
                  sum += (double)0.03160423764798523522;
                } else {
                  sum += (double)0.008810909090909091468;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1493999958038330078) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.592649996280670166) ) ) {
                    sum += (double)0.007341375000000000678;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18258.4990234375) ) ) {
                    sum += (double)0.01867893333333333489;
                  } else {
                    sum += (double)0.01041053333333333449;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.124766230583190918) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.320178493857383728) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03345000091940164566) ) ) {
            sum += (double)0.2642235875552442215;
          } else {
            sum += (double)0.11086079928865257;
          }
        } else {
          sum += (double)0.4017523830646905214;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10603.60205078125) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2454829961061477661) ) ) {
                sum += (double)0.09912862351701154373;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.69917774200439453) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1948499977588653564) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.12339591979980469) ) ) {
                      sum += (double)0.02516324360902255988;
                    } else {
                      sum += (double)0.05538404055234033563;
                    }
                  } else {
                    sum += (double)0.09226422832457914502;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4912999868392944336) ) ) {
                    sum += (double)0.02874880161616161917;
                  } else {
                    sum += (double)0.01862321813135985396;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.546875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.74534130096435547) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07600000128149986267) ) ) {
                      sum += (double)0.122465754177037936;
                    } else {
                      sum += (double)0.2067232604977059518;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139414995908737183) ) ) {
                      sum += (double)0.0261660088791697068;
                    } else {
                      sum += (double)0.1044787114414793133;
                    }
                  }
                } else {
                  sum += (double)0.2174267774846632972;
                }
              } else {
                sum += (double)0.3162969311613573753;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2239754945039749146) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.21497917175292969) ) ) {
                  sum += (double)0.04983984259259260224;
                } else {
                  sum += (double)0.01286005714285714217;
                }
              } else {
                sum += (double)0.1063112420643390343;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                    sum += (double)0.04348236680280864047;
                  } else {
                    sum += (double)0.01571299321789322231;
                  }
                } else {
                  sum += (double)0.007597125925925927656;
                }
              } else {
                sum += (double)0.06327069885237350533;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.75) ) ) {
            sum += (double)0.1920756430149166138;
          } else {
            sum += (double)0.3156504494786926962;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92792224884033203) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.6070764419251337696;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.379919767379760742) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.388576030731201172) ) ) {
                    sum += (double)0.4406020940825843279;
                  } else {
                    sum += (double)0.3166367979125958576;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3211205005645751953) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.616540074348449707) ) ) {
                      sum += (double)0.4969833033393374344;
                    } else {
                      sum += (double)0.5581901517040037675;
                    }
                  } else {
                    sum += (double)0.434049778778293649;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2308015003800392151) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                    sum += (double)0.3555888130276187997;
                  } else {
                    sum += (double)0.1744036951292699811;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658999994397163391) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04930000007152557373) ) ) {
                      sum += (double)0.3833897687989489822;
                    } else {
                      sum += (double)0.2491576153403118887;
                    }
                  } else {
                    sum += (double)0.4988886630194834804;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000207126140594) ) ) {
              sum += (double)0.6569504835420743039;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.095486164093017578) ) ) {
                  sum += (double)0.5581895820772769801;
                } else {
                  sum += (double)0.6117266914351852103;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.9814453125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.83084678649902344) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4376813769340515137) ) ) {
                      sum += (double)0.5889662376485130801;
                    } else {
                      sum += (double)0.5447229383265237423;
                    }
                  } else {
                    sum += (double)0.4953910016388005655;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2501030787825584412) ) ) {
                    sum += (double)0.5098212182150013705;
                  } else {
                    sum += (double)0.3579141786857979457;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)127.9401893615722656) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.60852241516113281) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1989495009183883667) ) ) {
                    sum += (double)0.4071419445639433699;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.50735282897949219) ) ) {
                      sum += (double)0.1933087872793592121;
                    } else {
                      sum += (double)0.2847920189386833889;
                    }
                  }
                } else {
                  sum += (double)0.139598464495223562;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25119.55078125) ) ) {
                  sum += (double)0.2950362504576364842;
                } else {
                  sum += (double)0.08133934876688274362;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13523.744140625) ) ) {
                sum += (double)0.4802836096335523219;
              } else {
                sum += (double)0.2522824839747662695;
              }
            }
          } else {
            sum += (double)0.09173880648721541298;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.981066226959228516) ) ) {
          sum += (double)0.4035269435439940988;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2817585021257400513) ) ) {
                sum += (double)0.1803941628682244613;
              } else {
                sum += (double)0.4103993486528048629;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3764420002698898315) ) ) {
                sum += (double)0.02986553684210526902;
              } else {
                sum += (double)0.202326126133857781;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25040.73828125) ) ) {
              sum += (double)0.1979112969744346584;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.30347633361816406) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.505343973636627197) ) ) {
                  sum += (double)0.03157709046391753149;
                } else {
                  sum += (double)0.06050359741433064542;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3169955015182495117) ) ) {
                  sum += (double)0.02814869777777777651;
                } else {
                  sum += (double)0.01365648888888889093;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2134499996900558472) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6762050092220306396) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.138076305389404297) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1534499973058700562) ) ) {
              sum += (double)0.5165444568955234184;
            } else {
              sum += (double)0.5667148871125855525;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.56942903995513916) ) ) {
              sum += (double)0.3468799996007282949;
            } else {
              sum += (double)0.2340229102440273268;
            }
          }
        } else {
          sum += (double)0.6586895965987102919;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6071439981460571289) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00664999987930059433) ) ) {
            sum += (double)0.7235038558823529975;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5277076065540313721) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.867500007152557373) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3488.074462890625) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5916.149658203125) ) ) {
                      sum += (double)0.6156708867866512724;
                    } else {
                      sum += (double)0.5149565245453886497;
                    }
                  } else {
                    sum += (double)0.6355502665659922279;
                  }
                } else {
                  sum += (double)0.5192397699970702218;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5760840177536010742) ) ) {
                  sum += (double)0.6888943065118396936;
                } else {
                  sum += (double)0.642951010025520131;
                }
              }
            } else {
              sum += (double)0.5056549984784241003;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7139790058135986328) ) ) {
              sum += (double)0.7699747873851682245;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1553.44091796875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.989513397216796875) ) ) {
                  sum += (double)0.7877361036526441262;
                } else {
                  sum += (double)0.8529804947368418988;
                }
              } else {
                sum += (double)0.875682085858585868;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.05714321136474609) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124702453613281) ) ) {
                sum += (double)0.7102460624338624573;
              } else {
                sum += (double)0.7784606730158730725;
              }
            } else {
              sum += (double)0.6727227970692143399;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1532909944653511047) ) ) {
            sum += (double)0.1025679769932264368;
          } else {
            sum += (double)0.1802966660422014034;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352313011884689331) ) ) {
            sum += (double)0.4154761558444612923;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
              sum += (double)0.3193554126743238797;
            } else {
              sum += (double)0.1101607678860172523;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.487745165824890137) ) ) {
          sum += (double)0.5301619858856225775;
        } else {
          sum += (double)0.383823162411463914;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402444988489151001) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1458499953150749207) ) ) {
              sum += (double)0.02316670955710955701;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2222.6668701171875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504999876022338867) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004940857142857143537;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7897999882698059082) ) ) {
                      sum += (double)0.004973618181818184603;
                    } else {
                      sum += (double)0.01060867500000000144;
                    }
                  }
                } else {
                  sum += (double)0.01027385000000000104;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02875000052154064178) ) ) {
                  sum += (double)0.005682822222222222962;
                } else {
                  sum += (double)0.01626274666666667132;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06904999911785125732) ) ) {
              sum += (double)0.05029165811782202594;
            } else {
              sum += (double)0.004515533333333333552;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.575714111328125) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.24782943725585938) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.58269214630126953) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6175488829612731934) ) ) {
                  sum += (double)0.105931744894388169;
                } else {
                  sum += (double)0.03173420198412698484;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2160384729504585266) ) ) {
                  sum += (double)0.05879588161261244117;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.01007652282714844) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.89285755157470703) ) ) {
                      sum += (double)0.0295448283975659233;
                    } else {
                      sum += (double)0.01091138666666667013;
                    }
                  } else {
                    sum += (double)0.05323024761904761315;
                  }
                }
              }
            } else {
              sum += (double)0.1215181751099720237;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914350658655166626) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.59766769409179688) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399999946355819702) ) ) {
                  sum += (double)0.009909885714285715866;
                } else {
                  sum += (double)0.01633928888888889347;
                }
              } else {
                sum += (double)0.0381728704284221565;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2474999949336051941) ) ) {
                sum += (double)0.004000000000000000083;
              } else {
                sum += (double)0.007351720000000000824;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
          sum += (double)0.3487407349126075418;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2496000155806541443) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1670145019888877869) ) ) {
                  sum += (double)0.06654495983469381482;
                } else {
                  sum += (double)0.1809181063132171696;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4262500107288360596) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2407044991850852966) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16197.50390625) ) ) {
                      sum += (double)0.01761233746419418184;
                    } else {
                      sum += (double)0.04443508811161887145;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2916185110807418823) ) ) {
                      sum += (double)0.096677250360588593;
                    } else {
                      sum += (double)0.03078580521088532598;
                    }
                  }
                } else {
                  sum += (double)0.1304467981753939798;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.075439453125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09610000252723693848) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.26444435119628906) ) ) {
                      sum += (double)0.05068324266000845402;
                    } else {
                      sum += (double)0.119870779629629623;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.479244619607925415) ) ) {
                      sum += (double)0.1892773447650109853;
                    } else {
                      sum += (double)0.2782799359196541644;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2917.3262939453125) ) ) {
                      sum += (double)0.01220021538461538504;
                    } else {
                      sum += (double)0.007582320000000000899;
                    }
                  } else {
                    sum += (double)0.03044623943661971949;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                  sum += (double)0.1986211274462814647;
                } else {
                  sum += (double)0.3426992422989439402;
                }
              }
            }
          } else {
            sum += (double)0.3081509667800285679;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2367089986801147461) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5070168733320513654;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11929.9404296875) ) ) {
                sum += (double)0.4020839774322871318;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.273736804723739624) ) ) {
                  sum += (double)0.1208493904992043316;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2140740007162094116) ) ) {
                    sum += (double)0.3485208079712771023;
                  } else {
                    sum += (double)0.1773704148537148528;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4924.8759765625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03050000034272670746) ) ) {
                  sum += (double)0.5869323002578132886;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3058000057935714722) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96401500701904297) ) ) {
                      sum += (double)0.5006688638214541465;
                    } else {
                      sum += (double)0.4091758119545005346;
                    }
                  } else {
                    sum += (double)0.5284059943344373567;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640522956848144531) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3351.64111328125) ) ) {
                    sum += (double)0.5392564695536030683;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.620872616767883301) ) ) {
                      sum += (double)0.4946097613262352422;
                    } else {
                      sum += (double)0.3904014837294053075;
                    }
                  }
                } else {
                  sum += (double)0.2563785510353398522;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.73177719116210938) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.90556788444519043) ) ) {
                    sum += (double)0.5633062472876035898;
                  } else {
                    sum += (double)0.6030558626901549868;
                  }
                } else {
                  sum += (double)0.6776729790412486798;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362000048160552979) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                    sum += (double)0.6000812061593909785;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6384999752044677734) ) ) {
                      sum += (double)0.4492541346374937516;
                    } else {
                      sum += (double)0.5261451174307175682;
                    }
                  }
                } else {
                  sum += (double)0.4116659624619249391;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05159999988973140717) ) ) {
            sum += (double)0.3723136589134125596;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4525499939918518066) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3088000118732452393) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22931.6943359375) ) ) {
                  sum += (double)0.15253130825133282;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4018628150224685669) ) ) {
                    sum += (double)0.3359702789500900177;
                  } else {
                    sum += (double)0.2130286463025450328;
                  }
                }
              } else {
                sum += (double)0.06405046625938654037;
              }
            } else {
              sum += (double)0.3671205713072668297;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.812406301498413086) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.166749998927116394) ) ) {
            sum += (double)0.2209549247069559907;
          } else {
            sum += (double)0.3821491966804332341;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.369049072265625) ) ) {
              sum += (double)0.3327799266860137495;
            } else {
              sum += (double)0.1286236822319096473;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.39827585220336914) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4354.025390625) ) ) {
                sum += (double)0.2627986329694122491;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3726200014352798462) ) ) {
                  sum += (double)0.0145485684210526333;
                } else {
                  sum += (double)0.09130090043103447628;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.72068023681640625) ) ) {
                sum += (double)0.01322680000000000036;
              } else {
                sum += (double)0.03563700916179338152;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.15280723571777344) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.24555587768554688) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09421525150537490845) ) ) {
                    sum += (double)0.6022382485978645672;
                  } else {
                    sum += (double)0.655390981977992837;
                  }
                } else {
                  sum += (double)0.7003698541950112988;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107149999588727951) ) ) {
                  sum += (double)0.5370459429199601065;
                } else {
                  sum += (double)0.6257276521694131732;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1763.752197265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.307249546051025391) ) ) {
                  sum += (double)0.6529192931429413926;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2521717175841331482) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7499000132083892822) ) ) {
                      sum += (double)0.7622411466063347962;
                    } else {
                      sum += (double)0.7084143219997514063;
                    }
                  } else {
                    sum += (double)0.671634052777777768;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8300500214099884033) ) ) {
                  sum += (double)0.7383055248120301561;
                } else {
                  sum += (double)0.7800791991285401794;
                }
              }
            }
          } else {
            sum += (double)0.4221620783552525458;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1537.08721923828125) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8326499760150909424) ) ) {
                sum += (double)0.8159221998015872002;
              } else {
                sum += (double)0.860056099999999879;
              }
            } else {
              sum += (double)0.8750536685185184016;
            }
          } else {
            sum += (double)0.7773608676010123064;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.5357706562712781784;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567900180816650391) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.3356708348591692093;
            } else {
              sum += (double)0.1528294774371368736;
            }
          } else {
            sum += (double)0.5728549704315152313;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2573520094156265259) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          sum += (double)0.05659479989861024296;
        } else {
          sum += (double)0.123565740481474784;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5144754946231842041) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352313011884689331) ) ) {
            sum += (double)0.4127398289025106526;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.744692623615264893) ) ) {
              sum += (double)0.2077143046858677955;
            } else {
              sum += (double)0.325573154709124013;
            }
          }
        } else {
          sum += (double)0.5531204503151135876;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108280003070831299) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.90000152587890625) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03331399895250797272) ) ) {
                    sum += (double)0.004408240000000000769;
                  } else {
                    sum += (double)0.008977483333333334536;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01355699985288083553) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.006193800000000001041;
                    }
                  }
                }
              } else {
                sum += (double)0.01183001379310344783;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.91391944885253906) ) ) {
                sum += (double)0.03965366033222077202;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)194.029998779296875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01885000057518482208) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1381975039839744568) ) ) {
                      sum += (double)0.004000000000000001818;
                    } else {
                      sum += (double)0.03185324210526315619;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1328469961881637573) ) ) {
                      sum += (double)0.01345607843137255032;
                    } else {
                      sum += (double)0.006101330612244900038;
                    }
                  }
                } else {
                  sum += (double)0.02944320823045267974;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.83087635040283203) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2196839973330497742) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.27683639526367188) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1253499984741210938) ) ) {
                      sum += (double)0.012028417777777781;
                    } else {
                      sum += (double)0.03664982768817204306;
                    }
                  } else {
                    sum += (double)0.06221283251231528311;
                  }
                } else {
                  sum += (double)0.08596637030333498242;
                }
              } else {
                sum += (double)0.08585579549062585802;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9109620153903961182) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5711999833583831787) ) ) {
                    sum += (double)0.0271989867243867256;
                  } else {
                    sum += (double)0.01307368000000000245;
                  }
                } else {
                  sum += (double)0.004000000000000000951;
                }
              } else {
                sum += (double)0.03635847999999999858;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5) ) ) {
            sum += (double)0.0707378660645161389;
          } else {
            sum += (double)0.1556899235688378458;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
          sum += (double)0.2915107275070004111;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4376685023307800293) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.372500002384185791) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.45055007934570312) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.65178585052490234) ) ) {
                    sum += (double)0.06186225768799102909;
                  } else {
                    sum += (double)0.1072399698922126277;
                  }
                } else {
                  sum += (double)0.02568448847625188353;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                  sum += (double)0.006747165217391305758;
                } else {
                  sum += (double)0.03052214423446865388;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7450.84130859375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6860499978065490723) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2668000087141990662) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12987.6162109375) ) ) {
                      sum += (double)0.03985731599021630905;
                    } else {
                      sum += (double)0.0205454249999999991;
                    }
                  } else {
                    sum += (double)0.1064634414643554072;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14793.4619140625) ) ) {
                    sum += (double)0.1056496787715208718;
                  } else {
                    sum += (double)0.1696491917809753447;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.64930534362792969) ) ) {
                  sum += (double)0.12638413482149638;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8849999904632568359) ) ) {
                    sum += (double)0.1927901508910952744;
                  } else {
                    sum += (double)0.2951806807880855699;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
              sum += (double)0.1456933649304320566;
            } else {
              sum += (double)0.326136171657954721;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2444199994206428528) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004850000143051147461) ) ) {
              sum += (double)0.5760909118082534475;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5821264684200286865) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2055500000715255737) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
                    sum += (double)0.3861976248222082075;
                  } else {
                    sum += (double)0.2827120280412040443;
                  }
                } else {
                  sum += (double)0.1416667492546677398;
                }
              } else {
                sum += (double)0.4329391037796724295;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.597499966621398926) ) ) {
                sum += (double)0.6142246817073170329;
              } else {
                sum += (double)0.6827745093837535029;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.063273906707763672) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.11039638519287109) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.89535856246948242) ) ) {
                      sum += (double)0.495960219480365172;
                    } else {
                      sum += (double)0.3981940501950595457;
                    }
                  } else {
                    sum += (double)0.5487655764062148167;
                  }
                } else {
                  sum += (double)0.3826253545801448497;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9652.21923828125) ) ) {
                  sum += (double)0.4506275456140789726;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7736499905586242676) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                      sum += (double)0.5907368584641278231;
                    } else {
                      sum += (double)0.5399994385613071657;
                    }
                  } else {
                    sum += (double)0.6277133925925926228;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
                sum += (double)0.4284346503322898347;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18792.2998046875) ) ) {
                    sum += (double)0.2434925191507803788;
                  } else {
                    sum += (double)0.1023653792506149796;
                  }
                } else {
                  sum += (double)0.3462523891103748697;
                }
              }
            } else {
              sum += (double)0.1560643888844153171;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
              sum += (double)0.4880653858667132194;
            } else {
              sum += (double)0.2747422698071628755;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.864434003829956055) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            sum += (double)0.3621578327843852918;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.744037389755249023) ) ) {
              sum += (double)0.2554320191776886517;
            } else {
              sum += (double)0.09399629688723973309;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097320795059204102) ) ) {
            sum += (double)0.2289993323018121862;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1039000004529953003) ) ) {
              sum += (double)0.1308506711496907893;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.30043554306030273) ) ) {
                sum += (double)0.04696645224605347502;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.159000001847743988) ) ) {
                  sum += (double)0.006802453333333333997;
                } else {
                  sum += (double)0.01799189333333333501;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6871374845504760742) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6792999804019927979) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85396003723144531) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.07929229736328125) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4907170087099075317) ) ) {
                  sum += (double)0.5539237059130475149;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1224000006914138794) ) ) {
                    sum += (double)0.6468164079641732789;
                  } else {
                    sum += (double)0.5788441263165444717;
                  }
                }
              } else {
                sum += (double)0.6522088224212392316;
              }
            } else {
              sum += (double)0.4763013557971014778;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061999984085559845) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.931028366088867188) ) ) {
                sum += (double)0.6602100997778297398;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1352.06536865234375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3392.0394287109375) ) ) {
                    sum += (double)0.7523258636363636676;
                  } else {
                    sum += (double)0.7104909666666666679;
                  }
                } else {
                  sum += (double)0.7762614285714286577;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3793.3834228515625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2684587612748146057) ) ) {
                  sum += (double)0.6492204942599069106;
                } else {
                  sum += (double)0.6084390660723176802;
                }
              } else {
                sum += (double)0.7019648734693877401;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.900967180728912354) ) ) {
            sum += (double)0.55054785332797751;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.4608401983294729831;
            } else {
              sum += (double)0.2519626965355299397;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5217965245246887207) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8510999977588653564) ) ) {
                sum += (double)0.8125384891649412022;
              } else {
                sum += (double)0.8623944080000000012;
              }
            } else {
              sum += (double)0.8891804747474747472;
            }
          } else {
            sum += (double)0.7693539584200626003;
          }
        } else {
          sum += (double)0.6706677800705804771;
        }
      }
    }
  }
  return sum;
}
