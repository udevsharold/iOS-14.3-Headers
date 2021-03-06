/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, UIImage;

@interface VUINamedLayerStack : NSObject <UINamedLayerStack> {

	id<UINamedLayerStack> _layerStack;
	UIImage* _cornerRadiusFlatImage;
	UIImage* _originalImage;
	NSArray* _replacementLayers;

}

@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                  //@synthesize layerStack=_layerStack - In the implementation block
@property (nonatomic,retain) UIImage * cornerRadiusFlatImage;                   //@synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy) NSArray * replacementLayers;                         //@synthesize replacementLayers=_replacementLayers - In the implementation block
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
+(id)namedLayerStackWithImage:(id)arg1 ;
+(id)decodedNamedLayerStackWithImage:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(double)scale;
-(NSArray *)layers;
-(id)init;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(CGSize)size;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)_init;
-(UIImage *)originalImage;
-(NSString *)name;
-(id<UINamedLayerStack>)layerStack;
-(CGImageRef)flattenedImage;
-(BOOL)flatImageContainsCornerRadius;
-(void)setCornerRadiusFlatImage:(UIImage *)arg1 ;
-(void)setReplacementLayers:(NSArray *)arg1 ;
-(NSArray *)replacementLayers;
-(UIImage *)cornerRadiusFlatImage;
@end

