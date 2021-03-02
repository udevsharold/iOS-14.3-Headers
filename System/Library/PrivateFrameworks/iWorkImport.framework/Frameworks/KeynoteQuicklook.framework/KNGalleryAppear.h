/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNAnimationEffect.h>
#import <libobjc.A.dylib/KNBuildBasicContentAnimator.h>

@class NSString;

@interface KNGalleryAppear : KNAnimationEffect <KNBuildBasicContentAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAttributes;
+(id)supportedTypes;
+(id)animationName;
+(id)localizedMenuString:(long long)arg1 ;
+(id)thumbnailImageNameForType:(long long)arg1 ;
+(long long)animationCategory;
+(id)animationFilter;
+(long long)rendererTypeForAnimationContext:(id)arg1 ;
-(void)addAnimationsTo:(id)arg1 context:(id)arg2 ;
@end
