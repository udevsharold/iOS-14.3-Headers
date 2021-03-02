/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPointerArbitrating <NSObject>
@property (nonatomic,readonly) long long pointerState; 
@required
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)exitRegion:(id)arg1 removeStyle:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)beginScrollingWithRegion:(id)arg1;
-(void)endScrollingWithRegion:(id)arg1;
-(long long)pointerState;

@end
