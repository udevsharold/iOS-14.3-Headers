/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCModifyRecordsCommand.h>

@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand {

	NSArray* _historyItems;
	NSArray* _recordItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems;              //@synthesize historyItems=_historyItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recordItems;               //@synthesize recordItems=_recordItems - In the implementation block
+(id)desiredKeys;
-(NSArray *)recordItems;
-(id)recordZoneName;
-(NSArray *)historyItems;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
-(id)initWithHistoryItems:(id)arg1 merge:(BOOL)arg2 ;
@end

