/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIMediaQueryDelegate, OS_dispatch_source;
@class NSMapTable, NSMutableSet, NSObject;

@interface SKUIMediaQueryEvaluator : NSObject {

	NSMapTable* _cachedFeatureResults;
	id<SKUIMediaQueryDelegate> _delegate;
	NSMutableSet* _observedNotificationNames;
	NSObject*<OS_dispatch_source> _reloadTimer;

}

@property (assign,nonatomic,__weak) id<SKUIMediaQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(void)registerFeatureClass:(Class)arg1 ;
-(void)reloadData;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SKUIMediaQueryDelegate>)arg1 ;
-(id<SKUIMediaQueryDelegate>)delegate;
-(void)_featureDidChangeNotification:(id)arg1 ;
-(id)_delegateValuesForKeys:(id)arg1 ;
-(BOOL)evaluateMediaQuery:(id)arg1 ;
@end

