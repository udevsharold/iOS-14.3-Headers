/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateDepictionOnePredEl, NSUUID;

@interface RTStateDepcitionOneStatePred : NSObject {

	RTStateDepictionOnePredEl* _weekly;
	RTStateDepictionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateDepictionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateDepictionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                              //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(RTStateDepictionOnePredEl *)daily;
-(RTStateDepictionOnePredEl *)weekly;
-(void)setWeekly:(RTStateDepictionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateDepictionOnePredEl *)arg1 ;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end
