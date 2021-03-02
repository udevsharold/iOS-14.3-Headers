/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITraitCollection;


@protocol SXPresentationEnvironment <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) UITraitCollection * presentationTraitCollection; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@required
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)presentationTraitCollection;
-(CGSize)viewportSize;
-(unsigned long long)viewingLocation;

@end
