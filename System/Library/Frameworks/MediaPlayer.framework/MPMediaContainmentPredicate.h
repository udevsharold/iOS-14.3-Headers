/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate {

	NSString* _property;
	NSSet* _values;

}

@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSSet * values;                   //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
-(NSSet *)values;
-(NSString *)property;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForTrack;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
@end
