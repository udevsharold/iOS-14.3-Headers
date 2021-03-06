/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming> {

	NSOrderedSet* _mandatoryArticleIDs;
	NSOrderedSet* _personalizedArticleIDs;
	id<FCFeedTransforming> _sortTransformation;

}

@property (nonatomic,copy) NSOrderedSet * mandatoryArticleIDs;                       //@synthesize mandatoryArticleIDs=_mandatoryArticleIDs - In the implementation block
@property (nonatomic,copy) NSOrderedSet * personalizedArticleIDs;                    //@synthesize personalizedArticleIDs=_personalizedArticleIDs - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> sortTransformation;              //@synthesize sortTransformation=_sortTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSOrderedSet *)mandatoryArticleIDs;
-(NSOrderedSet *)personalizedArticleIDs;
-(id<FCFeedTransforming>)sortTransformation;
-(id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 sortTransformation:(id)arg3 ;
-(void)setMandatoryArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setPersonalizedArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setSortTransformation:(id<FCFeedTransforming>)arg1 ;
@end

