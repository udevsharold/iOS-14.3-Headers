/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)main;
+(void)setGlobalConfiguration:(id)arg1 ;
+(id)globalConfiguration;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(double)currentLatchedAbsoluteTimestamp;
-(id)newTimer;
-(void)async:(/*^block*/id)arg1 ;
-(void)assertOutside;
-(BOOL)isSuspended;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)suspend;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)resume;
@end
