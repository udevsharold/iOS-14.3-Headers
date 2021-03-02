/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@class NSString, NSArray, _UIStackedImageSingleNamedLayerImage;

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack> {

	_UIStackedImageSingleNamedLayerImage* _layerImage;

}

@property (nonatomic,retain) _UIStackedImageSingleNamedLayerImage * layerImage;              //@synthesize layerImage=_layerImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scale;
-(NSArray *)layers;
-(void)setLayerImage:(_UIStackedImageSingleNamedLayerImage *)arg1 ;
-(CGSize)size;
-(NSString *)name;
-(_UIStackedImageSingleNamedLayerImage *)layerImage;
-(CGImageRef)flattenedImage;
@end
