/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCTagProviding;
@class FCTagRelationships;

@interface FCTagRelationshipsOperation : FCOperation {

	/*^block*/id _completionHandler;
	id<FCContentContext> _context;
	id<FCTagProviding> _tag;
	FCTagRelationships* _resultTagRelationships;

}

@property (nonatomic,copy,readonly) id<FCContentContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id<FCTagProviding> tag;                            //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) FCTagRelationships * resultTagRelationships;              //@synthesize resultTagRelationships=_resultTagRelationships - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setCompletionHandler:(id)arg1 ;
-(id<FCTagProviding>)tag;
-(id)completionHandler;
-(void)setResultTagRelationships:(FCTagRelationships *)arg1 ;
-(FCTagRelationships *)resultTagRelationships;
-(id)initWithContext:(id)arg1 tag:(id)arg2 ;
-(id<FCContentContext>)context;
@end
