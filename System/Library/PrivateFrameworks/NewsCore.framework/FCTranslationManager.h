/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCTranslationManager.h>

@protocol FCTranslationManager
@property (nonatomic,readonly) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider; 
@required
-(void)fetchTranslationProvider:(/*^block*/id)arg1;
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;

@end


@protocol FCContentContext;
@class FCAsyncSerialQueue, FCTranslationMap;

@interface FCTranslationManager : NSObject <FCTranslationManager> {

	FCAsyncSerialQueue* _queue;
	FCTranslationMap* _translationMap;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,retain) FCAsyncSerialQueue * queue;                                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FCTranslationMap * translationMap;                                             //@synthesize translationMap=_translationMap - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                           //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider; 
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(void)setTranslationMap:(FCTranslationMap *)arg1 ;
-(void)fetchTranslationProvider:(/*^block*/id)arg1 ;
-(FCTranslationMap *)translationMap;
-(id<FCContentContext>)contentContext;
-(id<FCTranslationProvider>)possiblyUnfetchedTranslationProvider;
-(void)setQueue:(FCAsyncSerialQueue *)arg1 ;
-(FCAsyncSerialQueue *)queue;
-(id)initWithContentContext:(id)arg1 ;
@end
