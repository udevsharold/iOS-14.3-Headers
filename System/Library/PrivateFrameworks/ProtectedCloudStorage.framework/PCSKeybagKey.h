/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PCSKeybagKey : NSObject <NSSecureCoding> {

	NSData* _data;
	long long _flags;

}

@property (retain) NSData * data;                //@synthesize data=_data - In the implementation block
@property (assign) long long flags;              //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(void)setFlags:(long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
@end
