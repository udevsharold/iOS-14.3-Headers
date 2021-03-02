/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SCRSyncTargetContextProvider, SCRAsyncTargetContextProvider;
@class NSString;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _targetIdentifier;
	id<SCRSyncTargetContextProvider> _syncContextProvider;
	id<SCRAsyncTargetContextProvider> _asyncContextProvider;

}

@property (nonatomic,copy,readonly) NSString * targetIdentifier;                                    //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,readonly) id<SCRSyncTargetContextProvider> syncContextProvider;                //@synthesize syncContextProvider=_syncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRAsyncTargetContextProvider> asyncContextProvider;              //@synthesize asyncContextProvider=_asyncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRTargetContextProvider> contextProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SCRSyncTargetContextProvider>)syncContextProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SCRAsyncTargetContextProvider>)asyncContextProvider;
-(void)invalidateTargetContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithTarget:(id)arg1 asyncContextProvider:(id)arg2 ;
-(void)_validateContext:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(Class)_expectedTargetContextClass;
-(id)initWithTarget:(id)arg1 syncContextProvider:(id)arg2 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(id)_initWithTarget:(id)arg1 syncProvider:(id)arg2 asyncProvider:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)createContextWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 contextProvider:(id)arg2 ;
-(NSString *)targetIdentifier;
-(id<SCRTargetContextProvider>)contextProvider;
-(id)_expectedTargetContextProtocol;
@end
