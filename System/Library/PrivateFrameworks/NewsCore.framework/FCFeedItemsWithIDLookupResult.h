/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface FCFeedItemsWithIDLookupResult : NSObject {

	NSDictionary* _sectionIDsByFeedID;
	NSArray* _feedItems;

}

@property (nonatomic,retain) NSDictionary * sectionIDsByFeedID;              //@synthesize sectionIDsByFeedID=_sectionIDsByFeedID - In the implementation block
@property (nonatomic,retain) NSArray * feedItems;                            //@synthesize feedItems=_feedItems - In the implementation block
-(void)setFeedItems:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)feedItems;
-(id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2 ;
-(NSDictionary *)sectionIDsByFeedID;
-(void)setSectionIDsByFeedID:(NSDictionary *)arg1 ;
@end

