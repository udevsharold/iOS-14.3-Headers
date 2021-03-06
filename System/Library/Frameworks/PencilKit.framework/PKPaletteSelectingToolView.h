/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteInkingTool.h>
#import <libobjc.A.dylib/PKPaletteSelectingTool.h>

@protocol PKPaletteInkingTool;
@class PKInk, NSString;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool> {

	id<PKPaletteInkingTool> _inkTool;

}

@property (nonatomic,retain) id<PKPaletteInkingTool> inkTool;                     //@synthesize inkTool=_inkTool - In the implementation block
@property (nonatomic,readonly) PKInk * ink; 
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(id<PKPaletteInkingTool>)inkTool;
-(void)setSelected:(BOOL)arg1 ;
-(void)setInkColor:(id)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(id)initWithToolIdentifier:(id)arg1 ;
-(id)attributeViewController;
-(void)setInkTool:(id<PKPaletteInkingTool>)arg1 ;
@end

