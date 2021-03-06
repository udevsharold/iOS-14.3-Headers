/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@interface PPSuggestedEvent : PPScoredEvent {

	unsigned char _category;

}

@property (nonatomic,readonly) unsigned char category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned char)category;
-(id)initWithPPEvent:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 score:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end

