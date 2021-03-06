/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedDescriptor, FCDeflatedFeedGroup, FCFeedGroup;

@interface FCInflateFeedGroupOperation : FCOperation {

	BOOL _cachedOnly;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedDescriptor* _feedDescriptor;
	FCDeflatedFeedGroup* _deflatedGroup;
	/*^block*/id _inflationCompletionHandler;
	FCFeedGroup* _inflatedGroup;

}

@property (nonatomic,retain) FCFeedGroup * inflatedGroup;                      //@synthesize inflatedGroup=_inflatedGroup - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,retain) FCDeflatedFeedGroup * deflatedGroup;              //@synthesize deflatedGroup=_deflatedGroup - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                  //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) id inflationCompletionHandler;                      //@synthesize inflationCompletionHandler=_inflationCompletionHandler - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(BOOL)cachedOnly;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)_fetchHeadlinesWithDeflatedHeadlines:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)inflationCompletionHandler;
-(id<FCCoreConfiguration>)configuration;
-(void)_fetchHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDeflatedGroup:(FCDeflatedFeedGroup *)arg1 ;
-(void)setInflatedGroup:(FCFeedGroup *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setInflationCompletionHandler:(id)arg1 ;
-(FCFeedGroup *)inflatedGroup;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(FCDeflatedFeedGroup *)deflatedGroup;
-(FCCloudContext *)context;
-(void)_fetchTagsForPBGroup:(id)arg1 sharedStrings:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

