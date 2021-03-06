/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusRegionContainer;
@interface _UIFocusPromiseRegion : _UIFocusRegion {

	id<_UIFocusRegionContainer> _contentFocusRegionContainer;
	/*^block*/id _contentFulfillmentHandler;

}

@property (nonatomic,copy) id contentFulfillmentHandler;              //@synthesize contentFulfillmentHandler=_contentFulfillmentHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(long long)_visualRepresentationPatternType;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)contentFulfillmentHandler;
-(id)_loadContentFocusRegionContainer;
-(void)setContentFulfillmentHandler:(id)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
@end

