/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
+(void)setNowDate:(id)arg1 ;
+(BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(id)oldestDateAllowedToSendTo;
+(id)sharedManager;
+(id)nowDate;
+(BOOL)prekeyShouldBeRolled:(id)arg1 ;
+(BOOL)prekeyCanBeDeleted:(id)arg1 ;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
