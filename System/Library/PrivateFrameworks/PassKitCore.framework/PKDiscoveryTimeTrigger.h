/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKDiscoveryTimeTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying> {

	NSDate* _time;

}

@property (nonatomic,readonly) NSDate * time;              //@synthesize time=_time - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
