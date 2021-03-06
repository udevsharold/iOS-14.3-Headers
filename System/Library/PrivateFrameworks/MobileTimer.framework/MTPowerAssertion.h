/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTPowerAssertion : NSObject {

	unsigned _assertionID;
	NSString* _name;
	double _assertionTimeout;

}

@property (nonatomic,readonly) double assertionTimeout;              //@synthesize assertionTimeout=_assertionTimeout - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                   //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)releaseAssertion;
-(void)takeAssertion;
-(id)initWithName:(id)arg1 assertionTimeout:(double)arg2 ;
-(double)assertionTimeout;
-(NSString *)name;
-(void)setAssertionID:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned)assertionID;
@end

