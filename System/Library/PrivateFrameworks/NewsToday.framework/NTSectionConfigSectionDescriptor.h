/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDescriptor.h>

@protocol NTSectionFetchDescriptor;
@class NSString, NSURL, NSObject;

@interface NTSectionConfigSectionDescriptor : NSObject <NTSectionDescriptor> {

	int _readArticlesFilterMethod;
	int _seenArticlesFilterMethod;
	int _promotionCriterion;
	NSString* _identifier;
	NSString* _personalizationFeatureID;
	NSString* _name;
	NSString* _compactName;
	NSString* _referralBarName;
	NSString* _nameColorLight;
	NSString* _nameColorDark;
	unsigned long long _cachedResultCutoffTime;
	unsigned long long _minimumStoriesAllocation;
	unsigned long long _maximumStoriesAllocation;
	long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
	unsigned long long _fallbackOrder;
	long long _supplementalInterSectionFilterOptions;
	long long _supplementalIntraSectionFilterOptions;
	NSString* _actionTitle;
	NSURL* _actionURL;
	NSURL* _nameActionURL;
	NSString* _backingTagID;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSObject*<NTSectionFetchDescriptor> _fetchDescriptor;

}

@property (nonatomic,copy) NSObject*<NTSectionFetchDescriptor> fetchDescriptor;                      //@synthesize fetchDescriptor=_fetchDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * compactName;                                          //@synthesize compactName=_compactName - In the implementation block
@property (nonatomic,copy,readonly) NSString * referralBarName;                                      //@synthesize referralBarName=_referralBarName - In the implementation block
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID;                             //@synthesize personalizationFeatureID=_personalizationFeatureID - In the implementation block
@property (nonatomic,readonly) unsigned long long cachedResultCutoffTime;                            //@synthesize cachedResultCutoffTime=_cachedResultCutoffTime - In the implementation block
@property (nonatomic,readonly) unsigned long long fallbackOrder;                                     //@synthesize fallbackOrder=_fallbackOrder - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumStoriesAllocation;                          //@synthesize minimumStoriesAllocation=_minimumStoriesAllocation - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumStoriesAllocation;                          //@synthesize maximumStoriesAllocation=_maximumStoriesAllocation - In the implementation block
@property (nonatomic,readonly) int readArticlesFilterMethod;                                         //@synthesize readArticlesFilterMethod=_readArticlesFilterMethod - In the implementation block
@property (nonatomic,readonly) int seenArticlesFilterMethod;                                         //@synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod - In the implementation block
@property (nonatomic,readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;              //@synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter - In the implementation block
@property (nonatomic,readonly) long long supplementalInterSectionFilterOptions;                      //@synthesize supplementalInterSectionFilterOptions=_supplementalInterSectionFilterOptions - In the implementation block
@property (nonatomic,readonly) long long supplementalIntraSectionFilterOptions;                      //@synthesize supplementalIntraSectionFilterOptions=_supplementalIntraSectionFilterOptions - In the implementation block
@property (nonatomic,readonly) int promotionCriterion;                                               //@synthesize promotionCriterion=_promotionCriterion - In the implementation block
@property (nonatomic,readonly) NSString * backingTagID;                                              //@synthesize backingTagID=_backingTagID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameColorLight;                                       //@synthesize nameColorLight=_nameColorLight - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameColorDark;                                        //@synthesize nameColorDark=_nameColorDark - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionTitle;                                          //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                                               //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * nameActionURL;                                           //@synthesize nameActionURL=_nameActionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * backgroundColorLight;                                 //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,copy,readonly) NSString * backgroundColorDark;                                  //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)actionTitle;
-(id)init;
-(int)promotionCriterion;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nameColorLight;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)referralBarName;
-(NSString *)nameColorDark;
-(unsigned long long)minimumStoriesAllocation;
-(NSString *)identifier;
-(NSString *)backingTagID;
-(NSURL *)actionURL;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)name;
-(NSObject*<NTSectionFetchDescriptor>)fetchDescriptor;
-(NSString *)compactName;
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(NSURL *)nameActionURL;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;
-(id)initWithSectionConfig:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 todayData:(id)arg6 supplementalFeedFilterOptions:(long long)arg7 ;
-(void)setFetchDescriptor:(NSObject*<NTSectionFetchDescriptor>)arg1 ;
@end

