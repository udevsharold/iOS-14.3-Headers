/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {

	unsigned char _transportType;
	unsigned char _encodingType;
	int _payload;

}

@property (nonatomic,readonly) int payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned char transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned char encodingType;               //@synthesize encodingType=_encodingType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)encodingType;
-(unsigned char)transportType;
-(unsigned long long)hash;
-(int)payload;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;
@end
