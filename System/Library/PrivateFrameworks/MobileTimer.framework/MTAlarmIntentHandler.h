/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTAlarmManager;

@interface MTAlarmIntentHandler : NSObject {

	MTAlarmManager* _alarmManager;

}

@property (nonatomic,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
+(id)createUserInfoWithIntentName:(id)arg1 alarmIDString:(id)arg2 time:(id)arg3 label:(id)arg4 ;
-(id)initWithAlarmManager:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
@end
