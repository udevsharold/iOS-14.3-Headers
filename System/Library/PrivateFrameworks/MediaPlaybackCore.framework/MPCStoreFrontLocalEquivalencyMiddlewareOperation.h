/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPModelGenericObject, NSIndexPath, NSMapTable, NSArray, MPCStoreFrontLocalEquivalencyMiddleware, MPCPlayerRequest, NSString, NSError;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCStoreFrontLocalEquivalencyMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;

}

@property (nonatomic,readonly) MPModelGenericObject * overridePlayingItem; 
@property (nonatomic,readonly) NSIndexPath * playingItemIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCStoreFrontLocalEquivalencyMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                                  //@synthesize playerRequest=_playerRequest - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                                      //@synthesize inputOperations=_inputOperations - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                                 //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSArray *)invalidationObservers;
-(NSArray *)outputProtocols;
-(MPCStoreFrontLocalEquivalencyMiddleware *)middleware;
-(NSIndexPath *)playingItemIndexPath;
-(void)setInvalidationHandler:(id)arg1 ;
-(MPCPlayerRequest *)playerRequest;
-(void)execute;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
-(NSMapTable *)inputOperations;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(MPModelGenericObject *)overridePlayingItem;
-(NSArray *)inputProtocols;
-(void)setMiddleware:(MPCStoreFrontLocalEquivalencyMiddleware *)arg1 ;
-(id)invalidationHandler;
@end
