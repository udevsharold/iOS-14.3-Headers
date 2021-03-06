/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _CATProxyWaitToken : NSObject {

	AB mFinished;
	NSObject*<OS_dispatch_group> mGroup;
	BOOL _isExclusive;
	id _resourceProxy;

}

@property (nonatomic,readonly) BOOL isExclusive;              //@synthesize isExclusive=_isExclusive - In the implementation block
@property (nonatomic,readonly) id resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)resourceProxy;
-(void)invalidate;
-(BOOL)isExclusive;
-(id)initWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)notifyWithResourceProxy:(id)arg1 ;
@end

