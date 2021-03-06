/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@class NSArray;

@interface PPTripEvent : PPScoredEvent {

	NSArray* _tripParts;

}

@property (nonatomic,readonly) NSArray * tripParts;              //@synthesize tripParts=_tripParts - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)tripParts;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 tripParts:(id)arg3 ;
-(id)destinationsBasedTitle;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)destinations;
-(void)encodeWithCoder:(id)arg1 ;
@end

