#include "prediction.h"
double predict_margin_unit11(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2980984896421432495) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.20833206176757812) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2796874642372131348) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007750000106170773506) ) ) {
                sum += (double)0.0292957821697099885;
              } else {
                sum += (double)0.009438019047619049945;
              }
            } else {
              sum += (double)0.06612421093954223839;
            }
          } else {
            sum += (double)0.1713452434305798855;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1458329930901527405) ) ) {
            sum += (double)0.1051004141045077805;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.827639579772949219) ) ) {
              sum += (double)0.3666067412283103844;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126000195741653442) ) ) {
                sum += (double)0.08644840489007196704;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0284000001847743988) ) ) {
                  sum += (double)0.3006788392839124247;
                } else {
                  sum += (double)0.2185270734320184649;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8847000002861022949) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.1875) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.004000000000000001818;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.29895000159740448) ) ) {
                    sum += (double)0.03251595369288169668;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1855000033974647522) ) ) {
                      sum += (double)0.01218287301587301849;
                    } else {
                      sum += (double)0.02995802500000000271;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1432655006647109985) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8011499941349029541) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005270907317073172428;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21111.7900390625) ) ) {
                      sum += (double)0.01052501333333333289;
                    } else {
                      sum += (double)0.004382432000000001208;
                    }
                  }
                } else {
                  sum += (double)0.012030500000000003;
                }
              }
            } else {
              sum += (double)0.04170438518518518323;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001749999937601387501) ) ) {
              sum += (double)0.08722117195216205765;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7485974133014678955) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2154475003480911255) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2312185317277908325) ) ) {
                      sum += (double)0.03224506252465483142;
                    } else {
                      sum += (double)0.01624169180327868917;
                    }
                  } else {
                    sum += (double)0.07035199638752051565;
                  }
                } else {
                  sum += (double)0.09978703996173045321;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                  sum += (double)0.0125240659340659366;
                } else {
                  sum += (double)0.004675043478260870397;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.22536659240722656) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6766999959945678711) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5483999848365783691) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3938712775707244873) ) ) {
                    sum += (double)0.1246563574938618635;
                  } else {
                    sum += (double)0.05243420541912226229;
                  }
                } else {
                  sum += (double)0.02422920021893815168;
                }
              } else {
                sum += (double)0.1242718303172183486;
              }
            } else {
              sum += (double)0.2009091877919182423;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4123500138521194458) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05137825012207031) ) ) {
                sum += (double)0.04498438353061572081;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1999934986233711243) ) ) {
                  sum += (double)0.01116633750000000161;
                } else {
                  sum += (double)0.02836022063789868722;
                }
              }
            } else {
              sum += (double)0.07832316245423193157;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.395299196243286133) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-970.381988525390625) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1475.6910400390625) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2116.91351318359375) ) ) {
              sum += (double)0.4288430341820087532;
            } else {
              sum += (double)0.2598939210426395308;
            }
          } else {
            sum += (double)0.5880930015528478272;
          }
        } else {
          sum += (double)0.2377320469146023407;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6702491044998168945) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8549999892711639404) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.70833349227905273) ) ) {
                sum += (double)0.1161297352722672621;
              } else {
                sum += (double)0.05498616260162601799;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3004.347900390625) ) ) {
                sum += (double)0.1969821297725222187;
              } else {
                sum += (double)0.3705333231313060471;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4188414961099624634) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9529556930065155029) ) ) {
                sum += (double)0.05184432183592885268;
              } else {
                sum += (double)0.01632203098591549287;
              }
            } else {
              sum += (double)0.1101820476142341548;
            }
          }
        } else {
          sum += (double)0.3766493851434710716;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4904465079307556152) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.661062240600585938) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06839999929070472717) ) ) {
              sum += (double)0.4760538534315534309;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1749999970197677612) ) ) {
                sum += (double)0.2438243434075646476;
              } else {
                sum += (double)0.3568854635096741501;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7164500057697296143) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
                  sum += (double)0.6076373033759565612;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197473049163818359) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.838075399398803711) ) ) {
                      sum += (double)0.5324695478087233536;
                    } else {
                      sum += (double)0.4893719389729530023;
                    }
                  } else {
                    sum += (double)0.3946316664046639056;
                  }
                }
              } else {
                sum += (double)0.3867075110139630012;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03454999998211860657) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3902845084667205811) ) ) {
                  sum += (double)0.5753848978010093207;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.16346168518066406) ) ) {
                    sum += (double)0.6087355025723153457;
                  } else {
                    sum += (double)0.685776804511278093;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7306500077247619629) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5471532046794891357) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.272745609283447266) ) ) {
                      sum += (double)0.5634228673359187312;
                    } else {
                      sum += (double)0.6261071318527807739;
                    }
                  } else {
                    sum += (double)0.4836833134502751541;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233576387166976929) ) ) {
                    sum += (double)0.4383933957256642699;
                  } else {
                    sum += (double)0.5279932058430374386;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.95981311798095703) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20537.9111328125) ) ) {
                sum += (double)0.4744125559510692369;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8092.22021484375) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134155035018920898) ) ) {
                    sum += (double)0.1970994120483835488;
                  } else {
                    sum += (double)0.3299869133817656675;
                  }
                } else {
                  sum += (double)0.1328698666467658385;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.323627278208732605) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7531000077724456787) ) ) {
                  sum += (double)0.3254726154070240463;
                } else {
                  sum += (double)0.1842795689808004456;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2976720035076141357) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.09723091125488281) ) ) {
                    sum += (double)0.2814756127756889992;
                  } else {
                    sum += (double)0.1291162665735790527;
                  }
                } else {
                  sum += (double)0.09672237680344838995;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
              sum += (double)0.532657703937079563;
            } else {
              sum += (double)0.3126013525196416065;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3751520426960349153;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02190000005066394806) ) ) {
            sum += (double)0.2477248657733608361;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
              sum += (double)0.2113247171005900593;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.133145332336425781) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105044960975646973) ) ) {
                  sum += (double)0.04872669400673401707;
                } else {
                  sum += (double)0.1893195696460693578;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5441.749755859375) ) ) {
                  sum += (double)0.0388564734422262581;
                } else {
                  sum += (double)0.02107371612903225985;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.36980438232421875) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4705.360107421875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1974000036716461182) ) ) {
              sum += (double)0.6211154670565345315;
            } else {
              sum += (double)0.5780421114625476919;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1217901706695556641) ) ) {
              sum += (double)0.7140632818620992195;
            } else {
              sum += (double)0.6594640023453218758;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0745762847363948822) ) ) {
              sum += (double)0.7840780607464830076;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.633001923561096191) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.619419574737548828) ) ) {
                  sum += (double)0.7210349248604712713;
                } else {
                  sum += (double)0.7705742146044625152;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6516920030117034912) ) ) {
                  sum += (double)0.6817560586080584351;
                } else {
                  sum += (double)0.7374277846153846072;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.890030124537037004;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06818994507193565369) ) ) {
                  sum += (double)0.8458608532467531971;
                } else {
                  sum += (double)0.8773945166666665685;
                }
              }
            } else {
              sum += (double)0.8257330271879468331;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.153116345405578613) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.32692289352416992) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5523493289947509766) ) ) {
              sum += (double)0.6914344550340135731;
            } else {
              sum += (double)0.6146121879905469543;
            }
          } else {
            sum += (double)0.4930749630559239649;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.190721631050109863) ) ) {
            sum += (double)0.5075234938021839781;
          } else {
            sum += (double)0.3720717970727021595;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09405500069260597229) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8356499969959259033) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.182799994945526123) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                  sum += (double)0.006488305882352942214;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1696862950921058655) ) ) {
                    sum += (double)0.004824822222222222706;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                }
              } else {
                sum += (double)0.007253129411764706186;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.16964244842529297) ) ) {
                sum += (double)0.00846468571428571695;
              } else {
                sum += (double)0.01397500000000000131;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1661870032548904419) ) ) {
              sum += (double)0.0203368000000000021;
            } else {
              sum += (double)0.004000000000000000951;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.672972917556762695) ) ) {
            sum += (double)0.1467624453090811409;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.80481815338134766) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1244204975664615631) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
                    sum += (double)0.01906917142857142769;
                  } else {
                    sum += (double)0.009966233333333336317;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1982580050826072693) ) ) {
                    sum += (double)0.1111808237002072375;
                  } else {
                    sum += (double)0.03382245138888888975;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7463951706886291504) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3567000031471252441) ) ) {
                    sum += (double)0.06135573972484630739;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.21567726135253906) ) ) {
                      sum += (double)0.02620761739130434906;
                    } else {
                      sum += (double)0.009917090909090910122;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.017657160758972168) ) ) {
                    sum += (double)0.006179577982590886594;
                  } else {
                    sum += (double)0.004000000000000001818;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02435000054538249969) ) ) {
                sum += (double)0.09301017392002045026;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2529135048389434814) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7206000089645385742) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3047000020742416382) ) ) {
                      sum += (double)0.01507792916666666518;
                    } else {
                      sum += (double)0.03103579153439152763;
                    }
                  } else {
                    sum += (double)0.05333372015903135172;
                  }
                } else {
                  sum += (double)0.1278025541137763899;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5083103924989700317) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.880357027053833008) ) ) {
              sum += (double)0.4345547720659907465;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7714499831199645996) ) ) {
                sum += (double)0.3100756879192836935;
              } else {
                sum += (double)0.2208749393899312741;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
              sum += (double)0.1916655244151374005;
            } else {
              sum += (double)0.06295310413698568253;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.21903181076049805) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.015350341796875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3518.140869140625) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6852.56591796875) ) ) {
                    sum += (double)0.04048724589607922281;
                  } else {
                    sum += (double)0.1040499707854753847;
                  }
                } else {
                  sum += (double)0.1355938415851838386;
                }
              } else {
                sum += (double)0.02112364200913242201;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7727999985218048096) ) ) {
                sum += (double)0.3409946880848751527;
              } else {
                sum += (double)0.121642615210839633;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
              sum += (double)0.1409967080290434605;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.50895404815673828) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2240500003099441528) ) ) {
                  sum += (double)0.008795542857142860105;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500014066696167) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                      sum += (double)0.02362508207475209204;
                    } else {
                      sum += (double)0.06326266705655785028;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11128.27392578125) ) ) {
                      sum += (double)0.08174138131261163287;
                    } else {
                      sum += (double)0.1989254453524561539;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6782357394695281982) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2578864991664886475) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)61.98898696899414062) ) ) {
                      sum += (double)0.03914278651138248383;
                    } else {
                      sum += (double)0.01695541176470588204;
                    }
                  } else {
                    sum += (double)0.06316851954008165237;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.81350326538085938) ) ) {
                    sum += (double)0.02686190000000000105;
                  } else {
                    sum += (double)0.008934372802024036914;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8070119619369506836) ) ) {
          sum += (double)0.09896280684415216522;
        } else {
          sum += (double)0.2705040454810069273;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008349999785423278809) ) ) {
          sum += (double)0.5988131380430835593;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.83333301544189453) ) ) {
            sum += (double)0.2512739945276308284;
          } else {
            sum += (double)0.4386561722395158625;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92792224884033203) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280154004693031311) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05040000006556510925) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.663679838180541992) ) ) {
                sum += (double)0.3955393970914828916;
              } else {
                sum += (double)0.5610089139285032722;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6481499969959259033) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
                    sum += (double)0.3927958982699883417;
                  } else {
                    sum += (double)0.262014909844967836;
                  }
                } else {
                  sum += (double)0.470087437659338081;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2203340008854866028) ) ) {
                  sum += (double)0.1590494255278751545;
                } else {
                  sum += (double)0.2576810062025615689;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7191500067710876465) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3936.9281005859375) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2990587502717971802) ) ) {
                    sum += (double)0.4542315867701052778;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485747337341308594) ) ) {
                      sum += (double)0.502926523508990142;
                    } else {
                      sum += (double)0.5540382003330003302;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08504999801516532898) ) ) {
                    sum += (double)0.5542843711468071755;
                  } else {
                    sum += (double)0.5279640594659775754;
                  }
                }
              } else {
                sum += (double)0.4335265061085272764;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                  sum += (double)0.5796364818190172796;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1929214969277381897) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211729913949966431) ) ) {
                      sum += (double)0.5977627142011834316;
                    } else {
                      sum += (double)0.6309605799999999931;
                    }
                  } else {
                    sum += (double)0.671741087069525733;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                  sum += (double)0.5962070439901757668;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7399.01513671875) ) ) {
                    sum += (double)0.5620234930301242215;
                  } else {
                    sum += (double)0.4487481644715968221;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.31949758529663086) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2102500051259994507) ) ) {
                sum += (double)0.1995540729947304637;
              } else {
                sum += (double)0.3657140106292968706;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1857000738382339478) ) ) {
                sum += (double)0.2700162229356564692;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25223.1259765625) ) ) {
                  sum += (double)0.1725849982174533503;
                } else {
                  sum += (double)0.1031431999043121439;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5634999871253967285) ) ) {
              sum += (double)0.2587391061231898437;
            } else {
              sum += (double)0.4392678605920178891;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.965920448303222656) ) ) {
              sum += (double)0.2196983289021557095;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3663499951362609863) ) ) {
                sum += (double)0.1143895362964709589;
              } else {
                sum += (double)0.02468457182130584515;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09409999847412109375) ) ) {
              sum += (double)0.02974877000000000077;
            } else {
              sum += (double)0.01196013333333333442;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3044.78466796875) ) ) {
            sum += (double)0.329964889306853304;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807593107223510742) ) ) {
              sum += (double)0.2133842613534355781;
            } else {
              sum += (double)0.09869662555799879611;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.03631901741027832) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02639999985694885254) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                sum += (double)0.6757015511712862743;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.36068117618560791) ) ) {
                  sum += (double)0.7688269599999999482;
                } else {
                  sum += (double)0.7306749031746030409;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5559565126895904541) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7811000049114227295) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1892682537436485291) ) ) {
                    sum += (double)0.6499192285818600201;
                  } else {
                    sum += (double)0.5846476790643666543;
                  }
                } else {
                  sum += (double)0.5618803582260730733;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3726.691162109375) ) ) {
                  sum += (double)0.6431520807439474741;
                } else {
                  sum += (double)0.7242516051700955693;
                }
              }
            }
          } else {
            sum += (double)0.4795772732227230883;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06974999979138374329) ) ) {
              sum += (double)0.7816673674247346382;
            } else {
              sum += (double)0.7341437557975040162;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.8946509190123453914;
              } else {
                sum += (double)0.8588765905723905192;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032000124454498291) ) ) {
                sum += (double)0.7816333520209735042;
              } else {
                sum += (double)0.8187614555555556839;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.647727370262145996) ) ) {
          sum += (double)0.5417856222754746653;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2552.708984375) ) ) {
            sum += (double)0.4407899882427553373;
          } else {
            sum += (double)0.1349165508569021565;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.522727251052856445) ) ) {
        sum += (double)0.2022177014640756942;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07889900356531143188) ) ) {
              sum += (double)0.007231187096774195459;
            } else {
              sum += (double)0.02774380612244898431;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.170649997889995575) ) ) {
                sum += (double)0.004000000000000002685;
              } else {
                sum += (double)0.005755789473684212385;
              }
            } else {
              sum += (double)0.01342492000000000164;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.558441162109375) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)128.9363632202148438) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04124999977648258209) ) ) {
                  sum += (double)0.03596611846443030502;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1641499996185302734) ) ) {
                    sum += (double)0.1186841117288839897;
                  } else {
                    sum += (double)0.04356713192239859006;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.57500076293945312) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1229014992713928223) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3240541815757751465) ) ) {
                      sum += (double)0.006026155555555555605;
                    } else {
                      sum += (double)0.01319671999999999859;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2145.72802734375) ) ) {
                      sum += (double)0.03299274313022700772;
                    } else {
                      sum += (double)0.01162760000000000009;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5710499882698059082) ) ) {
                    sum += (double)0.09849422290512045708;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.08522796630859375) ) ) {
                      sum += (double)0.06226716304093567189;
                    } else {
                      sum += (double)0.01790991788575061611;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.118659028279177986;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.29629707336425781) ) ) {
                sum += (double)0.01591795294117647266;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238500058650970459) ) ) {
                  sum += (double)0.004000000000000000951;
                } else {
                  sum += (double)0.008903481481481484439;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2340020015835762024) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-72639.33984375) ) ) {
                  sum += (double)0.03677049046015712364;
                } else {
                  sum += (double)0.01299612631578947637;
                }
              } else {
                sum += (double)0.05173331076923077393;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.851818323135375977) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2668499946594238281) ) ) {
          sum += (double)0.2930128524132038503;
        } else {
          sum += (double)0.4989128125472633846;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.210713505744934082) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0297499997541308403) ) ) {
              sum += (double)0.303238667777325499;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2885095030069351196) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7391000092029571533) ) ) {
                  sum += (double)0.0672570977160770328;
                } else {
                  sum += (double)0.1353310848622021889;
                }
              } else {
                sum += (double)0.2516336059259857705;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.75845432281494141) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1730920001864433289) ) ) {
                  sum += (double)0.2688259052889958589;
                } else {
                  sum += (double)0.1876282279444322909;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269235029816627502) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.567596137523651123) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.36864280700683594) ) ) {
                      sum += (double)0.0570954091338160899;
                    } else {
                      sum += (double)0.02208523022820800541;
                    }
                  } else {
                    sum += (double)0.1241620370604524792;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                    sum += (double)0.082404300511946596;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8766.4560546875) ) ) {
                      sum += (double)0.1025181043128637892;
                    } else {
                      sum += (double)0.2814738047083327754;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.436650007963180542) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
                  sum += (double)0.09164707806021535341;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08419999852776527405) ) ) {
                      sum += (double)0.005885431578947369208;
                    } else {
                      sum += (double)0.0194624000000000047;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.02589079737663269) ) ) {
                      sum += (double)0.03811608888888888547;
                    } else {
                      sum += (double)0.01864619130434782765;
                    }
                  }
                }
              } else {
                sum += (double)0.08616193010115158479;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86904716491699219) ) ) {
            sum += (double)0.1142687494949495008;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4016500115394592285) ) ) {
              sum += (double)0.3779344329934379854;
            } else {
              sum += (double)0.2166990547262276356;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914259880781173706) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.6050193645687644839;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.817018032073974609) ) ) {
                sum += (double)0.4835966349911675621;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4752000123262405396) ) ) {
                    sum += (double)0.3894828563977341673;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6958000063896179199) ) ) {
                      sum += (double)0.2194969781252840701;
                    } else {
                      sum += (double)0.3632454775484732501;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5907.53076171875) ) ) {
                    sum += (double)0.4790998113813395021;
                  } else {
                    sum += (double)0.2907447363841786925;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007500000065192580223) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.27832698822021484) ) ) {
                sum += (double)0.6167884562987736574;
              } else {
                sum += (double)0.6588654642623525959;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.341767549514770508) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.354672670364379883) ) ) {
                    sum += (double)0.4500081866132379926;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3211205005645751953) ) ) {
                      sum += (double)0.5577673450144954304;
                    } else {
                      sum += (double)0.4914934238511607933;
                    }
                  }
                } else {
                  sum += (double)0.3874135906077412761;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.72222232818603516) ) ) {
                    sum += (double)0.5923996988814305142;
                  } else {
                    sum += (double)0.632928361896884617;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4142140001058578491) ) ) {
                      sum += (double)0.5891563900968250778;
                    } else {
                      sum += (double)0.474480017600767856;
                    }
                  } else {
                    sum += (double)0.4303715017942045806;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.326752007007598877) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1778574958443641663) ) ) {
                sum += (double)0.1378864270609285736;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20735.255859375) ) ) {
                  sum += (double)0.3559527643999519375;
                } else {
                  sum += (double)0.2304565954118708293;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
                sum += (double)0.4726156610170803019;
              } else {
                sum += (double)0.3474792439791271059;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2687500119209289551) ) ) {
              sum += (double)0.08345324948287592692;
            } else {
              sum += (double)0.2234655553701758723;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.3039164924759694686;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20638.2451171875) ) ) {
            sum += (double)0.2193176948120445502;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.58788537979125977) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3676.5296630859375) ) ) {
                  sum += (double)0.04094907607225512641;
                } else {
                  sum += (double)0.0186511520000000007;
                }
              } else {
                sum += (double)0.1133467858473936052;
              }
            } else {
              sum += (double)0.1405469271584182389;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6696245074272155762) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4676279276609420776) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3030.8250732421875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004859864711761475) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.34796428680419922) ) ) {
                      sum += (double)0.6208652372414066312;
                    } else {
                      sum += (double)0.6510783773115772499;
                    }
                  } else {
                    sum += (double)0.5729641050806018043;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4834070056676864624) ) ) {
                    sum += (double)0.63469693650793646;
                  } else {
                    sum += (double)0.6895465571428570639;
                  }
                }
              } else {
                sum += (double)0.5600645773250872983;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2436.00927734375) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                  sum += (double)0.6380805608710223842;
                } else {
                  sum += (double)0.7058438744755244354;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8053999841213226318) ) ) {
                  sum += (double)0.7622929655737705756;
                } else {
                  sum += (double)0.7078515539944902901;
                }
              }
            }
          } else {
            sum += (double)0.4089222650956257366;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.5353080832596263106;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.4732562349144168179;
            } else {
              sum += (double)0.2540827095929028001;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.579051494598388672) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            sum += (double)0.7483001472247527985;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09570000320672988892) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02479999978095293045) ) ) {
                  sum += (double)0.8566217142857143196;
                } else {
                  sum += (double)0.8067737369047620621;
                }
              } else {
                sum += (double)0.8767597166739861114;
              }
            } else {
              sum += (double)0.7872001220902069551;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3611919581890106201) ) ) {
            sum += (double)0.7407240194331985439;
          } else {
            sum += (double)0.6706917474712904559;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1530964970588684082) ) ) {
          sum += (double)0.07299014045376392423;
        } else {
          sum += (double)0.1700949373888623883;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.430000007152557373) ) ) {
          sum += (double)0.5729482326446784235;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1083.81622314453125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0114000001922249794) ) ) {
              sum += (double)0.4962960771375598545;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1696.7208251953125) ) ) {
                sum += (double)0.2767680664985423533;
              } else {
                sum += (double)0.3998013251377918187;
              }
            }
          } else {
            sum += (double)0.1806737073508108415;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.974999904632568359) ) ) {
            sum += (double)0.04185754872528812259;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.46153831481933594) ) ) {
              sum += (double)0.02780119925044810536;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.60694122314453125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2477.03173828125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3431.7218017578125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32) ) ) {
                      sum += (double)0.005602261538461539986;
                    } else {
                      sum += (double)0.0172501837606837613;
                    }
                  } else {
                    sum += (double)0.03498844047619047853;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5865500271320343018) ) ) {
                    sum += (double)0.007285182608695651464;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05538900010287761688) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4131000041961669922) ) ) {
                    sum += (double)0.006329533333333334059;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.752750009298324585) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5896499752998352051) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.005089340000000000357;
                    }
                  } else {
                    sum += (double)0.009728752000000001968;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3537304997444152832) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
                sum += (double)0.08593549179566563334;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09345000237226486206) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.40109872817993164) ) ) {
                    sum += (double)0.01884332500000000105;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06064999848604202271) ) ) {
                      sum += (double)0.006433920000000001825;
                    } else {
                      sum += (double)0.01687699999999999964;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1283499971032142639) ) ) {
                    sum += (double)0.08788868916833959821;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6591222882270812988) ) ) {
                      sum += (double)0.03856797922270364248;
                    } else {
                      sum += (double)0.01302179591836734839;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.08921557703454188748;
            }
          } else {
            sum += (double)0.09972958762182183856;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004949999856762588024) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5671.4775390625) ) ) {
              sum += (double)0.1792930304942361441;
            } else {
              sum += (double)0.3495607619658119281;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13887.85400390625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-57373.91796875) ) ) {
                sum += (double)0.01615533972858489153;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4172500073909759521) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3778499960899353027) ) ) {
                    sum += (double)0.1034400988823947209;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.41869926452636719) ) ) {
                      sum += (double)0.06474533338252792813;
                    } else {
                      sum += (double)0.02789687348880075593;
                    }
                  }
                } else {
                  sum += (double)0.1127776541709594738;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.171875) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1247999966144561768) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1615504994988441467) ) ) {
                      sum += (double)0.03125967525773196143;
                    } else {
                      sum += (double)0.08331298411308912799;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6394.142822265625) ) ) {
                      sum += (double)0.08948091905218452657;
                    } else {
                      sum += (double)0.2276731651195826045;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3860584944486618042) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                      sum += (double)0.0216383454545454601;
                    } else {
                      sum += (double)0.009138105263157897049;
                    }
                  } else {
                    sum += (double)0.07797029536493632618;
                  }
                }
              } else {
                sum += (double)0.2602431538746194928;
              }
            }
          }
        } else {
          sum += (double)0.40921239735775089;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.6138785941556109682;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.63569021224975586) ) ) {
                  sum += (double)0.4598706042618679324;
                } else {
                  sum += (double)0.5567217300784890188;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13627.123046875) ) ) {
                  sum += (double)0.4760567852891686713;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.349303245544433594) ) ) {
                    sum += (double)0.4315333422013650222;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4918.664306640625) ) ) {
                      sum += (double)0.3311431610695590444;
                    } else {
                      sum += (double)0.2261362621417448981;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1431000009179115295) ) ) {
                  sum += (double)0.3849709167787115915;
                } else {
                  sum += (double)0.5298864768236559719;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00155000001541338861) ) ) {
              sum += (double)0.6526611649350649857;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5547690391540527344) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8609000146389007568) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.807799994945526123) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7666000127792358398) ) ) {
                      sum += (double)0.5753610661586135988;
                    } else {
                      sum += (double)0.4786636634259444634;
                    }
                  } else {
                    sum += (double)0.6657264129554656407;
                  }
                } else {
                  sum += (double)0.4796280465490493361;
                }
              } else {
                sum += (double)0.4803360073589333368;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.26304149627685547) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2659319937229156494) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01069999985338654369) ) ) {
                sum += (double)0.436650664041426273;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                  sum += (double)0.2833939469829617197;
                } else {
                  sum += (double)0.1571801439172752501;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7476000189781188965) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.10733318328857422) ) ) {
                  sum += (double)0.3515687709049822307;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.588750004768371582) ) ) {
                    sum += (double)0.5565277819106144719;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6975999772548675537) ) ) {
                      sum += (double)0.3803315913457342434;
                    } else {
                      sum += (double)0.4716312097421000438;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3598520010709762573) ) ) {
                  sum += (double)0.233034096855537276;
                } else {
                  sum += (double)0.3749953669613690366;
                }
              }
            }
          } else {
            sum += (double)0.1673380612786199151;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.938632011413574219) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4515369981527328491) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.527557015419006348) ) ) {
              sum += (double)0.3039055207424248839;
            } else {
              sum += (double)0.1209469708554486989;
            }
          } else {
            sum += (double)0.3936804003874410651;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25040.73828125) ) ) {
            sum += (double)0.197976003689113722;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.31254953145980835) ) ) {
              sum += (double)0.1259244904817030664;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.405001640319824219) ) ) {
                sum += (double)0.06273522406525294803;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1227000020444393158) ) ) {
                  sum += (double)0.04040851024930748603;
                } else {
                  sum += (double)0.01354370434782608927;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043774247169494629) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.70751151442527771) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7275.853759765625) ) ) {
            sum += (double)0.555795635341599481;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1220334097743034363) ) ) {
                sum += (double)0.7037731971406372411;
              } else {
                sum += (double)0.6089032842929396061;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.142740987241268158) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.81421661376953125) ) ) {
                  sum += (double)0.8006123904761905941;
                } else {
                  sum += (double)0.7487931659883722002;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0501255989074707) ) ) {
                  sum += (double)0.6849559583305889765;
                } else {
                  sum += (double)0.7606438784313727108;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8360326886177062988) ) ) {
              sum += (double)0.8985294211248283647;
            } else {
              sum += (double)0.835642489892118423;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3129.814697265625) ) ) {
              sum += (double)0.7514599275126196964;
            } else {
              sum += (double)0.8142691510631958618;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
            sum += (double)0.5326889050382001001;
          } else {
            sum += (double)0.2832064123231297637;
          }
        } else {
          sum += (double)0.602656736738972576;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.177777767181396484) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1530964970588684082) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
            sum += (double)0.1308828977777777569;
          } else {
            sum += (double)0.042017283778126642;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352313011884689331) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8710500001907348633) ) ) {
              sum += (double)0.4053215344839405931;
            } else {
              sum += (double)0.1661458000764504117;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06320000067353248596) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-888.59063720703125) ) ) {
                sum += (double)0.1718950589708151122;
              } else {
                sum += (double)0.05051952115178055813;
              }
            } else {
              sum += (double)0.2175985237576483766;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5623229444026947021) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3361595124006271362) ) ) {
            sum += (double)0.3364307699577542832;
          } else {
            sum += (double)0.4961451948419597913;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.343142986297607422) ) ) {
            sum += (double)0.3853505583872207652;
          } else {
            sum += (double)0.08652418198797247328;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942244946956634521) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93333339691162109) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1223529987037181854) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5949163138866424561) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051399968564510345) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004929473170731708473;
                    } else {
                      sum += (double)0.009857380645161291366;
                    }
                  } else {
                    sum += (double)0.02303875294117647271;
                  }
                } else {
                  sum += (double)0.04206952064777328554;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.3125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0185500001534819603) ) ) {
                    sum += (double)0.01198087058823529491;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.612562030553817749) ) ) {
                      sum += (double)0.07730037592865932061;
                    } else {
                      sum += (double)0.01923776470588235005;
                    }
                  }
                } else {
                  sum += (double)0.1140803192042866843;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.93333244323730469) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.25) ) ) {
                    sum += (double)0.008573103030303032973;
                  } else {
                    sum += (double)0.05001180284900284823;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8346000015735626221) ) ) {
                      sum += (double)0.004103817964071859725;
                    } else {
                      sum += (double)0.00964618181818181937;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.79492568969726562) ) ) {
                      sum += (double)0.01525973333333333418;
                    } else {
                      sum += (double)0.006460978461538463731;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1723359972238540649) ) ) {
                  sum += (double)0.01378352000000000223;
                } else {
                  sum += (double)0.03220707124413145495;
                }
              }
            }
          } else {
            sum += (double)0.09366231868131867644;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008600000292062759399) ) ) {
            sum += (double)0.2283798632280558127;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.23908758163452148) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.45525550842285156) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6732999980449676514) ) ) {
                  sum += (double)0.04252886031007752782;
                } else {
                  sum += (double)0.1366686143679243792;
                }
              } else {
                sum += (double)0.1937660820044798116;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5849999785423278809) ) ) {
                sum += (double)0.1346468049664035493;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4016499966382980347) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7450044751167297363) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000214576721191) ) ) {
                      sum += (double)0.04294700902949562943;
                    } else {
                      sum += (double)0.1025798296531899439;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.234191499650478363) ) ) {
                      sum += (double)0.01039468040404040346;
                    } else {
                      sum += (double)0.02451441083675321223;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8349999785423278809) ) ) {
                    sum += (double)0.1479138199795924924;
                  } else {
                    sum += (double)0.06962765737457118909;
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.4487188597169853854;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4574484974145889282) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              sum += (double)0.5689660588992567769;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.8897552490234375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5259.546875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06610000133514404297) ) ) {
                    sum += (double)0.3918138142048742667;
                  } else {
                    sum += (double)0.4898856772236868662;
                  }
                } else {
                  sum += (double)0.2591674143324070867;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2280170023441314697) ) ) {
                  sum += (double)0.114000064984081273;
                } else {
                  sum += (double)0.3689303447788746526;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001000000018393620849) ) ) {
              sum += (double)0.6484131922172149398;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.242307662963867188) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7224999964237213135) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3409675061702728271) ) ) {
                      sum += (double)0.556503225533825252;
                    } else {
                      sum += (double)0.4982218348527853724;
                    }
                  } else {
                    sum += (double)0.4472867586840124088;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6392500102519989014) ) ) {
                    sum += (double)0.3477108547235725489;
                  } else {
                    sum += (double)0.5066371096232992199;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                    sum += (double)0.5636585035479380057;
                  } else {
                    sum += (double)0.623837823076922926;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3984744995832443237) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.625525951385498047) ) ) {
                      sum += (double)0.5382060322519186535;
                    } else {
                      sum += (double)0.6118705647058824137;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.588461399078369141) ) ) {
                      sum += (double)0.5304602525150904357;
                    } else {
                      sum += (double)0.447466843205403475;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.54307174682617188) ) ) {
                sum += (double)0.2231802710090916853;
              } else {
                sum += (double)0.3886112582512631919;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.723749995231628418) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5929500162601470947) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.60042762756347656) ) ) {
                    sum += (double)0.2341370351051235421;
                  } else {
                    sum += (double)0.1167947969168463412;
                  }
                } else {
                  sum += (double)0.2996217692934716181;
                }
              } else {
                sum += (double)0.1015996046395622604;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2250000014901161194) ) ) {
              sum += (double)0.3098055368841854951;
            } else {
              sum += (double)0.4579338388406943849;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.3324135938593104078;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4461.72265625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.70680952072143555) ) ) {
              sum += (double)0.211675046611233042;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3097500056028366089) ) ) {
                sum += (double)0.1278361337397662667;
              } else {
                sum += (double)0.01750389629629629795;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.781472980976104736) ) ) {
              sum += (double)0.02067264576802508094;
            } else {
              sum += (double)0.05144472369252370281;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30224132537841797) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849009960889816284) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2959.3824462890625) ) ) {
                  sum += (double)0.7161694260869564399;
                } else {
                  sum += (double)0.6230058935693937316;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
                  sum += (double)0.6292617395602881913;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1576500013470649719) ) ) {
                    sum += (double)0.5342011923784062422;
                  } else {
                    sum += (double)0.60212843421712825;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.308125734329223633) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2169.642578125) ) ) {
                    sum += (double)0.6388002335725945224;
                  } else {
                    sum += (double)0.6908520590580389253;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5832220017910003662) ) ) {
                    sum += (double)0.7230125995475112921;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07138043269515037537) ) ) {
                      sum += (double)0.7963284398255814356;
                    } else {
                      sum += (double)0.7443419478991595284;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6275.841552734375) ) ) {
                  sum += (double)0.6107364604654734741;
                } else {
                  sum += (double)0.6553279073717949155;
                }
              }
            }
          } else {
            sum += (double)0.4957080863786163527;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7907705008983612061) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.68055000901222229) ) ) {
              sum += (double)0.744508052560325595;
            } else {
              sum += (double)0.8233439555818281574;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02704999968409538269) ) ) {
              sum += (double)0.921676599999999957;
            } else {
              sum += (double)0.8355085530321529896;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.5486409395357479957;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3393732753920857825;
            } else {
              sum += (double)0.1877486641165863335;
            }
          }
        } else {
          sum += (double)0.6251686610972796432;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2290119975805282593) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          sum += (double)0.08311712448253824603;
        } else {
          sum += (double)0.1950986247962908648;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
          sum += (double)0.5595356961578478172;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1061.0423583984375) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07342049106955528259) ) ) {
              sum += (double)0.5037280347431172256;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1475.6910400390625) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2116.91351318359375) ) ) {
                  sum += (double)0.3667033375384836646;
                } else {
                  sum += (double)0.2078170849644459806;
                }
              } else {
                sum += (double)0.4395043239377353084;
              }
            }
          } else {
            sum += (double)0.1654145325619204299;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3582975119352340698) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1422784999012947083) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51666641235351562) ) ) {
                  sum += (double)0.006974080000000000557;
                } else {
                  sum += (double)0.01988920714285714528;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1499.338623046875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                    sum += (double)0.006227584000000001285;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004674854545454547837;
                    }
                  }
                } else {
                  sum += (double)0.007854844444444444504;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05834999866783618927) ) ) {
                sum += (double)0.04920786195426195275;
              } else {
                sum += (double)0.006835707755102043287;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
              sum += (double)0.05476015745967742487;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                sum += (double)0.05110985432546884949;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.01136398315429688) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5668245553970336914) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5552499890327453613) ) ) {
                      sum += (double)0.01826654285714286036;
                    } else {
                      sum += (double)0.009129348571428571799;
                    }
                  } else {
                    sum += (double)0.005323683333333333219;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1748144999146461487) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-137027.9765625) ) ) {
                      sum += (double)0.03157386666666666536;
                    } else {
                      sum += (double)0.01329215271765272002;
                    }
                  } else {
                    sum += (double)0.04947791098591549502;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.09471373903983430764;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02359999995678663254) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.616350024938583374) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3566415905952453613) ) ) {
                sum += (double)0.1840832993354383496;
              } else {
                sum += (double)0.04262065864124652687;
              }
            } else {
              sum += (double)0.3641394397434903341;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9338.98193359375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1539355367422103882) ) ) {
                sum += (double)0.1369649451575530585;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.01111030578613281) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3691973239183425903) ) ) {
                      sum += (double)0.03326782993197279631;
                    } else {
                      sum += (double)0.08324796650085762584;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.184266999363899231) ) ) {
                      sum += (double)0.01837100330927152886;
                    } else {
                      sum += (double)0.04389509328762088852;
                    }
                  }
                } else {
                  sum += (double)0.09171741708565357698;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.20833206176757812) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1133500002324581146) ) ) {
                    sum += (double)0.08133636030850396881;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.176493704319000244) ) ) {
                      sum += (double)0.03441902670319735985;
                    } else {
                      sum += (double)0.01045966266506602634;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.121399998664855957) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.510714530944824219) ) ) {
                      sum += (double)0.140335582628902944;
                    } else {
                      sum += (double)0.04789726885930914446;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3956.6634521484375) ) ) {
                      sum += (double)0.1735147182909669572;
                    } else {
                      sum += (double)0.2866662998632319992;
                    }
                  }
                }
              } else {
                sum += (double)0.3401489168778968342;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1819000020623207092) ) ) {
            sum += (double)0.1786680376977336782;
          } else {
            sum += (double)0.3471294156749657467;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02270000055432319641) ) ) {
              sum += (double)0.5139202894234486951;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                sum += (double)0.4497973751633060346;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.98650789260864258) ) ) {
                  sum += (double)0.3567429437493603306;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2014940008521080017) ) ) {
                    sum += (double)0.3928747477937268306;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2179455012083053589) ) ) {
                      sum += (double)0.1193893892736657414;
                    } else {
                      sum += (double)0.2134537857353099588;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001099999994039535522) ) ) {
              sum += (double)0.6515419453318488374;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1963248327374458313) ) ) {
                  sum += (double)0.3260937369315374257;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2711820006370544434) ) ) {
                      sum += (double)0.5288348165521852273;
                    } else {
                      sum += (double)0.5017780190492785453;
                    }
                  } else {
                    sum += (double)0.459430429029651366;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5547690391540527344) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02960000000894069672) ) ) {
                      sum += (double)0.4244271969021146673;
                    } else {
                      sum += (double)0.5298253987416757793;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
                      sum += (double)0.6032768658068281553;
                    } else {
                      sum += (double)0.5190373254673227299;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3857270032167434692) ) ) {
                    sum += (double)0.4990341580985398484;
                  } else {
                    sum += (double)0.3963275225779511191;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3639300018548965454) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4103035777807235718) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7457000017166137695) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16381.51171875) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26021.31640625) ) ) {
                    sum += (double)0.2802301306520318391;
                  } else {
                    sum += (double)0.4484256644618184184;
                  }
                } else {
                  sum += (double)0.2286934871028255545;
                }
              } else {
                sum += (double)0.1751265767688453545;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6695129871368408203) ) ) {
                sum += (double)0.1039638645011963791;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2618345022201538086) ) ) {
                  sum += (double)0.2819957145800880971;
                } else {
                  sum += (double)0.1994082813526327491;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
              sum += (double)0.4858466034266964995;
            } else {
              sum += (double)0.298611054630898598;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.939921975135803223) ) ) {
          sum += (double)0.3132051842611012216;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.2002278734427452023;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.286492347717285156) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
                sum += (double)0.1757228807909415602;
              } else {
                sum += (double)0.04416243478260869354;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1055999994277954102) ) ) {
                sum += (double)0.04044200380116959315;
              } else {
                sum += (double)0.01708885161290322682;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7607523500919342041) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355575084686279297) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.57124233245849609) ) ) {
                sum += (double)0.5795515196686715775;
              } else {
                sum += (double)0.66094364727776167;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1368431448936462402) ) ) {
                sum += (double)0.4774806688132519628;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.179741382598876953) ) ) {
                  sum += (double)0.6307344789100088889;
                } else {
                  sum += (double)0.5562268775200595039;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.130457162857055664) ) ) {
              sum += (double)0.619451678536733441;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5506139993667602539) ) ) {
                sum += (double)0.7449655578947367296;
              } else {
                sum += (double)0.692630089620564604;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.611263751983642578) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.213711261749267578) ) ) {
                sum += (double)0.7046434687194630397;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.791695296764373779) ) ) {
                  sum += (double)0.8044366869093231287;
                } else {
                  sum += (double)0.7587839782945736689;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2518315613269805908) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1663782075047492981) ) ) {
                  sum += (double)0.6980196439909297501;
                } else {
                  sum += (double)0.7518987326414325878;
                }
              } else {
                sum += (double)0.6382307994056509726;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
              sum += (double)0.8940340299999999241;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.11565709114074707) ) ) {
                sum += (double)0.7642394803215785126;
              } else {
                sum += (double)0.8500254666666667847;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5205573730658691334;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.3778720284898384185;
            } else {
              sum += (double)0.2167818249962661648;
            }
          }
        } else {
          sum += (double)0.6076702456168305844;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
            sum += (double)0.1211023173306684519;
          } else {
            sum += (double)0.03498626049689891604;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.178947210311889648) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.16000032424926758) ) ) {
              sum += (double)0.2570531561513654251;
            } else {
              sum += (double)0.4234475800262160194;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1827.031982421875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7682999968528747559) ) ) {
                sum += (double)0.3169716141682066834;
              } else {
                sum += (double)0.1805853600490278932;
              }
            } else {
              sum += (double)0.08809251975619687702;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
              sum += (double)0.01489267500000000105;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                  sum += (double)0.008863516666666669888;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06190999783575534821) ) ) {
                      sum += (double)0.005124179310344827501;
                    } else {
                      sum += (double)0.004000000000000001818;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1752438) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  sum += (double)0.01504675555555555662;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8515999913215637207) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.08791160583496094) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1641499996185302734) ) ) {
                  sum += (double)0.0852850533345365508;
                } else {
                  sum += (double)0.02227565714285714357;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                  sum += (double)0.0472977603093755819;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.066583752632141113) ) ) {
                      sum += (double)0.01666054866322132927;
                    } else {
                      sum += (double)0.004539184000000001662;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.96887588500976562) ) ) {
                      sum += (double)0.0211579298245614042;
                    } else {
                      sum += (double)0.04233505464788732409;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.08127507173999207191;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2058434709906578064) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8292500078678131104) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.167385786771774292) ) ) {
                sum += (double)0.07011133911607726754;
              } else {
                sum += (double)0.1684144680513935677;
              }
            } else {
              sum += (double)0.2191266613522280526;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19826.455078125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05137825012207031) ) ) {
                sum += (double)0.06032437840676099783;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4021500051021575928) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1538999974727630615) ) ) {
                    sum += (double)0.009533380734767026021;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2298500016331672668) ) ) {
                      sum += (double)0.02865546906710311412;
                    } else {
                      sum += (double)0.01245820101010100718;
                    }
                  }
                } else {
                  sum += (double)0.03640207866708190798;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.45220565795898438) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1477094963192939758) ) ) {
                    sum += (double)0.01398194693877551076;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                      sum += (double)0.06725536216583526128;
                    } else {
                      sum += (double)0.01205073684210526512;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6484079062938690186) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7570.181884765625) ) ) {
                      sum += (double)0.08726236388179346715;
                    } else {
                      sum += (double)0.2301051733457509796;
                    }
                  } else {
                    sum += (double)0.04027470594499173856;
                  }
                }
              } else {
                sum += (double)0.1806084158430757147;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7999897003173828125) ) ) {
          sum += (double)0.1532646575191033145;
        } else {
          sum += (double)0.2952961217359483803;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5896211564540863037) ) ) {
          sum += (double)0.5439757413894495963;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925795048475265503) ) ) {
            sum += (double)0.1991594413446841072;
          } else {
            sum += (double)0.3889695797044502856;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4621350020170211792) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9970184266567230225) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2579129934310913086) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
            sum += (double)0.4935262470261507217;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.27991724014282227) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5456.853515625) ) ) {
                sum += (double)0.4436220138216585562;
              } else {
                sum += (double)0.2952777893386878127;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3435999900102615356) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3455549031496047974) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.42670726776123047) ) ) {
                    sum += (double)0.3292456676297189078;
                  } else {
                    sum += (double)0.2241635790392074445;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.16328334808349609) ) ) {
                    sum += (double)0.1163302700684153562;
                  } else {
                    sum += (double)0.2538257646587009364;
                  }
                }
              } else {
                sum += (double)0.1158918490675152346;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368515074253082275) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0465999990701675415) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5678000152111053467) ) ) {
                  sum += (double)0.471046808259815819;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000031292438507) ) ) {
                    sum += (double)0.5827120362417856914;
                  } else {
                    sum += (double)0.5320366033043878451;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1571500003337860107) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5722999870777130127) ) ) {
                    sum += (double)0.4930081179151967752;
                  } else {
                    sum += (double)0.2694271279554492082;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356735587120056152) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.67592573165893555) ) ) {
                      sum += (double)0.4941469708377697612;
                    } else {
                      sum += (double)0.5667877025481111719;
                    }
                  } else {
                    sum += (double)0.390206665811965725;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.773041486740112305) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3701220005750656128) ) ) {
                    sum += (double)0.5384478748064603915;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.41615867614746094) ) ) {
                      sum += (double)0.5940376273514614835;
                    } else {
                      sum += (double)0.6552727436409316875;
                    }
                  }
                } else {
                  sum += (double)0.6988641285714286555;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4031770080327987671) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.361772000789642334) ) ) {
                    sum += (double)0.5447691908006477846;
                  } else {
                    sum += (double)0.5994651571600686513;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6573499739170074463) ) ) {
                    sum += (double)0.543084988373231714;
                  } else {
                    sum += (double)0.4476271465262938731;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4635999947786331177) ) ) {
              sum += (double)0.1965357843480354527;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15424.068359375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3467229902744293213) ) ) {
                  sum += (double)0.3725076754149068692;
                } else {
                  sum += (double)0.5077406186681234779;
                }
              } else {
                sum += (double)0.3083722193812912793;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.3470243054025337615;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
              sum += (double)0.2843827415659397895;
            } else {
              sum += (double)0.04822327918790888374;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03584999963641166687) ) ) {
              sum += (double)0.1092702956265956538;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2351999953389167786) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.287425503134727478) ) ) {
                  sum += (double)0.01345880000000000166;
                } else {
                  sum += (double)0.03125517593984962483;
                }
              } else {
                sum += (double)0.06444003894783377484;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.94444465637207031) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4667980223894119263) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009750000201165676117) ) ) {
                  sum += (double)0.6899500007514761668;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08375165238976478577) ) ) {
                    sum += (double)0.5781235465162840592;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.04918289184570312) ) ) {
                      sum += (double)0.6110502892940932185;
                    } else {
                      sum += (double)0.6787143492877492079;
                    }
                  }
                }
              } else {
                sum += (double)0.5114661718959054859;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4036.68359375) ) ) {
                  sum += (double)0.619517010288906822;
                } else {
                  sum += (double)0.6773107964480874488;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.429985165596008301) ) ) {
                  sum += (double)0.7369689827898551204;
                } else {
                  sum += (double)0.6896258134890014269;
                }
              }
            }
          } else {
            sum += (double)0.3962990401691089404;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.6234130859375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6401499807834625244) ) ) {
                sum += (double)0.7228828706890174649;
              } else {
                sum += (double)0.7723212721844292528;
              }
            } else {
              sum += (double)0.6725196089243821174;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                sum += (double)0.8664376255892255463;
              } else {
                sum += (double)0.8314245912257495208;
              }
            } else {
              sum += (double)0.7671043060901413524;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6788139939308166504) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.823788225650787354) ) ) {
            sum += (double)0.5215756609847124192;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2562.16064453125) ) ) {
              sum += (double)0.3661846601740768592;
            } else {
              sum += (double)0.2277503915202933882;
            }
          }
        } else {
          sum += (double)0.6270903382419471539;
        }
      }
    }
  }
  return sum;
}
