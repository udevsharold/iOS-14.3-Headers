/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding> {

	BOOL _hasSharees;
	NSSet* _shareesAndOwner;
	NSString* _calendarIdentifier;

}

@property (readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (readonly) BOOL hasSharees;                            //@synthesize hasSharees=_hasSharees - In the implementation block
@property (readonly) NSSet * shareesAndOwner;                    //@synthesize shareesAndOwner=_shareesAndOwner - In the implementation block
-(BOOL)hasSharees;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)shareesAndOwner;
-(id)initWithEKCalendar:(id)arg1 ;
@end

