/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportPersistenceGap, FCFeedViewportBookmark, FCDeflatedFeedGroup, FCFeedGroup;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation {

	BOOL _cachedOnly;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedDescriptor* _feedDescriptor;
	FCFeedViewport* _viewport;
	FCFeedViewportPersistenceGap* _gap;
	FCFeedViewportBookmark* _bookmark;
	unsigned long long _gapExpansionDirection;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	unsigned long long _indexOfGroupToInflate;
	FCDeflatedFeedGroup* _groupToInflate;
	FCFeedGroup* _inflatedGroup;

}

@property (assign,nonatomic) unsigned long long indexOfGroupToInflate;              //@synthesize indexOfGroupToInflate=_indexOfGroupToInflate - In the implementation block
@property (nonatomic,retain) FCDeflatedFeedGroup * groupToInflate;                  //@synthesize groupToInflate=_groupToInflate - In the implementation block
@property (nonatomic,retain) FCFeedGroup * inflatedGroup;                           //@synthesize inflatedGroup=_inflatedGroup - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                     //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,copy) FCFeedViewportPersistenceGap * gap;                      //@synthesize gap=_gap - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) unsigned long long gapExpansionDirection;              //@synthesize gapExpansionDirection=_gapExpansionDirection - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                          //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                       //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                           //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(void)prepareOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(FCFeedViewportPersistenceGap *)gap;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(BOOL)validateOperation;
-(void)setBookmark:(FCFeedViewportBookmark *)arg1 ;
-(void)performOperation;
-(long long)gapExpansionPolicy;
-(BOOL)cachedOnly;
-(FCFeedViewportBookmark *)bookmark;
-(void)setGap:(FCFeedViewportPersistenceGap *)arg1 ;
-(id)expandGapCompletionHandler;
-(FCFeedViewport *)viewport;
-(void)setCachedOnly:(BOOL)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(FCDeflatedFeedGroup *)groupToInflate;
-(void)setGroupToInflate:(FCDeflatedFeedGroup *)arg1 ;
-(void)setIndexOfGroupToInflate:(unsigned long long)arg1 ;
-(void)setInflatedGroup:(FCFeedGroup *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCFeedGroup *)inflatedGroup;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(unsigned long long)gapExpansionDirection;
-(void)setGapExpansionDirection:(unsigned long long)arg1 ;
-(unsigned long long)indexOfGroupToInflate;
-(FCCloudContext *)context;
@end

