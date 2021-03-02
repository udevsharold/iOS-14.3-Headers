/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSSet, NSDictionary;

@interface FCCheckDraftContentAccessOperation : FCOperation {

	id<FCContentContext> _context;
	NSArray* _channelMemberships;
	NSSet* _issueIDs;
	NSSet* _articleIDs;
	/*^block*/id _checkAccessCompletion;
	NSDictionary* _resultAccessByContentID;

}

@property (nonatomic,copy) NSDictionary * resultAccessByContentID;              //@synthesize resultAccessByContentID=_resultAccessByContentID - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * channelMemberships;                        //@synthesize channelMemberships=_channelMemberships - In the implementation block
@property (nonatomic,copy) NSSet * issueIDs;                                    //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,copy) NSSet * articleIDs;                                  //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) id checkAccessCompletion;                            //@synthesize checkAccessCompletion=_checkAccessCompletion - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setArticleIDs:(NSSet *)arg1 ;
-(NSSet *)articleIDs;
-(id)init;
-(void)setIssueIDs:(NSSet *)arg1 ;
-(NSSet *)issueIDs;
-(void)setChannelMemberships:(NSArray *)arg1 ;
-(void)setCheckAccessCompletion:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(NSArray *)channelMemberships;
-(id)checkAccessCompletion;
-(void)setResultAccessByContentID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultAccessByContentID;
@end
