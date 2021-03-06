/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIImageContentLayoutTarget <NSObject>
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (nonatomic,readonly) long long contentMode; 
@property (nonatomic,readonly) BOOL _hasContentGravity; 
@property (nonatomic,readonly) double preferredContentScaleFactor; 
@property (nonatomic,readonly) BOOL _layoutShouldFlipHorizontalOrientations; 
@required
-(long long)contentMode;
-(double)preferredContentScaleFactor;
-(BOOL)_layoutShouldFlipHorizontalOrientations;
-(long long)semanticContentAttribute;
-(BOOL)_hasContentGravity;
-(id)_effectForRenderingSource:(id)arg1;

@end

