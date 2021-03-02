/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _MSTTLReference : NSObject {

	id _value;
	double _ttl;
	NSDate* _lastSet;

}

@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double ttl;                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSDate * lastSet;              //@synthesize lastSet=_lastSet - In the implementation block
-(id)value;
-(id)initWithTTL:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setTtl:(double)arg1 ;
-(NSDate *)lastSet;
-(double)ttl;
-(void)setLastSet:(NSDate *)arg1 ;
-(id)getValueWithGenerator:(/*^block*/id)arg1 ;
@end
