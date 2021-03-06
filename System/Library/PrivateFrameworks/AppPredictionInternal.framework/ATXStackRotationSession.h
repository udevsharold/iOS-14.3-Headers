/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXHomeScreenEvent, NSMutableArray, ATXSuggestionLayout, NSDate, NSString;

@interface ATXStackRotationSession : NSObject <NSSecureCoding> {

	BOOL _completed;
	ATXHomeScreenEvent* _startingStackChangeEvent;
	ATXHomeScreenEvent* _endingStackChangeEvent;
	unsigned long long _engagementStatus;
	NSMutableArray* _engagementStatusHistory;
	ATXSuggestionLayout* _systemSuggestSuggestionLayout;
	NSDate* _dwellStartDate;
	double _longestDwell;

}

@property (nonatomic,readonly) ATXHomeScreenEvent * startingStackChangeEvent;                    //@synthesize startingStackChangeEvent=_startingStackChangeEvent - In the implementation block
@property (nonatomic,readonly) ATXHomeScreenEvent * endingStackChangeEvent;                      //@synthesize endingStackChangeEvent=_endingStackChangeEvent - In the implementation block
@property (assign,nonatomic) unsigned long long engagementStatus;                                //@synthesize engagementStatus=_engagementStatus - In the implementation block
@property (nonatomic,readonly) NSMutableArray * engagementStatusHistory;                         //@synthesize engagementStatusHistory=_engagementStatusHistory - In the implementation block
@property (nonatomic,readonly) ATXSuggestionLayout * systemSuggestSuggestionLayout;              //@synthesize systemSuggestSuggestionLayout=_systemSuggestSuggestionLayout - In the implementation block
@property (nonatomic,retain) NSDate * dwellStartDate;                                            //@synthesize dwellStartDate=_dwellStartDate - In the implementation block
@property (assign,nonatomic) double longestDwell;                                                //@synthesize longestDwell=_longestDwell - In the implementation block
@property (assign,nonatomic) BOOL completed;                                                     //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) NSString * rotationReason; 
@property (nonatomic,readonly) NSString * widgetUniqueId; 
@property (nonatomic,readonly) NSString * widgetBundleId; 
@property (nonatomic,readonly) NSString * widgetKind; 
@property (nonatomic,readonly) NSString * blendingCacheId; 
@property (nonatomic,readonly) NSDate * sessionStartDate; 
@property (nonatomic,readonly) NSDate * sessionEndDate; 
@property (nonatomic,readonly) int stackLocation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSDate *)sessionEndDate;
-(NSString *)blendingCacheId;
-(BOOL)completed;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)widgetUniqueId;
-(NSString *)widgetBundleId;
-(NSString *)widgetKind;
-(NSDate *)sessionStartDate;
-(void)encodeWithCoder:(id)arg1 ;
-(int)stackLocation;
-(ATXHomeScreenEvent *)startingStackChangeEvent;
-(unsigned long long)engagementStatus;
-(ATXSuggestionLayout *)systemSuggestSuggestionLayout;
-(id)initWithStartingStackChangeEvent:(id)arg1 endingStackChangeEvent:(id)arg2 engagementStatus:(unsigned long long)arg3 engagementStatusHistory:(id)arg4 systemSuggestSuggestionLayout:(id)arg5 dwellStartDate:(id)arg6 longestDwell:(double)arg7 completed:(BOOL)arg8 ;
-(void)tryUpdateStackRotationEngagementStatus:(unsigned long long)arg1 ;
-(void)markStackHiddenAtDate:(id)arg1 ;
-(BOOL)isEqualToATXStackRotationSession:(id)arg1 ;
-(NSString *)rotationReason;
-(id)initWithStartingStackChangeEvent:(id)arg1 ;
-(void)updateWithSystemSuggestSuggestionLayout:(id)arg1 ;
-(void)markStackShownAtDate:(id)arg1 ;
-(void)markStackTapped;
-(void)finalizeWithEndingStackChangeEvent:(id)arg1 ;
-(ATXHomeScreenEvent *)endingStackChangeEvent;
-(void)setEngagementStatus:(unsigned long long)arg1 ;
-(NSMutableArray *)engagementStatusHistory;
-(NSDate *)dwellStartDate;
-(void)setDwellStartDate:(NSDate *)arg1 ;
-(double)longestDwell;
-(void)setLongestDwell:(double)arg1 ;
@end

