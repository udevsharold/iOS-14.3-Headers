/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSDate, NSArray;

@interface TPSTipStatus : NSObject <NSSecureCoding, NSCopying> {

	NSString* _lastDisplayContext;
	NSMutableArray* _hintDisplayedDates;
	NSMutableArray* _desiredOutcomePerformedDates;
	NSMutableArray* _hintNotDisplayedDueToFrequencyControlDates;
	BOOL _expired;
	BOOL _preconditionMatched;
	long long _hintIneligibleReason;
	unsigned long long _displayType;
	NSString* _identifier;
	NSString* _variantIdentifier;
	NSDate* _dateForTriggerRestartTracking;
	NSDate* _hintEligibleDate;
	NSDate* _hintWouldHaveBeenDisplayedDate;
	NSDate* _hintDismissalDate;
	NSDate* _contentViewedDate;

}

@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * hintDisplayedDates; 
@property (nonatomic,copy) NSArray * desiredOutcomePerformedDates; 
@property (nonatomic,copy) NSArray * hintNotDisplayedDueToFrequencyControlDates; 
@property (assign,nonatomic) long long hintIneligibleReason;                                     //@synthesize hintIneligibleReason=_hintIneligibleReason - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;                                     //@synthesize displayType=_displayType - In the implementation block
@property (assign,getter=isExpired,nonatomic) BOOL expired;                                      //@synthesize expired=_expired - In the implementation block
@property (assign,getter=isPreconditionMatched,nonatomic) BOOL preconditionMatched;              //@synthesize preconditionMatched=_preconditionMatched - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                                         //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * dateForTriggerRestartTracking;                               //@synthesize dateForTriggerRestartTracking=_dateForTriggerRestartTracking - In the implementation block
@property (nonatomic,copy) NSDate * hintEligibleDate;                                            //@synthesize hintEligibleDate=_hintEligibleDate - In the implementation block
@property (nonatomic,copy) NSDate * hintWouldHaveBeenDisplayedDate;                              //@synthesize hintWouldHaveBeenDisplayedDate=_hintWouldHaveBeenDisplayedDate - In the implementation block
@property (nonatomic,copy) NSDate * hintDismissalDate;                                           //@synthesize hintDismissalDate=_hintDismissalDate - In the implementation block
@property (nonatomic,copy) NSDate * contentViewedDate;                                           //@synthesize contentViewedDate=_contentViewedDate - In the implementation block
@property (nonatomic,copy) NSString * lastDisplayContext;                                        //@synthesize lastDisplayContext=_lastDisplayContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpired:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)displayType;
-(BOOL)isExpired;
-(NSString *)identifier;
-(NSString *)variantIdentifier;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(BOOL)isUserKnew;
-(void)setHintIneligibleReason:(long long)arg1 ;
-(void)setHintEligibleDate:(NSDate *)arg1 ;
-(id)debugDescription;
-(void)setPreconditionMatched:(BOOL)arg1 ;
-(NSDate *)hintEligibleDate;
-(void)setDateForTriggerRestartTracking:(NSDate *)arg1 ;
-(void)setLastDisplayContext:(NSString *)arg1 ;
-(void)setHintDisplayedDates:(NSArray *)arg1 ;
-(void)setHintWouldHaveBeenDisplayedDate:(NSDate *)arg1 ;
-(void)setHintDismissalDate:(NSDate *)arg1 ;
-(void)setContentViewedDate:(NSDate *)arg1 ;
-(void)setDesiredOutcomePerformedDates:(NSArray *)arg1 ;
-(void)setHintNotDisplayedDueToFrequencyControlDates:(NSArray *)arg1 ;
-(void)removeHintEligibleDateStatus;
-(void)addHintDisplayedDate:(id)arg1 ;
-(NSArray *)hintDisplayedDates;
-(void)addHintNotDisplayedDueToFrequencyControlDate:(id)arg1 ;
-(NSArray *)hintNotDisplayedDueToFrequencyControlDates;
-(NSArray *)desiredOutcomePerformedDates;
-(void)addDesiredOutcomePerformedDate:(id)arg1 ;
-(BOOL)reenrollIfAllowed;
-(long long)hintIneligibleReason;
-(BOOL)isPreconditionMatched;
-(NSDate *)dateForTriggerRestartTracking;
-(NSDate *)hintWouldHaveBeenDisplayedDate;
-(NSDate *)hintDismissalDate;
-(NSDate *)contentViewedDate;
-(NSString *)lastDisplayContext;
-(id)initWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

