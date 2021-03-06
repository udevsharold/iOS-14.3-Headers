/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding> {

	NSString* _sessionID;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sessionID;
-(NSError *)error;
-(id)initWithSessionID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setError:(NSError *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initNewMessage;
@end

