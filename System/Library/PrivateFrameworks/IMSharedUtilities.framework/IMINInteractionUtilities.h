/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject {

	CSSearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
+(id)sharedInstance;
-(CSSearchableIndex *)searchableIndex;
-(id)init;
-(void)dealloc;
-(void)deleteInteractionsWithChatGUIDs:(id)arg1 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg1 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
@end

