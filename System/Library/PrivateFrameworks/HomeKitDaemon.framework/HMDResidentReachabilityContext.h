/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding> {

	NSNumber* _mostRecentReachability;

}

@property (copy,readonly) NSNumber * mostRecentReachability;              //@synthesize mostRecentReachability=_mostRecentReachability - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMostRecentReachability:(id)arg1 ;
-(NSNumber *)mostRecentReachability;
@end

