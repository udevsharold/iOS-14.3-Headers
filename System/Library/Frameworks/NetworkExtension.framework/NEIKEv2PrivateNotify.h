/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {

	unsigned short _notifyStatus;
	NSData* _notifyData;

}

@property (assign,nonatomic) unsigned short notifyStatus;              //@synthesize notifyStatus=_notifyStatus - In the implementation block
@property (nonatomic,retain) NSData * notifyData;                      //@synthesize notifyData=_notifyData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)notifyData;
-(void)setNotifyStatus:(unsigned short)arg1 ;
-(void)setNotifyData:(NSData *)arg1 ;
-(unsigned short)notifyStatus;
-(id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2 ;
@end
