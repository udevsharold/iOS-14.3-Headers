/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding> {

	BOOL _isCurrentUserForSharing;
	BOOL _isCurrentUserForScheduling;
	NSString* _emailAddress;
	NSString* _name;
	NSString* _UUID;

}

@property (readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUserForSharing;                 //@synthesize isCurrentUserForSharing=_isCurrentUserForSharing - In the implementation block
@property (readonly) BOOL isCurrentUserForScheduling;              //@synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling - In the implementation block
-(NSString *)emailAddress;
-(NSString *)UUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCurrentUserForSharing;
-(BOOL)isCurrentUserForScheduling;
-(id)initWithEKSharee:(id)arg1 ;
@end

