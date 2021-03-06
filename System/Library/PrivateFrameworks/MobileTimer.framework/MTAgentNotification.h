/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MTPowerAssertion;

@interface MTAgentNotification : NSObject {

	long long _type;
	NSString* _name;
	MTPowerAssertion* _powerAssertion;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MTPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
+(id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
+(id)notificationWithType:(long long)arg1 name:(id)arg2 ;
-(MTPowerAssertion *)powerAssertion;
-(void)setName:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3 ;
-(void)setPowerAssertion:(MTPowerAssertion *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)dealloc;
-(void)releaseAssertion;
-(long long)type;
-(NSString *)name;
@end

