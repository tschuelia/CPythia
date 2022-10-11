#include "prediction.h"
double predict_margin_unit3(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6341500000000001025) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6181.876125091131144) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4233480000000000576) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2078490000000000337) ) ) {
            sum += (double)-0.003281092905178647958;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.94444444444444997) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.79332084893883348) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5211238333507964837) ) ) {
                  sum += (double)-0.006821724897289170413;
                } else {
                  sum += (double)0.007391188339687942629;
                }
              } else {
                sum += (double)0.008004004260372208496;
              }
            } else {
              sum += (double)-0.005048338973647792903;
            }
          }
        } else {
          sum += (double)-0.01155450433039569187;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
          sum += (double)-0.003622687325404543024;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.67878787878790092) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05215000000000000885) ) ) {
              sum += (double)-0.00272825003085319694;
            } else {
              sum += (double)0.0008924638874150297215;
            }
          } else {
            sum += (double)0.01151177349272101448;
          }
        }
      }
    } else {
      sum += (double)0.006733517229988297131;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5620204603580564173) ) ) {
        sum += (double)0.007069371734543182864;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.193950000000000039) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21602.88987586164512) ) ) {
              sum += (double)0.001645968447367394038;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.12451984635083591) ) ) {
                sum += (double)-0.01770813911612496502;
              } else {
                sum += (double)-0.004445324851345231788;
              }
            }
          } else {
            sum += (double)0.00557895405697828202;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1378260869565509) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-68614.26162170016323) ) ) {
              sum += (double)0.01550469995625477701;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.09420289855072639) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.009150000000000003617) ) ) {
                  sum += (double)-0.001787761201013339345;
                } else {
                  sum += (double)0.002058357848929518071;
                }
              } else {
                sum += (double)-0.00547590123115462412;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08605000000000000149) ) ) {
              sum += (double)0.003409473275674279949;
            } else {
              sum += (double)-0.009286351462783271754;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1019000000000000183) ) ) {
        sum += (double)-0.007943744953150231464;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197300944669366096) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2700.929737596660289) ) ) {
            sum += (double)0.01058975039529617621;
          } else {
            sum += (double)-0.003534090879287585165;
          }
        } else {
          sum += (double)-0.005024856361390434359;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.61180124223603016) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.59151511703276527) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8242798927019791) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.41530501089326322) ) ) {
              sum += (double)-0.003526387982480547623;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000000000000333) ) ) {
                sum += (double)-0.001901180374005407517;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8225500000000001144) ) ) {
                  sum += (double)0.01505173565184352545;
                } else {
                  sum += (double)0.001843210778530770307;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-438.7150656555641604) ) ) {
              sum += (double)-0.002435593322331264764;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-52.33759769014449148) ) ) {
                sum += (double)0.01699772727302035352;
              } else {
                sum += (double)-0.002045667272334318436;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875000000000000111) ) ) {
            sum += (double)0.01427238662504504672;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.78594771241830408) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4906165000000000664) ) ) {
                  sum += (double)0.01123525824764808924;
                } else {
                  sum += (double)-0.0007447342450796655888;
                }
              } else {
                sum += (double)-0.002194740512676731942;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21602.88987586164512) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.682311448724905567) ) ) {
                  sum += (double)-0.007760556807152219246;
                } else {
                  sum += (double)0.006067047011897076098;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.51614185750636921) ) ) {
                  sum += (double)-0.0008685748027334943633;
                } else {
                  sum += (double)0.004975385148269774634;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1268500000000000183) ) ) {
          sum += (double)-0.008537756087641497002;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197300944669366096) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
              sum += (double)0.01126757024363242952;
            } else {
              sum += (double)-0.002567714185637998917;
            }
          } else {
            sum += (double)-0.006991266265164402909;
          }
        }
      }
    } else {
      sum += (double)-0.00255579116998727162;
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.02380952380952905) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.609208937198069123) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8708480000000001775) ) ) {
          sum += (double)0.00187207422483425109;
        } else {
          sum += (double)0.006886026402053882327;
        }
      } else {
        sum += (double)0.01057758683636868605;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18698.09943762341936) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.1378260869565509) ) ) {
          sum += (double)0.008784526953023438778;
        } else {
          sum += (double)-0.003942797543621776556;
        }
      } else {
        sum += (double)-0.009823199740149075182;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.13045634920635507) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.611110815408438) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.224238952202467923) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.50581395348837432) ) ) {
            sum += (double)0.002022179006841025393;
          } else {
            sum += (double)0.00735145405577123344;
          }
        } else {
          sum += (double)0.009403691314798652903;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
          sum += (double)0.002726165239669619666;
        } else {
          sum += (double)-0.003982914966731424672;
        }
      }
    } else {
      sum += (double)-0.007281577510851926748;
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.140910052012023224) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1455340000000000245) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.966927453769559797) ) ) {
          sum += (double)-0.01133635997686182478;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.06458333333333499) ) ) {
            sum += (double)0.007042080321241267135;
          } else {
            sum += (double)-0.002109424123681595716;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9476499999999999924) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7691500000000001114) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7544000000000001815) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.7032241367026018) ) ) {
                  sum += (double)0.0002210552175178351006;
                } else {
                  sum += (double)-0.01289104247830853527;
                }
              } else {
                sum += (double)0.007814349414952802969;
              }
            } else {
              sum += (double)-0.009549078788679086355;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.69504643962849144) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.54131455399061679) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
                  sum += (double)0.01146985942150968718;
                } else {
                  sum += (double)-0.001700321572429948358;
                }
              } else {
                sum += (double)-0.01135854747478171056;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2175365000000000493) ) ) {
                sum += (double)0.0006012189415520328897;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8337500000000001021) ) ) {
                  sum += (double)0.01293212259084084576;
                } else {
                  sum += (double)0.004624969288743313589;
                }
              }
            }
          }
        } else {
          sum += (double)-0.008658213463601925619;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1224000000000000227) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1864.88550111141808) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
            sum += (double)-0.002477749938002080099;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4193.228010564421311) ) ) {
              sum += (double)0.001782087638079662148;
            } else {
              sum += (double)0.01348780170226597172;
            }
          }
        } else {
          sum += (double)-0.007849424549354864361;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4187725000000000475) ) ) {
          sum += (double)-0.004462761891260982536;
        } else {
          sum += (double)-0.01324041515051765754;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.807323232323232443) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.611110815408438) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4735.305360091569128) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508875000000000521) ) ) {
          sum += (double)-0.00478226524498281437;
        } else {
          sum += (double)0.001686910511036145057;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4067570000000000907) ) ) {
          sum += (double)0.009192395901125156171;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8617465000000000819) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4481876643282757811) ) ) {
              sum += (double)0.001335871465562316323;
            } else {
              sum += (double)0.008098824622944722842;
            }
          } else {
            sum += (double)0.01032515428190922471;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.614953886693017315) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7450000000000001066) ) ) {
            sum += (double)-0.009374797328456585532;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8291915000000000813) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.825757575757575912) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.262013729977116805) ) ) {
                  sum += (double)0.003695256059182628044;
                } else {
                  sum += (double)-0.005542205279306393687;
                }
              } else {
                sum += (double)0.009732464786287748151;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.170138888888890172) ) ) {
                sum += (double)0.001971814671553030751;
              } else {
                sum += (double)-0.0084024300146346622;
              }
            }
          }
        } else {
          sum += (double)0.008425080428548642475;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.00605000000000000069) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.922825000067440615) ) ) {
            sum += (double)-0.004508018943502941495;
          } else {
            sum += (double)0.008685020581987943841;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.19149436090225613) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09795000000000000928) ) ) {
              sum += (double)-0.006789729321107087524;
            } else {
              sum += (double)-0.01807989279194373994;
            }
          } else {
            sum += (double)0.001490895884863167875;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03285087188102400052) ) ) {
      sum += (double)-0.008630508681411261027;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04326142423856935149) ) ) {
        sum += (double)0.01152493930377550616;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2730813378879465292) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2280773739410588419) ) ) {
            sum += (double)-0.0006887390331253358689;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7169500000000000872) ) ) {
              sum += (double)-0.003837412002715902271;
            } else {
              sum += (double)-0.01414406002654600494;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.504650000000000154) ) ) {
              sum += (double)-0.004179107204263833759;
            } else {
              sum += (double)0.005873490696859072491;
            }
          } else {
            sum += (double)-0.0005974051777073181163;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.901704545454547812) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.848989496077650063) ) ) {
          sum += (double)-0.005252836332760133994;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3420500000000000762) ) ) {
            sum += (double)0.0119311253271780493;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.192234848484849508) ) ) {
              sum += (double)0.0008863051920354038469;
            } else {
              sum += (double)0.009532221779712026291;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6456.091882016088675) ) ) {
          sum += (double)-0.009612907731267760283;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.89470443349754447) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955385000000000317) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02430000000000000215) ) ) {
                  sum += (double)0.003528494483383885945;
                } else {
                  sum += (double)-0.007580182112012742376;
                }
              } else {
                sum += (double)0.01294408566852466719;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2796390000000000264) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.00952380952381127) ) ) {
                  sum += (double)-0.0008555024213948292508;
                } else {
                  sum += (double)-0.01167106345544361053;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3046920000000000184) ) ) {
                  sum += (double)0.00547694442575962729;
                } else {
                  sum += (double)-0.001130626028113338507;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
              sum += (double)-0.003666623413777412004;
            } else {
              sum += (double)0.006357101614087192973;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197300944669366096) ) ) {
        sum += (double)0.001791642700324953168;
      } else {
        sum += (double)0.01035394642289870146;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.50390625000000178) ) ) {
      sum += (double)-0.01014533073781650335;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04820000000000001367) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
          sum += (double)-0.001586371439999057636;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6244745000000001545) ) ) {
            sum += (double)0.01848104960480483408;
          } else {
            sum += (double)0.003623110522498856814;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7097500000000002141) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6693000000000001171) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5042355000000001697) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.468926000000000065) ) ) {
                sum += (double)-0.000885846107192943895;
              } else {
                sum += (double)0.006572644913961315366;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.03571428571428825) ) ) {
                sum += (double)0.005220483068290853595;
              } else {
                sum += (double)-0.008630258251556785845;
              }
            }
          } else {
            sum += (double)-0.01143376676667316912;
          }
        } else {
          sum += (double)0.007812775559273113166;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.048368298368299811) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-771.1535402920288789) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13716.36173526380844) ) ) {
        sum += (double)-0.005953416078058364896;
      } else {
        sum += (double)0.00251450591603868262;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1392500000000000127) ) ) {
        sum += (double)0.0007699436838517166115;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.554700854700854951) ) ) {
          sum += (double)-0.002111411658987796293;
        } else {
          sum += (double)-0.01599447745638491944;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03285087188102400052) ) ) {
      sum += (double)-0.008541225353238148313;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04326142423856935149) ) ) {
        sum += (double)0.009655265456112975195;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2730813378879465292) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2280773739410588419) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1751921495685277441) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.93913849603311661) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.30439814814815058) ) ) {
                  sum += (double)-0.002346922922247082072;
                } else {
                  sum += (double)-0.01044990442550324146;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.290600000000000025) ) ) {
                  sum += (double)0.001484705336244408844;
                } else {
                  sum += (double)-0.003926534484863710567;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7451500000000000901) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.69255000000000011) ) ) {
                  sum += (double)0.003047697179710831105;
                } else {
                  sum += (double)-0.004570706114496219698;
                }
              } else {
                sum += (double)0.009830846803747610857;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000000000001377) ) ) {
              sum += (double)-0.0001125623297925087968;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.320690500000000045) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.252284686893363308) ) ) {
                  sum += (double)-0.01670390863329545769;
                } else {
                  sum += (double)-0.007037507096204469875;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2546825051281399466) ) ) {
                  sum += (double)0.003238862368322135716;
                } else {
                  sum += (double)-0.01155536936755200035;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.325855839657968327) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
              sum += (double)-0.001398155300145009425;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.54015000000000013) ) ) {
                sum += (double)-0.001570693783816913894;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3280050000000000465) ) ) {
                  sum += (double)0.01729536330171951158;
                } else {
                  sum += (double)0.005232797686791096185;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
              sum += (double)-0.000950189441745899672;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356877833515956144) ) ) {
                sum += (double)0.005512596919251483776;
              } else {
                sum += (double)-1.688151931072141883e-05;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.048368298368299811) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1553.47651953803188) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5511050068427713056) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7983.836747832507172) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.77329192546583947) ) ) {
            sum += (double)-0.0004948517544071474655;
          } else {
            sum += (double)-0.0095388671398262629;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.719320066334991903) ) ) {
            sum += (double)-0.005581401715145837238;
          } else {
            sum += (double)0.003071588966465157999;
          }
        }
      } else {
        sum += (double)0.006741037509006863639;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.614953886693017315) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4119110000000000826) ) ) {
            sum += (double)-0.007175601571732854837;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8291915000000000813) ) ) {
              sum += (double)0.003025309548679056947;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.996815286624204155) ) ) {
                sum += (double)0.002739083340975054844;
              } else {
                sum += (double)-0.006731261850496103767;
              }
            }
          }
        } else {
          sum += (double)0.006708315177484867366;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.19149436090225613) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01179999999999999973) ) ) {
            sum += (double)-0.01299759061036681769;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.276298222740671173) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.329588014981273769) ) ) {
                sum += (double)-0.005565670436003952552;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8392762331475017712) ) ) {
                  sum += (double)0.01029848727271350135;
                } else {
                  sum += (double)-0.001503205860082227957;
                }
              }
            } else {
              sum += (double)-0.01076416310749605046;
            }
          }
        } else {
          sum += (double)0.003738002202160015542;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03285087188102400052) ) ) {
      sum += (double)-0.007316728891546601075;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04326142423856935149) ) ) {
        sum += (double)0.008271041867341918583;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.268761726078800223) ) ) {
          sum += (double)-0.00520847774389920741;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000000000000637) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2491.711596340602682) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.583654216403544979) ) ) {
                sum += (double)0.01629121568720929072;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4307545000000000401) ) ) {
                  sum += (double)-0.002835119403989432279;
                } else {
                  sum += (double)0.006355637555370470884;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3057500000000000218) ) ) {
                sum += (double)-0.006862710366808849084;
              } else {
                sum += (double)0.001896788891456363969;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444527670486335014) ) ) {
              sum += (double)-0.0002626857079287419098;
            } else {
              sum += (double)-0.002051907901893430981;
            }
          }
        }
      }
    }
  }
  return sum;
}
