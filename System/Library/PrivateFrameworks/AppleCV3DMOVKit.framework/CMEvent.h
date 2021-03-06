/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CMEvent : NSObject <NSSecureCoding> {

	unsigned long long _eventType;
	double _timestamp;
	NSString* _peerDisplayName;
	NSUUID* _uuid;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * peerDisplayName;                //@synthesize peerDisplayName=_peerDisplayName - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPeerDisplayName:(NSString *)arg1 ;
-(NSString *)peerDisplayName;
@end

