/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BNPanGestureProxy <NSObject>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,copy) id actionHandler; 
@property (nonatomic,readonly) BOOL didCrossDefaultThreshold; 
@required
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(long long)state;
-(void)setActionHandler:(/*^block*/id)arg1;
-(id)actionHandler;
-(CGPoint*)visualTranslationInCoordinateSpace:(id)arg1;
-(BOOL)didCrossDefaultThreshold;
-(CGPoint*)velocityInCoordinateSpace:(id)arg1;
-(CGPoint*)translationInCoordinateSpace:(id)arg1;

@end

