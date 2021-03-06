/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedElement;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportBookmark, FCFeedViewportDiff;

@interface FCFeedViewportExpandGapOperation : FCOperation {

	BOOL _lightweightOnly;
	BOOL _cachedOnly;
	BOOL _offlineMode;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedElement> _gapElement;
	unsigned long long _desiredHeadlineCount;
	FCFeedViewportBookmark* _bookmark;
	unsigned long long _gapExpansionDirection;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	FCFeedViewport* _sanitizedViewport;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;

}

@property (nonatomic,retain) FCFeedViewport * sanitizedViewport;                    //@synthesize sanitizedViewport=_sanitizedViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewport * resultViewport;                       //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                       //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                     //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id<FCFeedElement> gapElement;                            //@synthesize gapElement=_gapElement - In the implementation block
@property (assign,nonatomic) unsigned long long desiredHeadlineCount;               //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) unsigned long long gapExpansionDirection;              //@synthesize gapExpansionDirection=_gapExpansionDirection - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                          //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign) BOOL lightweightOnly;                                            //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                       //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (assign) BOOL offlineMode;                                                //@synthesize offlineMode=_offlineMode - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                           //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
+(id)_sanitizeViewport:(id)arg1 context:(id)arg2 feedDescriptor:(id)arg3 configuration:(id)arg4 ;
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(FCFeedViewport *)resultViewport;
-(void)prepareOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(BOOL)validateOperation;
-(void)setBookmark:(FCFeedViewportBookmark *)arg1 ;
-(void)performOperation;
-(long long)gapExpansionPolicy;
-(BOOL)cachedOnly;
-(FCFeedViewportBookmark *)bookmark;
-(FCFeedViewportDiff *)resultDiff;
-(id)expandGapCompletionHandler;
-(unsigned long long)desiredHeadlineCount;
-(void)setDesiredHeadlineCount:(unsigned long long)arg1 ;
-(FCFeedViewport *)viewport;
-(id)init;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)setSanitizedViewport:(FCFeedViewport *)arg1 ;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setOfflineMode:(BOOL)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setGapElement:(id<FCFeedElement>)arg1 ;
-(FCFeedViewport *)sanitizedViewport;
-(BOOL)offlineMode;
-(void)setContext:(FCCloudContext *)arg1 ;
-(BOOL)lightweightOnly;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(unsigned long long)gapExpansionDirection;
-(void)setGapExpansionDirection:(unsigned long long)arg1 ;
-(void)_fetchAssetsForInsertedGroup:(id)arg1 cachedOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(FCCloudContext *)context;
-(id<FCFeedElement>)gapElement;
@end

