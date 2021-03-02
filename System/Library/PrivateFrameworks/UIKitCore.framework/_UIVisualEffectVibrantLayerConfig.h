/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class UIColor, NSDictionary;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _vibrantColor;
	UIColor* _tintColor;
	NSDictionary* _filterAttributes;

}

@property (nonatomic,readonly) UIColor * vibrantColor;                            //@synthesize vibrantColor=_vibrantColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * filterAttributes;              //@synthesize filterAttributes=_filterAttributes - In the implementation block
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 ;
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4 ;
-(void)deconfigureLayerView:(id)arg1 ;
-(NSDictionary *)filterAttributes;
-(UIColor *)vibrantColor;
-(UIColor *)tintColor;
-(id)description;
-(void)configureLayerView:(id)arg1 ;
@end
