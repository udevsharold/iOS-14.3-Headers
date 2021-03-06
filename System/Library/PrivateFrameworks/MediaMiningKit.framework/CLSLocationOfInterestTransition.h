/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDateInterval;

@interface CLSLocationOfInterestTransition : NSObject {

	NSUUID* _identifier;
	NSDateInterval* _transitionInterval;
	long long _transportationMode;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * transitionInterval;              //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (nonatomic,readonly) long long transportationMode;                     //@synthesize transportationMode=_transportationMode - In the implementation block
-(long long)transportationMode;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSDateInterval *)transitionInterval;
-(id)initWithIdentifier:(id)arg1 transitionInterval:(id)arg2 transportationMode:(long long)arg3 ;
@end

